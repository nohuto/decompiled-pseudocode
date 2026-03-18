/*
 * XREFs of AlpcpInsertMessageCanceledQueue @ 0x1406E7FDC
 * Callers:
 *     AlpcpDisconnectPort @ 0x140647404 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x14064ACC0 (AlpcpCancelMessage.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406D58C8 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpInsertMessageCanceledQueue(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v2; // rsi

  v2 = (volatile signed __int64 *)(a1 + 136);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  a2 += 10;
  a2[1] = *(_QWORD *)(a1 + 392);
  *a2 = a1 + 384;
  **(_QWORD **)(a1 + 392) = a2;
  ++*(_DWORD *)(a1 + 464);
  *(_QWORD *)(a1 + 392) = a2;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
