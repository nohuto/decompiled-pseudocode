/*
 * XREFs of PnprLockPagesForReplace @ 0x1408B09F4
 * Callers:
 *     PnprQuiesce @ 0x14050DBE8 (PnprQuiesce.c)
 *     PnpReplacePartitionUnit @ 0x1408AECA0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x1409B1D60 (PnprQuiesceWorker.c)
 * Callees:
 *     MiLockPagableImageSection @ 0x140296DE0 (MiLockPagableImageSection.c)
 *     ExNotifyCallback @ 0x14030FBB0 (ExNotifyCallback.c)
 */

void PnprLockPagesForReplace()
{
  MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, 0LL);
}
