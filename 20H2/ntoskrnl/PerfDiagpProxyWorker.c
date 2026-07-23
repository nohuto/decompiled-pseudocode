/*
 * XREFs of PerfDiagpProxyWorker @ 0x1407ACAC0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x1407ABAC0 (PerfDiagpStartPerfDiagLogger.c)
 *     PerfDiagpIsTracingAllowed @ 0x1407ACBF0 (PerfDiagpIsTracingAllowed.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407ACD08 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x1407ACE1C (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1409323F8 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  const wchar_t *v4; // rdx
  int updated; // eax
  char v6; // di
  const wchar_t *v7; // rcx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  ReturnLength = 0;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1A0A0, 0LL);
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_30;
  if ( dword_140C1A0A8 != v1 - 1 )
  {
    if ( v1 == 3 )
    {
      if ( dword_140C1A0A8 == 1 )
        goto LABEL_11;
    }
    else if ( ((v1 - 5) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_4;
    }
    if ( v1 < dword_140C1A0A8 )
    {
      v1 = dword_140C1A0A8;
      goto LABEL_11;
    }
LABEL_30:
    dword_140C1A0A8 = 8;
    goto LABEL_12;
  }
LABEL_4:
  if ( v1 == 1 )
  {
    v7 = L"Diagnostics\\Performance\\BootCKCLSettings";
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
        v7 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
        break;
      case 6:
        goto LABEL_16;
      case 7:
        PerfDiagpSaveActiveDCLLogFileName();
        v7 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
        break;
      default:
        goto LABEL_11;
    }
  }
  updated = PerfDiagpStartPerfDiagLogger(v7);
LABEL_10:
  if ( updated < 0 )
    goto LABEL_30;
LABEL_11:
  dword_140C1A0A8 = v1;
LABEL_12:
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1A0A0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C1A0A0);
  KeAbPostRelease((ULONG_PTR)&qword_140C1A0A0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
