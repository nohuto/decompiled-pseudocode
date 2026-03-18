/*
 * XREFs of PspAssignProcessToJob @ 0x14062CE24
 * Callers:
 *     PsAssignProcessToJobObject @ 0x14062C530 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     PsInvokeWin32Callout @ 0x140628330 (PsInvokeWin32Callout.c)
 *     PspGetNextJobProcess @ 0x14062C0F0 (PspGetNextJobProcess.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x14062C5B0 (PspGetJobLockHierarchyForAssignment.c)
 *     PspLockJobsAndProcessExclusive @ 0x14062C618 (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobAssignmentDisposition @ 0x14062C698 (PspGetJobAssignmentDisposition.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14062C78C (PspValidateJobAssignmentSiloPolicy.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x14062CDA8 (PspUnlockJobsAndProcessExclusive.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x14062D520 (PspValidateJobAssignmentMemoryPartition.c)
 *     PspValidateJobChainLimits @ 0x14062D5AC (PspValidateJobChainLimits.c)
 *     PspEstablishJobHierarchy @ 0x14062D6C4 (PspEstablishJobHierarchy.c)
 *     PspIncrementJobChainProcessCounts @ 0x14062DBC8 (PspIncrementJobChainProcessCounts.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x14062DC8C (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x14062DE50 (MmAssignProcessToJob.c)
 *     PspChangeProcessExecutionState @ 0x14062E290 (PspChangeProcessExecutionState.c)
 *     PspApplyJobChainLimitsToProcess @ 0x14062E694 (PspApplyJobChainLimitsToProcess.c)
 *     PsQueryProcessAttributes @ 0x140634ADC (PsQueryProcessAttributes.c)
 *     PspLockJobAssignment @ 0x1406635A4 (PspLockJobAssignment.c)
 *     PspUnlockJobAssignment @ 0x1406635D0 (PspUnlockJobAssignment.c)
 *     PspRemoveProcessFromJobChain @ 0x140663918 (PspRemoveProcessFromJobChain.c)
 *     PspChargeJobWakeCounter @ 0x140665398 (PspChargeJobWakeCounter.c)
 *     PspUnlockJob @ 0x140665CB0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140665CF4 (PspLockJobExclusive.c)
 *     PspIsSetJobIoAttribution @ 0x14069F604 (PspIsSetJobIoAttribution.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1406E28EC (PspDoesJobHierarchyPermitUILimits.c)
 *     PspIsJobMovable @ 0x14090B7D4 (PspIsJobMovable.c)
 *     PspQuitNextJobProcess @ 0x14090BA4C (PspQuitNextJobProcess.c)
 */

