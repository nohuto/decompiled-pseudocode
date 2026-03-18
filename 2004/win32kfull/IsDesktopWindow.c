/*
 * XREFs of IsDesktopWindow @ 0x1C0020E80
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C000E8BC (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     zzzDecomposeDesktop @ 0x1C000EF2C (zzzDecomposeDesktop.c)
 *     TrackLayeredZorder @ 0x1C001EFD4 (TrackLayeredZorder.c)
 *     ComposeWindowIfNeeded @ 0x1C0020B9C (ComposeWindowIfNeeded.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0020C78 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0020CE0 (UserGetRedirectedWindowOrigin.c)
 *     ?WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z @ 0x1C0020E40 (-WindowMatchesDCE@@YAHQEAUtagWND@@PEBUtagDCE@@@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002366C (CreateOrGetRedirectionBitmap.c)
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C004B038 (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ComposeWindow @ 0x1C004E8F0 (ComposeWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0051198 (zzzUpdateWindowsAfterModeChange.c)
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0072450 (GreUpdateSpriteVisRgn.c)
 *     CreateSpb @ 0x1C0153C30 (CreateSpb.c)
 *     MagSlicerControl @ 0x1C01CE994 (MagSlicerControl.c)
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
