/*
 * XREFs of MiReturnPfnList @ 0x1403BAB10
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x1408D88B0 (MiDeleteSparseRange.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnPfnList(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r14
  unsigned __int64 v7; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v11; // eax
  bool v12; // zf

  v4 = a1;
  v5 = 0LL;
  if ( a1 )
  {
    do
    {
      v6 = *(_QWORD *)v4;
      v7 = (unsigned __int8)MiLockPageInline(
                              v4,
                              (unsigned __int128)((v4 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64,
                              a3,
                              SchedulerAssist);
      *(_WORD *)(v4 + 32) = 0;
      *(_QWORD *)(v4 + 24) &= 0xC000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((v4 + 0x58000000000LL) / 48, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
            a3 = (unsigned int)v11 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v7);
      ++v5;
      v4 = v6;
    }
    while ( v6 );
  }
  return v5;
}
