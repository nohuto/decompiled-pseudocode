/*
 * XREFs of ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0188BF4
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0186E4C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0187EFC (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018BCBC (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1654 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C0022548 (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C0168A54 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0176084 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ @ 0x1C0188064 (-_CleanupMonitorSourceModeAndFreqRanges@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C01882FC (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01886E4 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C0188894 (-_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C01889A4 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0188E6C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0189020 (-_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ @ 0x1C0189240 (-_RetrieveIntegratedPanelNativeOverride@DXGMONITOR@@QEAAJXZ.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C01892F0 (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C018988C (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ @ 0x1C018A7BC (-_UpdateMonitorEDIDRegistryForGDI@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C018AAD0 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     MonitorLogBadEDID @ 0x1C02F3D18 (MonitorLogBadEDID.c)
 *     ?GetUsageClass@DXGMONITOR@@CA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z @ 0x1C02F50D8 (-GetUsageClass@DXGMONITOR@@CA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C02F997C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateEDIDBaseBlock(
        DXGMONITOR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        char a3)
{
  __int64 *v3; // rsi
  DXGMONITOR *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // r15d
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // r12
  EDIDCACHE *v12; // rcx
  int IsEDIDBaseBlock; // eax
  __int64 v14; // r8
  bool v15; // r14
  char v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  int IntendedUsageFromDescriptor; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rax
  struct _FAST_MUTEX *v36; // rcx
  __int64 v38; // rax
  __int64 v39; // r8
  DXGMONITOR *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  char v44; // [rsp+80h] [rbp+48h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v45; // [rsp+88h] [rbp+50h]
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v46; // [rsp+90h] [rbp+58h] BYREF
  bool v47; // [rsp+98h] [rbp+60h] BYREF

  v45 = a2;
  v3 = (__int64 *)*((_QWORD *)this + 17);
  v5 = this;
  LODWORD(v6) = 0;
  if ( v3 && *((_DWORD *)this + 32) )
  {
    v7 = *v3;
    v46 = D3DKMDT_MCO_UNINITIALIZED;
    ConvertMonitorCapablitiesOrigin(*(unsigned int *)(v7 + 8), &v46);
    if ( *((_DWORD *)v5 + 108) == 1 && IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)v5 + 12)) )
      LOBYTE(v6) = 1;
    v9 = *((_DWORD *)v5 + 11);
    v10 = *(_QWORD *)(*((_QWORD *)v5 + 4) + 8LL);
    v11 = *(struct DXGADAPTER **)(v10 + 16);
    v12 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v10, v8) + 126);
    if ( v12 )
      EDIDCACHE::AddEdid(v12, v11, v9, v6, (const unsigned __int8 *)(v7 + 24), v46);
    IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)(v7 + 24));
    v6 = IsEDIDBaseBlock;
    if ( IsEDIDBaseBlock < 0 )
    {
      v38 = WdLogNewEntry5_WdWarning(this, a2, v14);
      *(_QWORD *)(v38 + 24) = v7 + 24;
      *(_QWORD *)(v38 + 32) = v6;
      WdLogEvent5_WdWarning(v38);
      MonitorLogBadEDID(v7 + 24, (unsigned int)v6);
      LODWORD(v6) = 0;
      v7 = 0LL;
LABEL_11:
      v15 = v7 != *((_QWORD *)v5 + 18);
      goto LABEL_12;
    }
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    goto LABEL_11;
  this = (DXGMONITOR *)*((_QWORD *)v5 + 18);
  if ( !this )
    goto LABEL_11;
  v39 = *(_QWORD *)(v7 + 16);
  v15 = 0;
  if ( v39 != *((_QWORD *)this + 2)
    || v39
    && (v40 = (DXGMONITOR *)RtlCompareMemory(this, (const void *)v7, v39 + 31),
        this = (DXGMONITOR *)(*(_QWORD *)(v7 + 16) + 31LL),
        v40 != this) )
  {
    v15 = 1;
  }
LABEL_12:
  v16 = a3 | v15;
  if ( v16 )
  {
    v17 = WdLogNewEntry5_WdDmmEvent(this, a2);
    *(_QWORD *)(v17 + 24) = v5;
    WdLogEvent5_WdDmmEvent(v17);
    v20 = DXGMONITOR::_CleanupMonitorSourceModeAndFreqRanges(v5, v18, v19);
    v6 = v20;
    if ( v20 < 0 )
    {
      v41 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v41 + 24) = v6;
      WdLogEvent5_WdError(v41);
      return (unsigned int)v6;
    }
    if ( v7 )
    {
      *((_QWORD *)v5 + 18) = v7;
      if ( (int)DXGMONITOR::_ParseEDIDBaseBlock((DXGMONITOR ***)v5, v21) < 0 )
        *((_QWORD *)v5 + 18) = 0LL;
      if ( (int)DXGMONITOR::_RetrieveHDRParamDriverOverrides(v5) < 0 )
      {
        v25 = DXGMONITOR::_ParseEDIDForHDRParams(v5, v23, v24);
        v28 = v25;
        if ( v25 < 0 )
        {
          v42 = WdLogNewEntry5_WdError(v27, v26);
          *(_QWORD *)(v42 + 24) = v28;
          WdLogEvent5_WdError(v42);
        }
      }
      DXGMONITOR::_UpdateHDRParamsIfRequired(v5);
      DXGMONITOR::_SendAdjustedHDRParamsToDriver(v5, 0);
      if ( !*((_BYTE *)DXGGLOBAL::GetGlobal(v30, v29) + 304321) && !*((_DWORD *)v5 + 148) )
      {
        v44 = 1;
        v47 = 0;
        LOBYTE(v46) = 1;
        IntendedUsageFromDescriptor = DXGMONITOR::_GetIntendedUsageFromDescriptor(
                                        v5,
                                        (enum _DXGK_DISPLAY_USAGE *)&v44,
                                        &v47,
                                        (bool *)&v46);
        v34 = IntendedUsageFromDescriptor;
        if ( IntendedUsageFromDescriptor >= 0 )
        {
          LOBYTE(v32) = v46;
          LOBYTE(v33) = v44;
          *((_DWORD *)v5 + 148) = DXGMONITOR::GetUsageClass(v33, v32);
          *((_BYTE *)v5 + 596) = v47;
        }
        else
        {
          v35 = WdLogNewEntry5_WdError(v33, v32);
          *(_QWORD *)(v35 + 24) = v34;
          WdLogEvent5_WdError(v35);
        }
      }
      LODWORD(v6) = 0;
    }
    else
    {
      *((_QWORD *)v5 + 18) = 0LL;
    }
    if ( (*((_DWORD *)v5 + 10) & 0x10) != 0 )
      DXGMONITOR::_UpdateMonitorEDIDRegistryForGDI(v5);
    DXGMONITOR::_CheckPortraitFirstMonitorFromEDID(v5);
  }
  if ( (!*((_DWORD *)v5 + 64) && !*((_DWORD *)v5 + 52) || v16)
    && (int)DXGMONITOR::_RetrieveIntegratedPanelNativeOverride(v5) < 0 )
  {
    DXGMONITOR::_QueryDriverRecommendMonitorModes(v5);
  }
  if ( !*((_DWORD *)v5 + 64) && !*((_DWORD *)v5 + 52) )
    DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(v5);
  if ( v16 )
  {
    v36 = (struct _FAST_MUTEX *)*((_QWORD *)v5 + 4);
    if ( !v36 )
    {
      v43 = WdLogNewEntry5_WdAssertion(0LL, a2);
      WdLogEvent5_WdAssertion(v43);
      v36 = (struct _FAST_MUTEX *)*((_QWORD *)v5 + 4);
    }
    MONITOR_MGR::_IssueMonitorEvent(v36, *((unsigned int *)v5 + 11), 3, 0LL, *((_DWORD *)v5 + 108), (__int64)v45);
  }
  return (unsigned int)v6;
}
