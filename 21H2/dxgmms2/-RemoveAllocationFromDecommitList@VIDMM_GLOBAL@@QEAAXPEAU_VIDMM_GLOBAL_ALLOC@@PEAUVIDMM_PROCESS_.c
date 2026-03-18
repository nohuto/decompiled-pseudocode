/*
 * XREFs of ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C007BB6C
 * Callers:
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007BB3C (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00929E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS_ADAPTER_INFO *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  _QWORD *i; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v11; // rax

  v4 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 32LL);
  KeEnterCriticalRegion();
  v5 = v4 + 464;
  ExAcquirePushLockSharedEx(v4 + 464, 0LL);
  v6 = (_QWORD *)(v4 + 488);
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    v11 = (struct _VIDMM_GLOBAL_ALLOC *)i[2];
    if ( v11 == (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 432) )
      i[2] = *(_QWORD *)v11;
  }
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v8 = (_QWORD *)((char *)a2 + 432);
  v9 = *((_QWORD *)a2 + 54);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v9 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 432)
    || (v10 = (_QWORD *)*((_QWORD *)a2 + 55), (_QWORD *)*v10 != v8) )
  {
    __fastfail(3u);
  }
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
}
