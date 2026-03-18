/*
 * XREFs of ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C011D0FC
 * Callers:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C0009CB8 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     DxgkGetAdapterDeviceDesc @ 0x1C01112C0 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01192D0 (DxgkGetMonitorInternalInfo.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x1C0119BAC (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C01287F0 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C0136A68 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C01447A4 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z @ 0x1C014506C (-DxgkIsTargetNonStandard@@YA_NAEBU_LUID@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C01457D0 (DxgkGetAdapterDefaultScaling.c)
 *     EnforceDriverModelScalingPolicy @ 0x1C0145924 (EnforceDriverModelScalingPolicy.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C0145C00 (DxgkIsVirtualizationDisabledForTarget.c)
 *     IsMiniportDriverCCDSupport @ 0x1C01462A0 (IsMiniportDriverCCDSupport.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C0146610 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C014C7A4 (-Initialize@SESSION_ADAPTER@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     DxgkGetCachedHybridQueryValue @ 0x1C015AFA0 (DxgkGetCachedHybridQueryValue.c)
 *     DxgkCacheHybridQueryValue @ 0x1C015CF90 (DxgkCacheHybridQueryValue.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C015DEB0 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C015F708 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C0166B90 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     DxgkIsSourceInHardwareClone @ 0x1C01678C0 (DxgkIsSourceInHardwareClone.c)
 *     DxgkQueryModeListCacheLuid @ 0x1C0169500 (DxgkQueryModeListCacheLuid.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C016FF38 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C020D9C0 (-HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0221390 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkIsMonitorConnected @ 0x1C0224080 (DxgkIsMonitorConnected.c)
 *     DxgkQueryStatisticsInternal @ 0x1C02258E8 (DxgkQueryStatisticsInternal.c)
 *     DxgkWin32kSetPointerPosition @ 0x1C027E140 (DxgkWin32kSetPointerPosition.c)
 *     DxgkWin32kSetPointerShape @ 0x1C027E2A0 (DxgkWin32kSetPointerShape.c)
 *     ?PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z @ 0x1C028CDD0 (-PairedBind@DXGCOMPOSITIONSURFACEPROXY@@UEAAJAEAU_CSM_BUFFER_INFO_WRAPPER@@_NPEA_K@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0295500 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C0295698 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 *     ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C0295938 (-DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0296AB8 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAE333@Z @ 0x1C02972C0 (-QueryMonitorType@@YAJAEBU_LUID@@IPEAW4_DMM_VIDPN_MONITOR_TYPE@@PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHN.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0297564 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MON.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0297820 (DxgkHandleForceProjectionMonitor.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02EA5EC (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C02EB850 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C02EE300 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C02EF56C (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C02F0D88 (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
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
