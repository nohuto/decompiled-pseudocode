/*
 * XREFs of PnprLockPagesForReplace @ 0x1408AE124
 * Callers:
 *     PnprQuiesce @ 0x14050F958 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x1408AC3D0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x1409AFB90 (PnprQuiesceWorker.c)
 * Callees:
 *     ExNotifyCallback @ 0x14022E9A0 (ExNotifyCallback.c)
 *     MiLockPagableImageSection @ 0x140327240 (MiLockPagableImageSection.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
