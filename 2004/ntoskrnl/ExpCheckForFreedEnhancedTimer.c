/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1402759E4
 * Callers:
 *     ExCancelTimer @ 0x140275200 (ExCancelTimer.c)
 *     ExDeleteTimer @ 0x140275280 (ExDeleteTimer.c)
 *     ExSetTimer @ 0x140275960 (ExSetTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
