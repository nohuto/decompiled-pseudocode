/*
 * XREFs of AlpcpLockPortShared @ 0x1408C252C
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408C3260 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall AlpcpLockPortShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 352, 0LL);
}
