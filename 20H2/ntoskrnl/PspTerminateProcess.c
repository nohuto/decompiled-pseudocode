/*
 * XREFs of PspTerminateProcess @ 0x1406995B8
 * Callers:
 *     NtTerminateProcess @ 0x1406991D0 (NtTerminateProcess.c)
 *     PsTerminateProcess @ 0x1406DC8DC (PsTerminateProcess.c)
 *     PspTerminatePicoProcess @ 0x14090EBB0 (PspTerminatePicoProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeSetProcessSchedulingGroup @ 0x1402EB00C (KeSetProcessSchedulingGroup.c)
 *     KeForceResumeProcess @ 0x1402EB0E0 (KeForceResumeProcess.c)
 *     EtwTraceProcessTerminate @ 0x1403139B8 (EtwTraceProcessTerminate.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 *     PspTerminateAllThreads @ 0x14069A29C (PspTerminateAllThreads.c)
 */

__int64 __fastcall PspTerminateProcess(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned int a3, char a4)
{
  signed __int32 v7; // esi
  char v8; // al
  char v9; // di
  unsigned int v10; // eax
  unsigned int v11; // edi

  _m_prefetchw((const void *)(BugCheckParameter1 + 1124));
  v7 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 8u);
  if ( (v7 & 8) != 0 )
  {
    v9 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcessTerminate(BugCheckParameter1);
    KeSetProcessSchedulingGroup(BugCheckParameter1, 0LL);
    v8 = a4 | 4;
    if ( (v7 & 0x40000000) == 0 )
      v8 = a4;
    v9 = v8;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
    if ( *(_DWORD *)(BugCheckParameter1 + 1520) && (a3 != -1073741749 || *(_DWORD *)(BugCheckParameter1 + 2004) == 259) )
      *(_DWORD *)(BugCheckParameter1 + 2004) = a3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1080));
    KeAbPostRelease(BugCheckParameter1 + 1080);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 1120) & 0x400) == 0 )
  {
    v10 = PspTerminateAllThreads(BugCheckParameter1);
LABEL_14:
    v11 = v10;
    goto LABEL_15;
  }
  if ( *((_QWORD *)&xmmword_140C1DEC0 + 1) && (v9 & 8) == 0 )
  {
    v10 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD))&xmmword_140C1DEC0 + 1))(BugCheckParameter1, a3);
    goto LABEL_14;
  }
  v11 = 290;
  PspRundownSingleProcess(BugCheckParameter1, 0);
LABEL_15:
  if ( (v7 & 8) == 0 )
    KeForceResumeProcess(BugCheckParameter1);
  return v11;
}
