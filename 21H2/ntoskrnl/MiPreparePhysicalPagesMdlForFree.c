/*
 * XREFs of MiPreparePhysicalPagesMdlForFree @ 0x14054D2EC
 * Callers:
 *     NtFreeUserPhysicalPages @ 0x1408D6960 (NtFreeUserPhysicalPages.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPreparePhysicalPagesMdlForFree(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 SchedulerAssist)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // r10
  unsigned int v6; // eax
  __int64 v7; // r15
  unsigned __int64 v8; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 v10; // rbx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  __int64 result; // rax
  int v20; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 44) = 0;
  v4 = (_QWORD *)(a1 + 48);
  if ( a2 == 1 )
  {
    v6 = *(_DWORD *)(a1 + 40);
  }
  else
  {
    a3 = (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12;
    v5 = &v4[a2 * a3];
    do
    {
      --a3;
      v5 -= a2;
      SchedulerAssist = 1LL;
      for ( *v5 = v4[a3]; SchedulerAssist < a2; ++SchedulerAssist )
        v5[SchedulerAssist] = v5[SchedulerAssist - 1] + 1LL;
    }
    while ( a3 );
    v6 = a2 * *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v6;
  }
  v7 = 0LL;
  v8 = (unsigned __int64)v6 >> 12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | *(_DWORD *)(SchedulerAssist + 20);
    *(_DWORD *)(SchedulerAssist + 20) = a3;
  }
  for ( ; v8; --v8 )
  {
    v10 = 48LL * *v4 - 0x58000000000LL;
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v20, a2, a3, SchedulerAssist);
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
    *(_QWORD *)(v10 + 24) = *(_QWORD *)(v10 + 24) & 0x8000000000000000uLL | 1;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (++v7 & 0x3F) == 0 && KeShouldYieldProcessor() )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v11 = KeGetCurrentIrql();
          if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a2 = -1LL << (CurrentIrql + 1);
            SchedulerAssist = (unsigned __int64)CurrentPrcb->SchedulerAssist;
            v13 = ~(unsigned __int16)a2;
            v14 = (v13 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
            a3 = (unsigned int)v13 & *(_DWORD *)(SchedulerAssist + 20);
            *(_DWORD *)(SchedulerAssist + 20) = a3;
            if ( v14 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = (unsigned __int64)KeGetCurrentPrcb()->SchedulerAssist;
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
        a3 = (unsigned int)a2 | *(_DWORD *)(SchedulerAssist + 20);
        *(_DWORD *)(SchedulerAssist + 20) = a3;
      }
    }
    ++v4;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
