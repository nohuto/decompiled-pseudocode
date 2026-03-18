/*
 * XREFs of AlpcpLockPortShared @ 0x1408C4C0C
 * Callers:
 *     AlpcpPortQueryServerInfo @ 0x1408C5940 (AlpcpPortQueryServerInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall AlpcpLockPortShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1 + 352, 0LL);
}
