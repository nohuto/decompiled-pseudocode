/*
 * XREFs of ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011BF7C
 * Callers:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C0009CB8 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C0110140 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C0118150 (DxgkGetMonitorInternalInfo.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C0118A2C (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0127670 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C01358B8 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C01435F4 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C0143EBC (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C0144620 (DxgkGetAdapterDefaultScaling.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C0144774 (EnforceDriverModelScalingPolicy.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0144A50 (DxgkIsVirtualizationDisabledForTarget.c)
 *     IsMiniportDriverCCDSupport @ 0x1C01450F0 (IsMiniportDriverCCDSupport.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C0145460 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C014B5F4 (-Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1C0159DF0 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1C015BDE0 (DxgkCacheHybridQueryValue.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C015CD00 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C015E558 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C01659E0 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C0166710 (DxgkIsSourceInHardwareClone.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C0168350 (DxgkQueryModeListCacheLuid.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C016ED88 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C020C810 (-HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02201E0 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkIsMonitorConnected @ 0x1C0222ED0 (DxgkIsMonitorConnected.c)
 *     DxgkQueryStatisticsInternal @ 0x1C0224738 (DxgkQueryStatisticsInternal.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C027D160 (DxgkWin32kSetPointerPosition.c)
 *     DxgkWin32kSetPointerShape @ 0x1C027D2C0 (DxgkWin32kSetPointerShape.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C028BDF0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0294520 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02946B8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0294958 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0295AD8 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C02962E0 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0296584 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0296840 (DxgkHandleForceProjectionMonitor.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02E964C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02EA8B0 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02ED360 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C02EE5CC (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02EFDE8 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

struct DXGADAPTER *__fastcall DXGGLOBAL::ReferenceAdapterByLuid(DXGGLOBAL *this, struct _LUID a2, unsigned __int64 *a3)
{
  DWORD LowPart; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  char *v7; // r8
  char *v8; // rdx
  _QWORD *v9; // rdi
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  DXGFASTMUTEX *v16; // [rsp+20h] [rbp-18h] BYREF
  char v17; // [rsp+28h] [rbp-10h]
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  v17 = 0;
  v16 = (DXGGLOBAL *)((char *)this + 624);
  LowPart = a2.LowPart;
  if ( this == (DXGGLOBAL *)-624LL )
  {
    v13 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(-624LL, a2);
    *(_QWORD *)(v13 + 24) = 762LL;
    WdLogEvent5_WdAssertion(v13);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v16 + 2) == CurrentThread )
  {
    v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(CurrentThread, a2);
    *(_QWORD *)(v14 + 24) = 769LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( v17 )
  {
    v15 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdCriticalError)(CurrentThread, a2);
    *(_QWORD *)(v15 + 40) = &v16;
    *(_QWORD *)(v15 + 24) = 275LL;
    *(_QWORD *)(v15 + 32) = 4LL;
    *(_OWORD *)(v15 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v15);
  }
  DXGFASTMUTEX::Acquire(v16);
  v7 = (char *)this + 664;
  v8 = (char *)*((_QWORD *)this + 83);
  v17 = 1;
  while ( v8 != v7 && v8 )
  {
    v9 = v8;
    v8 = *(char **)v8;
    if ( *(_QWORD *)((char *)v9 + 316) == __PAIR64__(HighPart, LowPart) )
    {
      _m_prefetchw(v9 + 3);
      v10 = v9[3];
      while ( v10 )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64(v9 + 3, v10 + 1, v10);
        if ( v11 == v10 )
        {
          *a3 = -1LL;
          goto LABEL_15;
        }
      }
    }
  }
  v9 = 0LL;
LABEL_15:
  if ( v17 )
  {
    v17 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v16, (__int64)v8);
  }
  return (struct DXGADAPTER *)v9;
}
