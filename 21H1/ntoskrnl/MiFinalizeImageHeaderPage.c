/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x140325CD8
 * Callers:
 *     MiCreateNewSection @ 0x140643004 (MiCreateNewSection.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiUseSlabAllocator @ 0x14027AFD8 (MiUseSlabAllocator.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402802F0 (MiIsPfnFromSlabAllocation.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiGetSlabPage @ 0x140326128 (MiGetSlabPage.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiCheckSlabPage @ 0x14037A290 (MiCheckSlabPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFinalizeImageHeaderPage(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 *v1; // r14
  __int64 v2; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // esi
  __int64 SlabPage; // rax
  unsigned __int64 v11; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v15; // zf
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = (unsigned __int64 *)(BugCheckParameter2 + 16);
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  v16 = 0;
  if ( qword_140C4DE80 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C4DE80;
  v4 = v2 >> 16;
  v5 = 0LL;
  v6 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
  if ( (unsigned int)MiUseSlabAllocator(v6, (_BYTE *)v4, *v1, &v16) )
  {
    v9 = (*(unsigned __int16 *)(v7 + 32) >> 1) & 0x1F;
    if ( !MiIsPfnFromSlabAllocation(BugCheckParameter2)
      || !(unsigned int)MiCheckSlabPage(BugCheckParameter2, v16, v9) && !v16 )
    {
      SlabPage = MiGetSlabPage(v6, v9, v16, -1, 0x20000);
      if ( SlabPage != -1 )
        v5 = 48 * SlabPage - 0x58000000000LL;
    }
  }
  v11 = (unsigned __int8)MiLockPageInline(BugCheckParameter2, v7, v8);
  MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2);
  if ( v5 && !*(_WORD *)(BugCheckParameter2 + 32) )
  {
    MiIsPfnFromSlabAllocation(BugCheckParameter2);
    MiReplaceTransitionPage(BugCheckParameter2);
    *v1 = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v1);
    v5 = BugCheckParameter2;
  }
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  if ( v5 )
    return MiReleaseFreshPage(v5);
  return result;
}
