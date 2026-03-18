/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x14065DF9C
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x140612560 (PspEnforceLimitsJobPostCallback.c)
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     PspAssignProcessToJob @ 0x1406741DC (PspAssignProcessToJob.c)
 *     PspTerminateProcessesJobCallback @ 0x1406751B0 (PspTerminateProcessesJobCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     PspSendJobNotification @ 0x1403144BC (PspSendJobNotification.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PspUnlockJobConditionally @ 0x1405F0C88 (PspUnlockJobConditionally.c)
 *     PspUnlockJob @ 0x140612970 (PspUnlockJob.c)
 *     PsQueryStatisticsProcess @ 0x140616850 (PsQueryStatisticsProcess.c)
 *     PspRequestProcessExecutionState @ 0x14065D87C (PspRequestProcessExecutionState.c)
 *     PspLockJobConditionally @ 0x14065E260 (PspLockJobConditionally.c)
 *     PspLockRootJobFromProcess @ 0x14065E290 (PspLockRootJobFromProcess.c)
 *     PspChangeProcessExecutionState @ 0x14065E324 (PspChangeProcessExecutionState.c)
 *     PspFoldProcessAccountingIntoJob @ 0x14065E584 (PspFoldProcessAccountingIntoJob.c)
 *     PspUnlinkJobProcess @ 0x14065E6FC (PspUnlinkJobProcess.c)
 *     PsTerminateProcess @ 0x1406E666C (PsTerminateProcess.c)
 *     PspSubtractAccountingValues @ 0x140905538 (PspSubtractAccountingValues.c)
 *     EtwTraceJobRemoveProcess @ 0x140931628 (EtwTraceJobRemoveProcess.c)
 */

void __fastcall PspRemoveProcessFromJobChain(PEPROCESS Process, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  char v4; // r15
  bool v6; // zf
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  bool v10; // r12
  int v11; // r13d
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  char v17; // [rsp+28h] [rbp-69h]
  __int64 v18; // [rsp+30h] [rbp-61h] BYREF
  __int64 v19; // [rsp+38h] [rbp-59h] BYREF
  struct _KTHREAD *v20; // [rsp+40h] [rbp-51h]
  _QWORD v21[20]; // [rsp+48h] [rbp-49h] BYREF
  char v23; // [rsp+108h] [rbp+77h]

  v23 = a3;
  v4 = 0;
  v6 = (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0;
  v7 = a3;
  v19 = 0LL;
  v18 = 0LL;
  if ( v6 || (a3 & 1) != 0 )
  {
    memset(v21, 0, 0x68uLL);
    CurrentThread = KeGetCurrentThread();
    v20 = CurrentThread;
    v10 = !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0);
    v17 = 0;
    if ( (v7 & 2) != 0
      && (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0
      && (BYTE4(Process[2].Header.WaitListHead.Flink) & 0x40) == 0 )
    {
      PsTerminateProcess(Process, a4);
      v17 = 1;
    }
    v11 = 1;
    PspLockRootJobFromProcess(Process, CurrentThread, &v19, &v18);
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobRemoveProcess(Process, v7, a4);
    if ( (v7 & 4) != 0 && !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 1u) )
    {
      _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFFFFFFDF);
      PsQueryStatisticsProcess((__int64)Process, v21);
      v4 = 1;
    }
    v12 = v19;
    if ( v19 )
    {
      do
      {
        PspLockJobConditionally(v12, &v18);
        if ( v10 )
        {
          --*(_DWORD *)(v12 + 216);
          if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x20) != 0 )
            --*(_DWORD *)(v12 + 1228);
        }
        if ( (v7 & 8) != 0 && v10 )
          ++*(_DWORD *)(v12 + 220);
        if ( a2 && (!*a2 || *a2 == v12) && *(_QWORD *)(v12 + 456) && ((1 << a2[1]) & *(_DWORD *)(v12 + 876)) != 0 )
          PspSendJobNotification(v12, a2[1], a2[2], 0);
        if ( v4 )
        {
          PspFoldProcessAccountingIntoJob(v12, Process, v21);
          if ( v12 == Process[1].Affinity.Bitmap[16] && *(_DWORD *)(v12 + 1232) != PspEnforcementSequenceNumber )
            v11 = 0;
          if ( v11 == 1 )
          {
            v16 = (_QWORD *)(v12 + 1120);
            if ( v12 + 1120 < (unsigned __int64)(v12 + 1224) )
            {
              while ( !*v16 )
              {
                if ( (unsigned __int64)++v16 >= v12 + 1224 )
                  goto LABEL_13;
              }
              PspSubtractAccountingValues(v12 + 1120, v21);
              v11 = 2;
            }
          }
        }
LABEL_13:
        PspUnlockJobConditionally(v12, &v18);
        v12 = *(_QWORD *)(v12 + 1072);
      }
      while ( v12 );
      v12 = v19;
      CurrentThread = v20;
      LOBYTE(v7) = v23;
    }
    PspLockJobConditionally(v12, &v18);
    if ( (v7 & 1) != 0 )
    {
      PspUnlinkJobProcess(v12, Process);
      PspUnlockJobConditionally(v12, &v18);
      PspUnlockJob(v18, (__int64)CurrentThread);
    }
    else
    {
      if ( v10 && (Process[1].DirectoryTableBase & 4) != 0 && !v17 )
        PspRequestProcessExecutionState((__int64)Process, 0, 0);
      PspUnlockJobConditionally(v12, &v18);
      PspUnlockJob(v18, (__int64)CurrentThread);
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState(Process);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v13, v14, v15);
    }
  }
}
