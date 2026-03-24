/*
 * XREFs of AlpcpUnlockIncomingQueue @ 0x1408C2F60
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405E8BC0 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 */

char __fastcall AlpcpUnlockIncomingQueue(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 136;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 136);
  return KeAbPostRelease(v1);
}
