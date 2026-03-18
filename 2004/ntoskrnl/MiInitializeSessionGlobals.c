/*
 * XREFs of MiInitializeSessionGlobals @ 0x1407750C0
 * Callers:
 *     MiSessionCreate @ 0x140773E2C (MiSessionCreate.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     MmIsSessionLeaderProcess @ 0x14076F5B0 (MmIsSessionLeaderProcess.c)
 */

__int64 MiInitializeSessionGlobals()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  char v3; // bl

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( MmIsSessionLeaderProcess((__int64)CurrentThread->Process) )
    return 0LL;
  if ( qword_140C4DBC0 )
  {
    if ( PsIsCurrentThreadInServerSilo() )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DBC8, 0LL);
      if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) )
      {
        *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DBC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DBC8);
      KeAbPostRelease((ULONG_PTR)&qword_140C4DBC8);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( MmIsSessionLeaderProcess((__int64)Process) )
      return 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DBC8, 0LL);
    if ( !qword_140C4DBC0 )
    {
      qword_140C4DBC0 = (__int64)Process;
      qword_140C4CB90 = qword_140C4DBE0 + 20480;
      qword_140C4DBB0 = qword_140C4DBE0 + 28672;
      qword_140C4DBD0 = qword_140C4DBE0 + 576;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DBC8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DBC8);
      KeAbPostRelease((ULONG_PTR)&qword_140C4DBC8);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DBC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DBC8);
    KeAbPostRelease((ULONG_PTR)&qword_140C4DBC8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( (_KPROCESS *)qword_140C4DBC0 == Process )
      return 0LL;
  }
  return 3221225500LL;
}
