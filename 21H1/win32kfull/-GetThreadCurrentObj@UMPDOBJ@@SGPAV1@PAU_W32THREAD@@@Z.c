/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E
 * Callers:
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z @ 0x21643D (-NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z.c)
 *     _NtGdiBRUSHOBJ_DeleteRbrush@8 @ 0x216F80 (_NtGdiBRUSHOBJ_DeleteRbrush@8.c)
 *     _NtGdiBRUSHOBJ_hGetColorTransform@4 @ 0x217031 (_NtGdiBRUSHOBJ_hGetColorTransform@4.c)
 *     _NtGdiBRUSHOBJ_pvAllocRbrush@8 @ 0x217087 (_NtGdiBRUSHOBJ_pvAllocRbrush@8.c)
 *     _NtGdiBRUSHOBJ_pvGetRbrush@4 @ 0x2170E1 (_NtGdiBRUSHOBJ_pvGetRbrush@4.c)
 *     _NtGdiBRUSHOBJ_ulGetBrushColor@4 @ 0x217138 (_NtGdiBRUSHOBJ_ulGetBrushColor@4.c)
 *     _NtGdiCLIPOBJ_bEnum@12 @ 0x21721F (_NtGdiCLIPOBJ_bEnum@12.c)
 *     _NtGdiCLIPOBJ_cEnumStart@20 @ 0x21730D (_NtGdiCLIPOBJ_cEnumStart@20.c)
 *     _NtGdiCLIPOBJ_ppoGetPath@4 @ 0x2173A4 (_NtGdiCLIPOBJ_ppoGetPath@4.c)
 *     _NtGdiEngAlphaBlend@28 @ 0x2173F0 (_NtGdiEngAlphaBlend@28.c)
 *     _NtGdiEngBitBlt@44 @ 0x217630 (_NtGdiEngBitBlt@44.c)
 *     _NtGdiEngCheckAbort@4 @ 0x2179E9 (_NtGdiEngCheckAbort@4.c)
 *     _NtGdiEngComputeGlyphSet@12 @ 0x217A62 (_NtGdiEngComputeGlyphSet@12.c)
 *     _NtGdiEngCopyBits@24 @ 0x217AED (_NtGdiEngCopyBits@24.c)
 *     _NtGdiEngCreateClip@0 @ 0x217EB8 (_NtGdiEngCreateClip@0.c)
 *     _NtGdiEngDeleteClip@4 @ 0x2180E5 (_NtGdiEngDeleteClip@4.c)
 *     _NtGdiEngDeletePath@4 @ 0x218152 (_NtGdiEngDeletePath@4.c)
 *     _NtGdiEngEraseSurface@12 @ 0x2181D1 (_NtGdiEngEraseSurface@12.c)
 *     _NtGdiEngFillPath@28 @ 0x218304 (_NtGdiEngFillPath@28.c)
 *     _NtGdiEngGradientFill@40 @ 0x218480 (_NtGdiEngGradientFill@40.c)
 *     _NtGdiEngLineTo@36 @ 0x21873E (_NtGdiEngLineTo@36.c)
 *     _NtGdiEngLockSurface@4 @ 0x218894 (_NtGdiEngLockSurface@4.c)
 *     _NtGdiEngPaint@20 @ 0x21894A (_NtGdiEngPaint@20.c)
 *     _NtGdiEngPlgBlt@44 @ 0x218A7F (_NtGdiEngPlgBlt@44.c)
 *     _NtGdiEngStretchBlt@44 @ 0x218D88 (_NtGdiEngStretchBlt@44.c)
 *     _NtGdiEngStretchBltROP@52 @ 0x219109 (_NtGdiEngStretchBltROP@52.c)
 *     _NtGdiEngStrokeAndFillPath@40 @ 0x219580 (_NtGdiEngStrokeAndFillPath@40.c)
 *     _NtGdiEngStrokePath@32 @ 0x219789 (_NtGdiEngStrokePath@32.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 *     _NtGdiEngTransparentBlt@32 @ 0x219BED (_NtGdiEngTransparentBlt@32.c)
 *     _NtGdiEngUnlockSurface@4 @ 0x219D93 (_NtGdiEngUnlockSurface@4.c)
 *     _NtGdiFONTOBJ_cGetAllGlyphHandles@8 @ 0x219DE2 (_NtGdiFONTOBJ_cGetAllGlyphHandles@8.c)
 *     _NtGdiFONTOBJ_cGetGlyphs@20 @ 0x219EAF (_NtGdiFONTOBJ_cGetGlyphs@20.c)
 *     _NtGdiFONTOBJ_pQueryGlyphAttrs@8 @ 0x21A080 (_NtGdiFONTOBJ_pQueryGlyphAttrs@8.c)
 *     _NtGdiFONTOBJ_pfdg@4 @ 0x21A194 (_NtGdiFONTOBJ_pfdg@4.c)
 *     _NtGdiFONTOBJ_pifi@4 @ 0x21A29C (_NtGdiFONTOBJ_pifi@4.c)
 *     _NtGdiFONTOBJ_pvTrueTypeFontFile@8 @ 0x21A3AE (_NtGdiFONTOBJ_pvTrueTypeFontFile@8.c)
 *     _NtGdiFONTOBJ_pxoGetXform@4 @ 0x21A4A9 (_NtGdiFONTOBJ_pxoGetXform@4.c)
 *     _NtGdiFONTOBJ_vGetInfo@12 @ 0x21A4F5 (_NtGdiFONTOBJ_vGetInfo@12.c)
 *     _NtGdiPATHOBJ_bEnum@8 @ 0x21A730 (_NtGdiPATHOBJ_bEnum@8.c)
 *     _NtGdiPATHOBJ_bEnumClipLines@12 @ 0x21A890 (_NtGdiPATHOBJ_bEnumClipLines@12.c)
 *     _NtGdiPATHOBJ_vEnumStart@4 @ 0x21AA1F (_NtGdiPATHOBJ_vEnumStart@4.c)
 *     _NtGdiPATHOBJ_vEnumStartClipLines@16 @ 0x21AAAC (_NtGdiPATHOBJ_vEnumStartClipLines@16.c)
 *     _NtGdiPATHOBJ_vGetBounds@8 @ 0x21ABE1 (_NtGdiPATHOBJ_vGetBounds@8.c)
 *     _NtGdiSTROBJ_bGetAdvanceWidths@16 @ 0x21ACC8 (_NtGdiSTROBJ_bGetAdvanceWidths@16.c)
 *     _NtGdiSTROBJ_dwGetCodePage@4 @ 0x21ADBD (_NtGdiSTROBJ_dwGetCodePage@4.c)
 *     _NtGdiSTROBJ_vEnumStart@4 @ 0x21AE10 (_NtGdiSTROBJ_vEnumStart@4.c)
 *     _NtGdiSetPUMPDOBJ@16 @ 0x21AE6D (_NtGdiSetPUMPDOBJ@16.c)
 *     _NtGdiXFORMOBJ_bApplyXform@20 @ 0x21B239 (_NtGdiXFORMOBJ_bApplyXform@20.c)
 *     _NtGdiXFORMOBJ_iGetXform@8 @ 0x21B391 (_NtGdiXFORMOBJ_iGetXform@8.c)
 *     _NtGdiXLATEOBJ_cGetPalette@16 @ 0x21B468 (_NtGdiXLATEOBJ_cGetPalette@16.c)
 *     _NtGdiXLATEOBJ_hGetColorTransform@4 @ 0x21B531 (_NtGdiXLATEOBJ_hGetColorTransform@4.c)
 *     _NtGdiXLATEOBJ_iXlate@8 @ 0x21B587 (_NtGdiXLATEOBJ_iXlate@8.c)
 * Callees:
 *     <none>
 */

struct UMPDOBJ *__thiscall UMPDOBJ::GetThreadCurrentObj(_DWORD *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // ecx

  if ( this && (v1 = this + 5, v2 = (_DWORD *)this[5], v2 != v1) )
    return (struct UMPDOBJ *)(v2 - 7);
  else
    return 0;
}
