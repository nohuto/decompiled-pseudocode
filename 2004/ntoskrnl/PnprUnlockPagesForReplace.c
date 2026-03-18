/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1408AB7B4
 * Callers:
 *     PnprCompleteWake @ 0x140509CC8 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x1408A9170 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x14033CED0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x14034B7D0 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
