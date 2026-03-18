/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x140663918
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x14062C030 (PspTerminateProcessesJobCallback.c)
 *     PspAssignProcessToJob @ 0x14062CE24 (PspAssignProcessToJob.c)
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1406658A0 (PspEnforceLimitsJobPostCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     PspSendJobNotification @ 0x140322D5C (PspSendJobNotification.c)
 *     memset @ 0x140411300 (memset.c)
 *     PspChangeProcessExecutionState @ 0x14062E290 (PspChangeProcessExecutionState.c)
 *     PspRequestProcessExecutionState @ 0x14062EE68 (PspRequestProcessExecutionState.c)
 *     PspLockRootJobFromProcess @ 0x140663854 (PspLockRootJobFromProcess.c)
 *     PspLockJobConditionally @ 0x1406638E8 (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x140665CB0 (PspUnlockJob.c)
 *     PsQueryStatisticsProcess @ 0x140666240 (PsQueryStatisticsProcess.c)
 *     PspUnlockJobConditionally @ 0x14066650C (PspUnlockJobConditionally.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406CEE0C (PspFoldProcessAccountingIntoJob.c)
 *     PspUnlinkJobProcess @ 0x1406D5C28 (PspUnlinkJobProcess.c)
 *     PsTerminateProcess @ 0x1406DC8DC (PsTerminateProcess.c)
 *     PspSubtractAccountingValues @ 0x14090C438 (PspSubtractAccountingValues.c)
 *     EtwTraceJobRemoveProcess @ 0x140938708 (EtwTraceJobRemoveProcess.c)
 */

_QWORD *__fastcall PspRemoveProcessFromJobChain(PEPROCESS Process, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  _QWORD *result; // rax
  char v5; // r15
  bool v7; // zf
  unsigned int v8; // r14d
  struct _KTHREAD *CurrentThread; // rsi
  bool v11; // r12
  int v12; // r13d
  __int64 v13; // rbx
  _QWORD *v14; // rax
  char v15; // [rsp+28h] [rbp-69h]
  __int64 v16; // [rsp+30h] [rbp-61h] BYREF
  __int64 v17; // [rsp+38h] [rbp-59h] BYREF
  struct _KTHREAD *v18; // [rsp+40h] [rbp-51h]
  _BYTE v19[160]; // [rsp+48h] [rbp-49h] BYREF
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF
  char v22; // [rsp+108h] [rbp+77h]

  result = &retaddr;
  v22 = a3;
  v5 = 0;
  v7 = (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0;
  v8 = a3;
  v17 = 0LL;
  v16 = 0LL;
  if ( v7 || (a3 & 1) != 0 )
  {
    memset(v19, 0, 0x68uLL);
    CurrentThread = KeGetCurrentThread();
    v18 = CurrentThread;
    v11 = !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0);
    v15 = 0;
    if ( (v8 & 2) != 0
      && (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0
      && (BYTE4(Process[2].Header.WaitListHead.Flink) & 0x40) == 0 )
    {
      PsTerminateProcess(Process, a4);
      v15 = 1;
    }
    v12 = 1;
    PspLockRootJobFromProcess((__int64)Process, (__int64)CurrentThread, &v17, &v16);
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobRemoveProcess(Process, v8, a4);
    if ( (v8 & 4) != 0 && !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 1u) )
    {
      _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFFFFFFDF);
      PsQueryStatisticsProcess(Process, v19);
      v5 = 1;
    }
    v13 = v17;
    if ( v17 )
    {
      do
      {
        PspLockJobConditionally(v13, &v16);
        if ( v11 )
        {
          --*(_DWORD *)(v13 + 216);
          if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x20) != 0 )
            --*(_DWORD *)(v13 + 1228);
        }
        if ( (v8 & 8) != 0 && v11 )
          ++*(_DWORD *)(v13 + 220);
        if ( a2 && (!*a2 || *a2 == v13) && *(_QWORD *)(v13 + 456) && ((1 << a2[1]) & *(_DWORD *)(v13 + 876)) != 0 )
          PspSendJobNotification(v13, a2[1], a2[2], 0);
        if ( v5 )
        {
          PspFoldProcessAccountingIntoJob(v13, Process, v19);
          if ( v13 == Process[1].Affinity.Bitmap[16] && *(_DWORD *)(v13 + 1232) != PspEnforcementSequenceNumber )
            v12 = 0;
          if ( v12 == 1 )
          {
            v14 = (_QWORD *)(v13 + 1120);
            if ( v13 + 1120 < (unsigned __int64)(v13 + 1224) )
            {
              while ( !*v14 )
              {
                if ( (unsigned __int64)++v14 >= v13 + 1224 )
                  goto LABEL_13;
              }
              PspSubtractAccountingValues(v13 + 1120, v19);
              v12 = 2;
            }
          }
        }
LABEL_13:
        PspUnlockJobConditionally(v13, &v16);
        v13 = *(_QWORD *)(v13 + 1072);
      }
      while ( v13 );
      v13 = v17;
      CurrentThread = v18;
      LOBYTE(v8) = v22;
    }
    PspLockJobConditionally(v13, &v16);
    if ( (v8 & 1) != 0 )
    {
      PspUnlinkJobProcess(v13);
      PspUnlockJobConditionally(v13, &v16);
      return (_QWORD *)PspUnlockJob(v16, CurrentThread);
    }
    else
    {
      if ( v11 && (Process[1].DirectoryTableBase & 4) != 0 && !v15 )
        PspRequestProcessExecutionState((__int64)Process, 0, 0);
      PspUnlockJobConditionally(v13, &v16);
      PspUnlockJob(v16, CurrentThread);
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState(Process);
      return KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
  }
  return result;
}
