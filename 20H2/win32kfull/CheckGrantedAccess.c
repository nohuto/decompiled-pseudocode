/*
 * XREFs of CheckGrantedAccess @ 0x1C00BD804
 * Callers:
 *     CheckCursorClipAccess @ 0x1C002C990 (CheckCursorClipAccess.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00BD284 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00BD658 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     NtUserGetCaretBlinkTime @ 0x1C00BD780 (NtUserGetCaretBlinkTime.c)
 *     xxxInjectTouchInput @ 0x1C01DC64C (xxxInjectTouchInput.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01E9B40 (-_SwapMouseButton@@YAHH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5LL);
  return 0LL;
}
