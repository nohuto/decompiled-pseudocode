/*
 * XREFs of AlpcpRemoveMessageFromPendingQueue @ 0x14064B438
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x14064A8F4 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x14064B1B0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406D58C8 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpRemoveMessageFromPendingQueue(__int64 a1)
{
  __int64 v1; // rbx
  ULONG_PTR v3; // rsi
  char result; // al

  v1 = *(_QWORD *)(a1 + 16);
  v3 = v1 + 176;
  ExAcquirePushLockExclusiveEx(v1 + 176, 0LL);
  --*(_DWORD *)(v1 + 456);
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFF8;
  *(_QWORD *)(a1 + 16) = 0LL;
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  result = KeAbPostRelease(v3);
  --*(_WORD *)(a1 - 30);
  return result;
}
