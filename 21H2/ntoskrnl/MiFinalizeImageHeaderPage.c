/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x140298F3C
 * Callers:
 *     MiCreateNewSection @ 0x1406A9EA0 (MiCreateNewSection.c)
 * Callees:
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiGetSlabPage @ 0x14029938C (MiGetSlabPage.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiUseSlabAllocator @ 0x140322EE8 (MiUseSlabAllocator.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCheckSlabPage @ 0x14037CB20 (MiCheckSlabPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFinalizeImageHeaderPage(ULONG_PTR a1)
{
  _QWORD *v1; // r14
  __int64 v2; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned int v8; // esi
  __int64 SlabPage; // rax
  unsigned __int64 v10; // rsi
  __int64 result; // rax
  int IsPfnFromSlabAllocation; // eax
  __int64 v13; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v16; // zf
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 16);
  v17 = 0;
  if ( qword_140C4DF80 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C4DF80;
  v4 = v2 >> 16;
  v5 = 0LL;
  v6 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
  if ( (unsigned int)MiUseSlabAllocator(v6, v4, *v1, &v17) )
  {
    v8 = (*(unsigned __int16 *)(v7 + 32) >> 1) & 0x1F;
    if ( !(unsigned int)MiIsPfnFromSlabAllocation(a1) || !(unsigned int)MiCheckSlabPage(a1, v17, v8) && !v17 )
    {
      SlabPage = MiGetSlabPage(v6, v8, v17, -1, 0x20000);
      if ( SlabPage != -1 )
        v5 = 48 * SlabPage - 0x58000000000LL;
    }
  }
  v10 = (unsigned __int8)MiLockPageInline(a1);
  MiRemoveLockedPageChargeAndDecRef(a1);
  if ( v5 && !*(_WORD *)(a1 + 32) )
  {
    IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(a1);
    MiReplaceTransitionPage(a1, v5, IsPfnFromSlabAllocation, 0LL);
    *v1 = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v1, v13);
    v5 = a1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  if ( v5 )
    return MiReleaseFreshPage(v5);
  return result;
}
