/*
 * XREFs of _GreTextInitialized@0 @ 0xF72EC
 * Callers:
 *     _CreateBitmapStrip@0 @ 0x8E78C (_CreateBitmapStrip@0.c)
 *     _GetCharDimensions@12 @ 0xB5416 (_GetCharDimensions@12.c)
 *     _xxxInitWindowStation@0 @ 0xD69D6 (_xxxInitWindowStation@0.c)
 *     _FinalUserInit@0 @ 0xD6A7A (_FinalUserInit@0.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 *     _xxxSetNCFonts@8 @ 0xDA4C2 (_xxxSetNCFonts@8.c)
 *     ?EnsureServerInfoForDpi@@YGXPAUtagDPISERVERINFO@@H@Z @ 0x15501A (-EnsureServerInfoForDpi@@YGXPAUtagDPISERVERINFO@@H@Z.c)
 *     ?PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z @ 0x18512F (-PaintWatermark@@YGXPAUHDC__@@PBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0x46590 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDBA9E (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SG_NXZ.c)
 */

BOOL __stdcall GreTextInitialized()
{
  return KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent)
      || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      || UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread();
}
