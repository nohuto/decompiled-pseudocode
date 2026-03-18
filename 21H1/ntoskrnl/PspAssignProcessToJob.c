/*
 * XREFs of PspAssignProcessToJob @ 0x1406741DC
 * Callers:
 *     PsAssignProcessToJobObject @ 0x140674EF0 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     PsQueryProcessAttributes @ 0x1405E04C0 (PsQueryProcessAttributes.c)
 *     PspChargeJobWakeCounter @ 0x140612060 (PspChargeJobWakeCounter.c)
 *     PspUnlockJob @ 0x140612970 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406129B4 (PspLockJobExclusive.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 *     PspApplyJobChainLimitsToProcess @ 0x14065D0A8 (PspApplyJobChainLimitsToProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x14065DF9C (PspRemoveProcessFromJobChain.c)
 *     PspChangeProcessExecutionState @ 0x14065E324 (PspChangeProcessExecutionState.c)
 *     PspUnlockJobAssignment @ 0x14066F510 (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x14066F560 (PspLockJobAssignment.c)
 *     MmAssignProcessToJob @ 0x140671C70 (MmAssignProcessToJob.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x140671D90 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspIncrementJobChainProcessCounts @ 0x140671F54 (PspIncrementJobChainProcessCounts.c)
 *     PspEstablishJobHierarchy @ 0x140672018 (PspEstablishJobHierarchy.c)
 *     PspValidateJobChainLimits @ 0x14067251C (PspValidateJobChainLimits.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x140672634 (PspValidateJobAssignmentMemoryPartition.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x140674678 (PspUnlockJobsAndProcessExclusive.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1406746F4 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspGetJobAssignmentDisposition @ 0x140674D08 (PspGetJobAssignmentDisposition.c)
 *     PspLockJobsAndProcessExclusive @ 0x140674DFC (PspLockJobsAndProcessExclusive.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x140674E7C (PspGetJobLockHierarchyForAssignment.c)
 *     PspGetNextJobProcess @ 0x140675270 (PspGetNextJobProcess.c)
 *     PspIsSetJobIoAttribution @ 0x1406756F4 (PspIsSetJobIoAttribution.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1406ECBCC (PspDoesJobHierarchyPermitUILimits.c)
 *     PspIsJobMovable @ 0x1409048D4 (PspIsJobMovable.c)
 *     PspQuitNextJobProcess @ 0x140904B4C (PspQuitNextJobProcess.c)
 */

