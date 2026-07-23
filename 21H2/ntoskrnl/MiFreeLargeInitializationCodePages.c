/*
 * XREFs of MiFreeLargeInitializationCodePages @ 0x1403BD3F0
 * Callers:
 *     MiFreeInitializationCode @ 0x14075EE2C (MiFreeInitializationCode.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiReturnFreeZeroPage @ 0x14030DDA0 (MiReturnFreeZeroPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B63A4 (MiAddExpansionNonPagedPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiFreeLargeInitializationCodePages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 i; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v12; // eax
  bool v13; // zf

  if ( MiIsPfnFromSlabAllocation(a1) )
  {
    for ( i = 48 * a3 + a1; a3; --a3 )
    {
      i -= 48LL;
      v9 = (unsigned __int8)MiLockPageInline(i, v5, v6, SchedulerAssist);
      *(_BYTE *)(i + 34) = *(_BYTE *)(i + 34) & 0xF8 | 5;
      *(_QWORD *)(i + 16) = 0LL;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(i + 16));
      MiReturnFreeZeroPage(i);
      _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v5 = -1LL << ((unsigned __int8)v9 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)v5;
            v13 = (v12 & SchedulerAssist[5]) == 0;
            v6 = (unsigned int)v12 & SchedulerAssist[5];
            SchedulerAssist[5] = v6;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
  }
  else
  {
    MiAddExpansionNonPagedPool(v6, a3);
  }
}
