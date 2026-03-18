/*
 * XREFs of MiReturnFullProcessCommitment @ 0x1405FAA28
 * Callers:
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x140255888 (MiSplitPrivatePage.c)
 *     MiCommitExistingVad @ 0x1402AB230 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x1402AD740 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B8C4 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405396FC (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneVads @ 0x140553E88 (MiCloneVads.c)
 *     MiReturnPageTablePageCommitment @ 0x1406084D0 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x14061D3D8 (MiDeleteVadBitmap.c)
 *     MiFreeLargePageView @ 0x1408D6D10 (MiFreeLargePageView.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x140224460 (MiReturnFullProcessCharges.c)
 *     MiGetProcessPartition @ 0x1402AD1E0 (MiGetProcessPartition.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2);
  return MiReturnFullProcessCharges(a1, a2);
}
