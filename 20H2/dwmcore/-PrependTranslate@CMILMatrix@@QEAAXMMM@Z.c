/*
 * XREFs of ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x18020E7BC
 * Callers:
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801F43F0 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3, float a4)
{
  float v4; // xmm5_4
  char v5; // al
  float v6; // xmm0_4
  float v7; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm3_4
  float v14; // xmm8_4
  float v15; // xmm3_4
  float v16; // xmm5_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm6_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm7_4
  float v23; // xmm1_4
  float v24; // xmm8_4
  float v25; // xmm3_4

  v4 = a3 * *((float *)this + 4);
  v5 = *((_BYTE *)this + 64) & 0xFC;
  v6 = a2 * *(float *)this;
  *((_BYTE *)this + 64) = v5;
  v7 = a4 * *((float *)this + 8);
  v11 = a2 * *((float *)this + 1);
  v12 = a4 * *((float *)this + 9);
  v13 = a2;
  v14 = a2 * *((float *)this + 3);
  v15 = v13 * *((float *)this + 2);
  v16 = (float)((float)(v4 + v6) + v7) + *((float *)this + 12);
  v17 = v11 + (float)(a3 * *((float *)this + 5));
  v18 = a3 * *((float *)this + 6);
  v19 = a3 * *((float *)this + 7);
  v20 = v17 + v12;
  *((float *)this + 12) = v16;
  v21 = a4;
  v22 = a4 * *((float *)this + 11);
  v23 = v21 * *((float *)this + 10);
  *((float *)this + 13) = v20 + *((float *)this + 13);
  v24 = (float)((float)(v14 + v19) + v22) + *((float *)this + 15);
  v25 = (float)((float)(v15 + v18) + v23) + *((float *)this + 14);
  *((float *)this + 15) = v24;
  *((float *)this + 14) = v25;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 - 1.0) & _xmm) >= 0.000081380211 )
  {
    *((_BYTE *)this + 65) |= 0x3Fu;
    *((_BYTE *)this + 64) = v5 | 0xF0;
  }
  *((_BYTE *)this + 65) &= 0x3Fu;
}
