/*
 * XREFs of ?TransformRect@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@U2@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1C01A87EC
 * Callers:
 *     ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x1C01A78F0 (-GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@PEBUCompositionInpu.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall CPalmRejectZoneInfo::TransformRect(
        CPalmRejectZoneInfo *this,
        struct tagRECT *__return_ptr retstr,
        struct tagRECT *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  float right; // xmm3_4
  float v5; // xmm4_4
  float bottom; // xmm2_4
  float v7; // xmm6_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm11_4
  float top; // xmm8_4
  float left; // xmm7_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  LONG v15; // r9d
  struct tagRECT *result; // rax

  right = (float)a3->right;
  v5 = *((float *)a4 + 1);
  bottom = (float)a3->bottom;
  v7 = *((float *)a4 + 5);
  v8 = *((float *)a4 + 4);
  v9 = *((float *)a4 + 2);
  v10 = *(float *)a4;
  top = (float)a3->top;
  left = (float)a3->left;
  v13 = bottom * v9;
  v14 = bottom * *((float *)a4 + 3);
  v15 = (int)(float)((float)((float)(v5 * left) + (float)(*((float *)a4 + 3) * top)) + v7);
  retstr->left = (int)(float)((float)((float)(v10 * left) + (float)(v9 * top)) + v8);
  result = retstr;
  retstr->top = v15;
  retstr->right = (int)(float)((float)((float)(right * v10) + v13) + v8);
  retstr->bottom = (int)(float)((float)((float)(right * v5) + v14) + v7);
  return result;
}
