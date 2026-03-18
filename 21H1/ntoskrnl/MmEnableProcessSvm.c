/*
 * XREFs of MmEnableProcessSvm @ 0x140527170
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1405B15D0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
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
