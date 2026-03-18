/*
 * XREFs of _IsDesktopWindow@4 @ 0x72F74
 * Callers:
 *     _ComposeWindow@8 @ 0x1BF3E (_ComposeWindow@8.c)
 *     ?IsDesktopWindowDesktopComposed@@YGHPBUtagWND@@@Z @ 0x1CDDE (-IsDesktopWindowDesktopComposed@@YGHPBUtagWND@@@Z.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _CreateOrGetRedirectionBitmap@16 @ 0x20722 (_CreateOrGetRedirectionBitmap@16.c)
 *     ?GetNextLayeredWindow@@YGPAUtagWND@@PAU1@@Z @ 0x21F40 (-GetNextLayeredWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     _TrackLayeredZorder@4 @ 0x2343C (_TrackLayeredZorder@4.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _GreUpdateSpriteVisRgn@8 @ 0x363E0 (_GreUpdateSpriteVisRgn@8.c)
 *     _UnlinkWindow@8 @ 0x72E1E (_UnlinkWindow@8.c)
 *     ?WindowMatchesDCE@@YGHQAUtagWND@@PBUtagDCE@@@Z @ 0x72F42 (-WindowMatchesDCE@@YGHQAUtagWND@@PBUtagDCE@@@Z.c)
 *     _zzzUpdateWindowsAfterModeChange@8 @ 0x9B978 (_zzzUpdateWindowsAfterModeChange@8.c)
 *     _CreateSpb@12 @ 0xC549A (_CreateSpb@12.c)
 *     _zzzDecomposeDesktop@8 @ 0xCF042 (_zzzDecomposeDesktop@8.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 *     ?ShouldComposeWindow@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z @ 0xE0D4A (-ShouldComposeWindow@@YGHQAUtagWND@@QAUtagDESKTOP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z @ 0xE1968 (-DwmNotifyChildrenCreateDestroy@@YGXPBUtagDESKTOP@@H@Z.c)
 *     _MagSlicerControl@24 @ 0x13DD42 (_MagSlicerControl@24.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsDesktopWindow(_DWORD *this)
{
  int v1; // eax
  _DWORD *v2; // edx
  int v3; // eax

  v1 = this[3];
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 4);
    if ( v3 )
      v2 = *(_DWORD **)(v3 + 12);
  }
  return this == v2;
}
