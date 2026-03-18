/*
 * XREFs of ExpWaitForResource @ 0x140231990
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x1402AE9D0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402B1170 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireSharedStarveExclusive @ 0x14032BD70 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14039B280 (ExAcquireSharedWaitForExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14039B6B0 (ExAcquireFastResourceShared.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14039BA90 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14039BDE0 (ExAcquireFastResourceExclusive.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PerfLogExecutiveResourceWait @ 0x140632AC8 (PerfLogExecutiveResourceWait.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
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

  __incgsdword(0x8A68u);
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
