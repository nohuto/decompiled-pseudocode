/*
 * XREFs of MiCleanWorkingSet @ 0x1402C4164
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1406EB24C (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiDrainSystemAccessLog @ 0x14025BB80 (MiDrainSystemAccessLog.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1)
{
  __int64 v1; // rbp
  LONG *SharedVm; // rbx
  KIRQL v4; // al
  unsigned __int8 v5; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rbx

  v1 = a1 + 1664;
  SharedVm = MiGetSharedVm(a1 + 1664);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v5 = v4;
  LOBYTE(v6) = *(_BYTE *)(v1 + 187) | 1;
  *(_BYTE *)(v1 + 187) = v6;
  --*(_QWORD *)(a1 + 1272);
  MiDrainSystemAccessLog(v1, v6, v7);
  v8 = *(_QWORD *)(v1 + 112);
  MiUnlockWorkingSetExclusive(v1, v5);
  return v8 - 4;
}
