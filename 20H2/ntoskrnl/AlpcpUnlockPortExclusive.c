/*
 * XREFs of AlpcpUnlockPortExclusive @ 0x1408C57DC
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405F0200 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpUnlockPortExclusive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 352;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  return KeAbPostRelease(v1);
}
