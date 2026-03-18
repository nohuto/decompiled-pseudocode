/*
 * XREFs of MmEnableProcessSvm @ 0x1405277C0
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1405B1CF0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
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
