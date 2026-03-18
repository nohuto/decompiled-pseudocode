/*
 * XREFs of ??0UMPDSURFOBJ@@QAE@PAU_SURFOBJ@@PAVUMPDOBJ@@@Z @ 0x216194
 * Callers:
 *     _NtGdiEngAlphaBlend@28 @ 0x2173F0 (_NtGdiEngAlphaBlend@28.c)
 *     _NtGdiEngBitBlt@44 @ 0x217630 (_NtGdiEngBitBlt@44.c)
 *     _NtGdiEngCheckAbort@4 @ 0x2179E9 (_NtGdiEngCheckAbort@4.c)
 *     _NtGdiEngCopyBits@24 @ 0x217AED (_NtGdiEngCopyBits@24.c)
 *     _NtGdiEngEraseSurface@12 @ 0x2181D1 (_NtGdiEngEraseSurface@12.c)
 *     _NtGdiEngFillPath@28 @ 0x218304 (_NtGdiEngFillPath@28.c)
 *     _NtGdiEngGradientFill@40 @ 0x218480 (_NtGdiEngGradientFill@40.c)
 *     _NtGdiEngLineTo@36 @ 0x21873E (_NtGdiEngLineTo@36.c)
 *     _NtGdiEngPaint@20 @ 0x21894A (_NtGdiEngPaint@20.c)
 *     _NtGdiEngPlgBlt@44 @ 0x218A7F (_NtGdiEngPlgBlt@44.c)
 *     _NtGdiEngStretchBlt@44 @ 0x218D88 (_NtGdiEngStretchBlt@44.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 *     _NtGdiEngStrokeAndFillPath@40 @ 0x219580 (_NtGdiEngStrokeAndFillPath@40.c)
 *     _NtGdiEngStrokePath@32 @ 0x219789 (_NtGdiEngStrokePath@32.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 *     _NtGdiEngTransparentBlt@32 @ 0x219BED (_NtGdiEngTransparentBlt@32.c)
 *     _NtGdiPATHOBJ_vEnumStartClipLines@16 @ 0x21AAAC (_NtGdiPATHOBJ_vEnumStartClipLines@16.c)
 * Callees:
 *     ?GetLockedSURFOBJ@UMPDSURFOBJ@@AAEPAU_SURFOBJ@@PAU2@@Z @ 0x1F3C16 (-GetLockedSURFOBJ@UMPDSURFOBJ@@AAEPAU_SURFOBJ@@PAU2@@Z.c)
 *     ?GetSURFOBJ@UMPDOBJ@@QAEPAU_SURFOBJ@@PAU2@@Z @ 0x216411 (-GetSURFOBJ@UMPDOBJ@@QAEPAU_SURFOBJ@@PAU2@@Z.c)
 */

UMPDSURFOBJ *__thiscall UMPDSURFOBJ::UMPDSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2, struct UMPDOBJ *a3)
{
  struct _SURFOBJ *SURFOBJ; // eax
  struct _SURFOBJ *v5; // edx
  UMPDSURFOBJ *v6; // ecx
  struct _SURFOBJ *LockedSURFOBJ; // eax
  BOOL v8; // eax

  *(_DWORD *)this = a2;
  v8 = 0;
  if ( a2 )
  {
    SURFOBJ = UMPDOBJ::GetSURFOBJ(a3, a2);
    *(_DWORD *)this = SURFOBJ;
    if ( !SURFOBJ )
    {
      LockedSURFOBJ = UMPDSURFOBJ::GetLockedSURFOBJ(v6, v5);
      *(_DWORD *)this = LockedSURFOBJ;
      if ( LockedSURFOBJ )
        v8 = 1;
    }
  }
  *((_DWORD *)this + 1) = v8;
  return this;
}
