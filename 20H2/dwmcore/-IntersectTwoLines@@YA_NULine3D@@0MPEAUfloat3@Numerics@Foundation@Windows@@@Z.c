/*
 * XREFs of ?IntersectTwoLines@@YA_NULine3D@@0MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801F38E8
 * Callers:
 *     ?IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801F3760 (-IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800EE99B (sqrtf_0.c)
 */

bool __fastcall IntersectTwoLines(__int64 *a1, _QWORD *a2, float a3, float *a4)
{
  float v4; // xmm12_4
  float v5; // xmm8_4
  float v6; // xmm9_4
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v9; // xmm1_4
  float v10; // xmm4_4
  float v11; // xmm15_4
  float v12; // xmm7_4
  __int64 v14; // [rsp+30h] [rbp-D8h]
  float v15; // [rsp+38h] [rbp-D0h]
  __int64 v16; // [rsp+40h] [rbp-C8h]
  float v17; // [rsp+48h] [rbp-C0h]
  __int64 v18; // [rsp+50h] [rbp-B8h]
  float v19; // [rsp+58h] [rbp-B0h]
  float v20; // [rsp+68h] [rbp-A0h]
  float v21; // [rsp+128h] [rbp+20h]
  float v22; // [rsp+130h] [rbp+28h]
  float v23; // [rsp+140h] [rbp+38h]

  v18 = *a1;
  v16 = *(__int64 *)((char *)a1 + 12);
  v14 = *(_QWORD *)((char *)a2 + 12);
  v19 = *((float *)a1 + 2);
  v17 = *((float *)a1 + 5);
  v20 = *((float *)a2 + 2);
  v15 = *((float *)a2 + 5);
  v4 = (float)(v15 * *((float *)&v16 + 1)) - (float)(v17 * *((float *)&v14 + 1));
  v5 = (float)(v17 * *(float *)&v14) - (float)(v15 * *(float *)&v16);
  v6 = (float)(*(float *)&v16 * *((float *)&v14 + 1)) - (float)(*((float *)&v16 + 1) * *(float *)&v14);
  v7 = (float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6);
  v8 = (float)((float)((float)((float)((float)((float)(v19 - v20) * *((float *)&v14 + 1))
                                     - (float)((float)(*((float *)&v18 + 1) - COERCE_FLOAT(HIDWORD(*a2))) * v15))
                             * v4)
                     + (float)((float)((float)((float)(*(float *)&v18 - COERCE_FLOAT(*a2)) * v15)
                                     - (float)((float)(v19 - v20) * *(float *)&v14))
                             * v5))
             + (float)((float)((float)((float)(*((float *)&v18 + 1) - COERCE_FLOAT(HIDWORD(*a2))) * *(float *)&v14)
                             - (float)((float)(*(float *)&v18 - COERCE_FLOAT(*a2)) * *((float *)&v14 + 1)))
                     * v6))
     / v7;
  v21 = COERCE_FLOAT(HIDWORD(*a1)) + (float)(*((float *)&v16 + 1) * v8);
  v23 = COERCE_FLOAT(*a1) + (float)(*(float *)&v16 * v8);
  v22 = v19 + (float)(v17 * v8);
  v9 = (float)((float)((float)((float)((float)(v17 * (float)(COERCE_FLOAT(*a1) - COERCE_FLOAT(*a2)))
                                     - (float)(*(float *)&v16 * (float)(v19 - v20)))
                             * v5)
                     + (float)((float)((float)(*((float *)&v16 + 1) * (float)(v19 - v20))
                                     - (float)(v17 * (float)(COERCE_FLOAT(HIDWORD(*a1)) - COERCE_FLOAT(HIDWORD(*a2)))))
                             * v4))
             + (float)((float)((float)(*(float *)&v16 * (float)(COERCE_FLOAT(HIDWORD(*a1)) - COERCE_FLOAT(HIDWORD(*a2))))
                             - (float)(*((float *)&v16 + 1) * (float)(COERCE_FLOAT(*a1) - COERCE_FLOAT(*a2))))
                     * v6))
     / v7;
  v10 = COERCE_FLOAT(HIDWORD(*a2)) + (float)(*((float *)&v14 + 1) * v9);
  v11 = v20 + (float)(v15 * v9);
  v12 = v23 - (float)(COERCE_FLOAT(*a2) + (float)(*(float *)&v14 * v9));
  *a4 = (float)((float)(COERCE_FLOAT(*a2) + (float)(*(float *)&v14 * v9)) + v23) * 0.5;
  a4[1] = (float)(v10 + v21) * 0.5;
  a4[2] = (float)(v11 + v22) * 0.5;
  return a3 > sqrtf_0(
                (float)((float)((float)(v21 - v10) * (float)(v21 - v10)) + (float)(v12 * v12))
              + (float)((float)(v22 - v11) * (float)(v22 - v11)));
}
