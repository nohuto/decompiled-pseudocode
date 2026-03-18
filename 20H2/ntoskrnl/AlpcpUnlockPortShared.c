/*
 * XREFs of AlpcpUnlockPortShared @ 0x1408C4D30
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1405F0200 (AlpcpReceiveMessagePort.c)
 *     AlpcpPortQueryServerInfo @ 0x1408C5940 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 */

char __fastcall AlpcpUnlockPortShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 352);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
