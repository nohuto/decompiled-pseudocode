/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x1402E7BEC
 * Callers:
 *     MiCreateNewSection @ 0x1406D2BC0 (MiCreateNewSection.c)
 * Callees:
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiGetSlabPage @ 0x1402E803C (MiGetSlabPage.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiIsPfnFromSlabAllocation @ 0x140302EF0 (MiIsPfnFromSlabAllocation.c)
 *     MiUseSlabAllocator @ 0x140318198 (MiUseSlabAllocator.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140329F30 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCheckSlabPage @ 0x14037CFD0 (MiCheckSlabPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFinalizeImageHeaderPage(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v1; // r14
  __int64 v2; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // esi
  __int64 SlabPage; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 SchedulerAssist; // r8
  __int64 result; // rax
  int IsPfnFromSlabAllocation; // eax
  struct _KPRCB *CurrentPrcb; // r9
  bool v17; // zf
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF

  v1 = (_QWORD *)(BugCheckParameter2 + 16);
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  v18 = 0;
  if ( qword_140C4DF40 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C4DF40;
  v4 = v2 >> 16;
  v5 = 0LL;
  v6 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
  if ( (unsigned int)MiUseSlabAllocator(v6, v4, *v1, &v18) )
  {
    v9 = (*(unsigned __int16 *)(v7 + 32) >> 1) & 0x1F;
    if ( !(unsigned int)MiIsPfnFromSlabAllocation(BugCheckParameter2)
      || !(unsigned int)MiCheckSlabPage(BugCheckParameter2, v18, v9) && !v18 )
    {
      SlabPage = MiGetSlabPage(v6, v9, v18, -1, 0x20000);
      if ( SlabPage != -1 )
        v5 = 48 * SlabPage - 0x58000000000LL;
    }
  }
  v11 = (unsigned __int8)MiLockPageInline(BugCheckParameter2, v7, v8);
  MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2);
  if ( v5 && !*(_WORD *)(BugCheckParameter2 + 32) )
  {
    IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(BugCheckParameter2);
    MiReplaceTransitionPage(BugCheckParameter2, v5, IsPfnFromSlabAllocation, 0LL);
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
        SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
        v17 = ((unsigned int)result & *(_DWORD *)(SchedulerAssist + 20)) == 0;
        v12 = (unsigned int)result & *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = v12;
        if ( v17 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  if ( v5 )
    return MiReleaseFreshPage(v5, v12, SchedulerAssist);
  return result;
}
