/*
 * XREFs of ?PnpIncrementRestartCountLogic@FxPkgPnp@@AEAAEPEAXE@Z @ 0x1C007B484
 * Callers:
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1C008B0F0 (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     ?_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C001839C (-_QueryULong@FxRegKey@@SAJPEAXPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     ?_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z @ 0x1C005F744 (-_QueryValue@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEBU_UNICODE_STRING@@K1PEAK3@Z.c)
 */

bool __fastcall FxPkgPnp::PnpIncrementRestartCountLogic(
        FxPkgPnp *this,
        void *RestartKey,
        unsigned __int8 CreatedNewKey)
{
  unsigned __int8 m_AchievedStart; // r12
  bool v6; // si
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v8; // edi
  _LARGE_INTEGER v9; // rbx
  bool v10; // al
  _FX_DRIVER_GLOBALS *v11; // rcx
  unsigned int v12; // eax
  NTSTATUS v13; // eax
  unsigned int count; // [rsp+40h] [rbp-79h] BYREF
  unsigned int length; // [rsp+44h] [rbp-75h] BYREF
  unsigned int type; // [rsp+48h] [rbp-71h] BYREF
  unsigned int ValueLengthQueried; // [rsp+4Ch] [rbp-6Dh] BYREF
  unsigned int ValueType; // [rsp+50h] [rbp-69h] BYREF
  unsigned int value; // [rsp+54h] [rbp-65h] BYREF
  int Data; // [rsp+58h] [rbp-61h] BYREF
  _LARGE_INTEGER currentTickCount; // [rsp+60h] [rbp-59h] BYREF
  _LARGE_INTEGER startTickCount; // [rsp+68h] [rbp-51h] BYREF
  _UNICODE_STRING valueNameStartTime; // [rsp+70h] [rbp-49h] BYREF
  _UNICODE_STRING valueNameCount; // [rsp+80h] [rbp-39h] BYREF
  _UNICODE_STRING valueNameStartAchieved; // [rsp+90h] [rbp-29h] BYREF
  wchar_t valueNameCount_buffer[8]; // [rsp+A0h] [rbp-19h] BYREF
  wchar_t valueNameStartTime_buffer[12]; // [rsp+B0h] [rbp-9h] BYREF
  wchar_t valueNameStartAchieved_buffer[16]; // [rsp+C8h] [rbp+Fh] BYREF

  count = 0;
  startTickCount.QuadPart = 0LL;
  valueNameStartTime.Buffer = valueNameStartTime_buffer;
  valueNameCount.Buffer = valueNameCount_buffer;
  wcscpy(valueNameStartTime_buffer, L"StartTime");
  valueNameStartAchieved.Buffer = valueNameStartAchieved_buffer;
  wcscpy(valueNameCount_buffer, L"Count");
  *(_QWORD *)&valueNameStartTime.Length = 1310738LL;
  *(_QWORD *)&valueNameCount.Length = 786442LL;
  wcscpy(valueNameStartAchieved_buffer, L"StartAchieved");
  *(_QWORD *)&valueNameStartAchieved.Length = 1835034LL;
  m_AchievedStart = this->m_AchievedStart;
  currentTickCount.QuadPart = MEMORY[0xFFFFF78000000320];
  v6 = m_AchievedStart != 0;
  if ( CreatedNewKey )
    goto LABEL_21;
  m_Globals = this->m_Globals;
  length = 0;
  type = 0;
  v8 = FxRegKey::_QueryValue(m_Globals, RestartKey, &valueNameStartTime, 8u, &startTickCount, &length, &type);
  if ( v8 >= 0 && length == 8 && type == 3 )
  {
    v8 = FxRegKey::_QueryULong(RestartKey, &valueNameCount, &count);
    if ( v8 == -1073741772 )
    {
      count = 1;
      v8 = 0;
    }
  }
  if ( v8 >= 0 )
  {
    v9 = startTickCount;
    if ( currentTickCount.QuadPart >= startTickCount.QuadPart )
    {
      if ( KeQueryTimeIncrement() * (currentTickCount.QuadPart - v9.QuadPart) <= 600000000 )
      {
        if ( ++count > 5 )
          v8 = -1073741823;
        v10 = count <= 5;
        goto LABEL_22;
      }
      if ( !m_AchievedStart )
      {
        v11 = this->m_Globals;
        ValueLengthQueried = 0;
        ValueType = 0;
        value = 0;
        if ( (int)FxRegKey::_QueryValue(
                    v11,
                    RestartKey,
                    &valueNameStartAchieved,
                    4u,
                    &value,
                    &ValueLengthQueried,
                    &ValueType) >= 0
          && ValueLengthQueried == 4
          && ValueType == 4 )
        {
          v12 = value;
        }
        else
        {
          v12 = 0;
        }
        if ( !v12 )
        {
          m_AchievedStart = 0;
          v8 = -1073741823;
          goto LABEL_25;
        }
      }
      v6 = 1;
      m_AchievedStart = 0;
    }
LABEL_21:
    count = 1;
    v8 = ZwSetValueKey(RestartKey, &valueNameStartTime, 0, 3u, &currentTickCount, 8u);
    v10 = 1;
LABEL_22:
    if ( v8 >= 0 && v10 )
      v8 = ZwSetValueKey(RestartKey, &valueNameCount, 0, 4u, &count, 4u);
  }
LABEL_25:
  if ( v6 )
  {
    Data = m_AchievedStart;
    v13 = ZwSetValueKey(RestartKey, &valueNameStartAchieved, 0, 4u, &Data, 4u);
    if ( v8 >= 0 )
      v8 = v13;
  }
  return v8 >= 0;
}
