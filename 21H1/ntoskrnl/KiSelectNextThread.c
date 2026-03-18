/*
 * XREFs of KiSelectNextThread @ 0x140330AC8
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140202694 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeWaitForMultipleObjects @ 0x140243AA0 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140265FF0 (KiSearchForNewThreadOnProcessor.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402CA37C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiExitThreadWait @ 0x140329B50 (KiExitThreadWait.c)
 *     KiQuantumEnd @ 0x1403312E0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140331DD0 (KiGroupSchedulingQuantumEnd.c)
 *     KiSetSystemAffinityThread @ 0x140335B9C (KiSetSystemAffinityThread.c)
 *     KiSetHeteroPolicyThread @ 0x14051A864 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSelectReadyThread @ 0x140266580 (KiSelectReadyThread.c)
 *     KiSelectLowestRankedThread @ 0x140330BE0 (KiSelectLowestRankedThread.c)
 *     KiSetProcessorIdle @ 0x140330C58 (KiSetProcessorIdle.c)
 *     KiCheckThreadAffinity @ 0x140332974 (KiCheckThreadAffinity.c)
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KiInsertDeferredReadyList @ 0x140337C30 (KiInsertDeferredReadyList.c)
 *     KiAddThreadToReadyQueue @ 0x1405193F4 (KiAddThreadToReadyQueue.c)
 *     KiSetSchedulerAssistPriority @ 0x14051AE54 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiSelectNextThread(__int64 a1, __int64 a2)
{
  __int64 ready; // rbx
  char v5; // cl
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // eax
  int v9; // r9d
  char IsThreadRankNonZero; // al
  __int64 v11; // rdx

  while ( 1 )
  {
    ready = KiSelectReadyThread(1, a1);
    if ( !ready )
    {
      ready = KiSelectLowestRankedThread(a1);
      if ( !ready )
        ready = KiSelectReadyThread(0, a1);
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
  KiAddThreadToReadyQueue(a1, 0, ready, v9, 1);
  ready = 0LL;
LABEL_15:
  if ( !ready )
  {
LABEL_5:
    ready = *(_QWORD *)(a1 + 24);
    KiSetProcessorIdle(a1, 1LL, 1LL);
  }
  if ( (*(_BYTE *)(ready + 2) & 4) == 0
    || (IsThreadRankNonZero = KiIsThreadRankNonZero(ready, a1), v5 = 1, !IsThreadRankNonZero) )
  {
    v5 = *(_BYTE *)(ready + 195);
  }
  **(_BYTE **)(a1 + 56) = v5;
  v6 = *(_QWORD *)(a1 + 33976);
  if ( v6 )
  {
    v11 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( ready != *(_QWORD *)(a1 + 24) )
      v11 = (unsigned int)v5;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v11, 0LL);
    v6 = *(_QWORD *)(a1 + 33976);
  }
  v7 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 16) = ready;
  if ( v6 )
    *(_BYTE *)(v6 + 16) = ready == v7;
  LOBYTE(v8) = *(_BYTE *)(ready + 388);
  if ( (_BYTE)v8 == 1 )
  {
    v8 = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(ready + 132) = v8;
  }
  *(_BYTE *)(ready + 388) = 3;
  return v8;
}
