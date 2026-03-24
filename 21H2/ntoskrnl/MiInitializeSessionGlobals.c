/*
 * XREFs of MiInitializeSessionGlobals @ 0x1407874A0
 * Callers:
 *     MiSessionCreate @ 0x14078620C (MiSessionCreate.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140252E18 (PsGetServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     MmIsSessionLeaderProcess @ 0x140781940 (MmIsSessionLeaderProcess.c)
 */

__int64 __fastcall MiInitializeSessionGlobals(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( MmIsSessionLeaderProcess((__int64)CurrentThread->Process, a2) )
    return 0LL;
  if ( qword_140C4DDC0 )
  {
    if ( PsIsCurrentThreadInServerSilo(v5, v4) )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DDC8, 0LL);
      if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals(v10, v9) + 109) )
      {
        *((_QWORD *)PsGetCurrentServerSiloGlobals(v12, v11) + 109) = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DDC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4DDC8);
      KeAbPostRelease((ULONG_PTR)&qword_140C4DDC8);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( MmIsSessionLeaderProcess((__int64)Process, v8) )
      return 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DDC8, 0LL);
    if ( !qword_140C4DDC0 )
    {
      qword_140C4DDC0 = (__int64)Process;
      qword_140C4CD90 = qword_140C4DDE0 + 20480;
      qword_140C4DDB0 = qword_140C4DDE0 + 28672;
      qword_140C4DDD0 = qword_140C4DDE0 + 576;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DDC8, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
        ExfTryToWakePushLock(&qword_140C4DDC8);
      KeAbPostRelease((ULONG_PTR)&qword_140C4DDC8);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DDC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4DDC8);
    KeAbPostRelease((ULONG_PTR)&qword_140C4DDC8);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( (_KPROCESS *)qword_140C4DDC0 == Process )
      return 0LL;
  }
  return 3221225500LL;
}
