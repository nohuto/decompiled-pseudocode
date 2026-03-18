/*
 * XREFs of ?TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z @ 0x180062D70
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800619C4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180019CE4 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180091760 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C4C30 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E6818 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ @ 0x18019E088 (-IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ.c)
 *     ?IsRatioWithinThresholdF@CBrushDrawListGenerator@@CA_NMM@Z @ 0x18019E124 (-IsRatioWithinThresholdF@CBrushDrawListGenerator@@CA_NMM@Z.c)
 */

void __fastcall CBrushDrawListGenerator::TurnOffInvalidWarpFastPath(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  CDrawingContext *v4; // rcx
  _BYTE v5[64]; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+70h] [rbp+27h]
  __int128 v7; // [rsp+80h] [rbp+37h]

  if ( *((_BYTE *)a2 + 209) )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 14) + 8LL))(*((_QWORD *)a2 + 14)) != 1
      || (*((_QWORD *)a2 + 1) || *((_QWORD *)a2 + 3))
      && !CCpuClip::IsAxisAlignedRectangle((struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 8))
      || *(_DWORD *)(*(_QWORD *)this + 280LL) == 4
      || (*((_DWORD *)this + 4) & 0x200) != 0
      && (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(*(_QWORD *)this + 272LL)) == 3
      || CBrushDrawListGenerator::IsColorConversionRequired(this)
      || *((_DWORD *)a2 + 30) )
    {
      *((_BYTE *)a2 + 209) = 0;
    }
    v4 = *(CDrawingContext **)this;
    v6 = 0;
    CDrawingContext::GetWorldTransform(v4, (struct CMILMatrix *)v5);
    v7 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v5);
    if ( !CBrushDrawListGenerator::IsRatioWithinThresholdF(
            *((float *)&v7 + 2) - *(float *)&v7,
            *((float *)&v7 + 3) - *((float *)&v7 + 1)) )
      *((_BYTE *)a2 + 209) = 0;
  }
}
