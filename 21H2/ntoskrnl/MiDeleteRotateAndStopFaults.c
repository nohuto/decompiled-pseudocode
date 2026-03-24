/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x140298624
 * Callers:
 *     MmRotatePhysicalView @ 0x140682910 (MmRotatePhysicalView.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x1402FE580 (MiDeleteVirtualAddresses.c)
 */

__int64 __fastcall MiDeleteRotateAndStopFaults(__int64 a1, __int64 a2, _QWORD *a3)
{
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  _BYTE v10[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *a3 = Process[1].Affinity.Bitmap[9];
  Process[1].Affinity.Bitmap[9] = (unsigned __int64)a3;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], v8);
  return MiDeleteVirtualAddresses(a1, a2, 0LL, v10);
}
