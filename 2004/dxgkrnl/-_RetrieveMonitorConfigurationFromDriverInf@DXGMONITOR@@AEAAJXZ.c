/*
 * XREFs of ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0187C9C
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0187EFC (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018BCBC (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x1C0187D38 (-_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C0187DDC (-_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(DXGMONITOR *this)
{
  struct _DEVICE_OBJECT *v2; // rcx
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // rax
  void *DeviceRegKey; // [rsp+30h] [rbp+8h] BYREF

  DeviceRegKey = 0LL;
  v2 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 7);
  if ( v2 && (*((_DWORD *)this + 10) & 0x10) != 0 )
  {
    v3 = IoOpenDeviceRegistryKey(v2, 2u, 0x20019u, &DeviceRegKey);
    v6 = v3;
    if ( v3 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v5, v4);
      *(_QWORD *)(v8 + 24) = v6;
      WdLogEvent5_WdError(v8);
    }
    else
    {
      LODWORD(v6) = DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(this, DeviceRegKey, 1u);
      if ( (int)v6 >= 0 )
        LODWORD(v6) = DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(this);
    }
  }
  else
  {
    LODWORD(v6) = -1073741275;
  }
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  return (unsigned int)v6;
}
