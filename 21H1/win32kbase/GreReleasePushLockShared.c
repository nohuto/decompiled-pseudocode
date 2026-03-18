/*
 * XREFs of GreReleasePushLockShared @ 0x1C0016A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreReleasePushLockShared(__int64 a1)
{
  return ExReleasePushLockSharedEx(a1, 0LL);
}
