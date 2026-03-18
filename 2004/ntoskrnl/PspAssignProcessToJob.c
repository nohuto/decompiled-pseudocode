/*
 * XREFs of PspAssignProcessToJob @ 0x140658924
 * Callers:
 *     PsAssignProcessToJobObject @ 0x140658030 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     PsInvokeWin32Callout @ 0x140602AD0 (PsInvokeWin32Callout.c)
 *     PspUnlockJobAssignment @ 0x140617DF0 (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x140617E40 (PspLockJobAssignment.c)
 *     PspIsSetJobIoAttribution @ 0x140656F54 (PspIsSetJobIoAttribution.c)
 *     PspGetNextJobProcess @ 0x140657B30 (PspGetNextJobProcess.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x1406580B0 (PspGetJobLockHierarchyForAssignment.c)
 *     PspLockJobsAndProcessExclusive @ 0x140658118 (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobAssignmentDisposition @ 0x140658198 (PspGetJobAssignmentDisposition.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14065828C (PspValidateJobAssignmentSiloPolicy.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1406588A8 (PspUnlockJobsAndProcessExclusive.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x140658F80 (PspValidateJobAssignmentMemoryPartition.c)
 *     PspValidateJobChainLimits @ 0x14065900C (PspValidateJobChainLimits.c)
 *     PspEstablishJobHierarchy @ 0x140659124 (PspEstablishJobHierarchy.c)
 *     PspIncrementJobChainProcessCounts @ 0x140659628 (PspIncrementJobChainProcessCounts.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406596EC (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x1406598B0 (MmAssignProcessToJob.c)
 *     PspApplyJobChainLimitsToProcess @ 0x140659B74 (PspApplyJobChainLimitsToProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x14065A624 (PspRemoveProcessFromJobChain.c)
 *     PspChangeProcessExecutionState @ 0x14065A9AC (PspChangeProcessExecutionState.c)
 *     PsQueryProcessAttributes @ 0x1406667C0 (PsQueryProcessAttributes.c)
 *     PspChargeJobWakeCounter @ 0x14068A1E0 (PspChargeJobWakeCounter.c)
 *     PspUnlockJob @ 0x14068AAF0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x14068AB34 (PspLockJobExclusive.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1407106AC (PspDoesJobHierarchyPermitUILimits.c)
 *     PspIsJobMovable @ 0x140905BB4 (PspIsJobMovable.c)
 *     PspQuitNextJobProcess @ 0x140905E2C (PspQuitNextJobProcess.c)
 */

__int64 __fastcall PspAssignProcessToJob(ULONG_PTR BugCheckParameter3, _QWORD *Object, __int64 a3, int a4)
{
  unsigned int v4; // r14d
  char v5; // bl
  _QWORD *NextJobProcess; // rsi
  struct _KTHREAD *CurrentThread; // r12
  int JobAssignmentDisposition; // eax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rax
  ULONG_PTR v15; // r12
  int v16; // edi
  __int64 v17; // rdi
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v22; // rax
  unsigned int v23; // eax
  char v24[4]; // [rsp+40h] [rbp-59h] BYREF
  int v25; // [rsp+44h] [rbp-55h] BYREF
  __int64 v26; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *v27; // [rsp+50h] [rbp-49h]
  unsigned int v28; // [rsp+58h] [rbp-41h] BYREF
  __int128 v29; // [rsp+60h] [rbp-39h] BYREF
  _QWORD *v30; // [rsp+70h] [rbp-29h]
  __int128 v31; // [rsp+78h] [rbp-21h] BYREF
  __int64 v32; // [rsp+88h] [rbp-11h]
  _OWORD v33[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+17h]

  v24[0] = 0;
  v30 = 0LL;
  v4 = 0;
  v32 = 0LL;
  v34 = 0LL;
  v29 = 0LL;
  v5 = 0;
  NextJobProcess = Object;
  v31 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v27 = CurrentThread;
  v25 = 0;
  memset(v33, 0, sizeof(v33));
  if ( a4 == 5 )
  {
    a3 = Object[162];
    NextJobProcess = PspGetNextJobProcess(BugCheckParameter3, (__int64)CurrentThread, &v31, 0LL);
    ObfReferenceObjectWithTag(NextJobProcess, 0x624A7350u);
    v5 = 1;
    PspQuitNextJobProcess(BugCheckParameter3, CurrentThread, &v31, NextJobProcess);
    v4 = v25;
  }
  if ( NextJobProcess )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)NextJobProcess + 139) )
    {
      v16 = -1073741558;
      goto LABEL_59;
    }
    v5 |= 0x10u;
  }
  PspGetJobLockHierarchyForAssignment(BugCheckParameter3, (__int64)NextJobProcess, a3, a4, (__int64)v33);
  v5 |= 6u;
  PspLockJobAssignment((__int64)CurrentThread);
  PspLockJobsAndProcessExclusive((unsigned int *)v33, (__int64)NextJobProcess, (__int64)CurrentThread, 1);
  if ( a4 == 5 )
  {
    if ( (unsigned __int8)PspIsJobMovable(BugCheckParameter3) )
    {
      v22 = NextJobProcess[162];
      v25 = 5;
      if ( v22 != BugCheckParameter3 || (*((_DWORD *)NextJobProcess + 543) & 0x1000) == 0 )
      {
        v4 = v25;
        v16 = -1073741790;
        goto LABEL_59;
      }
      v4 = v25;
      goto LABEL_10;
    }
LABEL_83:
    v16 = -1073741790;
    goto LABEL_59;
  }
  JobAssignmentDisposition = PspGetJobAssignmentDisposition(BugCheckParameter3, (__int64)NextJobProcess, a3, &v25);
  v4 = v25;
  if ( JobAssignmentDisposition < 0 )
    goto LABEL_83;
  if ( v25 != a4 )
  {
    v16 = -1073741267;
    goto LABEL_59;
  }
  if ( v25 == 2 )
  {
    v16 = 0;
    goto LABEL_59;
  }
