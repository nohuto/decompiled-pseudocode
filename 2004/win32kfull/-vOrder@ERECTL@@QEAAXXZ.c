/*
 * XREFs of ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001BA8C
 * Callers:
 *     GreMaskBlt @ 0x1C001456C (GreMaskBlt.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C001AD5C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     GreExcludeClipRect @ 0x1C001C804 (GreExcludeClipRect.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C007AD40 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007D260 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0082898 (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00843B8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     NtGdiPolyPatBlt @ 0x1C0086AE0 (NtGdiPolyPatBlt.c)
 *     EngStretchBltROP @ 0x1C00FFE80 (EngStretchBltROP.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1C012C724 (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C0135B44 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     GreRectangle @ 0x1C0137434 (GreRectangle.c)
 *     NtGdiTransparentBlt @ 0x1C0148ED0 (NtGdiTransparentBlt.c)
 *     ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C01499B0 (-SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0149E10 (-SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POIN.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0270F1C (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreLockDisplayArea @ 0x1C02862B8 (GreLockDisplayArea.c)
 *     GreUnlockDisplayArea @ 0x1C02864BC (GreUnlockDisplayArea.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028C124 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z @ 0x1C028CC74 (-vBound@BLTRECORD@@QEAAXPEAVERECTL@@@Z.c)
 *     EngPlgBlt @ 0x1C028CE10 (EngPlgBlt.c)
 *     ?PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0296100 (-PanLockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?PanUnlockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z @ 0x1C0296D70 (-PanUnlockDisplayArea@@YAXPEAUDHPDEV__@@PEAU_RECTL@@@Z.c)
 *     ?bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02970EC (-bTryLockShadowR@MULTIPANSURFLOCK@@QEAAHPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C029769C (-vLockShadow@PANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C0297924 (-vLockShadowW@MULTIPANSURFLOCK@@QEAAXPEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 *     GreAngleArc @ 0x1C02A0460 (GreAngleArc.c)
 * Callees:
 *     <none>
 */

void __fastcall ERECTL::vOrder(ERECTL *this)
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
