/*
 * XREFs of AlpcpLockCommunicationInfoShared @ 0x1408C3050
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408C3260 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall AlpcpLockCommunicationInfoShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 - 16, 0LL);
}
