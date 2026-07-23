/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x14038973C
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1407784E0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiDeleteWorkingSetList @ 0x140273DF8 (MiDeleteWorkingSetList.c)
 *     MiDrainSystemAccessLog @ 0x14027D0F0 (MiDrainSystemAccessLog.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 *     MiAttemptCoalesce @ 0x140353C10 (MiAttemptCoalesce.c)
 *     MiIncrementPfn @ 0x1403A7A5C (MiIncrementPfn.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F4448 (MiDeleteTopLevelSessionMapping.c)
 */

__int64 __fastcall MiDeleteSessionAddressSpace(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // r14
  __int64 result; // rax
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
  MiIncrementPfn(48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  MiDrainSystemAccessLog(a1 + 256, v5, v6, v7);
  SharedVm = MiGetSharedVm(a1 + 256);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    MiDeleteWorkingSetList(a1 + 256);
  MiUnlockWorkingSetExclusive(a1 + 256, v10);
  MiAttemptCoalesce(a1 + 880, *(_QWORD *)(a1 + 952), *(_QWORD *)(a1 + 880) - *(_QWORD *)(a1 + 952));
  MiDeletePagablePteRange(a1 + 256, 0x11u, qword_140C4DE18, qword_140C4DE18 + 0x7FFFFFFFFFLL, 0, 0, a2);
  result = MiDeleteTopLevelSessionMapping(a1);
  --a2[1];
  return result;
}
