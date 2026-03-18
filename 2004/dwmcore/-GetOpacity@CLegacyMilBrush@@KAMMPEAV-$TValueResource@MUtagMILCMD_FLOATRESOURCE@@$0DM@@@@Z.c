/*
 * XREFs of ?GetOpacity@CLegacyMilBrush@@KAMMPEAV?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DM@@@@Z @ 0x180082490
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180081CEC (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ??$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinearGradientLegacyMilBrush@@PEAVCGradientColorData@@@Z @ 0x1801B6704 (--$GetGradientColorData@VCLinearGradientLegacyMilBrush@@@CGradientLegacyMilBrush@@KAJPEAVCLinear.c)
 * Callees:
 *     <none>
 */

float __fastcall CLegacyMilBrush::GetOpacity(float a1, __int64 a2)
{
  if ( a2 )
    a1 = *(float *)(a2 + 56);
  return fminf(1.0, fmaxf(a1, 0.0));
}
