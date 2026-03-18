/*
 * XREFs of ?PrependTranslate@CMILMatrix@@QEAAXMM@Z @ 0x1802609F0
 * Callers:
 *     ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18023EE40 (-GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3)
{
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm5_4
  float v9; // xmm5_4

  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) >= 0.000081380211 || COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.000081380211 )
  {
    v5 = (float)(a2 * *((float *)this + 1)) + (float)(a3 * *((float *)this + 5));
    v6 = a3 * *((float *)this + 6);
    *((float *)this + 12) = (float)((float)(a3 * *((float *)this + 4)) + (float)(a2 * *(float *)this))
                          + *((float *)this + 12);
    v7 = (float)(a2 * *((float *)this + 2)) + v6;
    *((float *)this + 13) = v5 + *((float *)this + 13);
    *((float *)this + 14) = v7 + *((float *)this + 14);
    if ( CMILMatrix::IsAffine<1>((__int64)this, 1) )
    {
      *((_BYTE *)this + 64) &= 0xFCu;
    }
    else
    {
      v9 = v8 * *((float *)this + 3);
      *((_DWORD *)this + 16) = 0;
      *((float *)this + 15) = (float)(v9 + (float)(a3 * *((float *)this + 7))) + *((float *)this + 15);
    }
  }
}
