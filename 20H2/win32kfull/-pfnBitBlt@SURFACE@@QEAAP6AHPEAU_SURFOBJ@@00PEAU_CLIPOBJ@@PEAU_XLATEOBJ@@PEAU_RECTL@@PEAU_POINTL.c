/*
 * XREFs of ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00FC34C
 * Callers:
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0067BF8 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     EngTextOut @ 0x1C0088810 (EngTextOut.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C009B670 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     NtGdiBitBltInternal @ 0x1C00B0060 (NtGdiBitBltInternal.c)
 *     EngStretchBltROP @ 0x1C00FBF80 (EngStretchBltROP.c)
 *     EngPaint @ 0x1C013C7F0 (EngPaint.c)
 *     NtGdiSetPixel @ 0x1C014B070 (NtGdiSetPixel.c)
 *     SimBitBlt @ 0x1C0277AA8 (SimBitBlt.c)
 *     EngPlgBlt @ 0x1C028B9B0 (EngPlgBlt.c)
 * Callees:
 *     <none>
 */

int (*__fastcall SURFACE::pfnBitBlt(
        SURFACE *this))(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int)
{
  if ( (*((_DWORD *)this + 28) & 1) != 0 )
    return *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))(*((_QWORD *)this + 6) + 2832LL);
  else
    return EngBitBlt;
}
