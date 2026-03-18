/*
 * XREFs of ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C
 * Callers:
 *     _GreLockDisplayArea@8 @ 0x1230A (_GreLockDisplayArea@8.c)
 *     ??0EBOX@@QAE@AAVERECTL@@H@Z @ 0x22EF4 (--0EBOX@@QAE@AAVERECTL@@H@Z.c)
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _NtGdiPolyPatBlt@20 @ 0x56AE8 (_NtGdiPolyPatBlt@20.c)
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 *     ?bOpaqueArea@ESTROBJ@@QAEHPAU_POINTFIX@@PAU_RECTL@@@Z @ 0x65208 (-bOpaqueArea@ESTROBJ@@QAEHPAU_POINTFIX@@PAU_RECTL@@@Z.c)
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreExcludeClipRect@20 @ 0x79558 (_GreExcludeClipRect@20.c)
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     _EngStretchBltROP@52 @ 0x7AF4C (_EngStretchBltROP@52.c)
 *     _GreRectangle@20 @ 0xBB904 (_GreRectangle@20.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _GreSpDwmSyncCaptureSurfaceBits@28 @ 0x1CE8ED (_GreSpDwmSyncCaptureSurfaceBits@28.c)
 *     ?SpStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1DBF6E (-SpStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@P.c)
 *     ?SpStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAU_BRUSHOBJ@@K@Z @ 0x1DC279 (-SpStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?vBound@BLTRECORD@@QAEXPAVERECTL@@@Z @ 0x1ECA6C (-vBound@BLTRECORD@@QAEXPAVERECTL@@@Z.c)
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 *     ?PanLockDisplayArea@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z @ 0x1F5FFA (-PanLockDisplayArea@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z.c)
 *     ?PanUnlockDisplayArea@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z @ 0x1F69C2 (-PanUnlockDisplayArea@@YGXPAUDHPDEV__@@PAU_RECTL@@@Z.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QAEHPAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F6C15 (-bTryLockShadowR@MULTIPANSURFLOCK@@QAEHPAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 *     ?vLockShadow@PANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@H@Z @ 0x1F6FC9 (-vLockShadow@PANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@H@Z.c)
 *     ?vLockShadowW@MULTIPANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@@Z @ 0x1F7199 (-vLockShadowW@MULTIPANSURFLOCK@@QAEXPAU_RECTL@@PAU_CLIPOBJ@@@Z.c)
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 *     ??0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z @ 0x214527 (--0EBOX@@QAE@AAVDCOBJ@@AAU_RECTL@@PAU_LINEATTRS@@H@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall ERECTL::vOrder(ERECTL *this)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v1 = *(_DWORD *)this;
  v2 = *((_DWORD *)this + 2);
  if ( *(_DWORD *)this > v2 )
  {
    *(_DWORD *)this = v2;
    *((_DWORD *)this + 2) = v1;
  }
  v3 = *((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 3);
  if ( v3 > v4 )
  {
    *((_DWORD *)this + 1) = v4;
    *((_DWORD *)this + 3) = v3;
  }
}
