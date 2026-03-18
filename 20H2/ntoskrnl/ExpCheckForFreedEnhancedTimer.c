/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x14033C954
 * Callers:
 *     ExCancelTimer @ 0x14033BF90 (ExCancelTimer.c)
 *     ExDeleteTimer @ 0x14033C010 (ExDeleteTimer.c)
 *     ExSetTimer @ 0x14033C8D0 (ExSetTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
