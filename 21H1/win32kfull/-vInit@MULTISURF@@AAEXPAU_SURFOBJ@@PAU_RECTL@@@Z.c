/*
 * XREFs of ?vInit@MULTISURF@@AAEXPAU_SURFOBJ@@PAU_RECTL@@@Z @ 0x206708
 * Callers:
 *     ?bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4@Z @ 0x1DDCF1 (-bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4.c)
 *     ??0MULTISURF@@QAE@PAU_SURFOBJ@@@Z @ 0x2016A2 (--0MULTISURF@@QAE@PAU_SURFOBJ@@@Z.c)
 *     ??0MULTISURF@@QAE@PAU_SURFOBJ@@PAU_POINTL@@JJ@Z @ 0x2016E0 (--0MULTISURF@@QAE@PAU_SURFOBJ@@PAU_POINTL@@JJ@Z.c)
 *     ?MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x2019CF (-MulAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 *     ?MulGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x203762 (-MulGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_.c)
 *     ?MulLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x203A11 (-MulLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x203EDB (-MulStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@.c)
 *     ?MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x204EF4 (-MulTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 *     ?bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x2054D5 (-bBitBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRU.c)
 * Callees:
 *     ?IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z @ 0x201804 (-IsMetaDevBitmapForMirroring@@YGHPAU_SURFOBJ@@@Z.c)
 */

void __thiscall MULTISURF::vInit(MULTISURF *this, struct _SURFOBJ *a2, struct _RECTL *a3)
{
  DHPDEV dhpdev; // eax
  LONG *p_lDelta; // esi
  DHSURF dhsurf; // edi
  _DWORD *v6; // edx
  int v7; // ecx

  *((_DWORD *)this + 17) = a2;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 18) = (char *)this + 4;
  if ( a2 )
  {
    *(struct _RECTL *)((char *)this + 4) = *a3;
    dhpdev = a2->dhpdev;
    *((_DWORD *)this + 5) = dhpdev;
    if ( dhpdev )
    {
      p_lDelta = &a2[-1].lDelta;
      *(_DWORD *)this = (char *)a2 - 16;
      dhsurf = a2->dhsurf;
      *((_DWORD *)this + 6) = a2->dhsurf;
      *((_DWORD *)this + 15) = a2[1].hsurf;
      if ( IsMetaDevBitmapForMirroring((int)a2) && ((unsigned int)&loc_20000 & *(_DWORD *)(p_lDelta[7] + 24)) != 0 )
      {
        v6[16] = dhsurf;
        v6[14] = 1;
        *((_WORD *)p_lDelta + 32) = 0;
        *(_DWORD *)(*v6 + 16) = 0;
        *(_DWORD *)(*v6 + 24) = 0;
        *(_DWORD *)(*v6 + 72) = 0;
      }
      else if ( *((_WORD *)p_lDelta + 32) || (*(_BYTE *)(v7 + 50) & 0x20) != 0 )
      {
        v6[14] = 2;
      }
    }
  }
  else
  {
    *((_DWORD *)this + 5) = 0;
  }
}