__int64 __fastcall PspAssignProcessToJob(ULONG_PTR BugCheckParameter3, _QWORD *Object, __int64 a3, int a4)
{
  unsigned int v4; // r14d
  char v5; // bl
  _QWORD *NextJobProcess; // rsi
  struct _KTHREAD *CurrentThread; // r12
  int JobAssignmentDisposition; // eax
  int v12; // ecx
  __int64 v13; // rax
  ULONG_PTR v14; // r12
  int v15; // edi
  __int64 v16; // rdi
  char v17; // bl
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v21; // rax
  unsigned int v22; // eax
  char v23[4]; // [rsp+40h] [rbp-59h] BYREF
  int v24; // [rsp+44h] [rbp-55h] BYREF
  __int64 v25; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *v26; // [rsp+50h] [rbp-49h]
  unsigned int v27; // [rsp+58h] [rbp-41h] BYREF
  __int128 v28; // [rsp+60h] [rbp-39h] BYREF
  _QWORD *v29; // [rsp+70h] [rbp-29h]
  __int128 v30; // [rsp+78h] [rbp-21h] BYREF
  __int64 v31; // [rsp+88h] [rbp-11h]
  int v32[4]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v33; // [rsp+A0h] [rbp+7h]
  __int64 v34; // [rsp+B0h] [rbp+17h]

  v23[0] = 0;
  v29 = 0LL;
  v4 = 0;
  v31 = 0LL;
  v34 = 0LL;
  v28 = 0LL;
  v5 = 0;
  NextJobProcess = Object;
  v30 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v26 = CurrentThread;
  v24 = 0;
  *(_OWORD *)v32 = 0LL;
  v33 = 0LL;
  if ( a4 == 5 )
  {
    a3 = Object[162];
    NextJobProcess = PspGetNextJobProcess(BugCheckParameter3, (__int64)CurrentThread, &v30, 0LL);
    ObfReferenceObjectWithTag(NextJobProcess, 0x624A7350u);
    v5 = 1;
    PspQuitNextJobProcess(BugCheckParameter3, CurrentThread, &v30, NextJobProcess);
    v4 = v24;
  }
  if ( NextJobProcess )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)NextJobProcess + 139) )
    {
      v15 = -1073741558;
      goto LABEL_59;
    }
    v5 |= 0x10u;
  }
  PspGetJobLockHierarchyForAssignment(BugCheckParameter3, (__int64)NextJobProcess, a3, a4, (__int64)v32);
  v5 |= 6u;
  PspLockJobAssignment(CurrentThread);
  PspLockJobsAndProcessExclusive((unsigned int *)v32, (__int64)NextJobProcess, (__int64)CurrentThread, 1);
  if ( a4 == 5 )
  {
    if ( (unsigned __int8)PspIsJobMovable(BugCheckParameter3) )
    {
      v21 = NextJobProcess[162];
      v24 = 5;
      if ( v21 != BugCheckParameter3 || (*((_DWORD *)NextJobProcess + 543) & 0x1000) == 0 )
      {
        v4 = v24;
        v15 = -1073741790;
        goto LABEL_59;
      }
      v4 = v24;
      goto LABEL_10;
    }
LABEL_83:
    v15 = -1073741790;
    goto LABEL_59;
  }
  JobAssignmentDisposition = PspGetJobAssignmentDisposition(BugCheckParameter3, (__int64)NextJobProcess, a3, &v24);
  v4 = v24;
  if ( JobAssignmentDisposition < 0 )
    goto LABEL_83;
  if ( v24 != a4 )
  {
    v15 = -1073741267;
    goto LABEL_59;
  }
  if ( v24 == 2 )
  {
    v15 = 0;
    goto LABEL_59;
  }
LABEL_10:
  if ( NextJobProcess && v4 != 5 )
  {
    a3 = NextJobProcess[162];
    v4 = v24;
  }
  if ( v4 == 4
    && (*(_DWORD *)(BugCheckParameter3 + 1320) & 0x10) != 0
    && ((*(_DWORD *)(a3 + 1320) & 0x10) != 0 || !(unsigned __int8)PspDoesJobHierarchyPermitUILimits(a3))
    || !PspValidateJobAssignmentSiloPolicy(BugCheckParameter3, a3, (__int64)NextJobProcess, v4)
    || !(unsigned __int8)PspValidateJobAssignmentMemoryPartition(BugCheckParameter3, a3, NextJobProcess, v4) )
  {
    goto LABEL_89;
  }
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
    v12 = 0;
    while ( (unsigned int)(v12 - 1) <= 1
         || (*(_DWORD *)(BugCheckParameter3 + 1320) & 0x2000000) == 0
         || (*(_DWORD *)(a3 + 1320) & 0x2000000) == 0 )
    {
      if ( ++v12 >= 3 )
        goto LABEL_25;
    }
    goto LABEL_89;
  }
LABEL_25:
  if ( ((v4 - 4) & 0xFFFFFFFC) == 0
    && v4 != 6
    && (*(_DWORD *)(a3 + 1348) || (unsigned __int8)PspIsSetJobIoAttribution(a3))
    && (*(_DWORD *)(BugCheckParameter3 + 1348) || (unsigned __int8)PspIsSetJobIoAttribution(BugCheckParameter3)) )
  {
LABEL_89:
    v15 = -1073741637;
    goto LABEL_59;
  }
  if ( v4 == 1 || v4 == 3 )
  {
    v13 = a3;
LABEL_31:
    v14 = BugCheckParameter3;
    goto LABEL_32;
  }
  if ( v4 == 4 )
  {
    v13 = 0LL;
    goto LABEL_31;
  }
  if ( v4 != 5 )
  {
    v14 = 0LL;
    v25 = 0LL;
    goto LABEL_34;
  }
  v14 = a3;
  v13 = 0LL;
LABEL_32:
  v25 = v13;
  if ( v14 )
  {
    v15 = PspValidateJobChainLimits(v14, v13, NextJobProcess, 0LL);
    if ( v15 < 0 )
      goto LABEL_101;
  }
