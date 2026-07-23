/*
 * XREFs of MiConvertSmallPageRangeToLarge @ 0x1403F6180
 * Callers:
 *     MiFreeLargePageMemory @ 0x1403093A4 (MiFreeLargePageMemory.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F6534 (MiDeleteSubsectionLargePages.c)
 *     MiRebuildLargePage @ 0x140552918 (MiRebuildLargePage.c)
 *     MiAllocateLargeZeroPages @ 0x14055DC9C (MiAllocateLargeZeroPages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403F606C (MiConvertLockedSmallPageToLarge.c)
 */

__int64 __fastcall MiConvertSmallPageRangeToLarge(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  char v4; // r12
  unsigned __int64 v5; // rbp
  BOOL v6; // r13d
  unsigned __int64 v7; // r14
  char v8; // r15
  unsigned __int8 CurrentIrql; // di
  volatile signed __int32 *v10; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  __int64 result; // rax
  int v19; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  v5 = 48 * a1 - 0x58000000000LL;
  v6 = (*(_BYTE *)(v5 + 34) & 7) != 6;
  v7 = v5 + 48 * MiLargePageSizes[(unsigned int)a2];
  v8 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  if ( v5 < v7 )
  {
    v10 = (volatile signed __int32 *)(v5 + 24);
    do
    {
      v19 = 0;
      while ( _interlockedbittestandset64(v10, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v19, a2, a3, (__int64)SchedulerAssist);
        while ( *(__int64 *)v10 < 0 );
      }
      MiConvertLockedSmallPageToLarge((__int64)(v10 - 6), v5, v4, v6);
      _InterlockedAnd64((volatile signed __int64 *)v10, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v8 & 0xF) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a2 = -1LL << (CurrentIrql + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)a2;
            v13 = (v12 & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)v12 & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          a2 = (-1LL << (CurrentIrql + 1)) & 4;
          a3 = (unsigned int)a2 | SchedulerAssist[5];
          SchedulerAssist[5] = a3;
        }
      }
      v10 += 12;
      ++v8;
    }
    while ( (unsigned __int64)(v10 - 6) < v7 );
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
