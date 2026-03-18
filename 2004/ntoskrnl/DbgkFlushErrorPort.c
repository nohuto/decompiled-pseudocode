/*
 * XREFs of DbgkFlushErrorPort @ 0x14061DDE0
 * Callers:
 *     PspExitProcess @ 0x14061D5F4 (PspExitProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     DbgkpDereferenceErrorPort @ 0x1404E8F68 (DbgkpDereferenceErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x140883F84 (DbgkpRemoveErrorPort.c)
 */

_QWORD *__fastcall DbgkFlushErrorPort(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  _QWORD *result; // rax
  signed __int64 *v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int32 *v6; // rdi

  ProcessServerSilo = PsGetProcessServerSilo(a1);
  result = PsGetServerSiloGlobals(ProcessServerSilo);
  v4 = result + 121;
  if ( a1 == result[123] )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(result + 121), 0LL);
    if ( a1 == v4[2] )
    {
      v6 = (volatile signed __int32 *)v4[1];
      _InterlockedIncrement(v6);
    }
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v6 )
    {
      DbgkpRemoveErrorPort(CurrentThread, v4, v6);
      return (_QWORD *)DbgkpDereferenceErrorPort(v6);
    }
  }
  return result;
}
