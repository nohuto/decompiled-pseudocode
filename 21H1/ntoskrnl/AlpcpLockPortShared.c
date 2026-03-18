/*
 * XREFs of AlpcpLockPortShared @ 0x1408BDB0C
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408BE7A8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall AlpcpLockPortShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 352, 0LL);
}
