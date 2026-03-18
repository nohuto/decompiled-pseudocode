/*
 * XREFs of ?WaitOnAllocationDmaReferences@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C0080448
 * Callers:
 *     ?VidMmWaitOnAllocationDmaReferences@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@IK@Z @ 0x1C0011170 (-VidMmWaitOnAllocationDmaReferences@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@IK@Z.c)
 * Callees:
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00661CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00804C0 (-WaitOnAllocForceSync@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C00B0DF0 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::WaitOnAllocationDmaReferences(
        VIDMM_GLOBAL *this,
        struct _VIDMM_MULTI_ALLOC *a2,
        __int64 a3,
        char a4)
{
  unsigned int v4; // edi
  __int64 v9; // rax

  v4 = 0;
  if ( (a4 & 4) != 0 )
  {
    VIDMM_GLOBAL::WaitOnAllocForceSync(this, a2);
    if ( (*((_DWORD *)a2 + 8) & 1) != 0 )
      KeWaitForSingleObject((char *)a2 + 72, Executive, 0, 0, 0LL);
  }
  else if ( a2 )
  {
    if ( (a4 & 1) != 0 )
      VIDMM_GLOBAL::FlushPendingAllocationAccess(this, **(struct _VIDMM_GLOBAL_ALLOC ***)a2, a2, 1u);
    else
      VIDMM_GLOBAL::WaitOnAllocForceSync(this, a2);
    if ( (a4 & 2) != 0 )
      VIDMM_GLOBAL::WaitForAllPagingEngines(this, **(struct _VIDMM_GLOBAL_ALLOC ***)a2);
  }
  else
  {
    v9 = WdLogNewEntry5_WdAssertion(this, 0LL, a3);
    *(_QWORD *)(v9 + 24) = 0LL;
    WdLogEvent5_WdAssertion(v9);
    return (unsigned int)-1073741811;
  }
  return v4;
}
