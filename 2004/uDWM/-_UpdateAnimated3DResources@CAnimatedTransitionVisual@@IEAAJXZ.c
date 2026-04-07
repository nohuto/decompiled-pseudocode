/*
 * XREFs of ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A88F8
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8290 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x180001CA0 (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180023210 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1800BE3F0 (-Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z.c)
 *     ?D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z @ 0x1800BFCB8 (-D2DMatrixRotationQuaternion@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DQuaternion@@@Z.c)
 *     ?D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z @ 0x1800BFF18 (-D3DXQuaternionRotationYawPitchRoll@@YAPEAUD2DQuaternion@@PEAU1@MMM@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800C005C (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_UpdateAnimated3DResources(CAnimatedTransitionVisual *this)
{
  unsigned int v1; // r8d
  char *v3; // rdi
  float v4; // xmm8_4
  float v5; // xmm10_4
  int v6; // xmm2_4
  unsigned int v7; // eax
  __m128i v8; // xmm0
  int v9; // edx
  float v10; // xmm11_4
  int v11; // ecx
  __m128i v12; // xmm5
  int v13; // eax
  float v14; // xmm5_4
  float v15; // xmm10_4
  float v16; // xmm5_4
  float v17; // xmm9_4
  float v18; // xmm10_4
  int v19; // xmm0_4
  float v20; // xmm11_4
  float v21; // xmm4_4
  float v22; // xmm5_4
  int v23; // ecx
  int v24; // ecx
  float v25; // xmm6_4
  float v26; // xmm7_4
  int v27; // edx
  int v28; // eax
  int v29; // ecx
  float v30; // xmm0_4
  int v31; // edx
  int v32; // edx
  float v33; // xmm6_4
  int v34; // ecx
  int v35; // eax
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm3_4
  const struct D2DMatrix *v39; // rdx
  float v40; // xmm0_4
  const struct _D3DMATRIX *v41; // rdx
  int v42; // eax
  __int64 v43; // r8
  unsigned int v44; // edi
  float v45; // xmm0_4
  int v46; // eax
  float v48; // [rsp+38h] [rbp-D0h] BYREF
  int v49; // [rsp+3Ch] [rbp-CCh]
  int v50; // [rsp+40h] [rbp-C8h]
  int v51; // [rsp+44h] [rbp-C4h]
  int v52; // [rsp+48h] [rbp-C0h]
  int v53; // [rsp+4Ch] [rbp-BCh]
  int v54; // [rsp+50h] [rbp-B8h]
  int v55; // [rsp+54h] [rbp-B4h]
  int v56; // [rsp+58h] [rbp-B0h]
  int v57; // [rsp+5Ch] [rbp-ACh]
  int v58; // [rsp+60h] [rbp-A8h]
  int v59; // [rsp+64h] [rbp-A4h]
  float v60; // [rsp+68h] [rbp-A0h]
  float v61; // [rsp+6Ch] [rbp-9Ch]
  int v62; // [rsp+70h] [rbp-98h]
  int v63; // [rsp+74h] [rbp-94h]
  int v64; // [rsp+78h] [rbp-90h] BYREF
  float v65; // [rsp+80h] [rbp-88h]
  _DWORD v66[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v67[160]; // [rsp+98h] [rbp-70h] BYREF

  v1 = *((_DWORD *)this + 212);
  v3 = (char *)this + 508;
  v4 = 0.0;
  v5 = *((float *)this + 192);
  v6 = LODWORD(v5) ^ _xmm;
  v7 = 0;
  if ( (int)(*((_DWORD *)this + 214) - v1) >= 0 )
    v7 = *((_DWORD *)this + 214) - v1;
  v8 = _mm_cvtsi32_si128(v1);
  v9 = *((_DWORD *)this + 213);
  v10 = *((float *)this + 193);
  v11 = *((_DWORD *)this + 215) - v9;
  v12 = _mm_cvtsi32_si128(v7);
  v13 = 0;
  if ( v11 >= 0 )
    v13 = v11;
  v62 = 0;
  v61 = 0.0;
  v60 = 0.0;
  v59 = 0;
  v57 = 0;
  v56 = 0;
  v55 = 0;
  v54 = 0;
  v52 = 0;
  v51 = 0;
  v50 = 0;
  v49 = 0;
  v14 = _mm_cvtepi32_ps(v12).m128_f32[0];
  v65 = 0.0;
  v15 = v5 * v14;
  v16 = v14 * *((float *)this + 189);
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  v17 = (float)v13 * *((float *)this + 190);
  *(_QWORD *)(v3 + 12) = 0LL;
  v18 = (float)(v15 + _mm_cvtepi32_ps(v8).m128_f32[0]) + *((float *)this + 186);
  *(_QWORD *)(v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 1065353216LL;
  *((_DWORD *)v3 + 15) = 1065353216;
  *((_DWORD *)v3 + 5) = 1065353216;
  *((_DWORD *)v3 + 12) = v6;
  *((_DWORD *)v3 + 13) = LODWORD(v10) ^ _xmm;
  v19 = *((_DWORD *)this + 191);
  v48 = v16;
  v53 = LODWORD(v17);
  v58 = v19;
  v20 = (float)((float)(v10 * (float)v13) + (float)v9) + *((float *)this + 187);
  *(_DWORD *)v3 = 1065353216;
  *((_DWORD *)v3 + 14) = 0;
  v63 = 1065353216;
  D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)&v48);
  v23 = *((_DWORD *)this + 253);
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v24 )
    {
      if ( v24 == 1 )
      {
        v25 = (float)((float)(v21 - v22) * *((float *)this + 192)) + (float)(v22 * *((float *)this + 198));
        v26 = (float)(v17 * *((float *)this + 199)) + (float)((float)(v21 - v17) * *((float *)this + 193));
      }
      else
      {
        v26 = 0.0;
        v25 = 0.0;
      }
      goto LABEL_19;
    }
    v27 = *((_DWORD *)this + 216);
    v28 = 0;
    if ( *((_DWORD *)this + 218) - v27 >= 0 )
      v28 = *((_DWORD *)this + 218) - v27;
    v29 = *((_DWORD *)this + 219);
    v30 = (float)v27;
    v31 = *((_DWORD *)this + 217);
  }
  else
  {
    v32 = *((_DWORD *)this + 212);
    v28 = 0;
    if ( *((_DWORD *)this + 214) - v32 >= 0 )
      v28 = *((_DWORD *)this + 214) - v32;
    v29 = *((_DWORD *)this + 215);
    v30 = (float)v32;
    v31 = *((_DWORD *)this + 213);
  }
  v33 = (float)v28;
  v34 = v29 - v31;
  v35 = 0;
  if ( v34 >= 0 )
    v35 = v34;
  v25 = (float)((float)(v33 * *((float *)this + 198)) + v30)
      - (float)(v18 - (float)((float)((float)(0.5 - *((float *)this + 192)) * v22) + *((float *)this + 192)));
  v26 = (float)((float)((float)v35 * *((float *)this + 199)) + (float)v31)
      - (float)(v20 - (float)((float)((float)(0.5 - *((float *)this + 193)) * v17) + *((float *)this + 193)));
LABEL_19:
  v36 = *((float *)this + 192) - v25;
  v37 = *((float *)this + 193) - v26;
  v58 = 1065353216;
  v53 = 1065353216;
  v48 = 1.0;
  v60 = v36;
  v61 = v37;
  D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)&v48);
  v38 = *((float *)this + 233);
  if ( v38 != 0.0 )
  {
    D3DXQuaternionRotationYawPitchRoll((struct D2DQuaternion *)&v64, 0.0, 0.0, v38 * 0.017453292);
    D2DMatrixRotationQuaternion((struct D2DMatrix *)&v48, (const struct D2DQuaternion *)&v64);
    D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)&v48);
  }
  D3DXQuaternionRotationYawPitchRoll(
    (struct D2DQuaternion *)&v64,
    *((float *)this + 196) * 0.017453292,
    *((float *)this + 195) * 0.017453292,
    *((float *)this + 197) * 0.017453292);
  D2DMatrixRotationQuaternion((struct D2DMatrix *)v67, (const struct D2DQuaternion *)&v64);
  D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)v67);
  v59 = 0;
  v57 = 0;
  v56 = 0;
  v55 = 0;
  v54 = 0;
  v52 = 0;
  v51 = 0;
  v50 = 0;
  v49 = 0;
  v62 = 0;
  v60 = v25 + v18;
  v61 = v26 + v20;
  v63 = 1065353216;
  v58 = 1065353216;
  v53 = 1065353216;
  v48 = 1.0;
  D2DMatrixMultiply((struct D2DMatrix *)v3, v39, (const struct D2DMatrix *)&v48);
  v66[2] = 0;
  v66[0] = 1056964608;
  v66[1] = 1056964608;
  D3DXVec3TransformCoord((struct D2DVector3 *)&v64, (const struct D2DVector3 *)v66, (const struct D2DMatrix *)v3);
  if ( *((_BYTE *)this + 1028) )
    v4 = v65;
  v40 = *((float *)this + 228) + *((float *)this + 188);
  v60 = 0.0;
  v61 = 0.0;
  v62 = COERCE_UNSIGNED_INT(v40 + v4) ^ _xmm;
  D2DMatrixMultiply((struct D2DMatrix *)v3, (const struct D2DMatrix *)v3, (const struct D2DMatrix *)&v48);
  v42 = CMatrixTransform3dProxy::Update(*((CMatrixTransform3dProxy **)this + 36), v41);
  v44 = v42;
  if ( v42 >= 0 )
  {
    v45 = *((float *)this + 184);
    if ( v45 != *((float *)this + 185) )
    {
      v46 = CEffectGroupProxy::Update(
              *((CEffectGroupProxy **)this + 39),
              v45,
              v43,
              *((const struct CTransform3dGroupProxy **)this + 38));
      v44 = v46;
      if ( v46 >= 0 )
        *((_DWORD *)this + 185) = *((_DWORD *)this + 184);
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v46, 0x6CAu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v42, 0x6C5u);
  }
  return v44;
}
