/*
 * XREFs of ExpWaitForResource @ 0x14020E440
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402091B0 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140209B00 (ExpAcquireResourceExclusiveLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14022CBA0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14038C2A0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038C680 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038C980 (ExAcquireFastResourceShared.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1405AF810 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     PerfLogExecutiveResourceWait @ 0x1405A5DAC (PerfLogExecutiveResourceWait.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ExpWaitForResource(
        struct _LIST_ENTRY *a1,
        __int64 a2,
        unsigned int a3,
        void (__fastcall *a4)(struct _LIST_ENTRY *))
{
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  NTSTATUS result; // eax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-40h] BYREF

  __incgsdword(0x8668u);
  v8 = 0;
  v9 = 0;
  ++HIDWORD(a1[4].Flink);
  Timeout.QuadPart = -5000000LL;
  while ( 1 )
  {
    result = KeWaitForSingleObject((PVOID)(a2 + 24), WrResource, 0, 0, &Timeout);
    if ( result != 258 )
      break;
    ++v8;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceWait(a3, a1, v8);
    ++v9;
    Timeout.QuadPart = ExpTimeout;
    if ( ExResourceTimeoutCount && v9 > ExResourceTimeoutCount )
    {
      v9 = 0;
      DbgPrintEx(0, 0, "Possible deadlock. Use !locks %p to determine the resource owner\n", a1);
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6F546552u);
      if ( PoolWithTag )
      {
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ExpResourceTimeoutCaptureLiveDump;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
        PoolWithTag[1].List.Blink = a1;
        LODWORD(PoolWithTag[1].WorkerRoutine) = HIDWORD(a1[4].Flink);
        HIDWORD(PoolWithTag[1].WorkerRoutine) = ExResourceTimeoutCount;
        ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
      }
      __debugbreak();
    }
    if ( a4 )
      a4(a1);
  }
  return result;
}
