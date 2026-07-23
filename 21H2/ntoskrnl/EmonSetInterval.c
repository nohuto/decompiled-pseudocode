/*
 * XREFs of EmonSetInterval @ 0x140377D60
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpTimerSetProfilingTarget @ 0x140377E88 (HalpTimerSetProfilingTarget.c)
 *     HalpGetProfileDescriptor @ 0x140377EC8 (HalpGetProfileDescriptor.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EmonSetInterval(unsigned int a1, unsigned int *a2)
{
  unsigned __int64 v4; // rbx
  int ProfileDescriptor; // esi
  __int64 v6; // r8
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r8
  int v23; // eax
  __int64 v24; // [rsp+40h] [rbp+18h] BYREF

  v24 = 0LL;
  v4 = (unsigned __int8)HalpAcquireHighLevelLock(&EmonProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a1, &EmonProfileSourceDescriptorListHead, &v24);
  if ( ProfileDescriptor < 0 )
  {
    KxReleaseSpinLock(&EmonProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    return (unsigned int)ProfileDescriptor;
  }
  else
  {
    v6 = v24;
    v7 = *a2;
    v8 = *(unsigned __int8 *)(v24 + 28);
    v9 = HIDWORD(EmonProfileIntervalLimits[v8]);
    if ( *a2 < v9 )
    {
      *a2 = v9;
      v7 = v9;
    }
    v10 = EmonProfileIntervalLimits[v8];
    if ( v7 > v10 )
    {
      *a2 = v10;
      v7 = v10;
    }
    *(_DWORD *)(v6 + 24) = v7;
    KxReleaseSpinLock(&EmonProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v19 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    __writecr8(v4);
    if ( !a1 )
      HalpTimerSetProfilingTarget(*a2, *a2 * (unsigned __int64)KeGetCurrentPrcb()->MHz / 0xA);
    v11 = 16LL * EmonNumberCounters * KeGetPcr()->Prcb.Number + 8;
    if ( EmonNumberCounters )
    {
      v12 = (_DWORD *)(EmonCounterStatus + v11);
      v13 = (unsigned int)EmonNumberCounters;
      do
      {
        if ( *(v12 - 1) == a1 && !*(v12 - 2) )
          *v12 = *a2;
        v12 += 4;
        --v13;
      }
      while ( v13 );
    }
    return 0LL;
  }
}
