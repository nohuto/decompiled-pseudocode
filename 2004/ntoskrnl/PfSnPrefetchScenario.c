/*
 * XREFs of PfSnPrefetchScenario @ 0x140702020
 * Callers:
 *     PfSnBeginScenario @ 0x1406B81CC (PfSnBeginScenario.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x1402D1A50 (KeQueryPriorityThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402FA0C0 (ExWaitForRundownProtectionRelease.c)
 *     PfSnAsyncContextInitialize @ 0x1407020CC (PfSnAsyncContextInitialize.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSnPrefetchScenario(void *a1, unsigned int a2)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v5; // rdi
  KPRIORITY PriorityThread; // eax
  unsigned int v7; // edi
  struct _EX_RUNDOWN_REF RunRef; // [rsp+30h] [rbp+8h] BYREF

  RunRef.Count = 0LL;
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, 0x61506343u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PfSnAsyncContextInitialize(PoolWithTag, a1, &RunRef, (a2 >> 4) & 1);
    a1 = 0LL;
    ExAcquireRundownProtection_0(&RunRef);
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    ExQueueWorkItem(v5, (WORK_QUEUE_TYPE)(PriorityThread + 32));
    v7 = 0;
    ExWaitForRundownProtectionRelease(&RunRef);
  }
  else
  {
    v7 = -1073741670;
  }
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
  return v7;
}
