/*
 * XREFs of _NtUserGetClassInfoEx@20 @ 0x802EC
 * Callers:
 *     <none>
 * Callees:
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _RegisterDefaultClass@4 @ 0x70420 (_RegisterDefaultClass@4.c)
 *     __GetClassInfoEx@20 @ 0x8052E (__GetClassInfoEx@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _RegisterIconTitleClass@0 @ 0x82F88 (_RegisterIconTitleClass@0.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserGetClassInfoEx(int a1, size_t *MaxCount, _BYTE *a3, _DWORD *a4, int a5)
{
  int v5; // ebx
  size_t *v6; // edx
  size_t v7; // ecx
  unsigned int v8; // edi
  ULONG v9; // esi
  wchar_t *v10; // esi
  _DWORD *v11; // ecx
  unsigned __int16 ClassInfo; // ax
  _BYTE v14[48]; // [esp+10h] [ebp-7Ch] BYREF
  _DWORD v15[3]; // [esp+40h] [ebp-4Ch] BYREF
  size_t v16; // [esp+4Ch] [ebp-40h]
  wchar_t *v17; // [esp+50h] [ebp-3Ch]
  int v18; // [esp+64h] [ebp-28h]
  int v19; // [esp+68h] [ebp-24h]
  int v20; // [esp+6Ch] [ebp-20h]
  int v21; // [esp+70h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]
  size_t MaxCounta; // [esp+98h] [ebp+Ch]
  size_t MaxCountb; // [esp+98h] [ebp+Ch]

  v5 = 0;
  v16 = 0;
  v17 = 0;
  v21 = 0;
  memset(v14, 0, sizeof(v14));
  memset(v15, 0, sizeof(v15));
  v20 = 0;
  EnterCrit(0, 1);
  v18 = _gptiCurrent;
  if ( (*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 8) & 0x10000000) == 0 && !RegisterIconTitleClass() )
  {
LABEL_3:
    UserSetLastError(87);
    goto LABEL_26;
  }
  ms_exc.registration.TryLevel = 0;
  v6 = MaxCount;
  if ( (unsigned int)MaxCount >= _MmUserProbeAddress )
    v6 = (size_t *)_MmUserProbeAddress;
  v7 = *v6;
  MaxCounta = *v6;
  v16 = *v6;
  v8 = v6[1];
  v17 = (wchar_t *)v8;
  if ( (v8 & 0xFFFF0000) != 0 )
  {
    v9 = (unsigned __int16)v7 + v8 + 2;
    if ( v9 <= v8 || v9 >= _MmUserProbeAddress )
      goto LABEL_13;
    if ( (unsigned __int16)v7 > HIWORD(MaxCounta) || (v7 & 1) != 0 )
    {
      if ( (v7 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
LABEL_13:
      ExRaiseAccessViolation();
    }
  }
  if ( (v8 & 0xFFFF0000) != 0 )
  {
    MaxCountb = (unsigned __int16)v7;
    v19 = (unsigned __int16)v7 + 2;
    v10 = (wchar_t *)Win32AllocPoolWithQuota(v19, 2020897621);
    v17 = v10;
    if ( !v10 )
      ExRaiseStatus(-1073741801);
    v20 = 1;
    PushW32ThreadLock((int)v10, v15, (int)Win32FreePool);
    memcpy(v10, (const void *)v8, MaxCountb);
    v10[MaxCountb >> 1] = 0;
    HIWORD(v16) = v19;
  }
  if ( (unsigned int)a3 >= _MmUserProbeAddress )
    *(_BYTE *)_MmUserProbeAddress = 0;
  *a3 = *a3;
  a3[47] = a3[47];
  v11 = a4;
  if ( (unsigned int)a4 >= _MmUserProbeAddress )
    v11 = (_DWORD *)_MmUserProbeAddress;
  *v11 = *v11;
  qmemcpy(v14, a3, sizeof(v14));
  ms_exc.registration.TryLevel = -2;
  if ( (*(_DWORD *)(*(_DWORD *)(v18 + 232) + 8) & 0x2000) == 0 && !RegisterDefaultClass(v17) )
    goto LABEL_3;
  ClassInfo = _GetClassInfoEx(v14, &v21, a5);
  v5 = ClassInfo;
  if ( ClassInfo )
  {
    qmemcpy(a3, v14, 0x30u);
    *a4 = v21;
    ms_exc.registration.TryLevel = -2;
  }
LABEL_26:
  if ( v20 )
    PopAndFreeAlwaysW32ThreadLock((int)v15);
  UserSessionSwitchLeaveCrit();
  return v5;
}
