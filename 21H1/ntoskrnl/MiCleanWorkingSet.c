/*
 * XREFs of MiCleanWorkingSet @ 0x140314724
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiDrainSystemAccessLog @ 0x1402A4C10 (MiDrainSystemAccessLog.c)
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
