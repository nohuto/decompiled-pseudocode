/*
 * XREFs of KiIdealProcessorRebalancerWorker @ 0x140244620
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x140302930 (KiUpdateProcessConcurrencyCounts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KiIdealProcessorRebalancerWorker()
{
  KIRQL v0; // al
  char v1; // bl
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8

  while ( 1 )
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C2AE88);
    v1 = byte_140C2AE91;
    v2 = v0;
    byte_140C2AE91 = 0;
    if ( !v1 )
      break;
    KxReleaseSpinLock(&qword_140C2AE88);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v8 = (v7 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v7;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
    if ( (v1 & 1) != 0 )
      KiUpdateProcessConcurrencyCounts();
  }
  byte_140C2AE90 = 0;
  KxReleaseSpinLock(&qword_140C2AE88);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v10 = v9->SchedulerAssist;
        v8 = ((unsigned int)result & v10[5]) == 0;
        v10[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(v9);
      }
    }
  }
  __writecr8(v2);
  return result;
}
