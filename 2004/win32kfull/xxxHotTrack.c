/*
 * XREFs of xxxHotTrack @ 0x1C0057148
 * Callers:
 *     xxxTrackMouseMove @ 0x1C0057D90 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00581CC (xxxCancelMouseMoveTracking.c)
 * Callees:
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0243708 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 */

__int64 __fastcall xxxHotTrack(struct tagWND *a1, int a2, int a3)
{
  if ( (_WORD)a2 == 69 )
    return xxxHotTrackMenu(a1, HIWORD(a2), a3);
  else
    return 0LL;
}
