/*
 * XREFs of PnprLockPagesForReplace @ 0x1408AAEC4
 * Callers:
 *     PnprQuiesce @ 0x14050A2B8 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x1408A9170 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x1409ABDF0 (PnprQuiesceWorker.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x1402248C0 (MiLockPagableImageSection.c)
 *     ExNotifyCallback @ 0x14033CED0 (ExNotifyCallback.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
