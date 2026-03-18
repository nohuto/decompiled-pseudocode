/*
 * XREFs of ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00B0738
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075620 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00783A8 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004E40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004EEC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C006E190 (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00B2C8C (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllocation(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  _QWORD *v6; // r15
  _QWORD **v7; // r15
  _QWORD *v8; // rdi

  v3 = **a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v3 + 312));
  v5 = *(_QWORD **)(v3 + 288);
  while ( v5 != (_QWORD *)(v3 + 288) )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    v7 = (_QWORD **)(v6 - 2);
    v8 = *v7;
    while ( v8 != v7 )
    {
      v4 = (__int64)(v8 - 5);
      v8 = (_QWORD *)*v8;
      if ( (*(_BYTE *)(v4 + 28) & 3) == 2 )
        VIDMM_GLOBAL::NotifyAllocationEviction(this, (VIDMM_DEVICE **)v4, 0, 0LL, 0LL);
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v3 + 312), v4);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(v3 + 128) + 24LL))(
    *(_QWORD *)(v3 + 128),
    v3,
    *(_QWORD *)(v3 + 144),
    *(_QWORD *)(v3 + 16));
  *(_QWORD *)(v3 + 144) = 0LL;
  *(_DWORD *)(v3 + 120) = 1;
  VIDMM_GLOBAL::NotifyAllocationReclaimed(this, (struct _VIDMM_GLOBAL_ALLOC *)v3, 0);
}
