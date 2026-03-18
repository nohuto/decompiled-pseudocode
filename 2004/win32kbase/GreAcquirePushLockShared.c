/*
 * XREFs of GreAcquirePushLockShared @ 0x1C0026520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreAcquirePushLockShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1, 0LL);
}
