/*
 * XREFs of ?_ReadSDRWhiteLevelFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0190060
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018F97C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C01904E0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

int __fastcall DXGMONITOR::_ReadSDRWhiteLevelFromMonitorStore(DXGMONITOR *this)
{
  int v1; // eax
  int result; // eax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v13; // [rsp+54h] [rbp-1Ch]
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]

  v1 = *((_DWORD *)this + 10);
  KeyHandle = 0LL;
  ResultLength = 0;
  *((_DWORD *)this + 172) = (v1 & 2) != 0 ? 1000 : 3000;
  DestinationString = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 1u, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SDRWhiteLevel");
    v4 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( (_DWORD)v4 != -1073741772 )
    {
      if ( (int)v4 < 0 )
      {
        v7 = WdLogNewEntry5_WdError(v6, v5);
        *(_QWORD *)(v7 + 24) = this;
        *(_QWORD *)(v7 + 32) = v4;
        WdLogEvent5_WdError(v7);
        return v4;
      }
      if ( v13 != 4 || v14 != 4 )
      {
        v8 = WdLogNewEntry5_WdError(v6, v5);
        *(_QWORD *)(v8 + 24) = this;
        *(_QWORD *)(v8 + 32) = v13;
        WdLogEvent5_WdError(v8);
        return -1073741823;
      }
      *((_DWORD *)this + 172) = v15;
    }
    return 0;
  }
  return result;
}
