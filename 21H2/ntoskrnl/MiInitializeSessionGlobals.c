/*
 * XREFs of MiInitializeSessionGlobals @ 0x1406E8EE8
 * Callers:
 *     MiSessionCreate @ 0x1407F3718 (MiSessionCreate.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140204738 (PsGetServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MmIsSessionLeaderProcess @ 0x1406E8FE0 (MmIsSessionLeaderProcess.c)
 */

__int64 MiInitializeSessionGlobals()
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbp
  char v3; // bl
  bool v4; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( (CurrentThread->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
    return 3221225505LL;
  if ( (unsigned int)MmIsSessionLeaderProcess(CurrentThread->Process) )
    return 0LL;
  if ( qword_140C50620 )
  {
    if ( PsIsCurrentThreadInServerSilo() )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50628, 0LL);
      if ( !*((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) )
      {
        *((_QWORD *)PsGetCurrentServerSiloGlobals() + 109) = Process;
        ObfReferenceObject(Process);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C50628);
      KeAbPostRelease((ULONG_PTR)&qword_140C50628);
      v4 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v4
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    if ( (unsigned int)MmIsSessionLeaderProcess(Process) )
      return 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50628, 0LL);
    if ( !qword_140C50620 )
    {
      qword_140C50620 = (__int64)Process;
      *((_QWORD *)PsGetServerSiloGlobals(0LL) + 109) = Process;
      v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
        ExfTryToWakePushLock(&qword_140C50628);
      KeAbPostRelease((ULONG_PTR)&qword_140C50628);
      v4 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v4
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
      ObfReferenceObject(Process);
      return 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50628, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C50628);
    KeAbPostRelease((ULONG_PTR)&qword_140C50628);
    v4 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v4 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( (_KPROCESS *)qword_140C50620 == Process )
      return 0LL;
  }
  return 3221225500LL;
}
