/*
 * XREFs of MiReturnBadPagesToBadList @ 0x14052F238
 * Callers:
 *     MiRemoveBadPages @ 0x14052EE08 (MiRemoveBadPages.c)
 *     MmRemovePhysicalMemory @ 0x1408C64D0 (MmRemovePhysicalMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReturnBadPagesToBadList(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v9; // eax
  bool v10; // zf

  if ( a2 )
  {
    v4 = a2;
    v5 = 48 * a1 - 0x58000000000LL;
    do
    {
      v6 = (unsigned __int8)MiLockPageInline(v5, a2, a3, SchedulerAssist);
      if ( !*(_QWORD *)(v5 + 8) )
        *(_QWORD *)(v5 + 8) = -4LL;
      *(_WORD *)(v5 + 32) = 0;
      *(_QWORD *)(v5 + 40) &= 0xFFFFFFF000000000uLL;
      MiInsertPageInList(v5, 0x20u);
      _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a2 = -1LL << ((unsigned __int8)v6 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v9 = ~(unsigned __int16)a2;
            v10 = (v9 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v9 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v10 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
      v5 += 48LL;
      --v4;
    }
    while ( v4 );
  }
}
