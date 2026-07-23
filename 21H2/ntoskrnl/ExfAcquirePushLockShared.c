/*
 * XREFs of ExfAcquirePushLockShared @ 0x1402FDBF0
 * Callers:
 *     ExpCovQueryInformation @ 0x1409579AC (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
