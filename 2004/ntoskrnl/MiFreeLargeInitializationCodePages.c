/*
 * XREFs of MiFreeLargeInitializationCodePages @ 0x1403BA2F0
 * Callers:
 *     MiFreeInitializationCode @ 0x1407491CC (MiFreeInitializationCode.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiReturnFreeZeroPage @ 0x14031C568 (MiReturnFreeZeroPage.c)
 *     MiAddExpansionNonPagedPool @ 0x1403B2244 (MiAddExpansionNonPagedPool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiFreeLargeInitializationCodePages(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 i; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v15; // eax
  bool v16; // zf

  if ( MiIsPfnFromSlabAllocation(a1) )
  {
    for ( i = 48 * a3 + a1; a3; --a3 )
    {
      i -= 48LL;
      v9 = (unsigned __int8)MiLockPageInline(i, v5, v6, SchedulerAssist);
      *(_BYTE *)(i + 34) = *(_BYTE *)(i + 34) & 0xF8 | 5;
      *(_QWORD *)(i + 16) = 0LL;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(i + 16), v10, v11, v12);
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
            v15 = ~(unsigned __int16)v5;
            v16 = (v15 & SchedulerAssist[5]) == 0;
            v6 = (unsigned int)v15 & SchedulerAssist[5];
            SchedulerAssist[5] = v6;
            if ( v16 )
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
