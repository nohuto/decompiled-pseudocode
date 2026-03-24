/*
 * XREFs of MmMapHotPatchTablePage @ 0x14053F4B0
 * Callers:
 *     PsDispatchIumService @ 0x140582CF4 (PsDispatchIumService.c)
 * Callees:
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiMakeTransitionPte @ 0x14032E9B0 (MiMakeTransitionPte.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MmMapHotPatchTablePage(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  _DWORD *v7; // r9
  int v8; // r15d
  unsigned __int64 *v9; // rdi
  __int64 v10; // rsi
  unsigned __int8 v11; // al
  char v12; // cl
  unsigned __int64 v13; // rbp
  __int64 ContainingPageTable; // rax
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  char v21; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  unsigned __int64 result; // rax

  if ( (unsigned int)MiGetSystemRegionType(a1) == 1 )
  {
    v8 = 1;
    v7 = (_DWORD *)(*(_DWORD *)(a3 + 64) >> 12);
    v9 = (unsigned __int64 *)(*(_QWORD *)(a3 + 288)
                            + 8
                            * ((__int64)(((a1 >> 9) & 0x7FFFFFFFF8LL)
                                       - 8LL * ((unsigned int)v7 + ((*(_DWORD *)(a3 + 64) & 0xFFF) != 0))
                                       - ((*(_QWORD *)(a3 + 48) >> 9) & 0x7FFFFFFFF8LL)) >> 3));
  }
  else
  {
    v8 = 0;
    v9 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  }
  v10 = 48 * a2 - 0x58000000000LL;
  v11 = MiLockPageInline(v10, 0x7FFFFFFFF8LL, v6, v7);
  v12 = *(_BYTE *)(v10 + 34) | 0x10;
  v13 = v11;
  *(_QWORD *)(v10 + 24) &= ~0x4000000000000000uLL;
  *(_BYTE *)(v10 + 34) = v12;
  ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v9);
  *(_QWORD *)(v10 + 40) ^= (*(_QWORD *)(v10 + 40) ^ ContainingPageTable) & 0xFFFFFFFFFLL;
  v15 = 48 * ContainingPageTable - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v15, 0xFFFFFFFFFLL, v16, v17);
  *(_QWORD *)(v15 + 24) ^= ((*(_QWORD *)(v15 + 24) + 1LL) ^ *(_QWORD *)(v15 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v10 + 16) = MiSwizzleInvalidPte(32LL);
  *(_QWORD *)(v10 + 8) = v9;
  if ( v8 )
  {
    v20 = *(_QWORD *)(v10 + 24);
    *(_QWORD *)(v10 + 40) |= 0x8000000000000000uLL;
    v21 = *(_BYTE *)(v10 + 34) & 0xF8 | 3;
    *(_QWORD *)(v10 + 24) = v20 ^ v19 & ((v20 - 1) ^ v20);
    *(_BYTE *)(v10 + 34) = v21;
  }
  else
  {
    ++*(_WORD *)(v10 + 32);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), v18);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v26 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v13);
  if ( v8 )
    result = MiMakeTransitionPte(a2, 1);
  else
    result = MiMakeValidPte((unsigned __int64)v9, a2, 536870913);
  *v9 = result;
  return result;
}
