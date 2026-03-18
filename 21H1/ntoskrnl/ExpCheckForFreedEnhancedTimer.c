/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x14035BB94
 * Callers:
 *     ExCancelTimer @ 0x14035B3B0 (ExCancelTimer.c)
 *     ExDeleteTimer @ 0x14035B430 (ExDeleteTimer.c)
 *     ExSetTimer @ 0x14035BB10 (ExSetTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
