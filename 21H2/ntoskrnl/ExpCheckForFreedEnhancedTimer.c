/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x14026E334
 * Callers:
 *     ExCancelTimer @ 0x14026DAD0 (ExCancelTimer.c)
 *     ExDeleteTimer @ 0x14026DB50 (ExDeleteTimer.c)
 *     ExSetTimer @ 0x14026E2B0 (ExSetTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
