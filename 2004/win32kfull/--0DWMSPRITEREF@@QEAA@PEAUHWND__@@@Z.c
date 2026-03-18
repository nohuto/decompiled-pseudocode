/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C001FB78
 * Callers:
 *     GreGetSprite @ 0x1C0007704 (GreGetSprite.c)
 *     GreWindowBeginLayoutUpdate @ 0x1C0008B80 (GreWindowBeginLayoutUpdate.c)
 *     GreUpdateSpriteClipRgn @ 0x1C001D924 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C001F3C4 (GreHintSpriteShape.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00843B8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C010DA4C (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreWindowLayoutComplete @ 0x1C0113198 (GreWindowLayoutComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C026FFC0 (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x1C02700C0 (GreConfirmWindowResizeCommit.c)
 *     GreGetWindowResizeTelemetry @ 0x1C0270698 (GreGetWindowResizeTelemetry.c)
 *     GreIsWindowResizeInProgress @ 0x1C0270A9C (GreIsWindowResizeInProgress.c)
 *     GreProtectSpriteContent @ 0x1C0270B9C (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C0271130 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0271370 (GreWindowResizeStarted.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C001FBA8 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C001FBDC (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMSPRITEREF *__fastcall DWMSPRITEREF::DWMSPRITEREF(DWMSPRITEREF *this, HWND a2)
{
  HSPRITE v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = DWMSPRITEREF::hspLookupWindow(a2);
  DWMSPRITEREF::LockSpriteObj(this, v3);
  return this;
}
