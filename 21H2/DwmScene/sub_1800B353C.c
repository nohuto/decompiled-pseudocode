/*
 * XREFs of sub_1800B353C @ 0x1800B353C
 * Callers:
 *     sub_1800B3384 @ 0x1800B3384 (sub_1800B3384.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B353C(float *a1, float *a2, float a3)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  __int64 result; // rax
  float v6; // xmm6_4
  float v7; // xmm0_4
  float v8; // xmm4_4

  if ( !a1 )
    wassert(L"pSin", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMisc.inl", 0x91Au);
  if ( !a2 )
    wassert(L"pCos", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathMisc.inl", 0x91Bu);
  v3 = a3 * 0.15915494;
  if ( a3 < 0.0 )
    v4 = v3 - 0.5;
  else
    v4 = v3 + 0.5;
  result = (unsigned int)(int)v4;
  v6 = a3 - (float)((float)(int)v4 * 6.2831855);
  if ( v6 <= 1.5707964 )
  {
    if ( v6 >= -1.5707964 )
    {
      v8 = 1.0;
      goto LABEL_14;
    }
    v7 = -3.1415927;
  }
  else
  {
    v7 = 3.1415927;
  }
  v8 = -1.0;
  v6 = v7 - v6;
LABEL_14:
  *a1 = (float)((float)((float)((float)((float)((float)((float)((float)((float)(0.0000027525562
                                                                              - (float)((float)(v6 * v6)
                                                                                      * 0.000000023889859))
                                                                      * (float)(v6 * v6))
                                                              - 0.00019840874)
                                                      * (float)(v6 * v6))
                                              + 0.008333331)
                                      * (float)(v6 * v6))
                              - 0.16666667)
                      * (float)(v6 * v6))
              + 1.0)
      * v6;
  *a2 = (float)((float)((float)((float)((float)((float)((float)((float)((float)(0.000024760495
                                                                              - (float)((float)(v6 * v6)
                                                                                      * 0.00000026051615))
                                                                      * (float)(v6 * v6))
                                                              - 0.0013888378)
                                                      * (float)(v6 * v6))
                                              + 0.041666638)
                                      * (float)(v6 * v6))
                              - 0.5)
                      * (float)(v6 * v6))
              + 1.0)
      * v8;
  return result;
}
