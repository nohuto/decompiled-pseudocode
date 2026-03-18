/*
 * XREFs of ?ConvertInnerToOuterBounds@CVectorShape@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801C2244
 * Callers:
 *     ?PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z @ 0x180262244 (-PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180017150 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 */

void __fastcall CVectorShape::ConvertInnerToOuterBounds(CVectorShape *this, const struct D2D_MATRIX_3X2_F *a2)
{
  FLOAT dy; // xmm1_4
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  FLOAT dx; // [rsp+30h] [rbp-18h]
  FLOAT v5; // [rsp+34h] [rbp-14h]

  dy = a2->dy;
  v3 = *(_OWORD *)&a2->m11;
  dx = a2->dx;
  v5 = dy;
  MILMatrix3x2::Transform2DBounds(
    (MILMatrix3x2 *)&v3,
    (CVectorShape *)((char *)this + 72),
    (CVectorShape *)((char *)this + 72));
}