__int64 __fastcall PspAssignProcessToJob(PVOID Object, PEPROCESS Process, __int64 a3, int a4)
{
  unsigned int v4; // r14d
  char v5; // bl
  PEPROCESS NextJobProcess; // rsi
  struct _KTHREAD *CurrentThread; // r12
  int JobAssignmentDisposition; // eax
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // r12
  int v15; // edi
  __int64 v16; // rdi
  char v17; // bl
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  _DWORD *v22; // r9
  int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // r13d
  PVOID v32; // rax
  unsigned int v33; // eax
  _BYTE v34[4]; // [rsp+40h] [rbp-59h] BYREF
  int v35; // [rsp+44h] [rbp-55h] BYREF
  __int64 v36; // [rsp+48h] [rbp-51h]
  struct _KTHREAD *v37; // [rsp+50h] [rbp-49h]
  unsigned int v38; // [rsp+58h] [rbp-41h] BYREF
  __int128 v39; // [rsp+60h] [rbp-39h] BYREF
  PEPROCESS v40; // [rsp+70h] [rbp-29h]
  __int128 v41; // [rsp+78h] [rbp-21h] BYREF
  __int64 v42; // [rsp+88h] [rbp-11h]
  _OWORD v43[2]; // [rsp+90h] [rbp-9h] BYREF
  __int64 v44; // [rsp+B0h] [rbp+17h]

  v34[0] = 0;
  v40 = 0LL;
  v4 = 0;
  v42 = 0LL;
  v44 = 0LL;
  v39 = 0LL;
  v5 = 0;
  NextJobProcess = Process;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v37 = CurrentThread;
  v35 = 0;
  memset(v43, 0, sizeof(v43));
  if ( a4 == 5 )
  {
    a3 = Process[1].Affinity.Bitmap[16];
    NextJobProcess = (PEPROCESS)PspGetNextJobProcess(Object, CurrentThread, &v41, 0LL);
    ObfReferenceObjectWithTag(NextJobProcess, 0x624A7350u);
    v5 = 1;
    PspQuitNextJobProcess(Object, CurrentThread, &v41, NextJobProcess);
    v4 = v35;
  }
  if ( !NextJobProcess )
  {
LABEL_6:
    PspGetJobLockHierarchyForAssignment((_DWORD)Object, (_DWORD)NextJobProcess, a3, a4, (__int64)v43);
    v5 |= 6u;
    PspLockJobAssignment((__int64)CurrentThread);
    PspLockJobsAndProcessExclusive(v43, NextJobProcess, CurrentThread, 1LL);
    if ( a4 == 5 )
    {
      if ( (unsigned __int8)PspIsJobMovable(Object) )
      {
        v32 = (PVOID)NextJobProcess[1].Affinity.Bitmap[16];
        v35 = 5;
        if ( v32 == Object && (HIDWORD(NextJobProcess[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v4 = v35;
          goto LABEL_10;
        }
        v4 = v35;
        v15 = -1073741790;
LABEL_59:
        v30 = -1073741558;
        goto LABEL_60;
      }
    }
    else
    {
      JobAssignmentDisposition = PspGetJobAssignmentDisposition(Object, NextJobProcess, a3, &v35);
      v4 = v35;
      if ( JobAssignmentDisposition >= 0 )
      {
        if ( v35 == a4 )
        {
          if ( v35 != 2 )
          {
LABEL_10:
            if ( NextJobProcess && v4 != 5 )
            {
              a3 = NextJobProcess[1].Affinity.Bitmap[16];
              v4 = v35;
            }
            if ( v4 == 4
              && (*((_DWORD *)Object + 330) & 0x10) != 0
              && ((*(_DWORD *)(a3 + 1320) & 0x10) != 0 || !(unsigned __int8)PspDoesJobHierarchyPermitUILimits(a3))
              || !(unsigned __int8)PspValidateJobAssignmentSiloPolicy(Object, a3, NextJobProcess, v4)
              || !PspValidateJobAssignmentMemoryPartition((__int64)Object, a3, (__int64)NextJobProcess, v4) )
            {
              goto LABEL_90;
            }
            if ( v4 == 5 )
            {
              if ( (*((_DWORD *)Object + 212) & 1) != 0 )
                goto LABEL_90;
            }
            else if ( ((v4 - 4) & 0xFFFFFFFC) != 0 || v4 == 6 )
            {
LABEL_20:
              if ( ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 )
              {
                v12 = 0;
                while ( (unsigned int)(v12 - 1) <= 1
                     || (*((_DWORD *)Object + 330) & 0x2000000) == 0
                     || (*(_DWORD *)(a3 + 1320) & 0x2000000) == 0 )
                {
                  if ( ++v12 >= 3 )
                    goto LABEL_25;
                }
                goto LABEL_90;
              }
LABEL_25:
              if ( ((v4 - 4) & 0xFFFFFFFC) != 0
                || v4 == 6
                || !*(_DWORD *)(a3 + 1348) && !(unsigned __int8)PspIsSetJobIoAttribution(a3)
                || !*((_DWORD *)Object + 337) && !(unsigned __int8)PspIsSetJobIoAttribution((__int64)Object) )
              {
                switch ( v4 )
                {
                  case 1u:
                  case 3u:
                    v13 = a3;
                    break;
                  case 4u:
                    v13 = 0LL;
                    break;
                  case 5u:
                    v14 = a3;
                    v13 = 0LL;
LABEL_32:
                    v36 = v13;
                    if ( v14 )
                    {
                      v15 = PspValidateJobChainLimits(v14, v13, (__int64)NextJobProcess, 0);
                      if ( v15 < 0 )
                      {
LABEL_102:
                        CurrentThread = v37;
                        goto LABEL_59;
                      }
                    }
LABEL_34:
                    v15 = PspEstablishJobHierarchy((char *)Object, (__int64)NextJobProcess, a3, v4);
                    if ( v15 >= 0 )
                    {
                      if ( NextJobProcess )
                      {
                        if ( (*((_DWORD *)Object + 330) & 0x1000) != 0 )
                        {
                          v16 = 0LL;
                          do
                          {
                            if ( (*((_DWORD *)&NextJobProcess[2].AffinityPadding[8] + (int)v16) & 0x7FFFFFFF) != 0 )
                              PspChargeJobWakeCounter(
                                (char *)Object,
                                (char *)a3,
                                v16,
                                *((_DWORD *)&NextJobProcess[2].AffinityPadding[8] + (int)v16) & 0x7FFFFFFF,
                                0,
                                0LL,
                                6451018LL);
                            _interlockedbittestandset(
                              (volatile signed __int32 *)&NextJobProcess[2].AffinityPadding[8] + v16,
                              0x1Fu);
                            v16 = (unsigned int)(v16 + 1);
                          }
                          while ( (unsigned int)v16 < 7 );
                          if ( (HIDWORD(NextJobProcess[2].ReadyListHead.Flink) & 0x7FFFFFFF) != 0 )
                            PspChargeJobWakeCounter(
                              (char *)Object,
                              (char *)a3,
                              0,
                              HIDWORD(NextJobProcess[2].ReadyListHead.Flink) & 0x7FFFFFFF,
                              4,
                              0LL,
                              6451018LL);
                          _interlockedbittestandset(
                            (volatile signed __int32 *)&NextJobProcess[2].ReadyListHead.Flink + 1,
                            0x1Fu);
                        }
                        if ( (_InterlockedExchangeAdd64(
                                (volatile signed __int64 *)&NextJobProcess[1].Header.Lock,
                                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                          ExfTryToWakePushLock(&NextJobProcess[1]);
                        KeAbPostRelease((ULONG_PTR)&NextJobProcess[1]);
                        v4 = v35;
                        v17 = v5 | 8;
                        v18 = v36;
                        if ( v35 == 4 )
                          v18 = a3;
                        PspIncrementJobChainProcessCounts(v14, v18, (__int64)NextJobProcess, 0);
                        PspApplyJobChainLimitsToProcess((__int64)Object, a3, (__int64)NextJobProcess);
                        CurrentThread = v37;
                        PspUnlockJobsAndProcessExclusive(v43, 0LL, v37);
                        v5 = v17 & 0xFB;
                        if ( (*((_DWORD *)Object + 330) & 0x1000000) == 0 )
                        {
                          PsQueryProcessAttributes(NextJobProcess, (__int64)v34, 0LL);
                          if ( v34[0] )
                            _InterlockedOr((volatile signed __int32 *)Object + 330, 0x1000000u);
                          else
                            _InterlockedOr((volatile signed __int32 *)Object + 330, 0x1800000u);
                          v4 = v35;
                        }
                        v15 = PspApplyWorkingSetLimitsToProcess((__int64)NextJobProcess, v19, v20, v21);
                        if ( v15 >= 0 )
                        {
                          v23 = 0;
                          if ( v4 == 5 )
                            v23 = 4;
                          if ( (unsigned int)MmAssignProcessToJob((__int64)NextJobProcess, a3, v23, v22) )
                          {
                            PspUnlockJobAssignment((__int64)CurrentThread);
                            v5 &= ~2u;
                            --CurrentThread->KernelApcDisable;
                            PspChangeProcessExecutionState(NextJobProcess, v24, v25, v26);
                            KeLeaveCriticalRegionThread((__int64)CurrentThread, v27, v28, v29);
                            if ( !*((_DWORD *)Object + 112) )
                              goto LABEL_57;
                            v33 = *((_DWORD *)Object + 120);
                            DWORD2(v39) = 1;
                            *(_QWORD *)&v39 = Object;
                            v40 = NextJobProcess;
                            v38 = v33;
                            if ( v33 <= 0xFFFFFFFD )
                            {
                              PspLockJobExclusive((__int64)Object, (__int64)CurrentThread);
                              v15 = PsInvokeWin32Callout(6, (__int64)&v39, 1, (__int64)&v38);
                              PspUnlockJob((__int64)Object, (__int64)CurrentThread);
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
                        goto LABEL_59;
                      }
                      v15 = 0;
                    }
                    goto LABEL_102;
                  default:
                    v14 = 0LL;
                    v36 = 0LL;
                    goto LABEL_34;
                }
                v14 = (__int64)Object;
                goto LABEL_32;
              }
LABEL_90:
              v15 = -1073741637;
              goto LABEL_59;
            }
            if ( (unsigned int)*(unsigned __int8 *)(a3 + 874) + 1 > 0x64 )
              goto LABEL_90;
            goto LABEL_20;
          }
          v15 = 0;
        }
        else
        {
          v15 = -1073741267;
        }
        goto LABEL_59;
      }
    }
    v15 = -1073741790;
    goto LABEL_59;
  }
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&NextJobProcess[1].ProfileListHead.Blink) )
  {
    v5 |= 0x10u;
    goto LABEL_6;
  }
  v30 = -1073741558;
  v15 = -1073741558;
LABEL_60:
  if ( (v5 & 0x10) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&NextJobProcess[1].ProfileListHead.Blink);
  if ( (v5 & 0x20) == 0 && v15 < 0 && (v5 & 8) != 0 )
  {
    if ( v4 == 5 )
      KeBugCheckEx(0xEFu, (ULONG_PTR)NextJobProcess, 0LL, (ULONG_PTR)Object, v15);
    if ( v15 != -1073741558 )
      v30 = -1073741756;
    PspRemoveProcessFromJobChain(NextJobProcess, 0LL, 0xAu, v30);
  }
  if ( (v5 & 4) != 0 )
    PspUnlockJobsAndProcessExclusive(v43, NextJobProcess, CurrentThread);
  if ( (v5 & 2) != 0 )
    PspUnlockJobAssignment((__int64)CurrentThread);
  if ( (v5 & 1) != 0 )
    ObfDereferenceObjectWithTag(NextJobProcess, 0x624A7350u);
  return (unsigned int)v15;
}
