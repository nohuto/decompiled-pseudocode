/*
 * XREFs of PnprLockPagesForReplace @ 0x1408ADFC4
 * Callers:
 *     PnprQuiesce @ 0x14050F718 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x1408AC270 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x1409AEC60 (PnprQuiesceWorker.c)
 * Callees:
 *     ExNotifyCallback @ 0x1402B0640 (ExNotifyCallback.c)
 *     MiLockPagableImageSection @ 0x14031C4F0 (MiLockPagableImageSection.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
