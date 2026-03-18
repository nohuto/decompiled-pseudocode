/*
 * XREFs of MiWakeExtentDeletionWaiters @ 0x140540D00
 * Callers:
 *     MiDeleteExtentPfns @ 0x14053EC80 (MiDeleteExtentPfns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiWakeExtentDeletionWaiters(struct _KLOCK_QUEUE_HANDLE *a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // r8
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  bool v8; // zf
  _QWORD *v9; // rbx

  v1 = (_QWORD *)qword_140C4C990;
  qword_140C4C990 = 0LL;
  byte_140C4C9B1 = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
  LOBYTE(v5) = KiIrqlFlags;
  OldIrql = a1->OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      LOBYTE(v5) = KeGetCurrentIrql();
      if ( (unsigned __int8)v5 <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && (unsigned __int8)v5 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v8 = (v5 & SchedulerAssist[5]) == 0;
        v3 = (unsigned int)v5 & SchedulerAssist[5];
        SchedulerAssist[5] = v3;
        if ( v8 )
          LOBYTE(v5) = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v1 )
  {
    do
    {
      v9 = (_QWORD *)*v1;
      LOBYTE(v5) = KeSignalGate((__int64)(v1 + 1), 1LL, v3, SchedulerAssist);
      v1 = v9;
    }
    while ( v9 );
  }
  return v5;
}
