/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x1402D57D4
 * Callers:
 *     ExDeleteTimer @ 0x1402D3D40 (ExDeleteTimer.c)
 *     ExCancelTimer @ 0x1402D3E10 (ExCancelTimer.c)
 *     ExSetTimer @ 0x1402D5750 (ExSetTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
