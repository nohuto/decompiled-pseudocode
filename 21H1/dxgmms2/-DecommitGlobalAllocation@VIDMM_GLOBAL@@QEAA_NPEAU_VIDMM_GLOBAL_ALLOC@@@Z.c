/*
 * XREFs of ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AFB88
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0066220 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00B53C4 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C005FF24 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006322C (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00661CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0075FE4 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00883AC (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0088504 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008A6E8 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::DecommitGlobalAllocation(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2)
{
  char v4; // bl
  __int64 v5; // rdx
  char v6; // bp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rdx
  VIDMM_GLOBAL *v12; // rcx
  struct _VIDMM_GLOBAL_ALLOC *i; // r14
  PRKPROCESS *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v4 = 0;
  DXGFASTMUTEX::Acquire(a2[39]);
  v6 = 1;
  if ( *((_WORD *)a2[62] + 2) == 2 && (*((_DWORD *)a2 + 21) & 0x80u) != 0 )
  {
    *((_DWORD *)a2 + 20) |= 0x40u;
    v4 = 1;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[39], v5);
  if ( v4 )
  {
    if ( a2[16] )
    {
      VIDMM_GLOBAL::MarkGlobalAllocation(this, a2, 0LL, 0LL);
      (*(void (__fastcall **)(DXGFASTMUTEX *, DXGFASTMUTEX **, _QWORD, _QWORD, _BYTE, _QWORD))(*(_QWORD *)a2[16] + 48LL))(
        a2[16],
        a2,
        0LL,
        0LL,
        0,
        0LL);
    }
    else if ( !(unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)a2) )
    {
      v9 = WdLogNewEntry5_WdWarning(v8, v7);
      *(_QWORD *)(v9 + 24) = a2;
      WdLogEvent5_WdWarning(v9);
      return 0;
    }
  }
  if ( VIDMM_GLOBAL::IsPagingOperationPending(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0) )
    VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)a2);
  DXGFASTMUTEX::Acquire(a2[39]);
  if ( *((_WORD *)a2[62] + 2) == 3 )
  {
    if ( a2[32] )
      VIDMM_GLOBAL::EvictTemporaryAllocation(v12, (struct _VIDMM_GLOBAL_ALLOC *)a2);
    for ( i = a2[36]; i != (struct _VIDMM_GLOBAL_ALLOC *)(a2 + 36); i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      v14 = (PRKPROCESS *)*((_QWORD *)i - 6);
      memset(&ApcState, 0, sizeof(ApcState));
      KeStackAttachProcess(*v14, &ApcState);
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)((char *)i - 56), 1);
      KeUnstackDetachProcess(&ApcState);
    }
    VIDMM_GLOBAL::UncommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0);
    v15 = _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a2[12] + 1) + 32LL) + 376LL),
            -(__int64)a2[1]);
  }
  else
  {
    v6 = 0;
    v16 = WdLogNewEntry5_WdWarning(v12, v11);
    *(_QWORD *)(v16 + 24) = a2;
    WdLogEvent5_WdWarning(v16);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[39], v15);
  return v6;
}
