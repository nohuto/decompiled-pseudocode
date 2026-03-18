/*
 * XREFs of MiWriteCompletePfn @ 0x14028C82C
 * Callers:
 *     MiBuildMappedCluster @ 0x14028B8B0 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x14037AFC0 (MiGatherPagefilePages.c)
 *     MiUnlockStoreLockedPages @ 0x140385FB0 (MiUnlockStoreLockedPages.c)
 * Callees:
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402297E4 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiCapturePageFileInfoInline @ 0x140232694 (MiCapturePageFileInfoInline.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsPfnCommitNotCharged @ 0x140337F0C (MiIsPfnCommitNotCharged.c)
 *     MiPfnReferenceCountIsZero @ 0x140338500 (MiPfnReferenceCountIsZero.c)
 *     MiRestoreTransitionPte @ 0x14033FAA4 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiWriteCompletePfn(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // rdi
  char v3; // bl
  unsigned __int64 *v5; // rcx
  unsigned __int64 *v8; // r14
  int v9; // ebp
  unsigned __int64 v10; // r9

  v2 = 0LL;
  v3 = a2;
  if ( (a2 & 1) != 0 )
  {
    v5 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)v5 & 0x400LL) == 0 )
      v2 = MiCapturePageFileInfoInline(v5, 1, 0);
    *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
  }
  else if ( (a2 & 2) != 0 )
  {
    v8 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    v9 = MI_IS_PTE_IN_WS_SWAP_SET(
           *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)),
           (_WORD *)(BugCheckParameter2 + 16));
    if ( !v9 && (*(_DWORD *)v8 & 2) != 0 )
      v9 = ((v10 >> 60) & 7) == 2;
    v2 = MiCapturePageFileInfoInline(v8, 1, v9);
    if ( v9 )
      *v8 &= ~2uLL;
  }
  *(_BYTE *)(BugCheckParameter2 + 34) &= ~8u;
  if ( (v3 & 8) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
  if ( (*(_WORD *)(BugCheckParameter2 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0
      && !(unsigned int)MiIsPfnCommitNotCharged(BugCheckParameter2, a2) )
    {
      MiReturnCommit(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)), 1LL);
    }
    if ( (v3 & 4) != 0 )
    {
      MiRestoreTransitionPte(BugCheckParameter2);
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
    }
    else
    {
      MiPfnReferenceCountIsZero(
        BugCheckParameter2,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
    }
  }
  return v2;
}
