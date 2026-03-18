/*
 * XREFs of AlpcpWalkConnectionList @ 0x1406E499C
 * Callers:
 *     AlpcpDisconnectPort @ 0x140647404 (AlpcpDisconnectPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpWalkConnectionList(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *i; // rdi
  char result; // al

  v1 = (_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL);
  for ( i = *v1; i != v1; i = (_QWORD *)*i )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(i - 5), 0LL);
    if ( (_InterlockedExchangeAdd64(i - 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(i - 5);
    result = KeAbPostRelease((ULONG_PTR)(i - 5));
  }
  return result;
}
