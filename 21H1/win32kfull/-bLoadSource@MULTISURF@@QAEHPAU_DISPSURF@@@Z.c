/*
 * XREFs of ?bLoadSource@MULTISURF@@QAEHPAU_DISPSURF@@@Z @ 0x2061FA
 * Callers:
 *     ?MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x2019CF (-MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?MulDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTATE@@@Z @ 0x202E96 (-MulDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTA.c)
 *     ?MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x203EDB (-MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 *     ?MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x204EF4 (-MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 * Callees:
 *     ?bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AAEHPAUHDEV__@@@Z @ 0x206244 (-bLoadSourceNotMetaDEVBITMAP@MULTISURF@@AAEHPAUHDEV__@@@Z.c)
 */

int __thiscall MULTISURF::bLoadSource(MULTISURF *this, struct _DISPSURF *a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax

  v2 = 1;
  if ( *((_DWORD *)this + 5) )
  {
    v3 = *((_DWORD *)this + 16);
    if ( v3 )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4 * *((_DWORD *)a2 + 2));
      *((_DWORD *)this + 17) = v4;
      if ( !v4 )
        *((_DWORD *)this + 17) = *(_DWORD *)this + 16;
    }
    else
    {
      return MULTISURF::bLoadSourceNotMetaDEVBITMAP(this, *((HDEV *)a2 + 9));
    }
  }
  return v2;
}
