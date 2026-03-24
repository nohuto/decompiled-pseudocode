/*
 * XREFs of MonitorEnableDisableAdvancedColor @ 0x1C02F382C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C012C020 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009A04 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018E22C (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SC.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z @ 0x1C02F6194 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z.c)
 */

__int64 __fastcall MonitorEnableDisableAdvancedColor(struct HDXGMONITOR__ *a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGMONITOR *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  bool v11; // zf
  unsigned int v12; // edi
  struct DXGMONITOR *v13; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v13 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v13);
  if ( (int)result >= 0 )
  {
    v6 = v13;
    if ( !v13 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v7);
      v10 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v10);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v6 + 296), 1u);
    if ( ((*((_DWORD *)v6 + 10) & 0x800) != 0 || (v11 = a2 == 0, !a2))
      && ((*((_DWORD *)v6 + 10) & 0x800) == 0 || (v11 = a2 == 0, a2)) )
    {
      v12 = 255;
    }
    else
    {
      v12 = DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore(v6, !v11);
      DXGMONITOR::_MonitorTelemetry((__int64)v6, 3LL, 0LL);
    }
    ExReleaseResourceLite((PERESOURCE)((char *)v6 + 296));
    KeLeaveCriticalRegion();
    return v12;
  }
  return result;
}
