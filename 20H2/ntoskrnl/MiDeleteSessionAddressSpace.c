/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x140388E8C
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140774370 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiAttemptCoalesce @ 0x14021EF70 (MiAttemptCoalesce.c)
 *     MiDrainSystemAccessLog @ 0x1402330C0 (MiDrainSystemAccessLog.c)
 *     MiDeleteWorkingSetList @ 0x140262EF8 (MiDeleteWorkingSetList.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     MiIncrementPfn @ 0x1403A704C (MiIncrementPfn.c)
 *     MiDeleteTopLevelSessionMapping @ 0x1403F2C00 (MiDeleteTopLevelSessionMapping.c)
 *     MiIsPteCachingOptimizationEnabled @ 0x1403F4274 (MiIsPteCachingOptimizationEnabled.c)
 */

__int64 __fastcall MiDeleteSessionAddressSpace(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v4; // rax
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned __int8 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v12);
  MiIncrementPfn(48 * ((v4 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  MiDrainSystemAccessLog(a1 + 256);
  SharedVm = MiGetSharedVm(a1 + 256);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v7 = v6;
  if ( (*(_DWORD *)(a1 + 4) & 0x10) != 0 )
    MiDeleteWorkingSetList(a1 + 256);
  MiUnlockWorkingSetExclusive(a1 + 256, v7);
  if ( (unsigned int)MiIsPteCachingOptimizationEnabled(v9, v8, v10) )
    MiAttemptCoalesce(a1 + 880, *(_QWORD *)(a1 + 952), *(_QWORD *)(a1 + 880) - *(_QWORD *)(a1 + 952));
  MiDeletePagablePteRange(a1 + 256, 0x11u, qword_140C4DC58, qword_140C4DC58 + 0x7FFFFFFFFFLL, 0, 0, a2);
  result = MiDeleteTopLevelSessionMapping(a1);
  --a2[1];
  return result;
}
