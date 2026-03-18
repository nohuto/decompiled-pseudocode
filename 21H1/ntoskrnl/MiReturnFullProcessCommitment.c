/*
 * XREFs of MiReturnFullProcessCommitment @ 0x14062FA68
 * Callers:
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiMakeHyperRangeAccessible @ 0x14021AAC0 (MiMakeHyperRangeAccessible.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MiCopyToUserVa @ 0x1402AD900 (MiCopyToUserVa.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x1402AE8B8 (MiSplitPrivatePage.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B274 (MiSplitReducedCommitClonePage.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405390AC (MiPrepareImagePagesForHotPatch.c)
 *     MiCloneVads @ 0x140553838 (MiCloneVads.c)
 *     MiReturnPageTablePageCommitment @ 0x14063D620 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x140662AF8 (MiDeleteVadBitmap.c)
 *     MiFreeLargePageView @ 0x1408D59C0 (MiFreeLargePageView.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14021A6D0 (MiGetProcessPartition.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x14027D4B0 (MiReturnFullProcessCharges.c)
 */

__int64 __fastcall MiReturnFullProcessCommitment(__int64 a1, __int64 a2)
{
  __int64 ProcessPartition; // rax

  ProcessPartition = MiGetProcessPartition(a1);
  MiReturnCommit(ProcessPartition, a2);
  return MiReturnFullProcessCharges(a1, a2);
}
