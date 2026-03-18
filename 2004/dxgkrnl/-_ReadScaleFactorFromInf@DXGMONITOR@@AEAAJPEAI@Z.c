/*
 * XREFs of ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C018C4D8
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018BCBC (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_ReadScaleFactorFromInf(DXGMONITOR *this, unsigned int *a2)
{
  int v3; // eax
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  void *DeviceRegKey; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v23; // [rsp+54h] [rbp-1Ch]
  int v24; // [rsp+58h] [rbp-18h]
  unsigned int v25; // [rsp+5Ch] [rbp-14h]

  *a2 = 0;
  DeviceRegKey = 0LL;
  v3 = *((_DWORD *)this + 10);
  DestinationString = 0LL;
  if ( (v3 & 0x10) == 0 )
    return 3221225635LL;
  v5 = IoOpenDeviceRegistryKey(*((PDEVICE_OBJECT *)this + 7), 2u, 0x20019u, &DeviceRegKey);
  v10 = v5;
  if ( v5 < 0 )
  {
    v17 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    *(_QWORD *)(v17 + 24) = this;
    *(_QWORD *)(v17 + 32) = v10;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredScaleFactor");
    ResultLength = 0;
    v11 = ZwQueryValueKey(
            DeviceRegKey,
            &DestinationString,
            KeyValuePartialInformation,
            KeyValueInformation,
            0x13u,
            &ResultLength);
    v10 = v11;
    if ( v11 != -1073741772 )
    {
      if ( v11 >= 0 )
      {
        if ( v23 == 4 && v24 == 4 )
        {
          *a2 = v25;
          goto LABEL_5;
        }
        LODWORD(v10) = -1073741788;
        v18 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v18 + 24) = this;
        *(_QWORD *)(v18 + 32) = v23;
      }
      else
      {
        v18 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v18 + 24) = this;
        *(_QWORD *)(v18 + 32) = v10;
      }
      WdLogEvent5_WdError(v18);
      goto LABEL_5;
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = this;
  }
LABEL_5:
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v10;
}
