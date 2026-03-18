/*
 * XREFs of IoWriteErrorLogEntry @ 0x1403A7210
 * Callers:
 *     IopDisassociateThreadIrp @ 0x1405566C0 (IopDisassociateThreadIrp.c)
 *     DifIoWriteErrorLogEntryWrapper @ 0x140611860 (DifIoWriteErrorLogEntryWrapper.c)
 *     FsRtlLogCcFlushError @ 0x14092D830 (FsRtlLogCcFlushError.c)
 *     IopLogBlockedDriverEvent @ 0x140934AB4 (IopLogBlockedDriverEvent.c)
 *     PnpLogEvent @ 0x140947068 (PnpLogEvent.c)
 *     MiLogFailedDriverLoad @ 0x14096C4AC (MiLogFailedDriverLoad.c)
 *     MiBadMemoryLogger @ 0x14097E5C0 (MiBadMemoryLogger.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall IoWriteErrorLogEntry(PVOID ElEntry)
{
  char *v1; // rbx
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  bool v5; // zf
  void *v6; // rcx
  void *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax

  v1 = (char *)ElEntry - 48;
  if ( IopErrorLogDisabledThisBoot )
  {
    v6 = (void *)*((_QWORD *)v1 + 3);
    if ( v6 )
      ObfDereferenceObject(v6);
    v7 = (void *)*((_QWORD *)v1 + 4);
    if ( v7 )
      ObfDereferenceObject(v7);
    _InterlockedExchangeAdd(&IopErrorLogAllocation, -*((unsigned __int16 *)v1 + 1));
    ExFreePoolWithTag(v1, 0);
  }
  else
  {
    *((_QWORD *)v1 + 5) = MEMORY[0xFFFFF78000000014];
    v2 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    v3 = (_QWORD *)qword_140C46FF8;
    v4 = v1 + 8;
    if ( *(__int64 **)qword_140C46FF8 != &IopErrorLogListHead )
      __fastfail(3u);
    v5 = IopErrorLogSessionPending == 0;
    *v4 = &IopErrorLogListHead;
    v4[1] = v3;
    *v3 = v4;
    qword_140C46FF8 = (__int64)v4;
    if ( v5 )
    {
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.List.Flink = 0LL;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogSessionPending = 1;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    KxReleaseSpinLock(&IopErrorLogLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v5 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v5 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
