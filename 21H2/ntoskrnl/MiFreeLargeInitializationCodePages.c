/*
 * XREFs of MiFreeLargeInitializationCodePages @ 0x1403CB284
 * Callers:
 *     MiFreeInitializationCode @ 0x14075F23C (MiFreeInitializationCode.c)
 * Callees:
 *     MiReturnFreeZeroPage @ 0x14026845C (MiReturnFreeZeroPage.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiAddExpansionNonPagedPool @ 0x1403C3290 (MiAddExpansionNonPagedPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiFreeLargeInitializationCodePages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 i; // rdi
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  if ( MiIsPfnFromSlabAllocation(a1) )
  {
    for ( i = 48 * a3 + a1; a3; --a3 )
    {
      i -= 48LL;
      v7 = (unsigned __int8)MiLockPageInline(i);
      *(_BYTE *)(i + 34) = *(_BYTE *)(i + 34) & 0xF8 | 5;
      *(_QWORD *)(i + 16) = 0LL;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(i + 16));
      MiReturnFreeZeroPage(i, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v12 = (v11 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v11;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
    }
  }
  else
  {
    MiAddExpansionNonPagedPool(v5, a3);
  }
}
