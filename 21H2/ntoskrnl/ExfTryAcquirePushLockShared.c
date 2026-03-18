/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x14063C4B0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryAcquirePushLockSharedEx @ 0x140220664 (ExfTryAcquirePushLockSharedEx.c)
 */

char __fastcall ExfTryAcquirePushLockShared(signed __int64 *a1)
{
  return ExfTryAcquirePushLockSharedEx(a1, 0);
}
