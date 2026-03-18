/*
 * XREFs of ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F9AFC
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0185C9C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C005F61C (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C01678A4 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0174ED4 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0186EB4 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C01876E4 (-_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0187E70 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C0188090 (-_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C01886DC (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C0189920 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C018EBE8 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 *     ?GetUsageClass@DXGMONITOR@@CA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z @ 0x1C02F4138 (-GetUsageClass@DXGMONITOR@@CA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C02F89DC (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C02F93E4 (-_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseDisplayIDForMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C02F96D4 (-_ParseDisplayIDForMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ProcessDisplayIDBlob(DXGMONITOR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int IntendedUsageFromDescriptor; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  int PhysicalSize; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  EDIDCACHE *v31; // rcx
  __int64 v32; // rdx
  struct _FAST_MUTEX *v33; // rcx
  __int64 v34; // rax
  int v35; // [rsp+50h] [rbp+20h] BYREF
  unsigned int v36; // [rsp+60h] [rbp+30h] BYREF
  bool v37; // [rsp+68h] [rbp+38h] BYREF

  if ( !*((_BYTE *)this + 184) )
  {
    v4 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 20);
    *(_QWORD *)(v4 + 32) = -1071247357LL;
LABEL_18:
    WdLogEvent5_WdError(v4);
    goto LABEL_19;
  }
  v5 = WdLogNewEntry5_WdDmmEvent(this, a2);
  *(_QWORD *)(v5 + 24) = this;
  WdLogEvent5_WdDmmEvent(v5);
  v8 = DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(this, v6, v7);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
  v14 = DXGMONITOR::_ParseDisplayIDForMonitorModes(this, v9);
  v18 = v14;
  if ( v14 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = v18;
    WdLogEvent5_WdWarning(v19);
  }
  DXGMONITOR::_RetrieveHDRParamDriverOverrides(this);
  DXGMONITOR::_ParseDisplayIDForHDRParams(this);
  DXGMONITOR::_UpdateHDRParamsIfRequired(this);
  DXGMONITOR::_SendAdjustedHDRParamsToDriver(this, 0);
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v21, v20) + 304321) && !*((_DWORD *)this + 148) )
  {
    LOBYTE(v36) = 1;
    v37 = 0;
    LOBYTE(v35) = 1;
    IntendedUsageFromDescriptor = DXGMONITOR::_GetIntendedUsageFromDescriptor(
                                    this,
                                    (enum _DXGK_DISPLAY_USAGE *)&v36,
                                    &v37,
                                    (bool *)&v35);
    v25 = IntendedUsageFromDescriptor;
    if ( IntendedUsageFromDescriptor >= 0 )
    {
      *((_DWORD *)this + 148) = DXGMONITOR::GetUsageClass(v36, v35);
      *((_BYTE *)this + 596) = v37;
    }
    else
    {
      v26 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v26 + 24) = v25;
      WdLogEvent5_WdError(v26);
    }
  }
  if ( *((_DWORD *)this + 108) == 1 && IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)this + 12)) )
  {
    v36 = 0;
    v35 = 0;
    PhysicalSize = DisplayID_GetPhysicalSize((DXGMONITOR *)((char *)this + 168), &v36, (unsigned int *)&v35);
    v30 = PhysicalSize;
    if ( PhysicalSize >= 0 )
    {
      v31 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v29, v28) + 126);
      if ( v31 )
        EDIDCACHE::SetPhysicalDimensionOfInternalPanel(v31, v36, v35, 1);
      goto LABEL_19;
    }
    v4 = WdLogNewEntry5_WdError(v29, v28);
    *(_QWORD *)(v4 + 24) = v30;
    goto LABEL_18;
  }
LABEL_19:
  if ( (int)DXGMONITOR::_RetrieveIntegratedPanelNativeOverride(this) < 0 )
    DXGMONITOR::_QueryDriverRecommendMonitorModes((D3DDDI_VIDEO_PRESENT_TARGET_ID *)this, v32);
  if ( !*((_DWORD *)this + 52) )
    DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(this, v32);
  v33 = (struct _FAST_MUTEX *)*((_QWORD *)this + 4);
  if ( !v33 )
  {
    v34 = WdLogNewEntry5_WdAssertion(0LL, v32);
    WdLogEvent5_WdAssertion(v34);
    v33 = (struct _FAST_MUTEX *)*((_QWORD *)this + 4);
  }
  MONITOR_MGR::_IssueMonitorEvent(v33, *((unsigned int *)this + 11), 3, 0LL, *((_DWORD *)this + 108), (__int64)a2);
  return 0LL;
}
