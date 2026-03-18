/*
 * XREFs of PnprUnlockPagesForReplace @ 0x1408AA494
 * Callers:
 *     PnprCompleteWake @ 0x140509678 (PnprCompleteWake.c)
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExNotifyCallback @ 0x1403005D0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x14030E2F0 (MmUnlockPagableImageSection.c)
 */

void PnprUnlockPagesForReplace()
{
  MmUnlockPagableImageSection(ExPageLockHandle);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
}
