/*
 * XREFs of MiFinalizeImageHeaderPage @ 0x140332CF0
 * Callers:
 *     MiCreateNewSection @ 0x140709EC4 (MiCreateNewSection.c)
 * Callees:
 *     MiUseSlabAllocator @ 0x1402301F8 (MiUseSlabAllocator.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiGetSlabPage @ 0x140332E88 (MiGetSlabPage.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiReplaceTransitionPage @ 0x140351C54 (MiReplaceTransitionPage.c)
 *     MiCheckSlabPage @ 0x14037CD40 (MiCheckSlabPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v15; // zf
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = (unsigned __int64 *)(BugCheckParameter2 + 16);
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  v16 = 0;
  if ( qword_140C4DDC0 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C4DDC0;
  v4 = v2 >> 16;
  v5 = 0LL;
  v6 = *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(*(_QWORD *)v4 + 60LL) & 0x3FF));
  if ( (unsigned int)MiUseSlabAllocator(v6, (_BYTE *)v4, *v1, &v16) )
  {
    v8 = (*(unsigned __int16 *)(v7 + 32) >> 1) & 0x1F;
    if ( !(unsigned int)MiIsPfnFromSlabAllocation(BugCheckParameter2)
      || !(unsigned int)MiCheckSlabPage(BugCheckParameter2, v16, v8) && !v16 )
    {
      SlabPage = MiGetSlabPage(v6, v8, v16, -1, 0x20000);
      if ( SlabPage != -1 )
        v5 = 48 * SlabPage - 0x58000000000LL;
    }
  }
  v10 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
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
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v10 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        v11 = (unsigned int)result & SchedulerAssist[5];
        SchedulerAssist[5] = v11;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  if ( v5 )
    return MiReleaseFreshPage(v5, v11);
  return result;
}
