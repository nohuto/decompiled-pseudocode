/*
 * XREFs of AlpcpLockPortShared @ 0x1408BEE5C
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408BFAF8 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall AlpcpLockPortShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 352, 0LL);
}
