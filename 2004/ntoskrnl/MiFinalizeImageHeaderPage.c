/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x1402E0BD8
 * Callers:
 *     MiCreateNewSection @ 0x14060DEB4 (MiCreateNewSection.c)
 * Callees:
 *     MiUseSlabAllocator @ 0x140221F88 (MiUseSlabAllocator.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetSlabPage @ 0x1402E1028 (MiGetSlabPage.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MiCheckSlabPage @ 0x14037B010 (MiCheckSlabPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFinalizeImageHeaderPage(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 *v1; // r14
  __int64 v2; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdx
  unsigned int v8; // esi
  __int64 SlabPage; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v20; // zf
  unsigned int v21; // [rsp+60h] [rbp+8h] BYREF

  v1 = (unsigned __int64 *)(BugCheckParameter2 + 16);
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  v21 = 0;
  if ( qword_140C4DD40 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C4DD40;
  v4 = v2 >> 16;
  v5 = 0LL;
  v6 = *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
  if ( (unsigned int)MiUseSlabAllocator(v6, (_BYTE *)v4, *v1, &v21) )
  {
    v8 = (*(unsigned __int16 *)(v7 + 32) >> 1) & 0x1F;
    if ( !MiIsPfnFromSlabAllocation(BugCheckParameter2)
      || !(unsigned int)MiCheckSlabPage(BugCheckParameter2, v21, v8) && !v21 )
    {
      SlabPage = MiGetSlabPage(v6, v8, v21, -1, 0x20000);
      if ( SlabPage != -1 )
        v5 = 48 * SlabPage - 0x58000000000LL;
    }
  }
  v10 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
  MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2, v11, v12, v13);
  if ( v5 && !*(_WORD *)(BugCheckParameter2 + 32) )
  {
    MiIsPfnFromSlabAllocation(BugCheckParameter2);
    MiReplaceTransitionPage(BugCheckParameter2);
    *v1 = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v1, v15, v16, v17);
    v5 = BugCheckParameter2;
  }
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
        v20 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v20 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  if ( v5 )
    return MiReleaseFreshPage(v5);
  return result;
}
