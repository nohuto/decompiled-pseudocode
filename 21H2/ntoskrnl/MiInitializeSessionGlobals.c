/*
 * XREFs of MiInitializeSessionGlobals @ 0x140787660
 * Callers:
 *     MiSessionCreate @ 0x1407863CC (MiSessionCreate.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     MmIsSessionLeaderProcess @ 0x140781B00 (MmIsSessionLeaderProcess.c)
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
  if ( qword_140C4DE00 )
  {
    if ( PsIsCurrentThreadInServerSilo(v5, v4) )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DE08, 0LL);
      if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals(v10, v9) + 109) )
      {
        *((_QWORD *)PsGetCurrentServerSiloGlobals(v12, v11) + 109) = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DE08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4DE08);
      KeAbPostRelease((ULONG_PTR)&qword_140C4DE08);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
    if ( MmIsSessionLeaderProcess((__int64)Process, v8) )
      return 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4DE08, 0LL);
    if ( !qword_140C4DE00 )
    {
      qword_140C4DE00 = (__int64)Process;
      qword_140C4CDD0 = qword_140C4DE20 + 20480;
      qword_140C4DDF0 = qword_140C4DE20 + 28672;
      qword_140C4DE10 = qword_140C4DE20 + 576;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DE08, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
        ExfTryToWakePushLock(&qword_140C4DE08);
      KeAbPostRelease((ULONG_PTR)&qword_140C4DE08);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4DE08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4DE08);
    KeAbPostRelease((ULONG_PTR)&qword_140C4DE08);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( (_KPROCESS *)qword_140C4DE00 == Process )
      return 0LL;
  }
  return 3221225500LL;
}
