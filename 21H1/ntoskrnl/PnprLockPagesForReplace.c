/*
 * XREFs of PnprLockPagesForReplace @ 0x1408A9BA4
 * Callers:
 *     PnprQuiesce @ 0x140509C68 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x1408A7E50 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x1409AAF90 (PnprQuiesceWorker.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x14027D910 (MiLockPagableImageSection.c)
 *     ExNotifyCallback @ 0x1403005D0 (ExNotifyCallback.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
