/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x140385D7C
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140763920 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 *     MiDrainSystemAccessLog @ 0x1402A4C10 (MiDrainSystemAccessLog.c)
 *     MiDeleteWorkingSetList @ 0x1402D4D70 (MiDeleteWorkingSetList.c)
 *     MiIncrementPfn @ 0x1403A44CC (MiIncrementPfn.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403ED6D8 (MiDeleteTopLevelSessionMapping.c)
 */

__int64 __fastcall MiDeleteSessionAddressSpace(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rax
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned __int8 v7; // r14
  __int64 result; // rax
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9);
  MiIncrementPfn(48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  MiDrainSystemAccessLog(a1 + 256);
  SharedVm = MiGetSharedVm(a1 + 256);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = v6;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    MiDeleteWorkingSetList(a1 + 256);
  MiUnlockWorkingSetExclusive(a1 + 256, v7);
  MiDeletePagablePteRange(a1 + 256, 0x11u, qword_140C4DD18, qword_140C4DD18 + 0x7FFFFFFFFFLL, 0, 0, a2);
  result = MiDeleteTopLevelSessionMapping(a1);
  --a2[1];
  return result;
}
