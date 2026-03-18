/*
 * XREFs of MiReturnPfnList @ 0x1403C2A5C
 * Callers:
 *     MiInitializeDynamicBitmap @ 0x14082B1B4 (MiInitializeDynamicBitmap.c)
 *     MiDeleteSparseRange @ 0x14097E850 (MiDeleteSparseRange.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReturnPfnList(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // r14
  unsigned __int64 v4; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v1 = a1;
  v2 = 0LL;
  if ( a1 )
  {
    do
    {
      v3 = *(_QWORD *)v1;
      v4 = (unsigned __int8)MiLockPageInline(v1);
      *(_WORD *)(v1 + 32) = 0;
      *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((v1 + 0x220000000000LL) >> 4), 2);
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
            v10 = (v9 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v9;
            if ( v10 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v4);
      ++v2;
      v1 = v3;
    }
    while ( v3 );
  }
  return v2;
}
