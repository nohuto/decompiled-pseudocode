/*
 * XREFs of ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358
 * Callers:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0067BF8 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00697CC (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009CEFC (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C009D960 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C009FCF0 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A16C0 (GreSetDIBitsToDeviceInternal.c)
 *     GreDrawStream @ 0x1C00A2D50 (GreDrawStream.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00A6200 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiAlphaBlend @ 0x1C00AA350 (NtGdiAlphaBlend.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     GreMaskBlt @ 0x1C0102C4C (GreMaskBlt.c)
 *     NtGdiFrameRgn @ 0x1C01336A0 (NtGdiFrameRgn.c)
 *     GreRectangle @ 0x1C0139384 (GreRectangle.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C013AA94 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiFillRgn @ 0x1C013B480 (NtGdiFillRgn.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013B974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013D8B8 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiSetPixel @ 0x1C014B070 (NtGdiSetPixel.c)
 *     NtGdiTransparentBlt @ 0x1C014B4C0 (NtGdiTransparentBlt.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0276170 (DxgkEngAccumD3DPresentBounds.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C028ABD4 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C028CF70 (GrePlgBlt.c)
 *     NtGdiUpdateColors @ 0x1C02B6F90 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02B8910 (NtGdiExtFloodFill.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00875B0 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 */

void __fastcall XDCOBJ::vAccumulate(XDCOBJ *this, struct ERECTL *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8

  v2 = *(_DWORD **)this;
  if ( (v2[9] & 0x20) != 0 )
  {
    ERECTL::operator|=(v2 + 266, a2);
    v2 = (_DWORD *)*v3;
  }
  if ( (v2[9] & 0x80u) != 0 )
    ERECTL::operator|=(v2 + 274, a2);
}
