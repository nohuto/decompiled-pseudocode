/*
 * XREFs of AlpcpLockCommunicationInfoShared @ 0x1408C5730
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408C5940 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall AlpcpLockCommunicationInfoShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 - 16, 0LL);
}
