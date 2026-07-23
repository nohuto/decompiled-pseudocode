/*
 * XREFs of MiReturnFullProcessCommitment @ 0x140705C18
 * Callers:
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MiCommitExistingVad @ 0x1402BD690 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1402BFDE0 (MiMakeHyperRangeAccessible.c)
 *     MiSplitPrivatePage @ 0x140317D00 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 *     MiCopyToUserVa @ 0x140319288 (MiCopyToUserVa.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiSplitReducedCommitClonePage @ 0x140530FD4 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EE0C (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneVads @ 0x140559568 (MiCloneVads.c)
 *     MiDeleteVadBitmap @ 0x14067C9A4 (MiDeleteVadBitmap.c)
 *     MiReturnPageTablePageCommitment @ 0x140705D70 (MiReturnPageTablePageCommitment.c)
 *     MiFreeLargePageView @ 0x1408DA470 (MiFreeLargePageView.c)
 * Callees:
 *     MiGetProcessPartition @ 0x1402BF640 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1403230C0 (MiReturnFullProcessCharges.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2);
  return MiReturnFullProcessCharges(a1, a2);
}
