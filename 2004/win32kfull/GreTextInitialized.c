/*
 * XREFs of GreTextInitialized @ 0x1C000C248
 * Callers:
 *     xxxInitWindowStation @ 0x1C0009574 (xxxInitWindowStation.c)
 *     CreateBitmapStrip @ 0x1C000B6D0 (CreateBitmapStrip.c)
 *     GetCharDimensions @ 0x1C000C0C8 (GetCharDimensions.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00492E0 (xxxUpdatePerUserSystemParameters.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01EA51C (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0223C70 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C000CBFC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

_BOOL8 GreTextInitialized()
{
  return KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent)
      || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread();
}
