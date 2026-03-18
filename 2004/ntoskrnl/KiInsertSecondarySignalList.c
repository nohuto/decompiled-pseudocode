/*
 * XREFs of KiInsertSecondarySignalList @ 0x140513F68
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x140513A40 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140214C20 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSecondarySignalListLock @ 0x140513B6C (KiAcquireSecondarySignalListLock.c)
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
    v2 = qword_140C2B268;
    if ( *(__int64 **)(KiSecondarySignalList + 8) != &KiSecondarySignalList
      || *(__int64 **)qword_140C2B268 != &KiSecondarySignalList
      || (_QWORD **)(*a1)[1] != a1
      || (_QWORD **)*a1[1] != a1 )
    {
      __fastfail(3u);
    }
    *(_QWORD *)qword_140C2B268 = a1;
    qword_140C2B268 = (__int64)a1[1];
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
