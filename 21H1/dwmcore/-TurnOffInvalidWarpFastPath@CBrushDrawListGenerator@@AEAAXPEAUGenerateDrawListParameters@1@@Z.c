/*
 * XREFs of ?TurnOffInvalidWarpFastPath@CBrushDrawListGenerator@@AEAAXPEAUGenerateDrawListParameters@1@@Z @ 0x18004C5D8
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18004B1C0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x18001AADC (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18002FC70 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005B1B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800BE840 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ @ 0x1801A289C (-IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ.c)
 *     ?IsRatioWithinThresholdF@CBrushDrawListGenerator@@CA_NMM@Z @ 0x1801A2938 (-IsRatioWithinThresholdF@CBrushDrawListGenerator@@CA_NMM@Z.c)
 */

void __fastcall CBrushDrawListGenerator::TurnOffInvalidWarpFastPath(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  __int64 v4; // rcx
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
    v4 = *(_QWORD *)this;
    v6 = 0;
    CMatrixStack::Top((CMatrixStack *)(v4 + 408), (struct CMILMatrix *)v5);
    v7 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v5);
    if ( !CBrushDrawListGenerator::IsRatioWithinThresholdF(
            *((float *)&v7 + 2) - *(float *)&v7,
            *((float *)&v7 + 3) - *((float *)&v7 + 1)) )
      *((_BYTE *)a2 + 209) = 0;
  }
}
