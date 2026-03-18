/*
 * XREFs of ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x180049124
 * Callers:
 *     ?CalcScopeMode@CCpuClippingData@@CA?AW4Enum@CpuClippingScopeMode@@PEAVCVisual@@PEBVCShape@@W423@@Z @ 0x180048F94 (-CalcScopeMode@CCpuClippingData@@CA-AW4Enum@CpuClippingScopeMode@@PEAVCVisual@@PEBVCShape@@W423@.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum@CpuClippingScopeMode@@@Z @ 0x180095830 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum.c)
 * Callees:
 *     ?Is3D@CMILMatrix@@QEBA_NXZ @ 0x180049174 (-Is3D@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800491BC (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 */

bool __fastcall CCpuClippingData::IsScopePreservingTransform(const struct CMILMatrix *a1)
{
  char v2; // bl

  v2 = 0;
  if ( !CMILMatrix::Is3D(a1) )
    return CMILMatrix::IsInvertibleDeterminant((float)(*((float *)a1 + 5) * *(float *)a1) - (float)(*((float *)a1 + 4)
                                                                                                  * *((float *)a1 + 1)));
  return v2;
}
