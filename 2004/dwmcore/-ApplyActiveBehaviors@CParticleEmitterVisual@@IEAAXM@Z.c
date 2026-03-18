/*
 * XREFs of ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801E0114
 * Callers:
 *     ?UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z @ 0x1801E2D98 (-UpdateParticleSystem@CParticleEmitterVisual@@IEAAJAEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?NormalizeFrames@?$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAAXXZ @ 0x1801DD304 (-NormalizeFrames@-$LinearKeyframeAnimation@Ufloat3@Numerics@Foundation@Windows@@@Particles@@QEAA.c)
 *     ?Update@BulkAnimator@Particles@@SAXPEBVISingleInputAnimator@2@MUParticleStreamInfo@2@1I@Z @ 0x1801DD3E8 (-Update@BulkAnimator@Particles@@SAXPEBVISingleInputAnimator@2@MUParticleStreamInfo@2@1I@Z.c)
 *     ?Update@BulkAnimator@Particles@@SAXPEBVIThreeInputAnimator@2@UParticleStreamInfo@2@111I@Z @ 0x1801DD4F4 (-Update@BulkAnimator@Particles@@SAXPEBVIThreeInputAnimator@2@UParticleStreamInfo@2@111I@Z.c)
 *     ?Update@BulkAnimator@Particles@@SAXPEBVITwoInputAnimator@2@UParticleStreamInfo@2@11I@Z @ 0x1801DD664 (-Update@BulkAnimator@Particles@@SAXPEBVITwoInputAnimator@2@UParticleStreamInfo@2@11I@Z.c)
 *     ?InputToInfo@ParticleCollection@CParticleEmitterVisual@@QEAA?AUParticleStreamInfo@Particles@@W4ParticleInputSource@4Composition@UI@Windows@@@Z @ 0x1801E1F0C (-InputToInfo@ParticleCollection@CParticleEmitterVisual@@QEAA-AUParticleStreamInfo@Particles@@W4P.c)
 */

