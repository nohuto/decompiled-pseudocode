/*
 * XREFs of Amd64SetInterval @ 0x1404DE440
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpTimerSetProfilingTarget @ 0x140377E88 (HalpTimerSetProfilingTarget.c)
 *     HalpGetProfileDescriptor @ 0x140377EC8 (HalpGetProfileDescriptor.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall Amd64SetInterval(int a1, int *a2)
{
  unsigned __int64 v4; // rbx
  int ProfileDescriptor; // esi
  unsigned __int8 v6; // al
  struct _KPRCB *v7; // r10
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v20; // eax
  __int64 v21; // rdx
  int *v22; // rcx
  __int64 v23; // [rsp+40h] [rbp+18h] BYREF

  v23 = 0LL;
  v4 = HalpAcquireHighLevelLock(&Amd64ProfileSourceDescriptorListLock);
  ProfileDescriptor = HalpGetProfileDescriptor(a1, (_QWORD **)&Amd64ProfileSourceDescriptorListHead, &v23);
  if ( ProfileDescriptor >= 0 )
  {
    v12 = v23;
    v13 = *a2;
    v14 = *(unsigned __int8 *)(v23 + 28);
    v15 = HIDWORD(Amd64ProfileIntervalLimits[v14]);
    if ( *a2 < v15 )
    {
      *a2 = v15;
      v13 = v15;
    }
    v16 = Amd64ProfileIntervalLimits[v14];
    if ( v13 > v16 )
    {
      *a2 = v16;
      v13 = v16;
    }
    *(_DWORD *)(v12 + 24) = v13;
    KxReleaseSpinLock(&Amd64ProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v10 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v4);
    if ( !a1 )
      HalpTimerSetProfilingTarget(*a2, (unsigned int)*a2 * (unsigned __int64)KeGetCurrentPrcb()->MHz / 0xA);
    v21 = 4LL;
    v22 = (int *)(Amd64CounterStatus + ((unsigned __int64)KeGetPcr()->Prcb.Number << 6) + 8);
    do
    {
      if ( *(v22 - 1) == a1 && !*(v22 - 2) )
        *v22 = *a2;
      v22 += 4;
      --v21;
    }
    while ( v21 );
    return 0LL;
  }
  else
  {
    KxReleaseSpinLock(&Amd64ProfileSourceDescriptorListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v6 = KeGetCurrentIrql();
        if ( v6 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v6 >= 2u )
        {
          v7 = KeGetCurrentPrcb();
          v8 = v7->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v10 = (v9 & v8[5]) == 0;
          v8[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)v7);
        }
      }
    }
    __writecr8(v4);
    return (unsigned int)ProfileDescriptor;
  }
}
