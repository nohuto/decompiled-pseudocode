/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1408AEA14
 * Callers:
 *     PnprCompleteWake @ 0x14050F368 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x14022E9A0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x140325760 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
