/*
 * XREFs of ?_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0185994
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0185C9C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0184940 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadSDRWhiteLevelFromMonitorStore(DXGMONITOR *this, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v14; // [rsp+54h] [rbp-1Ch]
  int v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+5Ch] [rbp-14h]

  v2 = *((_DWORD *)this + 10);
  KeyHandle = 0LL;
  ResultLength = 0;
  LOBYTE(a2) = 1;
  *((_DWORD *)this + 172) = (v2 & 2) != 0 ? 1000 : 3000;
  DestinationString = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, a2, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SDRWhiteLevel");
    v5 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( (_DWORD)v5 != -1073741772 )
    {
      if ( (int)v5 < 0 )
      {
        v8 = WdLogNewEntry5_WdError(v7, v6);
        *(_QWORD *)(v8 + 24) = this;
        *(_QWORD *)(v8 + 32) = v5;
        WdLogEvent5_WdError(v8);
        return (unsigned int)v5;
      }
      if ( v14 != 4 || v15 != 4 )
      {
        v9 = WdLogNewEntry5_WdError(v7, v6);
        *(_QWORD *)(v9 + 24) = this;
        *(_QWORD *)(v9 + 32) = v14;
        WdLogEvent5_WdError(v9);
        return 3221225473LL;
      }
      *((_DWORD *)this + 172) = v16;
    }
    return 0LL;
  }
  return result;
}
