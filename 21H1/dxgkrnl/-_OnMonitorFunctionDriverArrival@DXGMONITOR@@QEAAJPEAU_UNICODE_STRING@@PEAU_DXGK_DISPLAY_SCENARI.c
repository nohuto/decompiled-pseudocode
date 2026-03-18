/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016CC0C
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C017F7D0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0008898 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C0130D00 (DxgkStatusChangeNotify.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0166634 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z @ 0x1C0168140 (-_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0168348 (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C016862C (-_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0168A18 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0168C60 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0169300 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C016A258 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C016AEF0 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C016C1D0 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016C960 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1C016CE44 (DxgkIncreaseMonitorUniqueness.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C016CF5C (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C018778C (-_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C01887E8 (-_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0210448 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?GetUsageClass@DXGMONITOR@@CA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z @ 0x1C02F0B68 (-GetUsageClass@DXGMONITOR@@CA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z @ 0x1C02F1060 (-_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z.c)
 *     ?_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR@@AEAAJPEA_N@Z @ 0x1C02F1480 (-_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR@@AEAAJPEA_N@Z.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z @ 0x1C02F18C4 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C02F1A78 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F1B44 (-_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02F44AC (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  _DWORD *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 result; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  bool v37; // zf
  int v38; // [rsp+30h] [rbp-30h]
  int v39; // [rsp+30h] [rbp-30h]
  int UsageClass; // [rsp+40h] [rbp-20h] BYREF
  int v41[6]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v42; // [rsp+A0h] [rbp+40h] BYREF
  bool v43; // [rsp+A8h] [rbp+48h] BYREF
  bool v44; // [rsp+B8h] [rbp+58h] BYREF

  MonitorDescriptorsFromRegistry = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v30);
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
    v31 = WdLogNewEntry5_WdError(v15, v14);
    WdLogEvent5_WdError(v31);
    return 3221225495LL;
  }
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)this + 104), SourceString);
  DXGMONITOR::_RegisterPnPTargetDeviceNotification(this, a3, v16, v17);
  v19 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v19 + 16) + 348LL) & 0x40000) == 0 )
  {
    v42 = 0;
    v20 = DXGMONITOR::_ReadScaleFactorFromInf(this, &v42);
    v19 = 0x80000000LL;
    MonitorDescriptorsFromRegistry = v20;
    if ( (int)(v20 + 0x80000000) < 0 || v20 == -1073741772 )
    {
      if ( (v18 = v42, v21 = (_DWORD *)((char *)this + 584), v20 == -1073741772) && *v21 || v20 >= 0 && *v21 != v42 )
      {
        *v21 = v42;
        DXGMONITOR::_SaveScaleFactorToMonitorStore(this, v18);
        MONITOR_MGR::_IssueMonitorEvent(
          *((struct _FAST_MUTEX **)this + 4),
          *((unsigned int *)this + 11),
          9,
          (unsigned int)*v21,
          *((_DWORD *)this + 108),
          (__int64)a3);
      }
    }
  }
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v19, v18) + 304201) )
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
      v38);
    if ( DXGMONITOR::EdidSupportsHDR(this) )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_DisplayHdr_Inf_Certification__private_reporting,
        0x13DE0AFu,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
        1,
        v39);
      if ( (*((_DWORD *)this + 10) & 2) == 0 )
      {
        v44 = 0;
        v43 = 0;
        LOBYTE(v42) = 0;
        DXGMONITOR::_ReadDisplayHdrSupportFromPnpRegistry(this, &v44, &v43, (bool *)&v42);
      }
      if ( DXGMONITOR::_ReadAdvancedColorEnabledFromMonitorStore(this) == -1073741772 )
      {
        if ( (*((_DWORD *)this + 10) & 2) != 0 )
        {
          LOBYTE(v42) = 0;
          if ( (int)DXGMONITOR::_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry(this, (bool *)&v42) >= 0
            && (*((_DWORD *)this + 10) & 0x800) == 0
            && (_BYTE)v42 )
          {
            DXGMONITOR::_SaveAdvancedColorEnabledToMonitorStore(this, v42);
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
      *(_OWORD *)v41 = 0LL;
      v41[0] = 12;
      DxgkStatusChangeNotify(v41, v25, v26);
    }
    return 0LL;
  }
  UsageClass = 0;
  v43 = 1;
  v44 = 0;
  LOBYTE(v42) = 1;
  if ( (int)DXGMONITOR::_GetIntendedUsageFromDescriptor(this, (enum _DXGK_DISPLAY_USAGE *)&v43, &v44, (bool *)&v42) >= 0 )
  {
    LOBYTE(v22) = v42;
    LOBYTE(v23) = v43;
    UsageClass = DXGMONITOR::GetUsageClass(v23, v22);
    if ( UsageClass != *((_DWORD *)this + 148) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v33, v32);
      WdLogEvent5_WdAssertion(v34);
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
  v24 = UsageClass;
  if ( UsageClass == *((_DWORD *)this + 148) )
    goto LABEL_55;
  *((_BYTE *)this + 596) = v44;
  *((_DWORD *)this + 148) = v24;
  DXGMONITOR::_SaveUsageOverridesToMonitorStore(this);
  v36 = *((_DWORD *)this + 148);
  v37 = v36 == 0;
  if ( v36 )
  {
    DXGMONITOR::_DestroyTtmDevice(this);
    MONITOR_MGR::_IssueMonitorEvent(
      *((struct _FAST_MUTEX **)this + 4),
      *((unsigned int *)this + 11),
      10,
      2LL,
      *((_DWORD *)this + 108),
      (__int64)a3);
    v37 = *((_DWORD *)this + 148) == 0;
  }
  LOBYTE(v35) = !v37;
  result = DXGMONITOR::_UpdateLinkInfo(this, v35);
  if ( (int)result < 0 )
  {
LABEL_55:
    if ( !*((_DWORD *)this + 148) )
      DXGMONITOR::_CreateTtmDevice(this);
    goto LABEL_27;
  }
  return result;
}
