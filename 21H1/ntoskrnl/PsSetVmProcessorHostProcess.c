/*
 * XREFs of PsSetVmProcessorHostProcess @ 0x1409056F8
 * Callers:
 *     VmSetVpHostProcess @ 0x14092A920 (VmSetVpHostProcess.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ExBlockOnAddressPushLock @ 0x1402EBC50 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x1403F1A30 (ExfUnblockPushLock.c)
 */

NTSTATUS __fastcall PsSetVmProcessorHostProcess(_QWORD *a1)
{
  volatile signed __int32 *v1; // rbx
  NTSTATUS result; // eax
  NTSTATUS v3; // ett
  signed __int64 v4; // rax
  signed __int32 v5[8]; // [rsp+0h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+30h] [rbp-40h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+48h] [rbp-28h] BYREF
  __int64 v8; // [rsp+80h] [rbp+10h] BYREF

  v1 = (volatile signed __int32 *)a1 + 543;
  memset(&Event, 0, sizeof(Event));
  memset(&WorkItem, 0, sizeof(WorkItem));
  _m_prefetchw((char *)a1 + 2172);
  result = *((_DWORD *)a1 + 543);
  for ( LODWORD(v8) = result; ; LODWORD(v8) = result )
  {
    if ( (result & 0x800000) != 0 )
    {
      if ( (result & 0x1000000) != 0 )
      {
        do
        {
          ExBlockOnAddressPushLock((__int64)&PsVmProcessorHostTransitionEvent, v1, &v8, 4uLL, 0LL);
          LODWORD(v8) = *v1;
          result = v8;
        }
        while ( (v8 & 0x1000000) != 0 );
      }
      return result;
    }
    v3 = result;
    result = _InterlockedCompareExchange(v1, result | 0x1800000, result);
    if ( v3 == result )
      break;
  }
  if ( !a1[316] )
  {
    _InterlockedOr(v1, 0x200000u);
    v4 = _InterlockedIncrement64(&PsNextSecurityDomain);
    a1[316] = v4;
    a1[317] = v4;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspSetVmProcessorHostProcessWorkerRoutine;
  WorkItem.Parameter = &Event;
  ExQueueWorkItem(&WorkItem, CriticalWorkQueue);
  result = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  _InterlockedAnd(v1, 0xFEFFFFFF);
  _InterlockedOr(v5, 0);
  if ( PsVmProcessorHostTransitionEvent )
    return ExfUnblockPushLock(&PsVmProcessorHostTransitionEvent, 0LL);
  return result;
}
