/*
 * XREFs of ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUD2D_POINT_2F@@U2@@Z @ 0x180263194
 * Callers:
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1800B9CE4 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 * Callees:
 *     ?TransformHomogeneousPoint@Matrix3x3@@QEBA?AUfloat2@Numerics@Foundation@Windows@@U2345@@Z @ 0x18001067C (-TransformHomogeneousPoint@Matrix3x3@@QEBA-AUfloat2@Numerics@Foundation@Windows@@U2345@@Z.c)
 */

struct D2D_POINT_2F __fastcall Matrix3x3::TransformHomogeneousPoint(
        Matrix3x3 *this,
        struct D2D_POINT_2F a2,
        __int64 a3)
{
  _DWORD *v3; // r9
  struct D2D_POINT_2F result; // rax
  int v5; // xmm1_4
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a3;
  Matrix3x3::TransformHomogeneousPoint(
    (float *)this,
    (float *)&v6,
    _mm_unpacklo_ps((__m128)(unsigned int)a3, (__m128)HIDWORD(a3)).m128_i64[0]);
  result = (struct D2D_POINT_2F)v3;
  v5 = HIDWORD(v6);
  *v3 = v6;
  v3[1] = v5;
  return result;
}
