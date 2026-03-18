/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x1402FB4A4
 * Callers:
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x1402AB020 (MiDeleteVirtualAddresses.c)
 */

signed __int64 __fastcall MiDeleteRotateAndStopFaults(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  _QWORD v10[6]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *a3 = Process[1].Affinity.Bitmap[9];
  Process[1].Affinity.Bitmap[9] = (unsigned __int64)a3;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], v8);
  return MiDeleteVirtualAddresses(a1, a2, 0, v10);
}
