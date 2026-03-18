/*
 * XREFs of AlpcpRemoveMessageFromPendingQueue @ 0x1405EAE50
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x1405E917C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1405EA5BC (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1405EAB5C (AlpcpDispatchReplyToPort.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406CB708 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpRemoveMessageFromPendingQueue(__int64 a1)
{
  __int64 v1; // rbx
  volatile signed __int64 *v3; // rsi
  char result; // al

  v1 = *(_QWORD *)(a1 + 16);
  v3 = (volatile signed __int64 *)(v1 + 176);
  ExAcquirePushLockExclusiveEx(v1 + 176, 0LL);
  --*(_DWORD *)(v1 + 456);
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a1 + 16) = 0LL;
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  result = KeAbPostRelease((ULONG_PTR)v3);
  --*(_WORD *)(a1 - 30);
  return result;
}
