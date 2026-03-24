/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1408AE8B4
 * Callers:
 *     PnprCompleteWake @ 0x14050F128 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x1408AC270 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x1402B0640 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x14031AA10 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
