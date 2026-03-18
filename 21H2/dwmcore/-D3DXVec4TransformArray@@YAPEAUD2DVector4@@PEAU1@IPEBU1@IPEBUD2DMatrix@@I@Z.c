/*
 * XREFs of ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x18026F0D4
 * Callers:
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801F9358 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?Transform@CExpressionValueStack@@QEAAJXZ @ 0x180250ABC (-Transform@CExpressionValueStack@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct D2DVector4 *__fastcall D3DXVec4TransformArray(
        struct D2DVector4 *a1,
        __int64 a2,
        const struct D2DVector4 *a3,
        __int64 a4,
        const struct D2DMatrix *a5)
{
  float v5; // xmm7_4
  float v6; // xmm1_4
  float v7; // xmm3_4
  float v8; // xmm0_4
  struct D2DVector4 *result; // rax
  float v10; // xmm2_4

  v5 = (float)((float)((float)(*(float *)a3 * *((float *)a5 + 1)) + (float)(*((float *)a3 + 1) * *((float *)a5 + 5)))
             + (float)(*((float *)a3 + 2) * *((float *)a5 + 9)))
     + (float)(*((float *)a3 + 3) * *((float *)a5 + 13));
  v6 = *((float *)a3 + 2);
  v7 = (float)((float)((float)(*(float *)a3 * *((float *)a5 + 2)) + (float)(*((float *)a3 + 1) * *((float *)a5 + 6)))
             + (float)(v6 * *((float *)a5 + 10)))
     + (float)(*((float *)a3 + 3) * *((float *)a5 + 14));
  v8 = *((float *)a3 + 3);
  result = a1;
  v10 = (float)((float)((float)(*(float *)a3 * *((float *)a5 + 3)) + (float)(*((float *)a3 + 1) * *((float *)a5 + 7)))
              + (float)(v6 * *((float *)a5 + 11)))
      + (float)(v8 * *((float *)a5 + 15));
  *(float *)a1 = (float)((float)((float)(*((float *)a3 + 1) * *((float *)a5 + 4)) + (float)(*(float *)a3 * *(float *)a5))
                       + (float)(v6 * *((float *)a5 + 8)))
               + (float)(v8 * *((float *)a5 + 12));
  *((float *)a1 + 1) = v5;
  *((float *)a1 + 2) = v7;
  *((float *)a1 + 3) = v10;
  return result;
}
