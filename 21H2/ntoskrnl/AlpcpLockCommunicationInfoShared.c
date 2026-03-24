/*
 * XREFs of AlpcpLockCommunicationInfoShared @ 0x1408C2EF0
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408C3100 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall AlpcpLockCommunicationInfoShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 - 16, 0LL);
}
