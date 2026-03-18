/*
 * XREFs of PspTerminateProcess @ 0x1406B3CF4
 * Callers:
 *     PsTerminateProcess @ 0x14065797C (PsTerminateProcess.c)
 *     NtTerminateProcess @ 0x1406B4060 (NtTerminateProcess.c)
 *     PspTerminatePicoProcess @ 0x140908F90 (PspTerminatePicoProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeForceResumeProcess @ 0x1402FCC94 (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x1402FCD88 (KeSetProcessSchedulingGroup.c)
 *     EtwTraceProcessTerminate @ 0x1402FD76C (EtwTraceProcessTerminate.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 *     PspTerminateAllThreads @ 0x1406B369C (PspTerminateAllThreads.c)
 */

__int64 __fastcall PspTerminateProcess(
        ULONG_PTR BugCheckParameter1,
        struct _EX_RUNDOWN_REF *a2,
        unsigned int a3,
        int a4)
{
  signed __int32 v8; // esi
  int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // edi

  _m_prefetchw((const void *)(BugCheckParameter1 + 1124));
  v8 = _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 1124), 8u);
  if ( (v8 & 8) != 0 )
  {
    v10 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcessTerminate(BugCheckParameter1);
    KeSetProcessSchedulingGroup(BugCheckParameter1, 0LL);
    v9 = a4 | 4;
    if ( (v8 & 0x40000000) == 0 )
      v9 = a4;
    v10 = v9;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
    if ( *(_DWORD *)(BugCheckParameter1 + 1520) && (a3 != -1073741749 || *(_DWORD *)(BugCheckParameter1 + 2004) == 259) )
      *(_DWORD *)(BugCheckParameter1 + 2004) = a3;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter1 + 1080));
    KeAbPostRelease(BugCheckParameter1 + 1080);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 1120) & 0x400) == 0 )
  {
    v11 = PspTerminateAllThreads(BugCheckParameter1, a2, a3, v10);
LABEL_14:
    v12 = v11;
    goto LABEL_15;
  }
  if ( *((_QWORD *)&xmmword_140C1DE00 + 1) && (v10 & 8) == 0 )
  {
    v11 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD))&xmmword_140C1DE00 + 1))(BugCheckParameter1, a3);
    goto LABEL_14;
  }
  v12 = 290;
  PspRundownSingleProcess(BugCheckParameter1, 0);
LABEL_15:
  if ( (v8 & 8) == 0 )
    KeForceResumeProcess(BugCheckParameter1);
  return v12;
}
