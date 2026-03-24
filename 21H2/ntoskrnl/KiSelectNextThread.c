/*
 * XREFs of KiSelectNextThread @ 0x14025708C
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14024BB90 (KeWaitForMultipleObjects.c)
 *     KiQuantumEnd @ 0x140257CF0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402587E0 (KiGroupSchedulingQuantumEnd.c)
 *     KiExitThreadWait @ 0x140278330 (KiExitThreadWait.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1402AAFD4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetSystemAffinityThread @ 0x1402EB8C4 (KiSetSystemAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402EC610 (KiRescheduleThreadAfterAffinityChange.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140347370 (KiSearchForNewThreadOnProcessor.c)
 *     KiSetHeteroPolicyThread @ 0x140520364 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14024D450 (KiIsThreadRankNonZero.c)
 *     KiSelectLowestRankedThread @ 0x1402571A4 (KiSelectLowestRankedThread.c)
 *     KiSetProcessorIdle @ 0x14025721C (KiSetProcessorIdle.c)
 *     KiCheckThreadAffinity @ 0x140259384 (KiCheckThreadAffinity.c)
 *     KiInsertDeferredReadyList @ 0x1402EA540 (KiInsertDeferredReadyList.c)
 *     KiSelectReadyThread @ 0x140347900 (KiSelectReadyThread.c)
 *     KiAddThreadToReadyQueue @ 0x14051EEF4 (KiAddThreadToReadyQueue.c)
 *     KiSetSchedulerAssistPriority @ 0x140520954 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiSelectNextThread(struct _KPRCB *a1, __int64 a2)
{
  __int64 ready; // rbx
  char v5; // cl
  _BYTE *SchedulerAssist; // r9
  _KTHREAD *IdleThread; // rax
  int v8; // eax
  int v9; // r9d
  bool IsThreadRankNonZero; // al
  __int64 v11; // rdx

  while ( 1 )
  {
    ready = KiSelectReadyThread(1LL, a1);
    if ( !ready )
    {
      ready = KiSelectLowestRankedThread(a1);
      if ( !ready )
        ready = KiSelectReadyThread(0LL, a1);
    }
    if ( !ready )
      goto LABEL_5;
    if ( (unsigned int)KiCheckThreadAffinity(ready) )
      goto LABEL_15;
    if ( !a2 )
      break;
    KiInsertDeferredReadyList(a2, ready);
  }
  LOBYTE(v9) = 1;
  KiAddThreadToReadyQueue((_DWORD)a1, 0, ready, v9, 1);
  ready = 0LL;
LABEL_15:
  if ( !ready )
  {
LABEL_5:
    ready = (__int64)a1->IdleThread;
    KiSetProcessorIdle(a1, 1LL, 1LL);
  }
  if ( (*(_BYTE *)(ready + 2) & 4) == 0
    || (IsThreadRankNonZero = KiIsThreadRankNonZero(ready, a1), v5 = 1, !IsThreadRankNonZero) )
  {
    v5 = *(_BYTE *)(ready + 195);
  }
  *a1->PriorityState = v5;
  SchedulerAssist = a1->SchedulerAssist;
  if ( SchedulerAssist )
  {
    v11 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( (_KTHREAD *)ready != a1->IdleThread )
      v11 = (unsigned int)v5;
    KiSetSchedulerAssistPriority(a1->SchedulerAssist, v11, 0LL);
    SchedulerAssist = a1->SchedulerAssist;
  }
  IdleThread = a1->IdleThread;
  a1->NextThread = (_KTHREAD *)ready;
  if ( SchedulerAssist )
    SchedulerAssist[16] = ready == (_QWORD)IdleThread;
  LOBYTE(v8) = *(_BYTE *)(ready + 388);
  if ( (_BYTE)v8 == 1 )
  {
    v8 = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(ready + 132) = v8;
  }
  *(_BYTE *)(ready + 388) = 3;
  return v8;
}