LABEL_34:
  v15 = PspEstablishJobHierarchy((PVOID)BugCheckParameter3);
  if ( v15 < 0 )
  {
LABEL_101:
    CurrentThread = v26;
    goto LABEL_59;
  }
  if ( !NextJobProcess )
  {
    v15 = 0;
    goto LABEL_101;
  }
  if ( (*(_DWORD *)(BugCheckParameter3 + 1320) & 0x1000) != 0 )
  {
    v16 = 0LL;
    do
    {
      if ( (*((_DWORD *)NextJobProcess + (int)v16 + 618) & 0x7FFFFFFF) != 0 )
        PspChargeJobWakeCounter((PVOID)BugCheckParameter3, 0, 0LL, 6451018LL);
      _interlockedbittestandset((volatile signed __int32 *)NextJobProcess + v16 + 618, 0x1Fu);
      v16 = (unsigned int)(v16 + 1);
    }
    while ( (unsigned int)v16 < 7 );
    if ( (*((_DWORD *)NextJobProcess + 627) & 0x7FFFFFFF) != 0 )
      PspChargeJobWakeCounter((PVOID)BugCheckParameter3, 4, 0LL, 6451018LL);
    _interlockedbittestandset((volatile signed __int32 *)NextJobProcess + 627, 0x1Fu);
  }
  if ( (_InterlockedExchangeAdd64(NextJobProcess + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(NextJobProcess + 135);
  KeAbPostRelease((ULONG_PTR)(NextJobProcess + 135));
  v4 = v24;
  v17 = v5 | 8;
  v18 = v25;
  if ( v24 == 4 )
    v18 = a3;
  PspIncrementJobChainProcessCounts(v14, v18, NextJobProcess, 0LL);
  PspApplyJobChainLimitsToProcess(BugCheckParameter3, a3, NextJobProcess);
  CurrentThread = v26;
  PspUnlockJobsAndProcessExclusive(v32, 0LL, (__int64)v26);
  v5 = v17 & 0xFB;
  if ( (*(_DWORD *)(BugCheckParameter3 + 1320) & 0x1000000) == 0 )
  {
    PsQueryProcessAttributes(NextJobProcess, v23, 0LL);
    if ( v23[0] )
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 1320), 0x1000000u);
    else
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter3 + 1320), 0x1800000u);
    v4 = v24;
  }
  v15 = PspApplyWorkingSetLimitsToProcess(NextJobProcess);
  if ( v15 >= 0 )
  {
    v19 = 0LL;
    if ( v4 == 5 )
      v19 = 4LL;
    if ( (unsigned int)MmAssignProcessToJob(NextJobProcess, a3, v19) )
    {
      PspUnlockJobAssignment(CurrentThread);
      v5 &= ~2u;
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState((PEPROCESS)NextJobProcess);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      if ( !*(_DWORD *)(BugCheckParameter3 + 448) )
        goto LABEL_57;
      v22 = *(_DWORD *)(BugCheckParameter3 + 480);
      DWORD2(v28) = 1;
      *(_QWORD *)&v28 = BugCheckParameter3;
      v29 = NextJobProcess;
      v27 = v22;
      if ( v22 <= 0xFFFFFFFD )
      {
        PspLockJobExclusive(BugCheckParameter3, CurrentThread);
        v15 = PsInvokeWin32Callout(6, (__int64)&v28, 1, (__int64)&v27);
        PspUnlockJob(BugCheckParameter3, CurrentThread);
      }
      if ( v15 >= 0 )
      {
LABEL_57:
        if ( v4 == 5 )
        {
          v15 = -1073741267;
          v5 |= 0x20u;
        }
      }
    }
    else
    {
      v15 = -1073741756;
    }
  }
LABEL_59:
  if ( (v5 & 0x10) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)NextJobProcess + 139);
  if ( (v5 & 0x20) == 0 && v15 < 0 && (v5 & 8) != 0 )
  {
    if ( v4 == 5 )
      KeBugCheckEx(0xEFu, (ULONG_PTR)NextJobProcess, 0LL, BugCheckParameter3, v15);
    PspRemoveProcessFromJobChain((PEPROCESS)NextJobProcess);
  }
  if ( (v5 & 4) != 0 )
    PspUnlockJobsAndProcessExclusive(v32, (__int64)NextJobProcess, (__int64)CurrentThread);
  if ( (v5 & 2) != 0 )
    PspUnlockJobAssignment(CurrentThread);
  if ( (v5 & 1) != 0 )
    ObfDereferenceObjectWithTag(NextJobProcess, 0x624A7350u);
  return (unsigned int)v15;
}
