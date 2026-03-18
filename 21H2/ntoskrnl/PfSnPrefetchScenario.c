/*
 * XREFs of PfSnPrefetchScenario @ 0x1407D7AE0
 * Callers:
 *     PfSnBeginScenario @ 0x1407DCF7C (PfSnBeginScenario.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     PfSnAsyncContextInitialize @ 0x1407D7B88 (PfSnAsyncContextInitialize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PfSnPrefetchScenario(PVOID P, unsigned int a2)
{
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v5; // rbx
  KPRIORITY PriorityThread; // eax
  unsigned int v7; // ebx
  struct _EX_RUNDOWN_REF RunRef; // [rsp+30h] [rbp+8h] BYREF

  RunRef.Count = 0LL;
  Pool2 = ExAllocatePool2(64LL, 248LL, 1632658243LL);
  v5 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( Pool2 )
  {
    PfSnAsyncContextInitialize(Pool2, P, &RunRef, (a2 >> 4) & 1);
    ExAcquireRundownProtection(&RunRef);
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    ExQueueWorkItem(v5, (WORK_QUEUE_TYPE)(PriorityThread + 32));
    v7 = 0;
    ExWaitForRundownProtectionRelease(&RunRef);
  }
  else
  {
    v7 = -1073741670;
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return v7;
}
