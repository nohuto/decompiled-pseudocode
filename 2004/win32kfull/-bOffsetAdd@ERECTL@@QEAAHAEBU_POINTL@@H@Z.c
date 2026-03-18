/*
 * XREFs of ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C01494C8
 * Callers:
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C001B944 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00754BC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     NtGdiSetPixel @ 0x1C0148A80 (NtGdiSetPixel.c)
 *     NtGdiTransparentBlt @ 0x1C0148ED0 (NtGdiTransparentBlt.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C0156F38 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0277138 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C0277A40 (DxgkEngBltViaGDI.c)
 *     ?vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z @ 0x1C02831A4 (-vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0287604 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vOffset@EWNDOBJ@@QEAAXJJ@Z @ 0x1C0287A08 (-vOffset@EWNDOBJ@@QEAAXJJ@Z.c)
 *     GreSetClientRgn @ 0x1C02884BC (GreSetClientRgn.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028C124 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C028C7AC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     EngPlgBlt @ 0x1C028CE10 (EngPlgBlt.c)
 *     NtGdiExtFloodFill @ 0x1C02B9E70 (NtGdiExtFloodFill.c)
 * Callees:
 *     LongLongToLong @ 0x1C014AF30 (LongLongToLong.c)
 */

__int64 __fastcall ERECTL::bOffsetAdd(ERECTL *this, const struct _POINTL *a2, int a3)
{
  const struct _POINTL *v3; // r10
  ERECTL *v4; // r9
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r11
  LONG plResult; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = this;
  if ( a3
    && (LongLongToLong(a2->x + (__int64)*(int *)this, &plResult) < 0
     || LongLongToLong(v6 + *(int *)(v5 + 8), &plResult) < 0
     || LongLongToLong(*(int *)(v8 + 4) + (__int64)*(int *)(v7 + 4), &plResult) < 0
     || LongLongToLong(v10 + *(int *)(v9 + 12), &plResult) < 0) )
  {
    return 0LL;
  }
  *(_DWORD *)v4 += v3->x;
  *((_DWORD *)v4 + 2) += v3->x;
  *((_DWORD *)v4 + 1) += v3->y;
  *((_DWORD *)v4 + 3) += v3->y;
  return 1LL;
}
