/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x140216B04
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140693A28 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiDeleteWorkingSetList @ 0x140216D54 (MiDeleteWorkingSetList.c)
 *     MiDrainSystemAccessLog @ 0x1402829D0 (MiDrainSystemAccessLog.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiDeleteSessionAddressSpace(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // r14
  int v9; // edx

  v2 = a1 + 192;
  MiDrainSystemAccessLog(a1 + 192);
  SharedVm = MiGetSharedVm(v2);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
  *(_DWORD *)(SharedVm + 4) = 0;
  v8 = v6;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    MiDeleteWorkingSetList(v2);
  LOBYTE(v7) = v8;
  MiUnlockWorkingSetExclusive(v2, v7);
  LOBYTE(v9) = 17;
  return MiDeletePagablePteRange(v2, v9, 0, qword_140C50630, qword_140C50630 + 0x7FFFFFFFFFLL, 0, 0, a2);
}
