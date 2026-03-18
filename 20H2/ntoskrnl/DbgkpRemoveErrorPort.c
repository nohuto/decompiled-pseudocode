/*
 * XREFs of DbgkpRemoveErrorPort @ 0x140889AD4
 * Callers:
 *     DbgkFlushErrorPort @ 0x14064EA20 (DbgkFlushErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140889DD0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     HalSystemVectorDispatchEntry @ 0x140245E60 (HalSystemVectorDispatchEntry.c)
 *     DbgkpDereferenceErrorPort @ 0x1404EC7F8 (DbgkpDereferenceErrorPort.c)
 */

int __fastcall DbgkpRemoveErrorPort(__int64 a1, ULONG_PTR a2, volatile signed __int32 *a3)
{
  _UNKNOWN **v3; // rax
  int v7; // r14d
  __int64 v8; // rax
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
      ExfTryToWakePushLock((volatile signed __int64 *)a2);
    KeAbPostRelease(a2);
    LODWORD(v3) = (unsigned int)KeLeaveCriticalRegionThread(a1);
    if ( v7 )
    {
      DbgkpDereferenceErrorPort(a3);
      LODWORD(v3) = KeResetEvent(*(PRKEVENT *)(a2 + 24));
    }
  }
  return (int)v3;
}
