/*
 * XREFs of AlpcpInsertMessageCanceledQueue @ 0x14070BDDC
 * Callers:
 *     AlpcpDisconnectPort @ 0x140629854 (AlpcpDisconnectPort.c)
 *     AlpcpCancelMessage @ 0x14062D110 (AlpcpCancelMessage.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1406F8D48 (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
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
