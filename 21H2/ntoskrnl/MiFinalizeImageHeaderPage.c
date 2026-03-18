/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x1402EB1A0
 * Callers:
 *     MiCreateNewSection @ 0x1406F914C (MiCreateNewSection.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiGetPfnChannel @ 0x1402E8990 (MiGetPfnChannel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetSlabPage @ 0x1402EB440 (MiGetSlabPage.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiUseSlabAllocator @ 0x140313D20 (MiUseSlabAllocator.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCheckSlabPage @ 0x1403B1DEC (MiCheckSlabPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFinalizeImageHeaderPage(ULONG_PTR a1)
{
  unsigned __int64 *v1; // r15
  __int64 v2; // rbx
  unsigned __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // esi
  int v8; // edi
  int PfnChannel; // eax
  __int64 SlabPage; // rax
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  BOOL IsPfnFromSlabAllocation; // eax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v16; // zf
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h]

  v1 = (unsigned __int64 *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 16);
  v17 = 0;
  if ( qword_140C50780 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C50780;
  v4 = *v1;
  v5 = v2 >> 16;
  v6 = 0LL;
  v18 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(*(_QWORD *)v5 + 60LL) & 0x3FF));
  if ( (unsigned int)MiUseSlabAllocator(v18, v5, v4, &v17)
    && (!MiIsPfnFromSlabAllocation(a1) || !(unsigned int)MiCheckSlabPage(a1, v17) && v17 <= 3) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)v5 + 56LL);
    v8 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) + 2);
    PfnChannel = MiGetPfnChannel(a1);
    SlabPage = MiGetSlabPage(
                 v18,
                 v17,
                 (PfnChannel << byte_140C506CD) | (v8 << byte_140C506CC) | (-1431655765
                                                                          * ((__int64)(a1 + 0x220000000000LL) >> 4)) & dword_140C50738,
                 (v7 & 0x7F00000) == 0 ? 2 : 0,
                 -1LL,
                 0x20000);
    if ( SlabPage != -1 )
      v6 = 48 * SlabPage - 0x220000000000LL;
  }
  v11 = (unsigned __int8)MiLockPageInline(a1);
  MiRemoveLockedPageChargeAndDecRef(a1);
  if ( v6 && !*(_WORD *)(a1 + 32) && *(char *)(a1 + 35) >= 0 && (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) <= 1u )
  {
    IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(a1);
    MiReplaceTransitionPage(a1, v6, IsPfnFromSlabAllocation, 0LL);
    *v1 = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v1);
    v6 = a1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  if ( v6 )
    return MiReleaseFreshPage(v6);
  return result;
}
