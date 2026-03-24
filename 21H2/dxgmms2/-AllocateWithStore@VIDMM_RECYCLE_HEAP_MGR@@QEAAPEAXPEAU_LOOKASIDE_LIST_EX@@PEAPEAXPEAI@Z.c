/*
 * XREFs of ?AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z @ 0x1C0005F94
 * Callers:
 *     ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C006161C (-CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C007E5E0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C007F224 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 */

PSLIST_ENTRY __fastcall VIDMM_RECYCLE_HEAP_MGR::AllocateWithStore(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _LOOKASIDE_LIST_EX *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  PSLIST_ENTRY result; // rax

  if ( *a4 )
  {
    v6 = *a4 - 1;
    v7 = (unsigned int)v6;
    result = (PSLIST_ENTRY)a3[v6];
    a3[v7] = 0LL;
    --*a4;
    goto LABEL_5;
  }
  ++a2->L.TotalAllocates;
  result = ExpInterlockedPopEntrySList(&a2->L.ListHead);
  if ( !result )
  {
    ++a2->L.AllocateMisses;
    result = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, struct _LOOKASIDE_LIST_EX *))a2->L.AllocateEx)(
                             (unsigned int)a2->L.Type,
                             a2->L.Size,
                             a2->L.Tag,
                             a2);
LABEL_5:
    if ( !result )
      return result;
  }
  ++*((_DWORD *)this + 420);
  return result;
}
