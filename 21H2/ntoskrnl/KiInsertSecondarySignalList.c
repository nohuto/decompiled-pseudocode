/*
 * XREFs of KiInsertSecondarySignalList @ 0x14056F060
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x14056EBB0 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSecondarySignalListLock @ 0x14056EC64 (KiAcquireSecondarySignalListLock.c)
 */

void __fastcall KiInsertSecondarySignalList(_QWORD **a1)
{
  __int64 v2; // rcx
  bool v3; // zf
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v5; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  unsigned __int8 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  if ( *a1 != a1 )
  {
    KiAcquireSecondarySignalListLock(&v9);
    v2 = qword_140C2B0C8;
    if ( *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList
      || *(__int64 **)qword_140C2B0C8 != &KiSecondarySignalList
      || (_QWORD **)(*a1)[1] != a1
      || (_QWORD **)*a1[1] != a1 )
    {
      __fastfail(3u);
    }
    *(_QWORD *)qword_140C2B0C8 = a1;
    qword_140C2B0C8 = (__int64)a1[1];
    *a1[1] = &KiSecondarySignalList;
    v3 = KiSecondarySignalDpcRunning == 0;
    a1[1] = (_QWORD *)v2;
    if ( v3 )
    {
      KiSecondarySignalDpcRunning = 1;
      KiInsertQueueDpc((ULONG_PTR)&KiSecondarySignalDpc, 0LL, 0LL, 0LL, 0);
    }
    KxReleaseSpinLock(&KiSecondarySignalListLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v5 = v9;
      if ( v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v5 = v9;
        v8 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v3 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v3 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    else
    {
      v5 = v9;
    }
    __writecr8(v5);
  }
}
