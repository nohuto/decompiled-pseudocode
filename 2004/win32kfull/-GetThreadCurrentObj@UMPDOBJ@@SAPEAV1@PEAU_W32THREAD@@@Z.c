/*
 * XREFs of ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CC86C
 * Callers:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00CC838 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     NtGdiEngCopyBits @ 0x1C012ECC0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C012F020 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C012F4E0 (NtGdiEngBitBlt.c)
 *     NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C012F960 (NtGdiBRUSHOBJ_ulGetBrushColor.c)
 *     NtGdiEngTextOut @ 0x1C012FA90 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C012FDF0 (NtGdiEngStretchBlt.c)
 *     NtGdiFONTOBJ_pxoGetXform @ 0x1C0130830 (NtGdiFONTOBJ_pxoGetXform.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C01308A0 (NtGdiFONTOBJ_pifi.c)
 *     NtGdiXFORMOBJ_iGetXform @ 0x1C0141DB0 (NtGdiXFORMOBJ_iGetXform.c)
 *     NtGdiEngLockSurface @ 0x1C014EC60 (NtGdiEngLockSurface.c)
 *     NtGdiEngUnlockSurface @ 0x1C0150B10 (NtGdiEngUnlockSurface.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02B1F38 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     NtGdiBRUSHOBJ_DeleteRbrush @ 0x1C02B2450 (NtGdiBRUSHOBJ_DeleteRbrush.c)
 *     NtGdiBRUSHOBJ_hGetColorTransform @ 0x1C02B2550 (NtGdiBRUSHOBJ_hGetColorTransform.c)
 *     NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02B25C0 (NtGdiBRUSHOBJ_pvAllocRbrush.c)
 *     NtGdiBRUSHOBJ_pvGetRbrush @ 0x1C02B2640 (NtGdiBRUSHOBJ_pvGetRbrush.c)
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02B26B0 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x1C02B27F0 (NtGdiCLIPOBJ_cEnumStart.c)
 *     NtGdiCLIPOBJ_ppoGetPath @ 0x1C02B28E0 (NtGdiCLIPOBJ_ppoGetPath.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B2950 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCheckAbort @ 0x1C02B2BD0 (NtGdiEngCheckAbort.c)
 *     NtGdiEngComputeGlyphSet @ 0x1C02B2C70 (NtGdiEngComputeGlyphSet.c)
 *     NtGdiEngCreateClip @ 0x1C02B2D50 (NtGdiEngCreateClip.c)
 *     NtGdiEngDeleteClip @ 0x1C02B2E00 (NtGdiEngDeleteClip.c)
 *     NtGdiEngDeletePath @ 0x1C02B2E90 (NtGdiEngDeletePath.c)
 *     NtGdiEngEraseSurface @ 0x1C02B2F20 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02B30A0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02B32B0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B36D0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B38E0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B3A90 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B3F00 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B4210 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B44D0 (NtGdiEngTransparentBlt.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02B4720 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_cGetGlyphs @ 0x1C02B4830 (NtGdiFONTOBJ_cGetGlyphs.c)
 *     NtGdiFONTOBJ_pQueryGlyphAttrs @ 0x1C02B4A80 (NtGdiFONTOBJ_pQueryGlyphAttrs.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02B4BC0 (NtGdiFONTOBJ_pfdg.c)
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C02B4D10 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02B4E20 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiPATHOBJ_bEnum @ 0x1C02B5030 (NtGdiPATHOBJ_bEnum.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x1C02B51A0 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     NtGdiPATHOBJ_vEnumStart @ 0x1C02B5370 (NtGdiPATHOBJ_vEnumStart.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B5430 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 *     NtGdiPATHOBJ_vGetBounds @ 0x1C02B55E0 (NtGdiPATHOBJ_vGetBounds.c)
 *     NtGdiSTROBJ_bGetAdvanceWidths @ 0x1C02B5700 (NtGdiSTROBJ_bGetAdvanceWidths.c)
 *     NtGdiSTROBJ_dwGetCodePage @ 0x1C02B5820 (NtGdiSTROBJ_dwGetCodePage.c)
 *     NtGdiSTROBJ_vEnumStart @ 0x1C02B5890 (NtGdiSTROBJ_vEnumStart.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02B59C0 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02B5B70 (NtGdiXLATEOBJ_cGetPalette.c)
 *     NtGdiXLATEOBJ_hGetColorTransform @ 0x1C02B5C80 (NtGdiXLATEOBJ_hGetColorTransform.c)
 *     NtGdiXLATEOBJ_iXlate @ 0x1C02B5CF0 (NtGdiXLATEOBJ_iXlate.c)
 * Callees:
 *     <none>
 */

struct UMPDOBJ *__fastcall UMPDOBJ::GetThreadCurrentObj(struct _W32THREAD *a1)
{
  char *v1; // rax
  char *v2; // rcx

  if ( !a1 )
    return 0LL;
  v1 = (char *)a1 + 40;
  v2 = (char *)*((_QWORD *)a1 + 5);
  if ( v2 == v1 )
    return 0LL;
  else
    return (struct UMPDOBJ *)(v2 - 40);
}
