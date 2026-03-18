/*
 * XREFs of ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180012D60
 * Callers:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18005C3D0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A57F0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005C260 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

float *__fastcall CMILMatrix::Transform3DRectToPerspective(float *a1, float *a2, float *a3)
{
  float v3; // xmm9_4
  float v4; // xmm8_4
  float v7; // xmm2_4
  float v8; // xmm15_4
  float v9; // xmm13_4
  float v10; // xmm4_4
  float v11; // xmm14_4
  float v12; // xmm11_4
  float v13; // xmm10_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm8_4
  float v17; // xmm9_4
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm4_4
  float v21; // xmm1_4
  float *result; // rax
  int v23; // edx
  _DWORD *v24; // r10
  float *v25; // r11
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm7_4
  float v30; // xmm0_4
  float v31; // xmm8_4
  float v32; // xmm5_4
  float v33; // xmm6_4
  float v34; // xmm1_4
  float v35; // xmm7_4
  float v36; // xmm4_4
  float v37; // xmm8_4
  float v38; // xmm12_4
  float v39; // xmm9_4
  float v40; // xmm10_4
  float v41; // xmm11_4
  float v42; // xmm7_4
  float v43; // xmm8_4
  float v44; // xmm5_4
  float v45; // xmm6_4
  __int64 v46; // rcx
  float v47; // xmm1_4
  float v48; // xmm0_4
  int v49; // xmm1_4
  float v50; // [rsp+20h] [rbp-F8h]
  float v51; // [rsp+20h] [rbp-F8h]
  float v52; // [rsp+24h] [rbp-F4h]
  float v53; // [rsp+28h] [rbp-F0h]
  float v54; // [rsp+2Ch] [rbp-ECh]
  float v55; // [rsp+30h] [rbp-E8h]
  float v56; // [rsp+34h] [rbp-E4h]
  float v57; // [rsp+38h] [rbp-E0h]
  float v58; // [rsp+3Ch] [rbp-DCh]
  float v59; // [rsp+40h] [rbp-D8h]
  float v60[8]; // [rsp+48h] [rbp-D0h] BYREF

  v3 = a2[2];
  v4 = a2[3];
  v7 = *a2 * *a1;
  v8 = a2[1] * a1[4];
  v9 = a2[4] * a1[8];
  v10 = a1[1] * *a2;
  v11 = a1[9] * a2[4];
  v12 = (float)(a1[5] * a2[1]) + v10;
  v13 = a1[2] * *a2;
  v14 = v4 * a1[4];
  v15 = v4 * a1[5];
  v16 = v4 * a1[6];
  v52 = v3 * *a1;
  v53 = v3 * a1[1];
  v56 = a1[6] * a2[1];
  v50 = v3 * a1[2];
  v17 = a2[5];
  v55 = a1[5] * a2[1];
  v54 = a1[10] * a2[4];
  v18 = v15 + v10;
  v57 = v17 * a1[8];
  v58 = v17 * a1[9];
  v59 = v17 * a1[10];
  v19 = v14 + v7;
  *a3 = (float)((float)(v8 + v7) + v9) + a1[12];
  a3[1] = (float)(v12 + v11) + a1[13];
  a3[2] = (float)((float)(v56 + v13) + v54) + a1[14];
  a3[3] = (float)((float)(v14 + v7) + v9) + a1[12];
  a3[4] = (float)((float)(v15 + v10) + v11) + a1[13];
  v20 = v52 + v14;
  v21 = v50 + v16;
  a3[5] = (float)((float)(v16 + v13) + v54) + a1[14];
  v51 = v50 + v56;
  a3[6] = (float)(v20 + v9) + a1[12];
  a3[7] = (float)((float)(v53 + v15) + v11) + a1[13];
  a3[8] = (float)(v21 + v54) + a1[14];
  a3[9] = (float)((float)(v52 + v8) + v9) + a1[12];
  a3[10] = (float)((float)(v53 + v55) + v11) + a1[13];
  a3[11] = (float)(v54 + v51) + a1[14];
  a3[12] = (float)((float)(v8 + v7) + v57) + a1[12];
  a3[13] = (float)(v12 + v58) + a1[13];
  a3[14] = (float)((float)(v56 + v13) + v59) + a1[14];
  a3[15] = (float)(v19 + v57) + a1[12];
  a3[16] = (float)(v18 + v58) + a1[13];
  a3[17] = (float)((float)(v16 + v13) + v59) + a1[14];
  a3[18] = (float)(v20 + v57) + a1[12];
  a3[19] = (float)((float)(v53 + v15) + v58) + a1[13];
  a3[20] = (float)(v21 + v59) + a1[14];
  a3[21] = (float)((float)(v52 + v8) + v57) + a1[12];
  a3[22] = (float)((float)(v53 + v55) + v58) + a1[13];
  a3[23] = (float)(v59 + v51) + a1[14];
  result = (float *)CMILMatrix::Is2DAffine<1>(a1, 0LL);
  if ( !(_BYTE)result )
  {
    v26 = a1[15];
    v27 = a1[3];
    v28 = v27 * a2[2];
    v29 = a1[7] * a2[1];
    v30 = v27 * *a2;
    v31 = a1[7] * a2[3];
    v32 = v31 + v28;
    v33 = v29 + v28;
    v34 = a1[11] * a2[4];
    v35 = v29 + v30;
    v36 = a1[11] * a2[5];
    v37 = v31 + v30;
    v38 = (float)(v35 + v34) + v26;
    v39 = (float)(v37 + v34) + v26;
    v40 = (float)(v32 + v34) + v26;
    v41 = (float)(v33 + v34) + v26;
    v60[0] = v38;
    v42 = (float)(v35 + v36) + v26;
    v60[1] = v39;
    v43 = (float)(v37 + v36) + v26;
    v60[2] = v40;
    v44 = (float)(v32 + v36) + v26;
    v45 = (float)(v33 + v36) + v26;
    v60[3] = v41;
    v60[4] = v42;
    v60[5] = v43;
    v60[6] = v44;
    v60[7] = v45;
    if ( v38 < 0.000081380211
      || v39 < 0.000081380211
      || v40 < 0.000081380211
      || v41 < 0.000081380211
      || v42 < 0.000081380211
      || v43 < 0.000081380211
      || v44 < 0.000081380211
      || v45 < 0.000081380211 )
    {
      if ( v38 >= -0.000081380211
        || v39 >= -0.000081380211
        || v40 >= -0.000081380211
        || v41 >= -0.000081380211
        || v42 >= -0.000081380211
        || v43 >= -0.000081380211
        || v44 >= -0.000081380211
        || v45 >= -0.000081380211 )
      {
        v24[15] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v24[12] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v24[3] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *v24 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v24[21] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[18] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[9] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[6] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[22] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[13] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[10] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[1] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[19] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[16] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[7] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[4] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
        v24[11] = qword_1803487E8;
        v24[8] = qword_1803487E8;
        v24[5] = qword_1803487E8;
        *(_DWORD *)v25 = qword_1803487E8;
        v24[23] = HIDWORD(qword_1803487E8);
        v24[20] = HIDWORD(qword_1803487E8);
        v24[17] = HIDWORD(qword_1803487E8);
        v49 = HIDWORD(qword_1803487E8);
      }
      else
      {
        v24[15] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v24[12] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v24[3] = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *v24 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v24[21] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[18] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[9] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[6] = DWORD2(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[22] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[13] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[10] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[1] = DWORD1(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[19] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[16] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[7] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[4] = HIDWORD(TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
        v24[11] = qword_1803487D0;
        v24[8] = qword_1803487D0;
        v24[5] = qword_1803487D0;
        *(_DWORD *)v25 = qword_1803487D0;
        v24[23] = HIDWORD(qword_1803487D0);
        v24[20] = HIDWORD(qword_1803487D0);
        v24[17] = HIDWORD(qword_1803487D0);
        v49 = HIDWORD(qword_1803487D0);
      }
      v24[14] = v49;
    }
    else
    {
      result = v60;
      v46 = (unsigned int)(v23 + 8);
      do
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*result - 1.0) & _xmm) >= 0.000081380211 )
        {
          v47 = *(v25 - 1) / *result;
          *(v25 - 2) = *(v25 - 2) / *result;
          v48 = *v25 / *result;
          *(v25 - 1) = v47;
          *v25 = v48;
        }
        ++result;
        v25 += 3;
        --v46;
      }
      while ( v46 );
    }
  }
  return result;
}
