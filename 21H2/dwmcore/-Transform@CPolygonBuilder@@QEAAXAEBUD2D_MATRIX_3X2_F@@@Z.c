/*
 * XREFs of ?Transform@CPolygonBuilder@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000EB2C
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     <none>
 */

void __fastcall CPolygonBuilder::Transform(CPolygonBuilder *this, const struct D2D_MATRIX_3X2_F *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rax
  float v5; // xmm3_4

  v2 = 0;
  if ( (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3 )
  {
    v3 = 0LL;
    do
    {
      v4 = *((_QWORD *)this + 2);
      ++v2;
      v5 = (float)((float)(*(float *)(v4 + 8 * v3) * a2->m12) + (float)(*(float *)(v4 + 8 * v3 + 4) * a2->m22)) + a2->dy;
      *(float *)(v4 + 8 * v3) = (float)((float)(*(float *)(v4 + 8 * v3) * a2->m11)
                                      + (float)(*(float *)(v4 + 8 * v3 + 4) * a2->m21))
                              + a2->dx;
      *(float *)(v4 + 8 * v3 + 4) = v5;
      v3 = v2;
    }
    while ( v2 < (unsigned __int64)((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3) );
  }
}
