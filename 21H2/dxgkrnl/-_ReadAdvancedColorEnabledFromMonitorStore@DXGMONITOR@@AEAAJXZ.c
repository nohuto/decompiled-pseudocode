/*
 * XREFs of ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C018FFF0
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018F97C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01915B8 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C01904E0 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 */

int __fastcall DXGMONITOR::_ReadAdvancedColorEnabledFromMonitorStore(DXGMONITOR *this)
{
  int result; // eax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+54h] [rbp-1Ch]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]

  KeyHandle = 0LL;
  ResultLength = 0;
  *((_DWORD *)this + 10) &= ~0x800u;
  DestinationString = 0LL;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 1u, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"AdvancedColorEnabled");
    v3 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x13u,
           &ResultLength);
    ZwClose(KeyHandle);
    result = -1073741772;
    if ( (_DWORD)v3 != -1073741772 )
    {
      if ( (int)v3 >= 0 )
      {
        if ( v12 == 4 && v13 == 4 )
        {
          *((_DWORD *)this + 10) = *((_DWORD *)this + 10) & 0xFFFFF7FF | (v14 != 0 ? 0x800 : 0);
          return 0;
        }
        else
        {
          v7 = WdLogNewEntry5_WdError(v5, v4);
          *(_QWORD *)(v7 + 24) = this;
          *(_QWORD *)(v7 + 32) = v12;
          WdLogEvent5_WdError(v7);
          return -1073741823;
        }
      }
      else
      {
        v6 = WdLogNewEntry5_WdError(v5, v4);
        *(_QWORD *)(v6 + 24) = this;
        *(_QWORD *)(v6 + 32) = v3;
        WdLogEvent5_WdError(v6);
        return v3;
      }
    }
  }
  return result;
}
