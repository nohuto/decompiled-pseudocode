/*
 * XREFs of ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x18000AD5C
 * Callers:
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A2C90 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800D10DC (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

float *__fastcall CMILMatrix::Transform3DRectToPerspective(float *a1, float *a2, float *a3)
{
  float v3; // xmm9_4
  float *v4; // rdi
  float v5; // xmm8_4
  float v9; // xmm2_4
  float v10; // xmm15_4
  float v11; // xmm13_4
  float v12; // xmm4_4
  float v13; // xmm14_4
  float v14; // xmm11_4
  float v15; // xmm10_4
  float v16; // xmm1_4
  float v17; // xmm3_4
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm6_4
  float v21; // xmm7_4
  float v22; // xmm4_4
  float v23; // xmm1_4
  float *result; // rax
  float v25; // xmm3_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm7_4
  float v29; // xmm0_4
  float v30; // xmm8_4
  float v31; // xmm5_4
  float v32; // xmm6_4
  float v33; // xmm1_4
  float v34; // xmm7_4
  float v35; // xmm4_4
  float v36; // xmm8_4
  float v37; // xmm12_4
  float v38; // xmm9_4
  float v39; // xmm10_4
  float v40; // xmm11_4
  float v41; // xmm7_4
  float v42; // xmm8_4
  float v43; // xmm5_4
  float v44; // xmm6_4
  __int64 v45; // rcx
  float v46; // xmm1_4
  float v47; // xmm0_4
  int v48; // xmm1_4
  float v49; // [rsp+20h] [rbp-108h]
  float v50; // [rsp+20h] [rbp-108h]
  float v51; // [rsp+24h] [rbp-104h]
  float v52; // [rsp+28h] [rbp-100h]
  float v53; // [rsp+2Ch] [rbp-FCh]
  float v54; // [rsp+30h] [rbp-F8h]
  float v55; // [rsp+34h] [rbp-F4h]
  float v56; // [rsp+38h] [rbp-F0h]
  float v57; // [rsp+3Ch] [rbp-ECh]
  float v58; // [rsp+40h] [rbp-E8h]
  float v59[8]; // [rsp+48h] [rbp-E0h] BYREF

  v3 = a2[2];
  v4 = a3 + 2;
  v5 = a2[3];
  v9 = *a2 * *a1;
  v10 = a2[1] * a1[4];
  v11 = a2[4] * a1[8];
  v12 = a1[1] * *a2;
  v13 = a1[9] * a2[4];
  v14 = (float)(a1[5] * a2[1]) + v12;
  v15 = a1[2] * *a2;
  v16 = v5 * a1[4];
  v17 = v5 * a1[5];
  v18 = v5 * a1[6];
  v51 = v3 * *a1;
  v52 = v3 * a1[1];
  v55 = a1[6] * a2[1];
  v49 = v3 * a1[2];
  v19 = a2[5];
  v54 = a1[5] * a2[1];
  v53 = a1[10] * a2[4];
  v20 = v17 + v12;
  v56 = v19 * a1[8];
  v57 = v19 * a1[9];
  v58 = v19 * a1[10];
  v21 = v16 + v9;
  *a3 = (float)((float)(v10 + v9) + v11) + a1[12];
  a3[1] = (float)(v14 + v13) + a1[13];
  a3[2] = (float)((float)(v55 + v15) + v53) + a1[14];
  a3[3] = (float)((float)(v16 + v9) + v11) + a1[12];
  a3[4] = (float)((float)(v17 + v12) + v13) + a1[13];
  v22 = v51 + v16;
  v23 = v49 + v18;
  a3[5] = (float)((float)(v18 + v15) + v53) + a1[14];
  v50 = v49 + v55;
  a3[6] = (float)(v22 + v11) + a1[12];
  a3[7] = (float)((float)(v52 + v17) + v13) + a1[13];
  a3[8] = (float)(v23 + v53) + a1[14];
  a3[9] = (float)((float)(v51 + v10) + v11) + a1[12];
  a3[10] = (float)((float)(v52 + v54) + v13) + a1[13];
  a3[11] = (float)(v53 + v50) + a1[14];
  a3[12] = (float)((float)(v10 + v9) + v56) + a1[12];
  a3[13] = (float)(v14 + v57) + a1[13];
  a3[14] = (float)((float)(v55 + v15) + v58) + a1[14];
  a3[15] = (float)(v21 + v56) + a1[12];
  a3[16] = (float)(v20 + v57) + a1[13];
  a3[17] = (float)((float)(v18 + v15) + v58) + a1[14];
  a3[18] = (float)(v22 + v56) + a1[12];
  a3[19] = (float)((float)(v52 + v17) + v57) + a1[13];
  a3[20] = (float)(v23 + v58) + a1[14];
  a3[21] = (float)((float)(v51 + v10) + v56) + a1[12];
  a3[22] = (float)((float)(v52 + v54) + v57) + a1[13];
  a3[23] = (float)(v58 + v50) + a1[14];
  result = (float *)CMILMatrix::IsAffine<1>(a1, 0LL);
  if ( !(_BYTE)result )
  {
    v25 = a1[15];
    v26 = a1[3];
    v27 = v26 * a2[2];
    v28 = a1[7] * a2[1];
    v29 = v26 * *a2;
    v30 = a1[7] * a2[3];
    v31 = v30 + v27;
    v32 = v28 + v27;
    v33 = a1[11] * a2[4];
    v34 = v28 + v29;
    v35 = a1[11] * a2[5];
    v36 = v30 + v29;
    v37 = (float)(v34 + v33) + v25;
    v38 = (float)(v36 + v33) + v25;
    v39 = (float)(v31 + v33) + v25;
    v40 = (float)(v32 + v33) + v25;
    v59[0] = v37;
    v41 = (float)(v34 + v35) + v25;
    v59[1] = v38;
    v42 = (float)(v36 + v35) + v25;
    v59[2] = v39;
    v43 = (float)(v31 + v35) + v25;
    v44 = (float)(v32 + v35) + v25;
    v59[3] = v40;
    v59[4] = v41;
    v59[5] = v42;
    v59[6] = v43;
    v59[7] = v44;
    if ( v37 < 0.000081380211
      || v38 < 0.000081380211
      || v39 < 0.000081380211
      || v40 < 0.000081380211
      || v41 < 0.000081380211
      || v42 < 0.000081380211
      || v43 < 0.000081380211
      || v44 < 0.000081380211 )
    {
      if ( v37 >= -0.000081380211
        || v38 >= -0.000081380211
        || v39 >= -0.000081380211
        || v40 >= -0.000081380211
        || v41 >= -0.000081380211
        || v42 >= -0.000081380211
        || v43 >= -0.000081380211
        || v44 >= -0.000081380211 )
      {
        *((_DWORD *)a3 + 15) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *((_DWORD *)a3 + 12) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *((_DWORD *)a3 + 3) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_DWORD *)a3 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        a3[21] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 2);
        a3[18] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 2);
        a3[9] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                + 2);
        a3[6] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                + 2);
        a3[22] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 1);
        a3[13] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 1);
        a3[10] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 1);
        a3[1] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                + 1);
        a3[19] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 3);
        a3[16] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                 + 3);
        a3[7] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                + 3);
        a3[4] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                + 3);
        *((_DWORD *)a3 + 11) = qword_1803D26E8;
        *((_DWORD *)a3 + 8) = qword_1803D26E8;
        *((_DWORD *)a3 + 5) = qword_1803D26E8;
        *(_DWORD *)v4 = qword_1803D26E8;
        a3[23] = *((float *)&qword_1803D26E8 + 1);
        a3[20] = *((float *)&qword_1803D26E8 + 1);
        a3[17] = *((float *)&qword_1803D26E8 + 1);
        v48 = HIDWORD(qword_1803D26E8);
      }
      else
      {
        *((_DWORD *)a3 + 15) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *((_DWORD *)a3 + 12) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *((_DWORD *)a3 + 3) = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        *(_DWORD *)a3 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        a3[21] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 2);
        a3[18] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 2);
        a3[9] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                + 2);
        a3[6] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                + 2);
        a3[22] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 1);
        a3[13] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 1);
        a3[10] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 1);
        a3[1] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                + 1);
        a3[19] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 3);
        a3[16] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                 + 3);
        a3[7] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                + 3);
        a3[4] = *((float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty
                + 3);
        *((_DWORD *)a3 + 11) = qword_1803D26D0;
        *((_DWORD *)a3 + 8) = qword_1803D26D0;
        *((_DWORD *)a3 + 5) = qword_1803D26D0;
        *(_DWORD *)v4 = qword_1803D26D0;
        a3[23] = *((float *)&qword_1803D26D0 + 1);
        a3[20] = *((float *)&qword_1803D26D0 + 1);
        a3[17] = *((float *)&qword_1803D26D0 + 1);
        v48 = HIDWORD(qword_1803D26D0);
      }
      *((_DWORD *)a3 + 14) = v48;
    }
    else
    {
      result = v59;
      v45 = 8LL;
      do
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*result - 1.0) & _xmm) >= 0.000081380211 )
        {
          v46 = *(v4 - 1) / *result;
          *(v4 - 2) = *(v4 - 2) / *result;
          v47 = *v4 / *result;
          *(v4 - 1) = v46;
          *v4 = v47;
        }
        ++result;
        v4 += 3;
        --v45;
      }
      while ( v45 );
    }
  }
  return result;
}
