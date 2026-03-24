/*
 * XREFs of ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01915B8
 * Callers:
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C0191DD0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C0027E80 (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage @ 0x1C0028804 (Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage.c)
 *     DxgkStatusChangeNotify @ 0x1C01450A0 (DxgkStatusChangeNotify.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017AEFC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C018B43C (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018B5E0 (-_RegisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C018B7AC (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C018B9F4 (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C018C094 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018D400 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z @ 0x1C018E098 (-_GetIntendedUsageFromDescriptor@DXGMONITOR@@AEAAJPEAW4_DXGK_DISPLAY_USAGE@@PEA_N1@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C018F378 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z @ 0x1C018FDE8 (-_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z.c)
 *     ?_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C018FFF0 (-_ReadAdvancedColorEnabledFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C01902D4 (-_ReadAppOverridesFromMonitorDataStore@DXGMONITOR@@QEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     DxgkIncreaseMonitorUniqueness @ 0x1C01919E4 (DxgkIncreaseMonitorUniqueness.c)
 *     ?_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C0191AFC (-_ReadUsageOverridesFromPnpRegistry@DXGMONITOR@@AEAAJPEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z @ 0x1C0191CC4 (-_ReadScaleFactorFromInf@DXGMONITOR@@AEAAJPEAI@Z.c)
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02143C8 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 *     ?GetUsageClass@DXGMONITOR@@CA?AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z @ 0x1C02F5438 (-GetUsageClass@DXGMONITOR@@CA-AW4_D3DKMT_DISPLAY_TARGET_USAGE@@W4_DXGK_DISPLAY_USAGE@@_N@Z.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z @ 0x1C02F5930 (-_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z.c)
 *     ?_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR@@AEAAJPEA_N@Z @ 0x1C02F5D50 (-_ReadEnableIntegratedPanelHdrByDefaultFromPnpRegistry@DXGMONITOR@@AEAAJPEA_N@Z.c)
 *     ?_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z @ 0x1C02F6194 (-_SaveAdvancedColorEnabledToMonitorStore@DXGMONITOR@@AEAAJ_N@Z.c)
 *     ?_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z @ 0x1C02F6348 (-_SaveScaleFactorToMonitorStore@DXGMONITOR@@AEAAJI@Z.c)
 *     ?_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C02F6414 (-_SaveUsageOverridesToMonitorStore@DXGMONITOR@@AEAAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C02F8D7C (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
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
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  void *v14; // rcx
  unsigned __int16 v15; // ax
  PVOID v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  _DWORD *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  int v36; // eax
  bool v37; // zf
  __int64 v38; // rdx
  __int64 v39; // r8
  unsigned int UsageClass; // [rsp+30h] [rbp-20h] BYREF
  int v41[6]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v42; // [rsp+90h] [rbp+40h] BYREF
  bool v43; // [rsp+98h] [rbp+48h] BYREF
  bool v44; // [rsp+A8h] [rbp+58h] BYREF

  MonitorDescriptorsFromRegistry = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, SourceString, a3, a4) + 24) = this;
  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !*((_DWORD *)this + 33) )
  {
    MonitorDescriptorsFromRegistry = DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(this, v8);
    if ( MonitorDescriptorsFromRegistry >= 0 )
      DXGMONITOR::_UpdateEDIDBaseBlock(this, a3, 0);
    DXGMONITOR::_RetrieveMonitorFrequencyRangeFromRegistry((struct _DEVICE_OBJECT **)this, v13);
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
  }
  v14 = (void *)*((_QWORD *)this + 14);
  if ( v14 )
  {
    operator delete[](v14);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_WORD *)this + 52) = 0;
  v15 = SourceString->Length + 2;
  *((_WORD *)this + 53) = v15;
  v16 = operator new[](v15, 0x4D677844u, PagedPool);
  *((_QWORD *)this + 14) = v16;
  if ( !v16 )
  {
    v19 = WdLogNewEntry5_WdError(v18, v17);
    WdLogEvent5_WdError(v19);
    return 3221225495LL;
  }
  RtlCopyUnicodeString((PUNICODE_STRING)((char *)this + 104), SourceString);
  DXGMONITOR::_RegisterPnPTargetDeviceNotification(this, a3, v21, v22);
  v24 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v24 + 16) + 348LL) & 0x40000) == 0 )
  {
    v42 = 0;
    v25 = DXGMONITOR::_ReadScaleFactorFromInf(this, &v42);
    v24 = 0x80000000LL;
    MonitorDescriptorsFromRegistry = v25;
    if ( (int)(v25 + 0x80000000) < 0 || v25 == -1073741772 )
    {
      if ( (v23 = v42, v26 = (_DWORD *)((char *)this + 584), v25 == -1073741772) && *v26 || v25 >= 0 && *v26 != v42 )
      {
        *v26 = v42;
        DXGMONITOR::_SaveScaleFactorToMonitorStore(this, v23);
        MONITOR_MGR::_IssueMonitorEvent(
          *((struct _FAST_MUTEX **)this + 4),
          *((unsigned int *)this + 11),
          9,
          (unsigned int)*v26,
          *((_DWORD *)this + 108),
          (__int64)a3);
      }
    }
  }
  if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v24, v23) + 304321) )
    goto LABEL_52;
  if ( *((_DWORD *)this + 148) )
  {
LABEL_36:
    Feature_OemPanelDriverSupport__private_ReportDeviceUsage();
    if ( DXGMONITOR::EdidSupportsHDR(this) )
    {
      Feature_DisplayHdr_Inf_Certification__private_ReportDeviceUsage();
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
      DxgkStatusChangeNotify(v41, v38, v39);
    }
    MONITOR_MGR::_IssueMonitorEvent(
      *((struct _FAST_MUTEX **)this + 4),
      *((unsigned int *)this + 11),
      11,
      1LL,
      *((_DWORD *)this + 108),
      (__int64)a3);
    return 0LL;
  }
  UsageClass = 0;
  v43 = 1;
  v44 = 0;
  LOBYTE(v42) = 1;
  if ( (int)DXGMONITOR::_GetIntendedUsageFromDescriptor(this, (enum _DXGK_DISPLAY_USAGE *)&v43, &v44, (bool *)&v42) < 0 )
  {
    MonitorDescriptorsFromRegistry = DXGMONITOR::_ReadUsageOverridesFromPnpRegistry(
                                       this,
                                       (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&UsageClass);
  }
  else
  {
    LOBYTE(v30) = v42;
    LOBYTE(v31) = v43;
    UsageClass = DXGMONITOR::GetUsageClass(v31, v30);
    if ( UsageClass != *((_DWORD *)this + 148) )
    {
      v34 = WdLogNewEntry5_WdAssertion(v33, v32);
      WdLogEvent5_WdAssertion(v34);
    }
  }
  DXGMONITOR::_ReadAppOverridesFromMonitorDataStore(this, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&UsageClass);
  if ( MonitorDescriptorsFromRegistry < 0 )
    goto LABEL_52;
  v27 = UsageClass;
  if ( UsageClass == *((_DWORD *)this + 148) )
    goto LABEL_52;
  *((_BYTE *)this + 596) = v44;
  *((_DWORD *)this + 148) = v27;
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
LABEL_52:
    if ( !*((_DWORD *)this + 148) )
      DXGMONITOR::_CreateTtmDevice(this, v27, v28, v29);
    goto LABEL_36;
  }
  return result;
}
