/*
 * XREFs of ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C016862C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0167C8C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016CC0C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ?_GetPseudoSpecializedState@DXGMONITOR@@QEAAJPEA_N0@Z @ 0x1C00E08F4 (-_GetPseudoSpecializedState@DXGMONITOR@@QEAAJPEA_N0@Z.c)
 *     ?_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z @ 0x1C0168838 (-_OpenMonitorDataStore@DXGMONITOR@@AEAAJEPEAPEAX@Z.c)
 *     ?_GetAppOverride@DXGMONITOR@@QEAA_NPEAXU_GUID@@@Z @ 0x1C02F0D28 (-_GetAppOverride@DXGMONITOR@@QEAA_NPEAXU_GUID@@@Z.c)
 */

int __fastcall DXGMONITOR::_ReadAppOverridesFromMonitorDataStore(
        DXGMONITOR *this,
        enum _D3DKMT_DISPLAY_TARGET_USAGE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int result; // eax
  int v7; // edi
  __int64 v8; // rax
  HANDLE Handle; // [rsp+20h] [rbp-28h] BYREF
  GUID Guid; // [rsp+30h] [rbp-18h] BYREF
  bool v11; // [rsp+60h] [rbp+18h] BYREF
  bool v12; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  v12 = 0;
  v11 = 0;
  if ( (int)DXGMONITOR::_GetPseudoSpecializedState(this, &v11, &v12) < 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !v11 )
    return 0;
  result = DXGMONITOR::_OpenMonitorDataStore(this, 1u, &Handle);
  v7 = result;
  if ( result >= 0 )
  {
    Guid = GUID_MONITOR_OVERRIDE_PSEUDO_SPECIALIZED;
    if ( DXGMONITOR::_GetAppOverride(this, Handle, &Guid) )
    {
      *((_DWORD *)this + 10) |= 0x1000u;
      *(_DWORD *)a2 = 2;
    }
    ZwClose(Handle);
    return v7;
  }
  return result;
}
