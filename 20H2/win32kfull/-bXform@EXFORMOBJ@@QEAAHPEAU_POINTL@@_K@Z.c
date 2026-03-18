/*
 * XREFs of ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0097914
 * Callers:
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00978D8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     GreGetBoundsRect @ 0x1C009EF48 (GreGetBoundsRect.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B180C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreGetAppClipBox @ 0x1C00F1118 (GreGetAppClipBox.c)
 *     NtGdiGetPixel @ 0x1C0102880 (NtGdiGetPixel.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0103114 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1C010315C (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     GreSetBoundsRect @ 0x1C0108B24 (GreSetBoundsRect.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C013A240 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiSetPixel @ 0x1C014B070 (NtGdiSetPixel.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0293104 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 *     NtGdiPtVisible @ 0x1C029EB90 (NtGdiPtVisible.c)
 *     NtGdiExtFloodFill @ 0x1C02B8910 (NtGdiExtFloodFill.c)
 *     XFORMOBJ_bApplyXform @ 0x1C02BDDD0 (XFORMOBJ_bApplyXform.c)
 * Callees:
 *     bCvtPts1 @ 0x1C009F8A0 (bCvtPts1.c)
 */

__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ecx
  int v5; // eax

  v2 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v2 + 32) & 0x43) == 0x43 )
    return 1;
  v5 = bCvtPts1(v2, a2);
  v3 = 0;
  if ( v5 )
    return 1;
  return v3;
}
