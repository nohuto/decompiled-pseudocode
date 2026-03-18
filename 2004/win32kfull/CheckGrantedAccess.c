/*
 * XREFs of CheckGrantedAccess @ 0x1C003B114
 * Callers:
 *     CheckCursorClipAccess @ 0x1C0030640 (CheckCursorClipAccess.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C003A428 (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C003AF68 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     NtUserGetCaretBlinkTime @ 0x1C003B090 (NtUserGetCaretBlinkTime.c)
 *     xxxInjectTouchInput @ 0x1C01DD30C (xxxInjectTouchInput.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01EA7B0 (-_SwapMouseButton@@YAHH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5LL);
  return 0LL;
}
