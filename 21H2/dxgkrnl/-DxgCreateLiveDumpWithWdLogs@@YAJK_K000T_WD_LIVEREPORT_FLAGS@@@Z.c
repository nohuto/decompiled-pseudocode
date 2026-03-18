/*
 * XREFs of ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0
 * Callers:
 *     ?SysMmCreateLiveDump@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C007152C (-SysMmCreateLiveDump@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C0177070 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2@@PEAX@Z @ 0x1C017B090 (-DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.c)
 *     DxgkSetDisplayMode @ 0x1C01C2EF0 (DxgkSetDisplayMode.c)
 *     NtDxgkPinResources @ 0x1C01D8570 (NtDxgkPinResources.c)
 *     DpiFdoHandleDevicePower @ 0x1C01F0950 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleStartDevice @ 0x1C01F6B40 (DpiFdoHandleStartDevice.c)
 *     DpiAddDevice @ 0x1C01F84B0 (DpiAddDevice.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C01FAB24 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 *     DpiFdoStartAdapter @ 0x1C01FB06C (DpiFdoStartAdapter.c)
 *     DpiInitializeEx @ 0x1C02146B0 (DpiInitializeEx.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C0216A7C (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0219C24 (DpiLdaValidateSystemChainStatus.c)
 *     ?ProcessDeadlockThread@@YAXPEAX@Z @ 0x1C02BD0F0 (-ProcessDeadlockThread@@YAXPEAX@Z.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C02DD990 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02FAF00 (-AddWakeUpToProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_T.c)
 *     ?CreatePlaneLiveDumpAtPassive@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MOCKDRIVERSTATE_PLANE@@@Z @ 0x1C0317F8C (-CreatePlaneLiveDumpAtPassive@@YAXIIPEAU_MOCKDRIVERSTATE_VALIDATE_PLANE@@PEAVDXGADAPTER@@PEAU_MO.c)
 *     ?MockDriverStateCreateDurationLiveDump@@YAXPEAX@Z @ 0x1C0318220 (-MockDriverStateCreateDurationLiveDump@@YAXPEAX@Z.c)
 *     ?MockDriverStateCreateFbrLiveDump@@YAXPEAX@Z @ 0x1C0318420 (-MockDriverStateCreateFbrLiveDump@@YAXPEAX@Z.c)
 *     ?MockDriverStateCreatePlaneLiveDump@@YAXPEAX@Z @ 0x1C0318620 (-MockDriverStateCreatePlaneLiveDump@@YAXPEAX@Z.c)
 *     ?VmBusLogEventGlobal@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036F850 (-VmBusLogEventGlobal@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0052318 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 */

__int64 __fastcall DxgCreateLiveDumpWithWdLogs(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // r14
  __int64 v8; // rdi
  __int64 v9; // r9
  _QWORD *v10; // rax
  void *v11; // rbx
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rdi

  v6 = WdDbgReportCreate(0LL, a1, a2, a3, a4, a5, a6);
  if ( v6 )
  {
    v8 = ((unsigned int)TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0) + 4095) & 0xFFFFF000;
    v10 = (_QWORD *)operator new[]((unsigned int)v8, 0x4B677844u, 256LL, v9);
    v11 = v10;
    if ( v10 )
    {
      v12 = TdrCollectBugcheckSecondaryDumpData(v10, v8, 1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v6, v11, v12) )
      {
        WdLogSingleEntry1(2LL, 10644LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"WdDbgReportSecondaryData returned FALSE while building live dump.",
          10644LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      operator delete[](v11);
    }
    else
    {
      WdLogSingleEntry1(6LL, v8);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Out of memory allocating live dump data (size 0x%I64x)",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v13 = WdDbgReportComplete(v6);
    v14 = v13;
    if ( v13 < 0 )
    {
      WdLogSingleEntry1(2LL, v13);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"WdDbgReportComplete returned failed status while building live dump. Status = 0x%I64x",
        v14,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v14;
  }
  else
  {
    WdLogSingleEntry1(2LL, 10631LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"WdDbgReportCreate failed", 10631LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225473LL;
  }
}
