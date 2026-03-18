/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00199EC
 * Callers:
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0014A1C (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0014A64 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00193E8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     GreGetAppClipBox @ 0x1C0019498 (GreGetAppClipBox.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00843B8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreGetBoundsRect @ 0x1C00F61E8 (GreGetBoundsRect.c)
 *     GreSetBoundsRect @ 0x1C0107E24 (GreSetBoundsRect.c)
 *     NtGdiGetPixel @ 0x1C010CFB0 (NtGdiGetPixel.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0138270 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiSetPixel @ 0x1C0148A80 (NtGdiSetPixel.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0294554 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 *     NtGdiPtVisible @ 0x1C029FFE0 (NtGdiPtVisible.c)
 *     NtGdiExtFloodFill @ 0x1C02B9E70 (NtGdiExtFloodFill.c)
 *     XFORMOBJ_bApplyXform @ 0x1C02BF330 (XFORMOBJ_bApplyXform.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0086360 (bCvtPts1.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int v4; // ecx
  int v6; // eax

  v3 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v3 + 32) & 0x43) == 0x43 )
    return 1;
  v6 = bCvtPts1(v3, a2, a3);
  v4 = 0;
  if ( v6 )
    return 1;
  return v4;
}
