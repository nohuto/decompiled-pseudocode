/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180178B88
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800E9624 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVI_ea_1800E9624.c)
 *     ?RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEBVCShape@@@Z @ 0x1800E9DE4 (-RenderRevealBorder@CWindowNode@@AEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x180010584 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 */

__int64 __fastcall wil::details::out_param_t<std::unique_ptr<CShape>>::~out_param_t<std::unique_ptr<CShape>>(
        __int64 a1)
{
  __int64 result; // rax
  __int64 (__fastcall ***v2)(_QWORD, __int64); // rdx

  if ( *(_BYTE *)(a1 + 16) )
  {
    result = *(_QWORD *)(a1 + 8);
    v2 = **(__int64 (__fastcall *****)(_QWORD, __int64))a1;
    **(_QWORD **)a1 = result;
    if ( v2 )
      return std::default_delete<CShape>::operator()(a1, v2);
  }
  return result;
}
