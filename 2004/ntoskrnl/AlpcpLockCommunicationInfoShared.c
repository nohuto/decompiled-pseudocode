/*
 * XREFs of AlpcpLockCommunicationInfoShared @ 0x1408BF980
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408BFAF8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall AlpcpLockCommunicationInfoShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 - 16, 0LL);
}
