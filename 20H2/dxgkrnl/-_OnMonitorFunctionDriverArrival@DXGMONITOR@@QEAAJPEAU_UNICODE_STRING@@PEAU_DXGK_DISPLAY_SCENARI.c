/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018AB0C
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C018B6E0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     DxgkStatusChangeNotify @ 0x1C0140680 (DxgkStatusChangeNotify.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0174ED4 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0184734 (-_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0185A18 (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z @ 0x1C0186130 (-_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0186204 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C018644C (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0186AEC (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0187A44 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C01886DC (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C01899BC (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1C018AD44 (DxgkIncreaseMonitorUniqueness.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C018AE5C (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C018B160 (-_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C018B328 (-_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018B434 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02134E8 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?GetUsageClass@DXGMONITOR@@CA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z @ 0x1C02F4138 (-GetUsageClass@DXGMONITOR@@CA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z @ 0x1C02F4630 (-_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z.c)
 *     ?_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR@@AEAAJPEA_N@Z @ 0x1C02F4A50 (-_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR@@AEAAJPEA_N@Z.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z @ 0x1C02F4E94 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C02F5048 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F5114 (-_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02F7A7C (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorFunctionDriverArrival(
        DXGMONITOR *this,
        PCUNICODE_STRING SourceString,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  int MonitorDescriptorsFromRegistry; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  void *v11; // rcx
  unsigned __int16 v12; // ax
  PVOID v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  _DWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 result; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // eax
  bool v35; // zf
  __int64 v36; // rdx
  int v37; // [rsp+30h] [rbp-30h]
  int v38; // [rsp+30h] [rbp-30h]
  int UsageClass; // [rsp+40h] [rbp-20h] BYREF
  int v40[6]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v41; // [rsp+A0h] [rbp+40h] BYREF
  bool v42; // [rsp+A8h] [rbp+48h] BYREF
  bool v43; // [rsp+B8h] [rbp+58h] BYREF

  MonitorDescriptorsFromRegistry = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v27 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !*((_DWORD *)this + 33) )
  {
    MonitorDescriptorsFromRegistry = DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this, v8);
    if ( MonitorDescriptorsFromRegistry >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a3, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this, v10);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
  }
  v11 = (void *)*((_QWORD *)this + 14);
  if ( v11 )
  {
    operator delete[](v11);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_WORD *)this + 52) = 0;
  v12 = SourceString->Length + 2;
  *((_WORD *)this + 53) = v12;
  v13 = operator new[](v12, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 14) = v13;
  if ( !v13 )
  {
    v29 = WdLogNewEntry5_WdError(v15, v14);
    WdLogEvent5_WdError(v29);
    return 3221225495LL;
  }
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)this + 104), SourceString);
  DXGMONITOR::_RegisterPnPTargetDeviceNotification(this, a3);
  v17 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v17 + 16) + 348LL) & 0x40000) == 0 )
  {
    v41 = 0;
    v18 = DXGMONITOR::_ReadScaleFactorFromInf(this, &v41);
    v17 = 0x80000000LL;
    MonitorDescriptorsFromRegistry = v18;
    if ( (int)(v18 + 0x80000000) < 0 || v18 == -1073741772 )
    {
      if ( (v16 = v41, v19 = (_DWORD *)((char *)this + 584), v18 == -1073741772) && *v19 || v18 >= 0 && *v19 != v41 )
      {
        *v19 = v41;
        DXGMONITOR::_SaveScaleFactorToMonitorStore(this, v16);
        MONITOR_MGR::_IssueMonitorEvent(
          *((struct _FAST_MUTEX **)this + 4),
          *((unsigned int *)this + 11),
          9,
          (unsigned int)*v19,
          *((_DWORD *)this + 108),
          (__int64)a3);
      }
    }
  }
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v17, v16) + 304321) )
    goto LABEL_55;
  if ( *((_DWORD *)this + 148) )
  {
LABEL_27:
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_OemPanelDriverSupport__private_reporting,
      0x801B31u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_ProductizeSpecializedDisplays_logged_traits,
      1,
      v37);
    if ( DXGMONITOR::EdidSupportsHDR(this) )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_DisplayHdr_Inf_Certification__private_reporting,
        0x13DE0AFu,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
        1,
        v38);
      if ( (*((_DWORD *)this + 10) & 2) == 0 )
      {
        v43 = 0;
        v42 = 0;
        LOBYTE(v41) = 0;
        DXGMONITOR::_ReadDisplayHdrSupportFromPnpRegistry(this, &v43, &v42, (bool *)&v41);
      }
      if ( (unsigned int)DXGMONITOR::_ReadAdvancedColorEnabledFromMonitorStore(this, v36) == -1073741772 )
      {
        if ( (*((_DWORD *)this + 10) & 2) != 0 )
        {
          LOBYTE(v41) = 0;
          if ( (int)DXGMONITOR::_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry(this, (bool *)&v41) >= 0
            && (*((_DWORD *)this + 10) & 0x800) == 0
            && (_BYTE)v41 )
          {
            DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore(this, v41);
            ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(
              *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 4) + 8LL),
              0LL,
              a3);
          }
        }
        if ( *((_BYTE *)this + 703) )
        {
          DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore(this, 1);
          ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(*(ADAPTER_DISPLAY **)(*((_QWORD *)this + 4) + 8LL), 0LL, a3);
          WdDiagNotifyUser(0LL, 10LL, 0LL, 0LL);
        }
      }
    }
    if ( (int)DxgkIncreaseMonitorUniqueness() >= 0 )
    {
      *(_OWORD *)v40 = 0LL;
      v40[0] = 12;
      DxgkStatusChangeNotify(v40, v23, v24);
    }
    return 0LL;
  }
  UsageClass = 0;
  v42 = 1;
  v43 = 0;
  LOBYTE(v41) = 1;
  if ( (int)DXGMONITOR::_GetIntendedUsageFromDescriptor(this, (enum _DXGK_DISPLAY_USAGE *)&v42, &v43, (bool *)&v41) >= 0 )
  {
    LOBYTE(v20) = v41;
    LOBYTE(v21) = v42;
    UsageClass = DXGMONITOR::GetUsageClass(v21, v20);
    if ( UsageClass != *((_DWORD *)this + 148) )
    {
      v32 = WdLogNewEntry5_WdAssertion(v31, v30);
      WdLogEvent5_WdAssertion(v32);
    }
  }
  else
  {
    MonitorDescriptorsFromRegistry = DXGMONITOR::_ReadUsageOverridesFromPnpRegistry(
                                       this,
                                       (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&UsageClass);
  }
  DXGMONITOR::_ReadAppOverridesFromMonitorDataStore(this, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&UsageClass);
  if ( MonitorDescriptorsFromRegistry < 0 )
    goto LABEL_55;
  v22 = UsageClass;
  if ( UsageClass == *((_DWORD *)this + 148) )
    goto LABEL_55;
  *((_BYTE *)this + 596) = v43;
  *((_DWORD *)this + 148) = v22;
  DXGMONITOR::_SaveUsageOverridesToMonitorStore(this);
  v34 = *((_DWORD *)this + 148);
  v35 = v34 == 0;
  if ( v34 )
  {
    DXGMONITOR::_DestroyTtmDevice(this);
    MONITOR_MGR::_IssueMonitorEvent(
      *((struct _FAST_MUTEX **)this + 4),
      *((unsigned int *)this + 11),
      10,
      2LL,
      *((_DWORD *)this + 108),
      (__int64)a3);
    v35 = *((_DWORD *)this + 148) == 0;
  }
  LOBYTE(v33) = !v35;
  result = DXGMONITOR::_UpdateLinkInfo(this, v33);
  if ( (int)result < 0 )
  {
LABEL_55:
    if ( !*((_DWORD *)this + 148) )
      DXGMONITOR::_CreateTtmDevice(this);
    goto LABEL_27;
  }
  return result;
}
