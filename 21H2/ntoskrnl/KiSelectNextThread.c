/*
 * XREFs of KiSelectNextThread @ 0x14035C3FC
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14020E464 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14020EE7C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140290B9C (KiGroupSchedulingQuantumEnd.c)
 *     KiExitThreadWait @ 0x1402947A0 (KiExitThreadWait.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402B4130 (KiSearchForNewThreadOnProcessor.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     KiSetSystemAffinityThread @ 0x14035C1C0 (KiSetSystemAffinityThread.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiCheckThreadAffinity @ 0x140290B74 (KiCheckThreadAffinity.c)
 *     KiSelectReadyThreadEx @ 0x1402B7AE0 (KiSelectReadyThreadEx.c)
 *     KiInsertDeferredReadyList @ 0x1402F6970 (KiInsertDeferredReadyList.c)
 *     KiSetProcessorIdle @ 0x14035C560 (KiSetProcessorIdle.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 *     KiAddThreadToReadyQueue @ 0x1405737B4 (KiAddThreadToReadyQueue.c)
 */

char __fastcall KiSelectNextThread(struct _KPRCB *a1, __int64 a2)
{
  __int64 ready; // rax
  __int64 IdleThread; // rbx
  __int64 v6; // r8
  unsigned __int8 *PriorityState; // rsi
  char v8; // cl
  unsigned __int8 v9; // al
  void *SchedulerAssist; // rcx
  _KPRIORITY_STATE *v11; // r8
  _BYTE *v12; // rcx
  _KTHREAD *v13; // rax
  int v14; // eax
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rdx
  int ThreadEffectiveRankNonZero; // eax
  __int64 v19; // rdx
  unsigned int v20; // edx
  char v21; // al
  char v22; // al

  while ( 1 )
  {
    ready = KiSelectReadyThreadEx(a1, 0LL, 0LL);
    IdleThread = ready;
    if ( !ready )
      break;
    if ( KiCheckThreadAffinity(ready) )
      goto LABEL_3;
    if ( !a2 )
    {
      LOBYTE(v15) = 1;
      KiAddThreadToReadyQueue((_DWORD)a1, 0, IdleThread, v15, 1);
      break;
    }
    KiInsertDeferredReadyList(a2, IdleThread);
  }
  IdleThread = (__int64)a1->IdleThread;
  KiSetProcessorIdle(a1, 1LL, 1LL);
LABEL_3:
  PriorityState = (unsigned __int8 *)a1->PriorityState;
  if ( (*(_BYTE *)(IdleThread + 2) & 4) == 0
    || *(char *)(IdleThread + 195) >= 16
    || !*(_QWORD *)(IdleThread + 104)
    || (v16 = *(_QWORD *)(IdleThread + 104)) == 0
    || (v17 = a1->ScbOffset + v16) == 0
    || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(IdleThread, v17, v6, 0, 0LL),
        v8 = 1,
        !ThreadEffectiveRankNonZero) )
  {
    v8 = *(_BYTE *)(IdleThread + 195);
  }
  v9 = v8 & 0x7F | (*(_BYTE *)(IdleThread + 119) << 7);
  *PriorityState = v9;
  SchedulerAssist = a1->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( (_KTHREAD *)IdleThread == a1->IdleThread )
      v19 = (unsigned int)KiVpThreadSystemWorkPriority;
    else
      v19 = v9 & 0x7F;
    KiSetSchedulerAssistPriority(SchedulerAssist, v19, 0LL);
  }
  v11 = a1->PriorityState;
  if ( KeHeteroSystem )
  {
    v20 = *(_DWORD *)(IdleThread + 80);
    v21 = (v11[64].AllFields ^ *(_BYTE *)(IdleThread + 512)) & 7 ^ v11[64].AllFields;
    v22 = (v21 ^ (8 * *(_BYTE *)(IdleThread + 516))) & 0x38 ^ v21;
    if ( v20 <= *(_DWORD *)(IdleThread + 84) )
      v20 = *(_DWORD *)(IdleThread + 84);
    v11[64].AllFields = (v20 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v22 & 0xBF;
  }
  v12 = a1->SchedulerAssist;
  v13 = a1->IdleThread;
  a1->NextThread = (_KTHREAD *)IdleThread;
  if ( v12 )
    v12[16] = IdleThread == (_QWORD)v13;
  LOBYTE(v14) = *(_BYTE *)(IdleThread + 388);
  if ( (_BYTE)v14 == 1 )
  {
    v14 = *(_DWORD *)(IdleThread + 132) - *(_DWORD *)(IdleThread + 436) + MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(IdleThread + 132) = v14;
  }
  *(_BYTE *)(IdleThread + 388) = 3;
  return v14;
}