LABEL_10:
  if ( NextJobProcess && v4 != 5 )
  {
    a3 = NextJobProcess[162];
    v4 = v25;
  }
  if ( v4 == 4
    && (*(_DWORD *)(BugCheckParameter3 + 1320) & 0x10) != 0
    && ((*(_DWORD *)(a3 + 1320) & 0x10) != 0 || !(unsigned __int8)PspDoesJobHierarchyPermitUILimits(a3))
    || !PspValidateJobAssignmentSiloPolicy(BugCheckParameter3, a3, (__int64)NextJobProcess, v4)
    || !(unsigned __int8)PspValidateJobAssignmentMemoryPartition(BugCheckParameter3, a3, NextJobProcess, v4) )
  {
    goto LABEL_89;
  }
  v12 = 4294967292LL;
  if ( v4 == 5 )
  {
    if ( (*(_DWORD *)(BugCheckParameter3 + 848) & 1) != 0 )
      goto LABEL_89;
  }
  else if ( ((v4 - 4) & 0xFFFFFFFC) != 0 || v4 == 6 )
  {
    goto LABEL_20;
  }
  if ( (unsigned int)*(unsigned __int8 *)(a3 + 874) + 1 > 0x64 )
    goto LABEL_89;
LABEL_20:
  if ( ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 )
  {
    v13 = 0;
    while ( (unsigned int)(v13 - 1) <= 1
         || (*(_DWORD *)(BugCheckParameter3 + 1320) & 0x2000000) == 0
         || (*(_DWORD *)(a3 + 1320) & 0x2000000) == 0 )
    {
      if ( ++v13 >= 3 )
        goto LABEL_25;
    }
    goto LABEL_89;
  }
LABEL_25:
  if ( ((v4 - 4) & 0xFFFFFFFC) == 0
    && v4 != 6
    && (*(_DWORD *)(a3 + 1348) || PspIsSetJobIoAttribution((_QWORD *)a3, 4294967292LL, 1))
    && (*(_DWORD *)(BugCheckParameter3 + 1348) || PspIsSetJobIoAttribution((_QWORD *)BugCheckParameter3, v12, 0)) )
  {
LABEL_89:
    v16 = -1073741637;
    goto LABEL_59;
  }
  if ( v4 == 1 || v4 == 3 )
  {
    v14 = a3;
LABEL_31:
    v15 = BugCheckParameter3;
    goto LABEL_32;
  }
  if ( v4 == 4 )
  {
    v14 = 0LL;
    goto LABEL_31;
  }
  if ( v4 != 5 )
  {
    v15 = 0LL;
    v26 = 0LL;
    goto LABEL_34;
  }
  v15 = a3;
  v14 = 0LL;
LABEL_32:
  v26 = v14;
  if ( v15 )
  {
    v16 = PspValidateJobChainLimits(v15, v14, NextJobProcess, 0LL);
    if ( v16 < 0 )
      goto LABEL_101;
  }
