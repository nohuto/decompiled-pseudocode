/*
 * XREFs of ?Is3D@CMILMatrix@@QEBA_NXZ @ 0x180049174
 * Callers:
 *     ?IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z @ 0x180049124 (-IsScopePreservingTransform@CCpuClippingData@@CA_NAEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800ACAC4 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 */

char __fastcall CMILMatrix::Is3D(CMILMatrix *this)
{
  char v2; // al
  char v3; // dl

  v2 = CMILMatrix::ProducesUniformZ<1>(this);
  v3 = 0;
  if ( !v2 || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 14) - 0.0) & _xmm) >= 0.000081380211 )
    return 1;
  return v3;
}
