/*
 * XREFs of MiWakeExtentDeletionWaiters @ 0x140542800
 * Callers:
 *     MiDeleteExtentPfns @ 0x140540780 (MiDeleteExtentPfns.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiWakeExtentDeletionWaiters(struct _KLOCK_QUEUE_HANDLE *a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  bool v8; // zf
  _QWORD *v9; // rbx

  v1 = (_QWORD *)qword_140C4CB10;
  qword_140C4CB10 = 0LL;
  byte_140C4CB31 = 0;
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
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        v3 = (unsigned int)result & SchedulerAssist[5];
        SchedulerAssist[5] = v3;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( v1 )
  {
    do
    {
      v9 = (_QWORD *)*v1;
      result = KeSignalGate((__int64)(v1 + 1), 1LL, v3, SchedulerAssist);
      v1 = v9;
    }
    while ( v9 );
  }
  return result;
}
