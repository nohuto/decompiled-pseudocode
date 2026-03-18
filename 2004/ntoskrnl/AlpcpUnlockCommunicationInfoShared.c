/*
 * XREFs of AlpcpUnlockCommunicationInfoShared @ 0x1408BF99C
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408BFAF8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 */

char __fastcall AlpcpUnlockCommunicationInfoShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 - 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
