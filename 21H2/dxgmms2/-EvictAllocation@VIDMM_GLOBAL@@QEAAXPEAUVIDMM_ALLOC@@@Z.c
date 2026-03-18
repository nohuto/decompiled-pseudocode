/*
 * XREFs of ?EvictAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D6C0C
 * Callers:
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0087B5C (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z @ 0x1C00A0A9C (-NotifyAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_NPEA_K2@Z.c)
 *     ?NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z @ 0x1C00D8948 (-NotifyAllocationReclaimed@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@H@Z.c)
 */

void __fastcall VIDMM_GLOBAL::EvictAllocation(VIDMM_GLOBAL *this, __int64 **a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  _QWORD *v7; // r15
  _QWORD **v8; // r15
  _QWORD *v9; // rdi
  VIDMM_DEVICE **v10; // rdx

  v5 = **a2;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v5 + 296));
  v6 = *(_QWORD **)(v5 + 272);
  while ( v6 != (_QWORD *)(v5 + 272) )
  {
    v7 = v6;
    v6 = (_QWORD *)*v6;
    v8 = (_QWORD **)(v7 - 2);
    v9 = *v8;
    while ( v9 != v8 )
    {
      v10 = (VIDMM_DEVICE **)(v9 - 5);
      v9 = (_QWORD *)*v9;
      if ( (*((_BYTE *)v10 + 28) & 3) == 2 )
        VIDMM_GLOBAL::NotifyAllocationEviction(this, v10, 0LL, 0LL, 0LL);
    }
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v5 + 296));
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(v5 + 120) + 24LL))(
    *(_QWORD *)(v5 + 120),
    v5,
    *(_QWORD *)(v5 + 136),
    *(_QWORD *)(v5 + 16));
  *(_QWORD *)(v5 + 136) = 0LL;
  *(_DWORD *)(v5 + 112) = 1;
  VIDMM_GLOBAL::NotifyAllocationReclaimed(this, (struct _VIDMM_GLOBAL_ALLOC *)v5, 0);
}
