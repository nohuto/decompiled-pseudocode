/*
 * XREFs of ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01872C0
 * Callers:
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@2@Z@Z @ 0x1C015D3B4 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_M.c)
 *     DxgkProcessLockScreen @ 0x1C015D530 (DxgkProcessLockScreen.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C016E308 (OutputDuplProcessDestroyDevice.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     _lambda_a196522e28cbefec8f1ebe5a826d98cf_::_lambda_invoker_cdecl_ @ 0x1C0187240 (_lambda_a196522e28cbefec8f1ebe5a826d98cf_--_lambda_invoker_cdecl_.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z23IIP6AJPEAV3@423II@Z@Z @ 0x1C01A1FB8 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z @ 0x1C01B6150 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HHH@Z.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z2P6AJPEAV3@32@Z@Z @ 0x1C01B67AC (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     DxgkSessionDisconnected @ 0x1C01DA900 (DxgkSessionDisconnected.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@2I@Z@Z @ 0x1C01E405C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@_NIP8OUTPUTDUPL.c)
 *     ?OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z @ 0x1C030F8B4 (-OutputDuplPresentToHwQueue@@YAJPEAU_D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE@@PEAVDXGPROCESS@@@Z.c)
 *     ?CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C031F70C (-CleanUpPendingList@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C0322F58 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C0323DF0 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C0324078 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT@@@@SAJPEAVDXGADAPTER@@_NIP.c)
 *     OutputDuplGetDebugInfo @ 0x1C0325238 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C0325334 (OutputDuplGetDiagnosticBuffer.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C032589C (OutputDuplProcessRemoteSessionSetPointerShape.c)
 *     OutputDuplRemoteSessionReconnected @ 0x1C03258F8 (OutputDuplRemoteSessionReconnected.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 */

struct OUTPUTDUPL_MGR *FindRemoteOutputDuplMgr(void)
{
  __int64 v0; // rdi
  __int64 CurrentProcessSessionId; // rsi
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v12; // r9d
  int v13; // eax
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  char v15; // [rsp+58h] [rbp-10h]

  v0 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v0 )
    goto LABEL_32;
  v15 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  v14 = v0 + 88;
  if ( v0 == -88 )
  {
    WdLogSingleEntry1(1LL, 573LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 573LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v14 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 580LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 580LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = v14;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v2 + 24) == KeGetCurrentThread() )
  {
    v13 = *(_DWORD *)(v2 + 32);
    if ( v13 <= 0 )
    {
      WdLogSingleEntry1(1LL, 472LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 472LL, 0LL, 0LL, 0LL, 0LL);
      v13 = *(_DWORD *)(v2 + 32);
    }
    v5 = v13 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v2 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v12 = *(_DWORD *)(v2 + 36);
        if ( v12 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v3, (const EVENT_DESCRIPTOR *)"g", v4, v12);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v2 + 16));
      ExAcquirePushLockExclusiveEx(v2 + 8, 0LL);
    }
    if ( *(_QWORD *)(v2 + 24) )
    {
      WdLogSingleEntry1(1LL, 496LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 496LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *(_DWORD *)(v2 + 32) )
    {
      WdLogSingleEntry1(1LL, 497LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 497LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v2 + 24) = KeGetCurrentThread();
    v5 = 1;
  }
  *(_DWORD *)(v2 + 32) = v5;
  v15 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v0 + 80) )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v14);
LABEL_32:
    WdLogSingleEntry1(2LL, 3897LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"DXGSESSIONDATA is NULL", 3897LL, 0LL, 0LL, 0LL, 0LL);
    return 0LL;
  }
  _mm_lfence();
  v6 = v14;
  v7 = *(_QWORD *)(*(_QWORD *)(v0 + 48) + 8 * CurrentProcessSessionId);
  v15 = 0;
  if ( *(struct _KTHREAD **)(v14 + 24) != KeGetCurrentThread() )
    WdLogSingleEntry5(0LL, 275LL, 4LL, v14, 0LL, 0LL);
  v8 = *(_DWORD *)(v6 + 32);
  if ( v8 <= 0 )
  {
    WdLogSingleEntry1(1LL, 516LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 516LL, 0LL, 0LL, 0LL, 0LL);
    v8 = *(_DWORD *)(v6 + 32);
  }
  v9 = v8 - 1;
  *(_DWORD *)(v6 + 32) = v9;
  if ( !v9 )
  {
    *(_QWORD *)(v6 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(v6 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( !v7 )
    goto LABEL_32;
  v10 = *(_QWORD *)(v7 + 8);
  if ( v10 )
    return *(struct OUTPUTDUPL_MGR **)(v10 + 120);
  WdLogSingleEntry1(2LL, 3904LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"OUTPUTDUPL_SESSION_MGR is NULL", 3904LL, 0LL, 0LL, 0LL, 0LL);
  return 0LL;
}
