/*
 * XREFs of MiWriteCompletePfn @ 0x1403309D0
 * Callers:
 *     MiUnlockStoreLockedPages @ 0x14023DBF0 (MiUnlockStoreLockedPages.c)
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
 *     MiBuildMappedCluster @ 0x140277640 (MiBuildMappedCluster.c)
 *     MiUnlockMdlWritePages @ 0x140330730 (MiUnlockMdlWritePages.c)
 * Callees:
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14022AE80 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MiIsPfnCommitNotCharged @ 0x140332020 (MiIsPfnCommitNotCharged.c)
 */

__int64 __fastcall MiWriteCompletePfn(ULONG_PTR a1, __int64 a2, __int64 a3)
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
    v8 = *(_DWORD *)(a1 + 16);
    v9 = (unsigned __int64 *)(a1 + 16);
    if ( (v8 & 0x400) == 0 )
      v3 = MiCapturePageFileInfoInline(v9, 1, 0);
    *(_BYTE *)(a1 + 34) |= 0x10u;
  }
  else if ( (a2 & 2) != 0 )
  {
    v10 = MI_IS_PTE_IN_WS_SWAP_SET(
            *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)),
            (_WORD *)(a1 + 16));
    if ( !v10 && (*(_DWORD *)(a1 + 16) & 2) != 0 )
      v10 = ((v11 >> 60) & 7) == 2;
    v3 = MiCapturePageFileInfoInline((unsigned __int64 *)(a1 + 16), 1, v10);
    if ( v10 )
      *(_QWORD *)(a1 + 16) &= ~2uLL;
  }
  *(_BYTE *)(a1 + 34) &= ~8u;
  if ( (*(_WORD *)(a1 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x400LL) == 0
      && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0
      && !(unsigned int)MiIsPfnCommitNotCharged(a1, a2, a3) )
    {
      MiReturnCommit(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)), 1LL);
    }
    if ( (v4 & 8) != 0 )
      *(_BYTE *)(a1 + 35) &= 0xF8u;
    if ( (v4 & 4) != 0 )
    {
      MiRestoreTransitionPte(a1, 1LL, a3);
      MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48, 2);
    }
    else
    {
      MiPfnReferenceCountIsZero(a1, (__int64)(a1 + 0x58000000000LL) / 48);
    }
  }
  return v3;
}
