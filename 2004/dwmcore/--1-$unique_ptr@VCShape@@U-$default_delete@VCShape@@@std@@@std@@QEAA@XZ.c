/*
 * XREFs of ??1?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAA@XZ @ 0x1800C36E8
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800EA3A0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800EAC4C (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CShape>::~unique_ptr<CShape>(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CShape>::operator()((__int64)a1, *a1);
  return result;
}
