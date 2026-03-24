/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x1403895EC
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140778320 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiDrainSystemAccessLog @ 0x14025BB80 (MiDrainSystemAccessLog.c)
 *     MiDeleteWorkingSetList @ 0x140296D10 (MiDeleteWorkingSetList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeletePagablePteRange @ 0x140337360 (MiDeletePagablePteRange.c)
 *     MiAttemptCoalesce @ 0x140348EC0 (MiAttemptCoalesce.c)
 *     MiIncrementPfn @ 0x1403A790C (MiIncrementPfn.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F4448 (MiDeleteTopLevelSessionMapping.c)
 */

__int64 __fastcall MiDeleteSessionAddressSpace(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  unsigned __int8 v9; // r14
  __int64 result; // rax
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
  MiIncrementPfn(48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  MiDrainSystemAccessLog(a1 + 256, v5, v6);
  SharedVm = MiGetSharedVm(a1 + 256);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = v8;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    MiDeleteWorkingSetList(a1 + 256);
  MiUnlockWorkingSetExclusive(a1 + 256, v9);
  MiAttemptCoalesce(a1 + 880, *(_QWORD *)(a1 + 952), *(_QWORD *)(a1 + 880) - *(_QWORD *)(a1 + 952));
  MiDeletePagablePteRange(a1 + 256, 0x11u, qword_140C4DDD8, qword_140C4DDD8 + 0x7FFFFFFFFFLL, 0, 0, a2);
  result = MiDeleteTopLevelSessionMapping(a1);
  --a2[1];
  return result;
}
