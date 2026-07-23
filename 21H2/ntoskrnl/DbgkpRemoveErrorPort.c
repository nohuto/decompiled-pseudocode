/*
 * XREFs of DbgkpRemoveErrorPort @ 0x1408871D4
 * Callers:
 *     DbgkFlushErrorPort @ 0x14067C7F8 (DbgkFlushErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1408874D0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     DbgkpDereferenceErrorPort @ 0x1404EE318 (DbgkpDereferenceErrorPort.c)
 */

int __fastcall DbgkpRemoveErrorPort(__int64 a1, ULONG_PTR a2, volatile signed __int32 *a3)
{
  _UNKNOWN **v3; // rax
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( !_interlockedbittestandset(a3 + 1, 0) )
  {
    v7 = 0;
    --*(_WORD *)(a1 + 484);
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    if ( *(volatile signed __int32 **)(a2 + 8) == a3 )
    {
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      v7 = 1;
      v8 = HalSystemVectorDispatchEntry();
      if ( (void *)a2 == (char *)PsGetServerSiloGlobals(v8) + 968 )
        _interlockedbittestandreset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a2);
    KeAbPostRelease(a2);
    LODWORD(v3) = (unsigned int)KeLeaveCriticalRegionThread(a1, v9, v10, v11);
    if ( v7 )
    {
      DbgkpDereferenceErrorPort(a3);
      LODWORD(v3) = KeResetEvent(*(PRKEVENT *)(a2 + 24));
    }
  }
  return (int)v3;
}
