/*
 * XREFs of MiCleanWorkingSet @ 0x140352534
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1405FE978 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiDrainSystemAccessLog @ 0x14024BBE0 (MiDrainSystemAccessLog.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1)
{
  __int64 v1; // rbp
  LONG *SharedVm; // rbx
  KIRQL v4; // al
  unsigned __int8 v5; // di
  __int64 v6; // rbx

  v1 = a1 + 1664;
  SharedVm = MiGetSharedVm(a1 + 1664);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v5 = v4;
  *(_BYTE *)(v1 + 187) |= 1u;
  --*(_QWORD *)(a1 + 1272);
  MiDrainSystemAccessLog(v1);
  v6 = *(_QWORD *)(v1 + 112);
  MiUnlockWorkingSetExclusive(v1, v5);
  return v6 - 4;
}
