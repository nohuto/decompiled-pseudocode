/*
 * XREFs of ExpWorkQueueManagerThread @ 0x14083ECE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetUserAffinityThread @ 0x14020E9E8 (KeSetUserAffinityThread.c)
 *     KeTimeOutQueueWaiters @ 0x14023C084 (KeTimeOutQueueWaiters.c)
 *     KeQueryNodeActiveAffinityEx @ 0x140263260 (KeQueryNodeActiveAffinityEx.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KeIsEqualAffinityEx @ 0x140292B10 (KeIsEqualAffinityEx.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExpNewThreadNecessary @ 0x140346260 (ExpNewThreadNecessary.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeSetMaximumCountPriQueue @ 0x14057B4EC (KeSetMaximumCountPriQueue.c)
 *     ExpCreateWorkerThread @ 0x1406DCB98 (ExpCreateWorkerThread.c)
 *     ExpPartitionCreatePoolDelayed @ 0x140A01EE4 (ExpPartitionCreatePoolDelayed.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall ExpWorkQueueManagerThread(_QWORD *a1)
{
  char v2; // r12
  struct _WORK_QUEUE_ITEM *v3; // r15
  _QWORD *PoolWithTag; // r14
  struct _KTHREAD *CurrentThread; // rbx
  char v6; // r13
  unsigned __int64 v7; // rsi
  NTSTATUS v8; // eax
  struct _KDPC *v9; // r9
  int v10; // ebx
  __int64 v11; // r10
  __int64 v12; // rsi
  unsigned __int16 *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _KDPC *v16; // rcx
  __int64 j; // r8
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  int v22; // eax
  __int64 i; // rbx
  __int64 v24; // rcx
  unsigned int v25; // r8d
  int PoolDelayed; // eax
  __int64 v27; // rbx
  __int64 v28; // rsi
  __int64 v29; // r8
  int WorkerThread; // eax
  char v31; // [rsp+48h] [rbp-C0h]
  unsigned __int16 v32; // [rsp+4Ch] [rbp-BCh] BYREF
  struct _KTHREAD *v33; // [rsp+50h] [rbp-B8h]
  _QWORD v34[2]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v35[68]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object[3]; // [rsp+178h] [rbp+70h] BYREF

  v2 = 0;
  v32 = 0;
  memset(v35, 0, 0x108uLL);
  v31 = 1;
  v3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6C577845u);
  if ( PoolWithTag )
  {
    v3 = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6C577845u);
    if ( v3 )
    {
      v31 = 0;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v33 = CurrentThread;
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 0xCu);
  v34[1] = -1LL;
  v34[0] = 0LL;
  KeSetTimer2(
    (__int64)(a1 + 16),
    -((10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2),
    (10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds) >> 2,
    (__int64)v34);
  v6 = 0;
  v7 = 10000000LL * (unsigned int)ExpWorkerThreadTimeoutInSeconds;
  Object[0] = a1 + 2;
  Object[1] = a1 + 5;
  v34[0] = v7;
  Object[2] = a1 + 13;
  while ( 1 )
  {
    v8 = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 1, 0, 0LL, 0LL);
    v9 = 0LL;
    if ( !v8 )
      break;
    v22 = v8 - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        for ( i = 0LL; i < 64; i += 8LL )
        {
          v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)a1[1]) + i);
          if ( (v24 & 1) == 0 )
          {
            if ( v24 )
            {
              if ( (*(_DWORD *)(v24 + 712) & 0x4000) == 0 && !*(_DWORD *)(v24 + 4) )
              {
                v25 = (*(_DWORD *)(v24 + 712) & 0x3FFF) - ((2 * *(_DWORD *)(v24 + 716)) >> 1);
                if ( v25 )
                {
                  KeTimeOutQueueWaiters(v24, v7, v25);
                  v9 = 0LL;
                }
              }
            }
          }
        }
        CurrentThread = v33;
      }
      LOBYTE(v11) = 1;
LABEL_13:
      if ( v6 )
        goto LABEL_23;
      goto LABEL_14;
    }
    v6 = 0;
    v27 = 0LL;
    v11 = 1LL;
    do
    {
      v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)a1[1]) + 8 * v27);
      if ( ((unsigned __int8)v28 & (unsigned __int8)v11) != 0 )
        v28 = (__int64)v9;
      if ( *(_DWORD *)(v28 + 704) == *(_DWORD *)(v28 + 708) && ExpNewThreadNecessary(v28, 0x3FFF) )
      {
        if ( (ExpWorkerQueueTestFlags & 2) != 0 )
          KeBugCheckEx(0x163u, (unsigned int)ExpWorkerQueueTestFlags, 2uLL, 0LL, (ULONG_PTR)v9);
        if ( v27 == v11 && v31 == (_BYTE)v9 )
        {
          *(_DWORD *)PoolWithTag = v11;
          PoolWithTag[1] = v28;
          v3->WorkerRoutine = (void (__fastcall *)(void *))ExpIoPoolDeadlockWorker;
          v3->Parameter = PoolWithTag;
          v3->List.Flink = (struct _LIST_ENTRY *)v9;
          ExQueueWorkItem(v3, NormalWorkQueue);
          v31 = 1;
        }
        WorkerThread = ExpCreateWorkerThread((_QWORD *)v28, (__int64)a1 + 276, v29, (int)v9);
        v9 = 0LL;
        v11 = 1LL;
        if ( WorkerThread < 0 )
          v2 = 1;
      }
      v27 += v11;
    }
    while ( v27 <= v11 );
LABEL_14:
    v15 = (__int64)v9;
    do
    {
      v16 = *(struct _KDPC **)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)a1[1]) + v15);
      if ( ((unsigned __int8)v16 & (unsigned __int8)v11) != 0 )
        v16 = v9;
      *((_DWORD *)&v16[11].0 + 1) = v16[11].TargetInfoAsUlong;
      if ( ((__int64)v16[11].DpcListEntry.Next & 0x3FFF) >= SLODWORD(v16[11].ProcessorHistory) || v2 )
        v6 = v11;
      v15 += 8LL;
    }
    while ( v15 <= 8 );
    if ( v6 )
      KeSetCoalescableTimer((PKTIMER)(a1 + 5), (LARGE_INTEGER)-10000000LL, 0, 0xA0u, v9);
    CurrentThread = v33;
LABEL_23:
    v35[0] = 2097153;
    memset(&v35[1], 0, 0x104uLL);
    KeQueryNodeActiveAffinityEx(*(_WORD *)a1[1], (unsigned __int16 *)v35, &v32);
    v2 = 0;
    if ( !(unsigned int)KeIsEqualAffinityEx((unsigned __int16 *)v35, &CurrentThread->UserAffinity->Count) )
      KeSetUserAffinityThread((__int64)CurrentThread, (__int64)v35);
    for ( j = 0LL; j < 64; j += 8LL )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)a1[1]) + j);
      if ( (v18 & 1) == 0 && v18 && *(_DWORD *)(v18 + 664) != v32 )
        KeSetMaximumCountPriQueue(v18, v32);
    }
    CurrentThread = v33;
    v7 = v34[0];
  }
  if ( !*((_DWORD *)a1 + 68) )
  {
    v10 = 0;
    LODWORD(v11) = 1;
    v12 = 0LL;
    do
    {
      v13 = (unsigned __int16 *)a1[1];
      if ( ((unsigned __int8)*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *v13) + v12) & (unsigned __int8)v11) != 0
        && (PoolDelayed = ExpPartitionCreatePoolDelayed(*a1, v13, (unsigned int)v10, v9),
            v9 = 0LL,
            LODWORD(v11) = 1,
            PoolDelayed < 0) )
      {
        v2 = 1;
      }
      else
      {
        v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8LL) + 8LL * *(unsigned __int16 *)a1[1]) + v12);
        if ( ((unsigned __int8)v14 & (unsigned __int8)v11) == 0 )
        {
          if ( v14 )
          {
            if ( ExpNewThreadNecessary(v14, *(_DWORD *)(v14 + 720)) )
            {
              v21 = ExpCreateWorkerThread(v19, (__int64)a1 + 276, v20, (int)v9);
              v9 = 0LL;
              LODWORD(v11) = 1;
              if ( v21 < 0 )
                v2 = 1;
            }
          }
        }
      }
      v10 += v11;
      v12 += 8LL;
    }
    while ( v10 < 8 );
    CurrentThread = v33;
    goto LABEL_13;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
