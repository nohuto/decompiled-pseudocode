/*
 * XREFs of MiInitializeSessionGlobals @ 0x1407836C0
 * Callers:
 *     MiSessionCreate @ 0x14078242C (MiSessionCreate.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     MmIsSessionLeaderProcess @ 0x14077DB60 (MmIsSessionLeaderProcess.c)
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
  if ( qword_140C4DC40 )
  {
    if ( PsIsCurrentThreadInServerSilo() )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DC48, 0LL);
      if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) )
      {
        *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DC48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DC48);
      KeAbPostRelease((ULONG_PTR)&qword_140C4DC48);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( MmIsSessionLeaderProcess((__int64)Process) )
      return 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DC48, 0LL);
    if ( !qword_140C4DC40 )
    {
      qword_140C4DC40 = (__int64)Process;
      qword_140C4CC10 = qword_140C4DC60 + 20480;
      qword_140C4DC30 = qword_140C4DC60 + 28672;
      qword_140C4DC50 = qword_140C4DC60 + 576;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DC48, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DC48);
      KeAbPostRelease((ULONG_PTR)&qword_140C4DC48);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DC48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4DC48);
    KeAbPostRelease((ULONG_PTR)&qword_140C4DC48);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( (_KPROCESS *)qword_140C4DC40 == Process )
      return 0LL;
  }
  return 3221225500LL;
}
