/*
 * XREFs of ?FreeWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAU_LOOKASIDE_LIST_EX@@PEAXPEAPEAXPEAI@Z @ 0x1C0001128
 * Callers:
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0060004 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C00610A0 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::FreeWithStore(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _LOOKASIDE_LIST_EX *a2,
        struct _SLIST_ENTRY *a3,
        void **a4,
        unsigned int *a5)
{
  __int64 v7; // rax

  v7 = *a5;
  if ( (unsigned int)v7 < 4 )
  {
    a4[v7] = a3;
    ++*a5;
  }
  else
  {
    ++a2->L.TotalFrees;
    if ( ExQueryDepthSList(&a2->L.ListHead) < a2->L.Depth )
    {
      ExpInterlockedPushEntrySList(&a2->L.ListHead, a3);
    }
    else
    {
      ++a2->L.FreeMisses;
      ((void (__fastcall *)(struct _SLIST_ENTRY *, struct _LOOKASIDE_LIST_EX *))a2->L.FreeEx)(a3, a2);
    }
  }
}
