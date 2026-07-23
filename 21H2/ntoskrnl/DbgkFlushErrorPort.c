/*
 * XREFs of DbgkFlushErrorPort @ 0x14067C7F8
 * Callers:
 *     PspExitProcess @ 0x14067C00C (PspExitProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     DbgkpDereferenceErrorPort @ 0x1404EE318 (DbgkpDereferenceErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1408871D4 (DbgkpRemoveErrorPort.c)
 */

_QWORD *__fastcall DbgkFlushErrorPort(__int64 a1)
{
  __int64 ProcessServerSilo; // rax
  _QWORD *result; // rax
  signed __int64 *v4; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

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
    result = KeLeaveCriticalRegionThread((__int64)CurrentThread, v7, v8, v9);
    if ( v6 )
    {
      DbgkpRemoveErrorPort(CurrentThread, v4, v6);
      return (_QWORD *)DbgkpDereferenceErrorPort(v6);
    }
  }
  return result;
}
