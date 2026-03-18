/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1408B12E4
 * Callers:
 *     PnprCompleteWake @ 0x14050D5F8 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x1408AECA0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x14030FBB0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x14031C790 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
