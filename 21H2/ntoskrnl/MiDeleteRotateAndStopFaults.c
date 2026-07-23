/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x1402190A4
 * Callers:
 *     MmRotatePhysicalView @ 0x1405E48E0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x1403092D0 (MiDeleteVirtualAddresses.c)
 */

__int64 __fastcall MiDeleteRotateAndStopFaults(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  _KPROCESS *Process; // rdi
  __int64 SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int64 v9; // rdx
  _BYTE v11[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm(&Process[1].ActiveProcessorsPadding[6], a2);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v9 = Process[1].Affinity.Bitmap[9];
  *a3 = v9;
  LOBYTE(v9) = v8;
  Process[1].Affinity.Bitmap[9] = (unsigned __int64)a3;
  MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessorsPadding[6], v9);
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _BYTE *))MiDeleteVirtualAddresses)(a1, a2, 0LL, v11);
}
