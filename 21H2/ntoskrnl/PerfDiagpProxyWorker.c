/*
 * XREFs of PerfDiagpProxyWorker @ 0x140818A90
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140807EA4 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PerfDiagpStartPerfDiagLogger @ 0x140817BC8 (PerfDiagpStartPerfDiagLogger.c)
 *     PerfDiagpIsTracingAllowed @ 0x140818BFC (PerfDiagpIsTracingAllowed.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x140818D14 (PerfDiagpInitializeLoggerInfo.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1408603A8 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PerfDiagpProxyWorker(_DWORD *a1)
{
  int v1; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  const wchar_t *v4; // rcx
  int started; // eax
  char v6; // di
  const wchar_t *v7; // rdx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return;
  v8 = 0;
  v1 = a1[8];
  ExFreePoolWithTag(a1, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C166E0, 0LL);
  if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
    goto LABEL_32;
  if ( dword_140C166E8 != v1 - 1 )
  {
    switch ( v1 )
    {
      case 3:
        if ( dword_140C166E8 == 1 )
          goto LABEL_14;
        break;
      case 7:
LABEL_11:
        PerfDiagpSaveActiveDCLLogFileName();
        v4 = L"Diagnostics\\Performance\\ShutdownCKCLSettings";
LABEL_12:
        started = PerfDiagpStartPerfDiagLogger(v4);
        goto LABEL_13;
      case 5:
LABEL_31:
        v4 = L"Diagnostics\\Performance\\SecondaryLogonCKCLSettings";
        goto LABEL_12;
    }
    if ( v1 < dword_140C166E8 )
    {
      v1 = dword_140C166E8;
      goto LABEL_14;
    }
    goto LABEL_32;
  }
  if ( v1 == 1 )
  {
    v4 = L"Diagnostics\\Performance\\BootCKCLSettings";
    goto LABEL_12;
  }
  v3 = (unsigned int)(v1 - 2);
  if ( v1 == 2 )
  {
    v7 = L"WaitingForLogonEnableKernelFlags";
LABEL_19:
    started = PerfDiagpUpdatePerfDiagLoggerEnableFlags(v3, v7);
LABEL_13:
    if ( started >= 0 )
      goto LABEL_14;
LABEL_32:
    dword_140C166E8 = 8;
    goto LABEL_15;
  }
  v3 = (unsigned int)(v1 - 3);
  if ( v1 == 3 )
  {
    v7 = L"EnableKernelFlags";
    goto LABEL_19;
  }
  if ( v1 != 4 )
  {
    if ( v1 != 5 )
    {
      if ( v1 == 6 )
        goto LABEL_8;
      if ( v1 != 7 )
        goto LABEL_14;
      goto LABEL_11;
    }
    goto LABEL_31;
  }
LABEL_8:
  PerfDiagpInitializeLoggerInfo(0LL, 0LL);
  NtTraceControl(2u, (unsigned int *)dword_140C16710, dword_140C16710[0], dword_140C16710, dword_140C16710[0], &v8);
LABEL_14:
  dword_140C166E8 = v1;
LABEL_15:
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C166E0, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C166E0);
  KeAbPostRelease((ULONG_PTR)&qword_140C166E0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
