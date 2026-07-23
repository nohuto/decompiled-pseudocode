/*
 * XREFs of MiCleanWorkingSet @ 0x1402426E4
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14070262C (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiDrainSystemAccessLog @ 0x14027D0F0 (MiDrainSystemAccessLog.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiCleanWorkingSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 SharedVm; // rbx
  KIRQL v5; // al
  KIRQL v6; // di
  __int64 v7; // rbx
  __int64 v8; // rdx

  v2 = a1 + 1664;
  SharedVm = MiGetSharedVm(a1 + 1664, a2);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v6 = v5;
  *(_BYTE *)(v2 + 187) |= 1u;
  --*(_QWORD *)(a1 + 1272);
  MiDrainSystemAccessLog(v2);
  v7 = *(_QWORD *)(v2 + 112);
  LOBYTE(v8) = v6;
  MiUnlockWorkingSetExclusive(v2, v8);
  return v7 - 4;
}
