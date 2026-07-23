/*
 * XREFs of ExpWorkQueueManagerThread @ 0x1407A6A90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetCoalescableTimer @ 0x140247420 (KeSetCoalescableTimer.c)
 *     ExpNewThreadNecessary @ 0x14028EED0 (ExpNewThreadNecessary.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     KeQueryNodeActiveAffinity @ 0x14033F590 (KeQueryNodeActiveAffinity.c)
 *     KeTimeOutQueueWaiters @ 0x14035D12C (KeTimeOutQueueWaiters.c)
 *     KeSetAffinityThread @ 0x140398F5C (KeSetAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KeSetMaximumCountPriQueue @ 0x140522A4C (KeSetMaximumCountPriQueue.c)
 *     ExpCreateWorkerThread @ 0x1406EDE1C (ExpCreateWorkerThread.c)
 *     ExpPartitionCreatePoolDelayed @ 0x140958608 (ExpPartitionCreatePoolDelayed.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWorkQueueManagerThread(_QWORD *a1)
{
  char v1; // r12
  struct _WORK_QUEUE_ITEM *v3; // r15
  __int64 v4; // r8
  _DWORD *v5; // r9
  _QWORD *PoolWithTag; // r14
  struct _KTHREAD *CurrentThread; // rbx
  char v8; // r13
  unsigned __int64 v9; // rsi
  NTSTATUS v10; // eax
  struct _KDPC *v11; // r9
  int v12; // ebx
  __int64 v13; // r10
  __int64 v14; // rsi
  __int64 v15; // rdx
  int PoolDelayed; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KDPC *v19; // rcx
  __int64 j; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  int v25; // eax
  __int64 i; // rbx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  __int64 v30; // rsi
  __int64 v31; // r8
  int WorkerThread; // eax
  char v33; // [rsp+48h] [rbp-29h]
  USHORT Count; // [rsp+4Ch] [rbp-25h] BYREF
  struct _KTHREAD *v35; // [rsp+50h] [rbp-21h]
  unsigned __int64 v36; // [rsp+58h] [rbp-19h]
  _QWORD v37[2]; // [rsp+60h] [rbp-11h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp-1h] BYREF
  PVOID Object[3]; // [rsp+80h] [rbp+Fh] BYREF

  v1 = 0;
  v33 = 1;
  Count = 0;
  Affinity = 0LL;
  v3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6C577845u);
  if ( PoolWithTag )
  {
    v3 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6C577845u);
    if ( v3 )
    {
      v33 = 0;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v35 = CurrentThread;
  KeSetActualBasePriorityThread((__int64)CurrentThread, 12, v4, v5);
  v37[1] = -1LL;
  v37[0] = 0LL;
  KeSetTimer2(
    (__int64)(a1 + 16),
    -((10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2),
    (10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2,
    (__int64)v37);
  v8 = 0;
  v9 = 10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds;
  Object[0] = a1 + 2;
  Object[1] = a1 + 5;
  v36 = v9;
  Object[2] = a1 + 13;
  while ( 1 )
  {
    v10 = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 1, 0, 0LL, 0LL);
    v11 = 0LL;
    if ( !v10 )
      break;
    v25 = v10 - 1;
    if ( v25 )
    {
      if ( v25 == 1 )
      {
        for ( i = 0LL; i < 64; i += 8LL )
        {
          v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + i);
          if ( (v27 & 1) == 0 )
          {
            if ( v27 )
            {
              if ( (*(_DWORD *)(v27 + 712) & 0x4000) == 0 && !*(_DWORD *)(v27 + 4) )
              {
                v28 = (*(_DWORD *)(v27 + 712) & 0x3FFFu) - ((2 * *(_DWORD *)(v27 + 716)) >> 1);
                if ( (_DWORD)v28 )
                {
                  KeTimeOutQueueWaiters(v27, v9, v28, 0LL);
                  v11 = 0LL;
                }
              }
            }
          }
        }
        CurrentThread = v35;
      }
      LOBYTE(v13) = 1;
LABEL_15:
      if ( v8 )
        goto LABEL_25;
      goto LABEL_16;
    }
    v8 = 0;
    v29 = 0LL;
    v13 = 1LL;
    do
    {
      v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + 8 * v29);
      if ( ((unsigned __int8)v30 & (unsigned __int8)v13) != 0 )
        v30 = (__int64)v11;
      if ( *(_DWORD *)(v30 + 704) == *(_DWORD *)(v30 + 708) && ExpNewThreadNecessary(v30, 0x3FFF) )
      {
        if ( (ExpWorkerQueueTestFlags & 2) != 0 )
          KeBugCheckEx(0x163u, (unsigned int)ExpWorkerQueueTestFlags, 2uLL, 0LL, (ULONG_PTR)v11);
        if ( v29 == v13 && v33 == (_BYTE)v11 )
        {
          *(_DWORD *)PoolWithTag = v13;
          PoolWithTag[1] = v30;
          v3->WorkerRoutine = (void (__fastcall *)(void *))ExpIoPoolDeadlockWorker;
          v3->Parameter = PoolWithTag;
          v3->List.Flink = (struct _LIST_ENTRY *)v11;
          ExQueueWorkItem(v3, NormalWorkQueue);
          v33 = 1;
        }
        WorkerThread = ExpCreateWorkerThread((_QWORD *)v30, (__int64)a1 + 276, v31, (int)v11);
        v11 = 0LL;
        v13 = 1LL;
        if ( WorkerThread < 0 )
          v1 = 1;
      }
      v29 += v13;
    }
    while ( v29 <= v13 );
LABEL_16:
    v18 = (__int64)v11;
    do
    {
      v19 = *(struct _KDPC **)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + v18);
      if ( ((unsigned __int8)v19 & (unsigned __int8)v13) != 0 )
        v19 = v11;
      *((_DWORD *)&v19[11].0 + 1) = v19[11].TargetInfoAsUlong;
      if ( ((__int64)v19[11].DpcListEntry.Next & 0x3FFF) >= SLODWORD(v19[11].ProcessorHistory) || v1 )
        v8 = v13;
      v18 += 8LL;
    }
    while ( v18 <= 8 );
    if ( v8 )
      KeSetCoalescableTimer((PKTIMER)(a1 + 5), (LARGE_INTEGER)-10000000LL, 0, 0xA0u, v11);
    CurrentThread = v35;
LABEL_25:
    KeQueryNodeActiveAffinity(*(_WORD *)(a1[1] + 146LL), &Affinity, &Count);
    if ( CurrentThread->UserAffinity.Group != Affinity.Group || CurrentThread->UserAffinity.Mask != Affinity.Mask )
      KeSetAffinityThread((__int64)CurrentThread, (__int64)&Affinity);
    v1 = 0;
    for ( j = 0LL; j < 64; j += 8LL )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + j);
      if ( (v21 & 1) == 0 && v21 && *(_DWORD *)(v21 + 664) != Count )
        KeSetMaximumCountPriQueue(v21, Count);
    }
    CurrentThread = v35;
    v9 = v36;
  }
  if ( !*((_DWORD *)a1 + 68) )
  {
    v12 = 0;
    LODWORD(v13) = 1;
    v14 = 0LL;
    do
    {
      v15 = a1[1];
      if ( ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(v15 + 146))
                                       + v14) & (unsigned __int8)v13) != 0 )
      {
        PoolDelayed = ExpPartitionCreatePoolDelayed(*a1, v15, (unsigned int)v12, v11);
        v11 = 0LL;
        LODWORD(v13) = 1;
      }
      else
      {
        PoolDelayed = (int)v11;
      }
      if ( PoolDelayed < 0 )
      {
        v1 = v13;
      }
      else
      {
        v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)(a1[1] + 146LL)) + v14);
        if ( ((unsigned __int8)v17 & (unsigned __int8)v13) == 0 )
        {
          if ( v17 )
          {
            if ( ExpNewThreadNecessary(v17, *(_DWORD *)(v17 + 720)) )
            {
              v24 = ExpCreateWorkerThread(v22, (__int64)a1 + 276, v23, (int)v11);
              v11 = 0LL;
              LODWORD(v13) = 1;
              if ( v24 < 0 )
                v1 = 1;
            }
          }
        }
      }
      v12 += v13;
      v14 += 8LL;
    }
    while ( v12 < 8 );
    CurrentThread = v35;
    goto LABEL_15;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
