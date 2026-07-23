/*
 * XREFs of PerfDiagpProxyWorker @ 0x14079C420
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x14079B414 (PerfDiagpStartPerfDiagLogger.c)
 *     PerfDiagpIsTracingAllowed @ 0x14079C550 (PerfDiagpIsTracingAllowed.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14079C668 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14079C77C (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14092FD28 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  const wchar_t *v4; // rdx
  int updated; // eax
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  const wchar_t *v10; // rcx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  ReturnLength = 0;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1A220, 0LL);
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_30;
  if ( dword_140C1A228 != v1 - 1 )
  {
    if ( v1 == 3 )
    {
      if ( dword_140C1A228 == 1 )
        goto LABEL_11;
    }
    else if ( ((v1 - 5) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_4;
    }
    if ( v1 < dword_140C1A228 )
    {
      v1 = dword_140C1A228;
      goto LABEL_11;
    }
LABEL_30:
    dword_140C1A228 = 8;
    goto LABEL_12;
  }
LABEL_4:
  if ( v1 == 1 )
  {
    v10 = L"Diagnostics\\Performance\\BootCKCLSettings";
  }
  else
  {
    v3 = (unsigned int)(v1 - 2);
    if ( v1 == 2 )
    {
      v4 = L"WaitingForLogonEnableKernelFlags";
      goto LABEL_9;
    }
    v3 = (unsigned int)(v1 - 3);
    switch ( v1 )
    {
      case 3:
        v4 = L"EnableKernelFlags";
LABEL_9:
        updated = PerfDiagpUpdatePerfDiagLoggerEnableFlags(v3, v4);
        goto LABEL_10;
      case 4:
LABEL_16:
        PerfDiagpInitializeLoggerInfo(0LL, 0LL);
        NtTraceControl(EtwStopLoggerCode, &OutputBuffer, OutputBuffer, &OutputBuffer, OutputBuffer, &ReturnLength);
        goto LABEL_11;
      case 5:
        v10 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
        break;
      case 6:
        goto LABEL_16;
      case 7:
        PerfDiagpSaveActiveDCLLogFileName();
        v10 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
        break;
      default:
        goto LABEL_11;
    }
  }
  updated = PerfDiagpStartPerfDiagLogger(v10);
LABEL_10:
  if ( updated < 0 )
    goto LABEL_30;
LABEL_11:
  dword_140C1A228 = v1;
LABEL_12:
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1A220, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C1A220);
  KeAbPostRelease((ULONG_PTR)&qword_140C1A220);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
}
