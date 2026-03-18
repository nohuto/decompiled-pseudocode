/*
 * XREFs of ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021FEF0
 * Callers:
 *     ?VmBusLogEventGlobalCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D7820 (-VmBusLogEventGlobalCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C0102FF0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     DxgkSetDisplayMode @ 0x1C0147C10 (DxgkSetDisplayMode.c)
 *     DxgkCreateAllocation @ 0x1C0156350 (DxgkCreateAllocation.c)
 *     NtDxgkPinResources @ 0x1C016CCC0 (NtDxgkPinResources.c)
 *     DpiFdoHandleDevicePower @ 0x1C01717A0 (DpiFdoHandleDevicePower.c)
 *     DpiAddDevice @ 0x1C017DE10 (DpiAddDevice.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C0181054 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 *     DpiFdoStartAdapter @ 0x1C01815E4 (DpiFdoStartAdapter.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1C018FE24 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     DpiFdoHandleStartDevice @ 0x1C0190DE0 (DpiFdoHandleStartDevice.c)
 *     DpiInitializeEx @ 0x1C0191F9C (DpiInitializeEx.c)
 *     DpiLdaValidateSystemChainStatus @ 0x1C0195818 (DpiLdaValidateSystemChainStatus.c)
 *     ?ProcessDeadlockThread@@YAXPEAX@Z @ 0x1C020D8C0 (-ProcessDeadlockThread@@YAXPEAX@Z.c)
 *     ?MockDriverStateCreatePlaneLiveDump@@YAXPEAX@Z @ 0x1C02BD7C0 (-MockDriverStateCreatePlaneLiveDump@@YAXPEAX@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1C02DEE48 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C0043E9C (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z.c)
 */

__int64 __fastcall DxgCreateLiveDumpWithWdLogs(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        char a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax

  v8 = WdDbgReportCreate(0LL, a1, a2, a3, a4, a5, a6);
  if ( v8 )
  {
    v11 = ((unsigned int)TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 0) + 4095) & 0xFFFFF000;
    v12 = operator new[]((unsigned int)v11, 0x4B677844u, PagedPool);
    v17 = v12;
    if ( v12 )
    {
      v18 = TdrCollectBugcheckSecondaryDumpData(v12, v11, 1);
      if ( !(unsigned __int8)WdDbgReportSecondaryData(v8, v17, v18) )
      {
        v21 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v21 + 24) = 10615LL;
        WdLogEvent5_WdError(v21);
      }
      operator delete[](v17);
    }
    else
    {
      v22 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
      *(_QWORD *)(v22 + 24) = v11;
      WdLogEvent5_WdLowResource(v22);
    }
    v23 = WdDbgReportComplete(v8);
    v26 = v23;
    if ( v23 < 0 )
    {
      v27 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v27 + 24) = v26;
      WdLogEvent5_WdError(v27);
    }
    return (unsigned int)v26;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = 10602LL;
    WdLogEvent5_WdError(v9);
    return 3221225473LL;
  }
}
