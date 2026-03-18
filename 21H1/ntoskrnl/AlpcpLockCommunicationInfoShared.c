/*
 * XREFs of AlpcpLockCommunicationInfoShared @ 0x1408BE630
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408BE7A8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall AlpcpLockCommunicationInfoShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 - 16, 0LL);
}
