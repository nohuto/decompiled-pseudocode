/*
 * XREFs of PerfDiagpProxyWorker @ 0x14079C220
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x14079B214 (PerfDiagpStartPerfDiagLogger.c)
 *     PerfDiagpIsTracingAllowed @ 0x14079C350 (PerfDiagpIsTracingAllowed.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14079C468 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14079C57C (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14092FBC8 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  v8 = 0;
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
        NtTraceControl(2LL, dword_140C1A250, dword_140C1A250[0], dword_140C1A250, dword_140C1A250[0], &v8);
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
  dword_140C1A228 = v1;
LABEL_12:
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C1A220, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C1A220);
  KeAbPostRelease((ULONG_PTR)&qword_140C1A220);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
