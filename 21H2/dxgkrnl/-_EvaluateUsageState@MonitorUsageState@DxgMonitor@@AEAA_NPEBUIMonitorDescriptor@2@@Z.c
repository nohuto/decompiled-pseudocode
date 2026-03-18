/*
 * XREFs of ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x1C0217330
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C02095AC (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B3F4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02173CC (-_ReadAppOverridesFromMonitorDataStore@MonitorUsageState@DxgMonitor@@AEAAXPEAW4_D3DKMT_DISPLAY_T.c)
 *     ?_ReadUsageOverridesFromRegistry@MonitorUsageState@DxgMonitor@@AEAA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@XZ @ 0x1C02174DC (-_ReadUsageOverridesFromRegistry@MonitorUsageState@DxgMonitor@@AEAA-AW4_D3DKMT_DISPLAY_TARGET_US.c)
 *     ?_GetIntendedUsageFromDescriptor@MonitorUsageState@DxgMonitor@@AEAAJPEBUIMonitorDescriptor@2@PEAW4_DXGK_DISPLAY_USAGE@@PEA_N2@Z @ 0x1C0217544 (-_GetIntendedUsageFromDescriptor@MonitorUsageState@DxgMonitor@@AEAAJPEBUIMonitorDescriptor@2@PEA.c)
 *     ?_SaveUsageOverridesToMonitorStore@MonitorUsageState@DxgMonitor@@AEAAXW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C03B9354 (-_SaveUsageOverridesToMonitorStore@MonitorUsageState@DxgMonitor@@AEAAXW4_D3DKMT_DISPLAY_TARGET_U.c)
 */

char __fastcall DxgMonitor::MonitorUsageState::_EvaluateUsageState(
        DxgMonitor::MonitorUsageState *this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  char v4; // bl
  int v5; // edx
  bool v7; // [rsp+30h] [rbp-10h] BYREF
  int v8[3]; // [rsp+34h] [rbp-Ch] BYREF
  char v9; // [rsp+70h] [rbp+30h] BYREF
  bool v10; // [rsp+78h] [rbp+38h] BYREF

  v4 = 0;
  if ( !*((_BYTE *)DXGGLOBAL_GetGlobal() + 304513) && !*((_DWORD *)this + 4) )
  {
    v8[0] = 0;
    v9 = 1;
    v7 = 0;
    v10 = 1;
    if ( (int)DxgMonitor::MonitorUsageState::_GetIntendedUsageFromDescriptor(
                this,
                a2,
                (enum _DXGK_DISPLAY_USAGE *)&v9,
                &v7,
                &v10) >= 0 )
    {
      if ( (unsigned __int8)(v9 - 2) <= 1u )
      {
        v8[0] = 1;
      }
      else if ( !v10 )
      {
        v8[0] = 2;
      }
    }
    else if ( g_OSTestSigningEnabled )
    {
      v8[0] = DxgMonitor::MonitorUsageState::_ReadUsageOverridesFromRegistry(this);
    }
    DxgMonitor::MonitorUsageState::_ReadAppOverridesFromMonitorDataStore(this, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)v8);
    v5 = v8[0];
    if ( v8[0] != *((_DWORD *)this + 4) )
    {
      v4 = 1;
      *((_BYTE *)this + 20) = v7;
      *((_DWORD *)this + 4) = v5;
      DxgMonitor::MonitorUsageState::_SaveUsageOverridesToMonitorStore(this);
    }
  }
  return v4;
}