void __fastcall CParticleEmitterVisual::ApplyActiveBehaviors(CParticleEmitterVisual *this, float a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // r9
  char v5; // r14
  char v6; // si
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r11
  unsigned int i; // r9d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __m128 v21; // xmm3
  __m128 v22; // xmm2
  __m128 v23; // xmm1
  __m128 v24; // xmm3
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  _QWORD *v27; // r9
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 *v53; // rsi
  __int64 *v54; // rbx
  __int64 v55; // rcx
  unsigned int v56; // [rsp+30h] [rbp-31h]
  __int128 v57; // [rsp+38h] [rbp-29h] BYREF
  __int128 v58; // [rsp+48h] [rbp-19h] BYREF
  __int128 v59; // [rsp+58h] [rbp-9h] BYREF
  __int128 v60; // [rsp+68h] [rbp+7h] BYREF
  __int64 v61[4]; // [rsp+78h] [rbp+17h] BYREF

  v3 = (_QWORD *)*((_QWORD *)this + 94);
  v5 = 0;
  v6 = 0;
  if ( v3 )
  {
    v7 = v3[9];
    if ( v7 && (*(_QWORD *)(v7 + 120) - *(_QWORD *)(v7 + 112)) / 24LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 784, &v60, *(unsigned int *)(v7 + 72));
      *(_QWORD *)&v57 = *((_QWORD *)this + 98);
      *(_QWORD *)&v58 = *((_QWORD *)this + 128);
      v8 = *((_QWORD *)this + 94);
      *((_QWORD *)&v58 + 1) = 0x300000000LL;
      v9 = *(_QWORD *)(v8 + 72);
      *((_QWORD *)&v57 + 1) = 0x300000000LL;
      v59 = v57;
      Particles::BulkAnimator::Update(
        (v9 + 104) & -(__int64)(v9 != 0),
        (__int64)&v60,
        (__int64 *)&v58,
        (__int64 *)&v59,
        *((_DWORD *)this + 310));
      v3 = (_QWORD *)*((_QWORD *)this + 94);
    }
    v10 = v3[11];
    if ( v10 && (__int64)(*(_QWORD *)(v10 + 120) - *(_QWORD *)(v10 + 112)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 784, &v60, *(unsigned int *)(v10 + 72));
      *(_QWORD *)&v58 = *((_QWORD *)this + 110);
      *(_QWORD *)&v57 = *((_QWORD *)this + 134);
      v11 = *((_QWORD *)this + 94);
      *((_QWORD *)&v58 + 1) = 0x100000000LL;
      v12 = *(_QWORD *)(v11 + 88);
      v59 = v58;
      *((_QWORD *)&v57 + 1) = 0x100000000LL;
      v58 = v57;
      Particles::BulkAnimator::Update(
        (v12 + 104) & -(__int64)(v12 != 0),
        (__int64)&v60,
        (__int64 *)&v58,
        (__int64 *)&v59,
        *((_DWORD *)this + 310));
      v3 = (_QWORD *)*((_QWORD *)this + 94);
      v6 = 1;
    }
    v13 = v3[10];
    if ( v13 && (*(_QWORD *)(v13 + 120) - *(_QWORD *)(v13 + 112)) / 24LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 784, v61, *(unsigned int *)(v13 + 72));
      v14 = (*(_QWORD *)(*((_QWORD *)this + 94) + 80LL) + 104LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)this + 94) + 80LL) != 0LL);
      *(_QWORD *)&v60 = &Particles::DirectionAnimator::`vftable';
      *((_QWORD *)&v60 + 1) = v14;
      Particles::LinearKeyframeAnimation<Windows::Foundation::Numerics::float3>::NormalizeFrames(v14);
      v15 = *((_QWORD *)this + 104);
      *(_QWORD *)&v57 = *((_QWORD *)this + 110);
      *(_QWORD *)&v59 = *((_QWORD *)this + 137);
      v56 = *((_DWORD *)this + 310);
      *(_QWORD *)&v58 = v15;
      *((_QWORD *)&v58 + 1) = 0x300000000LL;
      *((_QWORD *)&v57 + 1) = 0x100000000LL;
      *((_QWORD *)&v59 + 1) = 0x300000000LL;
      Particles::BulkAnimator::Update(
        (__int64)&v60,
        (__int64)v61,
        (__int64 *)&v59,
        (__int64 *)&v57,
        (__int64 *)&v58,
        v56);
      v5 = 1;
    }
    if ( v6 )
    {
      if ( !v5 )
      {
        for ( i = 0; i < *((_DWORD *)this + 310); *(_DWORD *)(v17 + 4 * v20 + 8) = v24.m128_i32[0] )
        {
          v17 = *((_QWORD *)this + 104);
          v18 = *((_QWORD *)this + 110);
          v19 = i++;
          v20 = 3 * v19;
          v21 = _mm_movelh_ps(
                  (__m128)*(unsigned __int64 *)(v17 + 12 * v19),
                  (__m128)*(unsigned int *)(v17 + 12 * v19 + 8));
          v22 = _mm_mul_ps(v21, v21);
          v23 = _mm_shuffle_ps(v22, v22, 102);
          v22.m128_f32[0] = (float)(v22.m128_f32[0] + v23.m128_f32[0]) + _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
          v24 = _mm_div_ps(v21, _mm_sqrt_ps(_mm_shuffle_ps(v22, v22, 0)));
          v25 = v24;
          v25.m128_f32[0] = v24.m128_f32[0] * *(float *)(v18 + 4 * v19);
          v26 = _mm_shuffle_ps(v24, v24, 85);
          v26.m128_f32[0] = v26.m128_f32[0] * *(float *)(v18 + 4 * v19);
          v24.m128_f32[0] = _mm_shuffle_ps(v24, v24, 170).m128_f32[0] * *(float *)(v18 + 4 * v19);
          *(_QWORD *)(v17 + 4 * v20) = _mm_unpacklo_ps(v25, v26).m128_u64[0];
          DWORD2(v57) = v24.m128_i32[0];
        }
      }
    }
    v27 = (_QWORD *)*((_QWORD *)this + 94);
    v28 = v27[13];
    if ( v28 && (*(_QWORD *)(v28 + 120) - *(_QWORD *)(v28 + 112)) / 28LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 784, v61, *(unsigned int *)(v28 + 72));
      *(_QWORD *)&v59 = *((_QWORD *)this + 101);
      *(_QWORD *)&v58 = *((_QWORD *)this + 131);
      v29 = *((_QWORD *)this + 94);
      *((_QWORD *)&v59 + 1) = 0x400000000LL;
      v30 = *(_QWORD *)(v29 + 104);
      v60 = v59;
      *((_QWORD *)&v58 + 1) = 0x400000000LL;
      v59 = v58;
      Particles::BulkAnimator::Update(
        (v30 + 104) & -(__int64)(v30 != 0),
        (__int64)v61,
        (__int64 *)&v59,
        (__int64 *)&v60,
        *((_DWORD *)this + 310));
      v27 = (_QWORD *)*((_QWORD *)this + 94);
    }
    v31 = v27[12];
    if ( v31 && (__int64)(*(_QWORD *)(v31 + 120) - *(_QWORD *)(v31 + 112)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 784, v61, *(unsigned int *)(v31 + 72));
      *(_QWORD *)&v59 = *((_QWORD *)this + 107);
      *(_QWORD *)&v58 = *((_QWORD *)this + 143);
      v32 = *((_QWORD *)this + 94);
      *((_QWORD *)&v59 + 1) = 0x100000000LL;
      v33 = *(_QWORD *)(v32 + 96);
      v60 = v59;
      *((_QWORD *)&v58 + 1) = 0x100000000LL;
      v59 = v58;
      Particles::BulkAnimator::Update(
        (v33 + 104) & -(__int64)(v33 != 0),
        (__int64)v61,
        (__int64 *)&v59,
        (__int64 *)&v60,
        *((_DWORD *)this + 310));
      v27 = (_QWORD *)*((_QWORD *)this + 94);
    }
    v34 = v27[14];
    if ( v34 && (*(_QWORD *)(v34 + 120) - *(_QWORD *)(v34 + 112)) / 24LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 784, v61, *(unsigned int *)(v34 + 72));
      *(_QWORD *)&v59 = *((_QWORD *)this + 113);
      *(_QWORD *)&v58 = *((_QWORD *)this + 146);
      v35 = *((_QWORD *)this + 94);
      *((_QWORD *)&v59 + 1) = 0x400000000LL;
      v36 = *(_QWORD *)(v35 + 112);
      v60 = v59;
      *((_QWORD *)&v58 + 1) = 0x400000000LL;
      v59 = v58;
      Particles::BulkAnimator::Update(
        (v36 + 104) & -(__int64)(v36 != 0),
        (__int64)v61,
        (__int64 *)&v59,
        (__int64 *)&v60,
        *((_DWORD *)this + 310));
      v27 = (_QWORD *)*((_QWORD *)this + 94);
    }
    v37 = v27[15];
    if ( v37 && (__int64)(*(_QWORD *)(v37 + 120) - *(_QWORD *)(v37 + 112)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 784, v61, *(unsigned int *)(v37 + 72));
      *(_QWORD *)&v59 = *((_QWORD *)this + 113);
      *(_QWORD *)&v58 = *((_QWORD *)this + 146);
      v38 = *((_QWORD *)this + 94);
      *((_QWORD *)&v59 + 1) = 0x400000003LL;
      v39 = *(_QWORD *)(v38 + 120);
      v60 = v59;
      *((_QWORD *)&v58 + 1) = 0x400000003LL;
      v59 = v58;
      Particles::BulkAnimator::Update(
        (v39 + 104) & -(__int64)(v39 != 0),
        (__int64)v61,
        (__int64 *)&v59,
        (__int64 *)&v60,
        *((_DWORD *)this + 310));
      v27 = (_QWORD *)*((_QWORD *)this + 94);
    }
    v40 = v27[17];
    if ( v40 && (*(_QWORD *)(v40 + 120) - *(_QWORD *)(v40 + 112)) / 20LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 784, v61, *(unsigned int *)(v40 + 72));
      *(_QWORD *)&v59 = *((_QWORD *)this + 119);
      *(_QWORD *)&v58 = *((_QWORD *)this + 152);
      v41 = *((_QWORD *)this + 94);
      *((_QWORD *)&v59 + 1) = 0x200000000LL;
      v42 = *(_QWORD *)(v41 + 136);
      v60 = v59;
      *((_QWORD *)&v58 + 1) = 0x200000000LL;
      v59 = v58;
      Particles::BulkAnimator::Update(
        (v42 + 104) & -(__int64)(v42 != 0),
        (__int64)v61,
        (__int64 *)&v59,
        (__int64 *)&v60,
        *((_DWORD *)this + 310));
      v27 = (_QWORD *)*((_QWORD *)this + 94);
    }
    v43 = v27[18];
    if ( v43 && (*(_QWORD *)(v43 + 120) - *(_QWORD *)(v43 + 112)) / 20LL )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 784, v61, *(unsigned int *)(v43 + 72));
      *(_QWORD *)&v59 = *((_QWORD *)this + 116);
      *(_QWORD *)&v58 = *((_QWORD *)this + 149);
      v44 = *((_QWORD *)this + 94);
      *((_QWORD *)&v59 + 1) = 0x200000000LL;
      v45 = *(_QWORD *)(v44 + 144);
      v60 = v59;
      *((_QWORD *)&v58 + 1) = 0x200000000LL;
      v59 = v58;
      Particles::BulkAnimator::Update(
        (v45 + 104) & -(__int64)(v45 != 0),
        (__int64)v61,
        (__int64 *)&v59,
        (__int64 *)&v60,
        *((_DWORD *)this + 310));
      v27 = (_QWORD *)*((_QWORD *)this + 94);
    }
    v2 = v27[19];
    if ( v2 && (__int64)(*(_QWORD *)(v2 + 120) - *(_QWORD *)(v2 + 112)) >> 4 )
    {
      CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 784, v61, *(unsigned int *)(v2 + 72));
      *(_QWORD *)&v59 = *((_QWORD *)this + 122);
      *(_QWORD *)&v58 = *((_QWORD *)this + 125);
      v46 = *((_QWORD *)this + 94);
      *((_QWORD *)&v59 + 1) = 0x100000000LL;
      v47 = *(_QWORD *)(v46 + 152);
      v60 = v59;
      *((_QWORD *)&v58 + 1) = 0x100000000LL;
      v59 = v58;
      Particles::BulkAnimator::Update(
        (v47 + 104) & -(__int64)(v47 != 0),
        (__int64)v61,
        (__int64 *)&v59,
        (__int64 *)&v60,
        *((_DWORD *)this + 310));
      v27 = (_QWORD *)*((_QWORD *)this + 94);
    }
    v48 = v27[16];
    if ( v48 )
    {
      v2 = (*(_QWORD *)(v48 + 120) - *(_QWORD *)(v48 + 112)) / 24LL;
      if ( v2 )
      {
        CParticleEmitterVisual::ParticleCollection::InputToInfo((char *)this + 784, v61, *(unsigned int *)(v48 + 72));
        v49 = *((_QWORD *)this + 94);
        *((_QWORD *)&v59 + 1) = 0x300000000LL;
        v50 = *(_QWORD *)(v49 + 128);
        *(_QWORD *)&v60 = &Particles::ForceAnimator::`vftable';
        v51 = v50 + 104;
        v52 = -v50;
        *((_QWORD *)&v60 + 1) = v51 & -(__int64)(v52 != 0);
        *(_QWORD *)&v59 = *((_QWORD *)this + 104);
        Particles::BulkAnimator::Update((__int64)&v60, v52, (__int64)v61, (__int64 *)&v59, *((_DWORD *)this + 310));
      }
    }
  }
  v53 = (__int64 *)*((_QWORD *)this + 96);
  v54 = (__int64 *)*((_QWORD *)this + 95);
  if ( v54 != v53 )
  {
    *((_QWORD *)&v59 + 1) = 0x300000000LL;
    *((_QWORD *)&v58 + 1) = 0x300000000LL;
    do
    {
      v55 = *v54;
      *(_QWORD *)&v59 = *((_QWORD *)this + 104);
      *(_QWORD *)&v58 = *((_QWORD *)this + 98);
      v60 = v58;
      *(_OWORD *)v61 = v59;
      Particles::BulkAnimator::Update(
        (v55 + 80) & -(__int64)(v55 != 0),
        v2,
        (__int64)&v60,
        v61,
        *((_DWORD *)this + 310));
      ++v54;
    }
    while ( v54 != v53 );
  }
}
