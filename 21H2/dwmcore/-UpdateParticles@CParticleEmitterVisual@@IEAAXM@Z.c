/*
 * XREFs of ?UpdateParticles@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801E1B34
 * Callers:
 *     ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x1801E19F8 (-UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800F47AB (sqrtf_0.c)
 */

void __fastcall CParticleEmitterVisual::UpdateParticles(CParticleEmitterVisual *this, float a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  float v9; // xmm7_4
  float v10; // xmm8_4
  unsigned int v11; // r15d
  float v12; // xmm9_4
  unsigned __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rcx
  float v16; // xmm2_4
  float v17; // xmm1_4
  __int64 v18; // rax
  float v19; // xmm3_4
  float v20; // xmm2_4
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm1_4
  __int64 v32; // rbp
  __int64 v33; // rax
  float v34; // xmm1_4
  float v35; // xmm2_4
  __int64 v36; // rbp

  v3 = *((_QWORD *)this + 122);
  v4 = 0;
  v6 = (*((_QWORD *)this + 123) - v3) >> 2;
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 125);
    do
    {
      --v6;
      *(float *)(v3 + 4 * v6) = (float)(a2 / *(float *)(v7 + 4 * v6)) + *(float *)(v3 + 4 * v6);
    }
    while ( v6 );
  }
  v8 = *((_QWORD *)this + 104);
  v9 = a2 * *((float *)this + 170);
  v10 = a2 * *((float *)this + 171);
  v11 = 0;
  v12 = a2 * *((float *)this + 172);
  v13 = (*((_QWORD *)this + 105) - v8) / 12;
  if ( v13 )
  {
    v14 = 0LL;
    do
    {
      v15 = 3 * v14;
      v16 = v10 + *(float *)(v8 + 12 * v14 + 4);
      v17 = v12 + *(float *)(v8 + 12 * v14 + 8);
      *(float *)(v8 + 4 * v15) = v9 + *(float *)(v8 + 12 * v14);
      *(float *)(v8 + 4 * v15 + 4) = v16;
      *(float *)(v8 + 4 * v15 + 8) = v17;
      v18 = *((_QWORD *)this + 104);
      v19 = (float)(1.0 - (float)(a2 * *((float *)this + 166))) * *(float *)(v18 + 12 * v14 + 4);
      v20 = (float)(1.0 - (float)(a2 * *((float *)this + 167))) * *(float *)(v18 + 12 * v14 + 8);
      *(float *)(v18 + 4 * v15) = (float)(1.0 - (float)(a2 * *((float *)this + 165))) * *(float *)(v18 + 12 * v14);
      *(float *)(v18 + 4 * v15 + 4) = v19;
      *(float *)(v18 + 4 * v15 + 8) = v20;
      v8 = *((_QWORD *)this + 104);
      ++v11;
      *(float *)(*((_QWORD *)this + 110) + 4 * v14) = sqrtf_0(
                                                        (float)((float)(*(float *)(v8 + 12 * v14)
                                                                      * *(float *)(v8 + 12 * v14))
                                                              + (float)(*(float *)(v8 + 12 * v14 + 4)
                                                                      * *(float *)(v8 + 12 * v14 + 4)))
                                                      + (float)(*(float *)(v8 + 12 * v14 + 8)
                                                              * *(float *)(v8 + 12 * v14 + 8)));
      v14 = v11;
    }
    while ( v11 < v13 );
  }
  v21 = *((_QWORD *)this + 105) - v8;
  v22 = 0LL;
  v23 = (unsigned __int128)(v21 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v24 = v21 / 12;
  if ( v21 / 12 )
  {
    v25 = 0LL;
    do
    {
      v21 = *((_QWORD *)this + 98);
      v23 = 3 * v25;
      v26 = *((_QWORD *)this + 104);
      v22 = (unsigned int)(v22 + 1);
      v27 = a2 * *(float *)(v26 + 4 * v23);
      v28 = a2 * *(float *)(v26 + 4 * v23 + 4);
      v29 = a2 * *(float *)(v26 + 4 * v23 + 8);
      v25 = (unsigned int)v22;
      v30 = v28 + *(float *)(v21 + 4 * v23 + 4);
      v31 = v29 + *(float *)(v21 + 4 * v23 + 8);
      *(float *)(v21 + 4 * v23) = v27 + *(float *)(v21 + 4 * v23);
      *(float *)(v21 + 4 * v23 + 4) = v30;
      *(float *)(v21 + 4 * v23 + 8) = v31;
    }
    while ( (unsigned int)v22 < v24 );
  }
  if ( v24 )
  {
    v32 = 0LL;
    do
    {
      v33 = *((_QWORD *)this + 107);
      v34 = (float)(a2 * *((float *)this + 169)) + *(float *)(v33 + 4 * v32);
      *(float *)(v33 + 4 * v32) = v34;
      v35 = (float)(1.0 - (float)(a2 * *((float *)this + 168))) * v34;
      *(float *)(v33 + 4 * v32) = v35;
      v36 = 2 * v32;
      *(float *)(*((_QWORD *)this + 101) + 8 * v36 + 12) = (float)(v35 * a2)
                                                         + *(float *)(*((_QWORD *)this + 101) + 8 * v36 + 12);
      ++v4;
      *(float *)(*((_QWORD *)this + 101) + 8 * v36 + 12) = _o_remainderf(v21, v23, v22);
      v32 = v4;
    }
    while ( v4 < v24 );
  }
}
