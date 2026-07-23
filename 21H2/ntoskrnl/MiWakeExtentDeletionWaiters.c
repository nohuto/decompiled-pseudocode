/*
 * XREFs of MiWakeExtentDeletionWaiters @ 0x140542A40
 * Callers:
 *     MiDeleteExtentPfns @ 0x1405409C0 (MiDeleteExtentPfns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWakeExtentDeletionWaiters(struct _KLOCK_QUEUE_HANDLE *a1)
{
  _QWORD *v1; // rdi
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  _QWORD *v8; // rbx

  v1 = (_QWORD *)qword_140C4CB50;
  qword_140C4CB50 = 0LL;
  byte_140C4CB71 = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = a1->OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
        v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v1 )
  {
    do
    {
      v8 = (_QWORD *)*v1;
      result = KeSignalGate((__int64)(v1 + 1), 1);
      v1 = v8;
    }
    while ( v8 );
  }
  return result;
}
