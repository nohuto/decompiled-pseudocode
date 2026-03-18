/*
 * XREFs of PfSnPrefetchSectionsCleanup @ 0x1407D7544
 * Callers:
 *     PfSnPrefetchSections @ 0x1407D7100 (PfSnPrefetchSections.c)
 * Callees:
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall PfSnPrefetchSectionsCleanup(unsigned __int64 a1, int a2, unsigned int a3, __int64 a4)
{
  struct _WORK_QUEUE_ITEM *v4; // r14
  __int64 v8; // r15
  KPRIORITY PriorityThread; // edi
  void (__fastcall **p_WorkerRoutine)(void *); // rbx
  struct _EX_RUNDOWN_REF RunRef[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+30h] [rbp-38h]
  __int128 v14; // [rsp+40h] [rbp-28h]

  v4 = *(struct _WORK_QUEUE_ITEM **)(a1 + 88);
  v8 = a3;
  memset(v4, 0, 48LL * a3);
  *(_OWORD *)&RunRef[0].Count = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  ExInitializePushLock(RunRef);
  RunRef[1].Count = a1;
  LODWORD(v14) = a2;
  *(_QWORD *)&v13 = a4;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  if ( a3 )
  {
    p_WorkerRoutine = &v4->WorkerRoutine;
    do
    {
      p_WorkerRoutine[2] = (void (__fastcall *)(void *))RunRef;
      *(p_WorkerRoutine - 2) = 0LL;
      *p_WorkerRoutine = (void (__fastcall *)(void *))PfSnSectionInfoCleanupWorkItem;
      p_WorkerRoutine[1] = (void (__fastcall *)(void *))v4;
      ExAcquireRundownProtection(RunRef);
      ExQueueWorkItem(v4, (WORK_QUEUE_TYPE)(PriorityThread + 32));
      v4 = (struct _WORK_QUEUE_ITEM *)((char *)v4 + 48);
      p_WorkerRoutine += 6;
      --v8;
    }
    while ( v8 );
  }
  ExWaitForRundownProtectionRelease(RunRef);
}
