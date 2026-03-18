/*
 * XREFs of AlpcpUnlockIncomingQueue @ 0x1408C57A0
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405F0200 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpUnlockIncomingQueue(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 136;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 136));
  return KeAbPostRelease(v1);
}