LABEL_34:
  v16 = PspEstablishJobHierarchy((PVOID)BugCheckParameter3);
  if ( v16 < 0 )
  {
LABEL_101:
    CurrentThread = v27;
    goto LABEL_59;
  }
  if ( !NextJobProcess )
  {
    v16 = 0;
    goto LABEL_101;
  }
  if ( (*(_DWORD *)(BugCheckParameter3 + 1320) & 0x1000) != 0 )
  {
    v17 = 0LL;
    do
    {
      if ( (*((_DWORD *)NextJobProcess + (int)v17 + 618) & 0x7FFFFFFF) != 0 )
        PspChargeJobWakeCounter((PVOID)BugCheckParameter3, 0, 0LL, 6451018LL);
      _interlockedbittestandset((volatile signed __int32 *)NextJobProcess + v17 + 618, 0x1Fu);
      v17 = (unsigned int)(v17 + 1);
    }
    while ( (unsigned int)v17 < 7 );
    if ( (*((_DWORD *)NextJobProcess + 627) & 0x7FFFFFFF) != 0 )
      PspChargeJobWakeCounter((PVOID)BugCheckParameter3, 4, 0LL, 6451018LL);
    _interlockedbittestandset((volatile signed __int32 *)NextJobProcess + 627, 0x1Fu);
  }
  if ( (_InterlockedExchangeAdd64(NextJobProcess + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(NextJobProcess + 135);
  KeAbPostRelease((ULONG_PTR)(NextJobProcess + 135));
  v4 = v25;
  v18 = v5 | 8;
  v19 = v26;
  if ( v25 == 4 )
    v19 = a3;
  PspIncrementJobChainProcessCounts(v15, v19, NextJobProcess, 0LL);
  PspApplyJobChainLimitsToProcess(BugCheckParameter3, a3, NextJobProcess);
  CurrentThread = v27;
  PspUnlockJobsAndProcessExclusive((int *)v33, 0LL, (__int64)v27);
  v5 = v18 & 0xFB;
  if ( (*(_DWORD *)(BugCheckParameter3 + 1320) & 0x1000000) == 0 )
  {
    PsQueryProcessAttributes(NextJobProcess, v24, 0LL);
    if ( v24[0] )
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 1320), 0x1000000u);
    else
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 1320), 0x1800000u);
    v4 = v25;
  }
  v16 = PspApplyWorkingSetLimitsToProcess(NextJobProcess);
  if ( v16 >= 0 )
  {
    v20 = 0LL;
    if ( v4 == 5 )
      v20 = 4LL;
    if ( (unsigned int)MmAssignProcessToJob(NextJobProcess, a3, v20) )
    {
      PspUnlockJobAssignment((__int64)CurrentThread);
      v5 &= ~2u;
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState((PEPROCESS)NextJobProcess);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( !*(_DWORD *)(BugCheckParameter3 + 448) )
        goto LABEL_57;
      v23 = *(_DWORD *)(BugCheckParameter3 + 480);
      DWORD2(v29) = 1;
      *(_QWORD *)&v29 = BugCheckParameter3;
      v30 = NextJobProcess;
      v28 = v23;
      if ( v23 <= 0xFFFFFFFD )
      {
        PspLockJobExclusive(BugCheckParameter3, CurrentThread);
        v16 = PsInvokeWin32Callout(6, (__int64)&v29, 1, (__int64)&v28);
        PspUnlockJob(BugCheckParameter3, CurrentThread);
      }
      if ( v16 >= 0 )
      {
LABEL_57:
        if ( v4 == 5 )
        {
          v16 = -1073741267;
          v5 |= 0x20u;
        }
      }
    }
    else
    {
      v16 = -1073741756;
    }
  }
LABEL_59:
  if ( (v5 & 0x10) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)NextJobProcess + 139);
  if ( (v5 & 0x20) == 0 && v16 < 0 && (v5 & 8) != 0 )
  {
    if ( v4 == 5 )
      KeBugCheckEx(0xEFu, (ULONG_PTR)NextJobProcess, 0LL, BugCheckParameter3, v16);
    PspRemoveProcessFromJobChain((PEPROCESS)NextJobProcess);
  }
  if ( (v5 & 4) != 0 )
    PspUnlockJobsAndProcessExclusive((int *)v33, (__int64)NextJobProcess, (__int64)CurrentThread);
  if ( (v5 & 2) != 0 )
    PspUnlockJobAssignment((__int64)CurrentThread);
  if ( (v5 & 1) != 0 )
    ObfDereferenceObjectWithTag(NextJobProcess, 0x624A7350u);
  return (unsigned int)v16;
}
