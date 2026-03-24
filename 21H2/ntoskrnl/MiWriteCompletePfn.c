/*
 * XREFs of MiWriteCompletePfn @ 0x140325C80
 * Callers:
 *     MiWriteComplete @ 0x140255170 (MiWriteComplete.c)
 *     MiBuildMappedCluster @ 0x1402560D0 (MiBuildMappedCluster.c)
 *     MiGatherPagefilePages @ 0x1402688A4 (MiGatherPagefilePages.c)
 *     MiUnlockStoreLockedPages @ 0x1402BF7A0 (MiUnlockStoreLockedPages.c)
 *     MiUnlockMdlWritePages @ 0x1403259E0 (MiUnlockMdlWritePages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCapturePageFileInfoInline @ 0x1402A2CF0 (MiCapturePageFileInfoInline.c)
 *     MiRestoreTransitionPte @ 0x1402A2DD0 (MiRestoreTransitionPte.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402ACB24 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x140325DF0 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x1403272D0 (MiIsPfnCommitNotCharged.c)
 */

__int64 __fastcall MiWriteCompletePfn(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  char v4; // bl
  int v8; // eax
  unsigned __int64 *v9; // rcx
  int v10; // ebp
  unsigned __int64 v11; // r9

  v3 = 0LL;
  v4 = a2;
  if ( (a2 & 1) != 0 )
  {
    v8 = *(_DWORD *)(BugCheckParameter2 + 16);
    v9 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    if ( (v8 & 0x400) == 0 )
      v3 = MiCapturePageFileInfoInline(v9, 1, 0);
    *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
  }
  else if ( (a2 & 2) != 0 )
  {
    v10 = MI_IS_PTE_IN_WS_SWAP_SET(
            *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL)),
            (_WORD *)(BugCheckParameter2 + 16));
    if ( !v10 && (*(_DWORD *)(BugCheckParameter2 + 16) & 2) != 0 )
      v10 = ((v11 >> 60) & 7) == 2;
    v3 = MiCapturePageFileInfoInline((unsigned __int64 *)(BugCheckParameter2 + 16), 1, v10);
    if ( v10 )
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~2uLL;
  }
  *(_BYTE *)(BugCheckParameter2 + 34) &= ~8u;
  if ( (*(_WORD *)(BugCheckParameter2 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0
      && !(unsigned int)MiIsPfnCommitNotCharged(BugCheckParameter2, a2, a3) )
    {
      MiReturnCommit(*(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL)), 1LL);
    }
    if ( (v4 & 8) != 0 )
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    if ( (v4 & 4) != 0 )
    {
      MiRestoreTransitionPte(BugCheckParameter2, 1);
      MiInsertPageInFreeOrZeroedList((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48, 2);
    }
    else
    {
      MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
    }
  }
  return v3;
}
