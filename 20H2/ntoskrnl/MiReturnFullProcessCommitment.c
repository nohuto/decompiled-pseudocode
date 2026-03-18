/*
 * XREFs of MiReturnFullProcessCommitment @ 0x14062645C
 * Callers:
 *     MiCopyToUserVa @ 0x140234540 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x1402354F8 (MiSplitPrivatePage.c)
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x14027CCC0 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiSplitReducedCommitClonePage @ 0x14052F294 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053D0CC (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneVads @ 0x140557858 (MiCloneVads.c)
 *     MiReturnPageTablePageCommitment @ 0x1406265B0 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x1406602C0 (MiDeleteVadBitmap.c)
 *     MiFreeLargePageView @ 0x1408DCB50 (MiFreeLargePageView.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1402303D0 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x14027C520 (MiGetProcessPartition.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2);
  return MiReturnFullProcessCharges(a1, a2);
}
