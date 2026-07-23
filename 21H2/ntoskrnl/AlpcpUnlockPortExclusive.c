/*
 * XREFs of AlpcpUnlockPortExclusive @ 0x1408C30FC
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1406D8320 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 */

char __fastcall AlpcpUnlockPortExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 352;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 352);
  return KeAbPostRelease(v1);
}
