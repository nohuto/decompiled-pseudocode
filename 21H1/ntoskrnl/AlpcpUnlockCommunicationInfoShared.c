/*
 * XREFs of AlpcpUnlockCommunicationInfoShared @ 0x1408BE64C
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408BE7A8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 */

char __fastcall AlpcpUnlockCommunicationInfoShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 - 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 - 16), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
