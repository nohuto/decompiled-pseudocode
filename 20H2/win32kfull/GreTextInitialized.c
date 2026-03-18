/*
 * XREFs of GreTextInitialized @ 0x1C0024D48
 * Callers:
 *     xxxInitWindowStation @ 0x1C000C67C (xxxInitWindowStation.c)
 *     CreateBitmapStrip @ 0x1C00241D0 (CreateBitmapStrip.c)
 *     GetCharDimensions @ 0x1C0024BC8 (GetCharDimensions.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0028410 (xxxUpdatePerUserSystemParameters.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01E98AC (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1C0222DE0 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008D09C (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

_BOOL8 GreTextInitialized()
{
  return KeReadStateEvent(UmfdHostLifeTimeManager::s_InitialFontsAddedEvent)
      || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost()
      || UmfdHostLifeTimeManager::s_CsrssAddInitialFontsThread == KeGetCurrentThread();
}
