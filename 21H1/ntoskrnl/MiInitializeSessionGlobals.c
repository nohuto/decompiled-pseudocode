/*
 * XREFs of MiInitializeSessionGlobals @ 0x140772CB0
 * Callers:
 *     MiSessionCreate @ 0x140771A1C (MiSessionCreate.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x1402612A0 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MmIsSessionLeaderProcess @ 0x14076CE10 (MmIsSessionLeaderProcess.c)
 */

__int64 MiInitializeSessionGlobals()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( MmIsSessionLeaderProcess((__int64)CurrentThread->Process) )
    return 0LL;
  if ( qword_140C4DD00 )
  {
    if ( PsIsCurrentThreadInServerSilo() )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DD08, 0LL);
      if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) )
      {
        *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DD08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4DD08);
      KeAbPostRelease((ULONG_PTR)&qword_140C4DD08);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v7, v8, v9);
    }
    if ( MmIsSessionLeaderProcess((__int64)Process) )
      return 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DD08, 0LL);
    if ( !qword_140C4DD00 )
    {
      qword_140C4DD00 = (__int64)Process;
      qword_140C4CCD0 = qword_140C4DD20 + 20480;
      qword_140C4DCF0 = qword_140C4DD20 + 28672;
      qword_140C4DD10 = qword_140C4DD20 + 576;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DD08, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
        ExfTryToWakePushLock(&qword_140C4DD08);
      KeAbPostRelease((ULONG_PTR)&qword_140C4DD08);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v4, v5, v6);
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DD08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4DD08);
    KeAbPostRelease((ULONG_PTR)&qword_140C4DD08);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v10, v11, v12);
    if ( (_KPROCESS *)qword_140C4DD00 == Process )
      return 0LL;
  }
  return 3221225500LL;
}
