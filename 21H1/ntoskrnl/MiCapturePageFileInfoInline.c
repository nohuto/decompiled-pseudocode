/*
 * XREFs of MiCapturePageFileInfoInline @ 0x1402F6610
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14020FD20 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiRevertValidPte @ 0x14021C800 (MiRevertValidPte.c)
 *     MiWsleFree @ 0x140220E30 (MiWsleFree.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiReservePageFileSpaceForPage @ 0x140227DE0 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x14027A0D0 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteSubsectionPages @ 0x140283240 (MiDeleteSubsectionPages.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiWriteCompletePfn @ 0x14028D170 (MiWriteCompletePfn.c)
 *     MiOutSwapWorkingSetPte @ 0x140290570 (MiOutSwapWorkingSetPte.c)
 *     MiDeletePteRun @ 0x140298E00 (MiDeletePteRun.c)
 *     MiDeleteBatch @ 0x14029A5F0 (MiDeleteBatch.c)
 *     MiDeleteTransitionPte @ 0x14029A9D0 (MiDeleteTransitionPte.c)
 *     MiLockPageTablePage @ 0x1402A83C0 (MiLockPageTablePage.c)
 *     MiReleasePageFileSpace @ 0x1402AB620 (MiReleasePageFileSpace.c)
 *     MiStoreMarkLockedPagesModified @ 0x14030FB40 (MiStoreMarkLockedPagesModified.c)
 *     MiReleaseWsSwapReservationPfn @ 0x14032A1DC (MiReleaseWsSwapReservationPfn.c)
 *     MiStoreWriteModifiedPages @ 0x14034DC5C (MiStoreWriteModifiedPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiPurgeImageSection @ 0x1403A1EA4 (MiPurgeImageSection.c)
 *     MiSetPagesModified @ 0x14052F590 (MiSetPagesModified.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCapturePageFileInfoInline(unsigned __int64 *a1, int a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v3 = *a1;
  if ( (*a1 & 4) != 0 )
  {
    result = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
    if ( a2 )
      *a1 = v3 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( !a3 )
      return result & 0xFFFFFFFFFFFFFFFDuLL;
  }
  else if ( a3 && (v3 & 2) != 0 )
  {
    return MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  }
  else
  {
    return 0LL;
  }
  return result;
}
