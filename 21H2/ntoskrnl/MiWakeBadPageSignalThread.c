/*
 * XREFs of MiWakeBadPageSignalThread @ 0x1402676A8
 * Callers:
 *     MiWorkingSetManager @ 0x140267320 (MiWorkingSetManager.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 MiWakeBadPageSignalThread()
{
  __int64 result; // rax
  unsigned __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v4; // zf

  result = (unsigned int)MiFlags;
  if ( (MiFlags & 0x30) != 0 && (unsigned __int8)byte_140C52B33 <= 1u )
  {
    v1 = ExAcquireSpinLockExclusive(&dword_140C56920);
    if ( byte_140C52B33 == 1 )
    {
      stru_140C52AF0.Parameter = 0LL;
      stru_140C52AF0.List.Flink = 0LL;
      stru_140C52AF0.WorkerRoutine = (void (__fastcall *)(void *))MiBadPageSignaler;
      byte_140C52B33 = 2;
      ExQueueWorkItem(&stru_140C52AF0, DelayedWorkQueue);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C56920);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v1 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
          v4 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v4 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v1);
  }
  return result;
}
