/*
 * XREFs of MiWriteCompletePfn @ 0x1402A93D0
 * Callers:
 *     MiUnlockMdlWritePages @ 0x1402A9130 (MiUnlockMdlWritePages.c)
 *     MiUnlockStoreLockedPages @ 0x14031E050 (MiUnlockStoreLockedPages.c)
 *     MiGatherPagefilePages @ 0x140341EC0 (MiGatherPagefilePages.c)
 *     MiBuildMappedCluster @ 0x140345BF8 (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x140346420 (MiWriteComplete.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A9540 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x1402AAA20 (MiIsPfnCommitNotCharged.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCapturePageFileInfoInline @ 0x140306460 (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14030D9AC (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiWriteCompletePfn(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // rdi
  int v7; // eax
  ULONG_PTR v8; // rcx
  int v9; // ebp
  unsigned __int64 v10; // r9

  v2 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v7 = *(_DWORD *)(BugCheckParameter2 + 16);
    v8 = BugCheckParameter2 + 16;
    if ( (v7 & 0x400) == 0 )
      v2 = MiCapturePageFileInfoInline(v8, 1LL);
    *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
  }
  else if ( (a2 & 2) != 0 )
  {
    v9 = MI_IS_PTE_IN_WS_SWAP_SET(
           *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL)),
           BugCheckParameter2 + 16);
    if ( !v9 && (*(_DWORD *)(BugCheckParameter2 + 16) & 2) != 0 )
      v9 = ((v10 >> 60) & 7) == 2;
    v2 = MiCapturePageFileInfoInline(BugCheckParameter2 + 16, 1LL);
    if ( v9 )
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~2uLL;
  }
  *(_BYTE *)(BugCheckParameter2 + 34) &= ~8u;
  if ( (*(_WORD *)(BugCheckParameter2 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0
      && !(unsigned int)MiIsPfnCommitNotCharged(BugCheckParameter2) )
    {
      MiReturnCommit(*(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL)), 1LL);
    }
    if ( (a2 & 8) != 0 )
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    if ( (a2 & 4) != 0 )
    {
      MiRestoreTransitionPte(BugCheckParameter2);
      MiInsertPageInFreeOrZeroedList((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
    }
    else
    {
      MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
    }
  }
  return v2;
}
