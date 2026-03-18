/*
 * XREFs of ?_ReadVirtualModeSupportFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0186CA4
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0186E4C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0185AF0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReadVirtualModeSupportFromRegistry(DXGMONITOR *this, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  int v13; // [rsp+54h] [rbp-1Ch]
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]

  KeyHandle = 0LL;
  ResultLength = 0;
  LOBYTE(a2) = 1;
  DestinationString = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, a2, &KeyHandle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"VMSDisabled");
    v4 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( (int)v4 >= 0 )
    {
      if ( v13 == 4 && v14 == 4 )
      {
        *((_DWORD *)this + 10) = *((_DWORD *)this + 10) & 0xFFFFFF7F | (v15 != 0 ? 0x80 : 0);
        return 0LL;
      }
      else
      {
        v8 = WdLogNewEntry5_WdError(v6, v5);
        *(_QWORD *)(v8 + 24) = this;
        *(_QWORD *)(v8 + 32) = -1073741823LL;
        WdLogEvent5_WdError(v8);
        return 3221225473LL;
      }
    }
    else
    {
      v7 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v7 + 24) = this;
      *(_QWORD *)(v7 + 32) = v4;
      WdLogEvent5_WdError(v7);
      return (unsigned int)v4;
    }
  }
  return result;
}
