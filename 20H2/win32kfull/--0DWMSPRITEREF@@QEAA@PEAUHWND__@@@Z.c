/*
 * XREFs of ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00970E8
 * Callers:
 *     GreGetSprite @ 0x1C00075A4 (GreGetSprite.c)
 *     GreWindowBeginLayoutUpdate @ 0x1C0008B70 (GreWindowBeginLayoutUpdate.c)
 *     GreUpdateSpriteClipRgn @ 0x1C008F964 (GreUpdateSpriteClipRgn.c)
 *     GreHintSpriteShape @ 0x1C0097240 (GreHintSpriteShape.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B180C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1C010F4EC (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreWindowLayoutComplete @ 0x1C0113FB8 (GreWindowLayoutComplete.c)
 *     GreCancelSynchronizedWindowResize @ 0x1C026E9A0 (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x1C026EAA0 (GreConfirmWindowResizeCommit.c)
 *     GreGetWindowResizeTelemetry @ 0x1C026F078 (GreGetWindowResizeTelemetry.c)
 *     GreIsWindowResizeInProgress @ 0x1C026F47C (GreIsWindowResizeInProgress.c)
 *     GreProtectSpriteContent @ 0x1C026F57C (GreProtectSpriteContent.c)
 *     GreWindowResizeComplete @ 0x1C026FB10 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C026FD50 (GreWindowResizeStarted.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0097118 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C009714C (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 */

DWMSPRITEREF *__fastcall DWMSPRITEREF::DWMSPRITEREF(DWMSPRITEREF *this, HWND a2)
{
  HSPRITE v3; // rax

  *(_QWORD *)this = 0LL;
  v3 = DWMSPRITEREF::hspLookupWindow(a2);
  DWMSPRITEREF::LockSpriteObj(this, v3);
  return this;
}
