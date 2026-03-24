/*
 * XREFs of AlpcpRemoveMessageFromPendingQueue @ 0x1405E38B0
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x1405E1BDC (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1405E301C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1405E35BC (AlpcpDispatchReplyToPort.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406A8008 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
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
