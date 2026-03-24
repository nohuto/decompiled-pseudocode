/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1402800F4
 * Callers:
 *     ExCancelTimer @ 0x14027F890 (ExCancelTimer.c)
 *     ExDeleteTimer @ 0x14027F910 (ExDeleteTimer.c)
 *     ExSetTimer @ 0x140280070 (ExSetTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
