/*
 * XREFs of MmEnableProcessSvm @ 0x14052B190
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1405B5850 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 */

void MmEnableProcessSvm()
{
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v2; // al

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v2 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  HIBYTE(Process[1].IdealProcessorPadding[11]) |= 2u;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], v2);
}
