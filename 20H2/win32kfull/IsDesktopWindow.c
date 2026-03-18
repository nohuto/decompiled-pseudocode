/*
 * XREFs of IsDesktopWindow @ 0x1C0091BB0
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C001C008 (zzzDecomposeDesktop.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0043840 (GreUpdateSpriteVisRgn.c)
 *     zzzComposeDesktop @ 0x1C00801A8 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C0080498 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00816D4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0090950 (CreateOrGetRedirectionBitmap.c)
 *     TrackLayeredZorder @ 0x1C009153C (TrackLayeredZorder.c)
 *     ComposeWindowIfNeeded @ 0x1C00918CC (ComposeWindowIfNeeded.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00919A8 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0091A10 (UserGetRedirectedWindowOrigin.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0091B70 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     ComposeWindow @ 0x1C00C2AD0 (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F9728 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C00F9CD8 (RecreateRedirectionBitmap.c)
 *     CreateSpb @ 0x1C0156560 (CreateSpb.c)
 *     MagSlicerControl @ 0x1C01CDB84 (MagSlicerControl.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDesktopWindow(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r8

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 8);
    if ( v3 )
      v2 = *(_QWORD *)(v3 + 24);
  }
  return a1 == v2;
}
