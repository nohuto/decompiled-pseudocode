/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180203DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE2E0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B5DF4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18020521C (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive(
        _DWORD *a1,
        __int64 a2,
        float *a3,
        __int64 a4,
        float *a5,
        float *a6)
{
  int v6; // eax
  __int128 v9; // xmm0
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r9
  unsigned int v24; // eax
  __m128i v25; // xmm0
  int v26; // eax
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  unsigned int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // esi
  __int64 v37; // r9
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  float v41; // xmm3_4
  float v42; // xmm0_4
  float v43; // xmm1_4
  float v44; // xmm5_4
  float v45; // xmm4_4
  float v46; // xmm1_4
  __int64 v48; // rcx
  unsigned int v49; // [rsp+20h] [rbp-B9h]
  int v51; // [rsp+48h] [rbp-91h]
  __int128 v52; // [rsp+50h] [rbp-89h] BYREF
  int v53; // [rsp+60h] [rbp-79h]
  unsigned int v54; // [rsp+64h] [rbp-75h]
  unsigned int v55; // [rsp+68h] [rbp-71h]
  __int64 v56; // [rsp+70h] [rbp-69h]
  __int128 v57; // [rsp+78h] [rbp-61h] BYREF
  float v58; // [rsp+88h] [rbp-51h] BYREF
  float v59; // [rsp+8Ch] [rbp-4Dh]
  float v60; // [rsp+90h] [rbp-49h]
  float v61; // [rsp+94h] [rbp-45h]
  __int128 v62; // [rsp+98h] [rbp-41h] BYREF
  __int128 v63; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE v64[20]; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v65; // [rsp+D0h] [rbp-9h] BYREF

  v6 = a1[8];
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v10 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6u;
  v52 = 0LL;
  v9 = *(_OWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  a1[8] = v10;
  LOBYTE(v10) = (v6 ^ (v6 ^ (v6 + 2)) & 6) & 6;
  v65 = 0LL;
  v63 = v9;
  v62 = 0LL;
  if ( (_BYTE)v10 != 2 )
  {
    v49 = 406;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_DWORD *, __int64, float *, _DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 256LL))(
    a1,
    a2,
    a3,
    a1 + 36,
    &v62,
    &v65);
  v12 = (int)a1[34];
  if ( !(_DWORD)v12 )
  {
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v62);
    v11 = 0;
    *(_OWORD *)a6 = v65;
    goto LABEL_47;
  }
  v11 = 0;
  v56 = (int)a1[34];
  v57 = 0LL;
  if ( v12 <= 0 )
  {
LABEL_35:
    (*(void (__fastcall **)(_DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 216LL))(a1, &v52, &v63);
    CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v63, a6, v37);
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a6) )
    {
      v38 = *a3;
      v39 = *a6;
      if ( *a3 > *a6 )
      {
        *a6 = v38;
        v39 = v38;
      }
      v40 = a3[1];
      v41 = a6[1];
      if ( v40 > v41 )
      {
        a6[1] = v40;
        v41 = v40;
      }
      v42 = a6[2];
      v43 = a3[2];
      v44 = v42;
      if ( v42 > v43 )
      {
        a6[2] = v43;
        v42 = v43;
        v44 = v43;
      }
      v45 = a3[3];
      v46 = a6[3];
      if ( v46 > v45 )
      {
        a6[3] = v45;
        v42 = v44;
        v46 = v45;
      }
      if ( v42 <= v39 || v46 <= v41 )
      {
        a6[3] = 0.0;
        a6[2] = 0.0;
        a6[1] = 0.0;
        *a6 = 0.0;
      }
    }
    goto LABEL_47;
  }
  v13 = 0LL;
  while ( 1 )
  {
    v14 = *((_QWORD *)a1 + 16);
    v57 = v62;
    v15 = *(_QWORD *)(v14 + 8 * v13);
    v16 = *(_QWORD *)(v15 + 24);
    v51 = *(_DWORD *)(*((_QWORD *)a1 + 15) + 4 * v13);
    if ( v16 )
    {
      v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 56LL))(v16, 59LL);
      v18 = *(_QWORD *)(v15 + 24);
      if ( v17 )
      {
        *(_OWORD *)v64 = v57;
        v19 = a2;
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, float *, __int128 *))(*(_QWORD *)v18 + 240LL))(
                v18,
                a2,
                v64,
                v18 + 144,
                a5,
                &v57);
        v11 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x1C0u);
          goto LABEL_47;
        }
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 56LL))(v18, 40LL) )
        {
          v11 = -2147467263;
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, -2147467263, 0x1D5u);
          goto LABEL_47;
        }
        v24 = *(_DWORD *)(v15 + 12) - *(_DWORD *)(v15 + 4);
        v58 = 0.0;
        v59 = 0.0;
        v25 = _mm_cvtsi32_si128(v24);
        v26 = *(_DWORD *)(v15 + 16) - *(_DWORD *)(v15 + 8);
        v19 = a2;
        LODWORD(v60) = _mm_cvtepi32_ps(v25).m128_u32[0];
        v61 = (float)v26;
        CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)&v58, &v58, v23);
        v27 = *(float *)&v57;
        if ( v58 > *(float *)&v57 )
        {
          *(float *)&v57 = v58;
          v27 = v58;
        }
        v28 = *((float *)&v57 + 1);
        if ( v59 > *((float *)&v57 + 1) )
        {
          *((float *)&v57 + 1) = v59;
          v28 = v59;
        }
        v29 = *((float *)&v57 + 2);
        if ( *((float *)&v57 + 2) > v60 )
        {
          *((float *)&v57 + 2) = v60;
          v29 = v60;
        }
        v30 = *((float *)&v57 + 3);
        if ( *((float *)&v57 + 3) > v61 )
        {
          *((float *)&v57 + 3) = v61;
          v30 = v61;
        }
        if ( v29 <= v27 || v30 <= v28 )
          v57 = 0uLL;
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v57);
      }
    }
    else
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, (float *)&v57);
      v19 = a2;
    }
    if ( (float)(*((float *)&v57 + 2) - *(float *)&v57) <= 0.0000099999997
      || (float)(*((float *)&v57 + 3) - *((float *)&v57 + 1)) <= 0.0000099999997 )
    {
      goto LABEL_34;
    }
    if ( !(unsigned __int8)CFilterEffect::InvertTransformToCalc2DBounds(v19, &v57, &v57) )
      break;
    *(_DWORD *)v64 = v51;
    *(_OWORD *)&v64[4] = v57;
    v31 = v55 + 1;
    if ( v55 + 1 < v55 )
    {
      v11 = -2147024362;
      v36 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, -2147024362, 0xB5u);
      goto LABEL_51;
    }
    if ( v31 > v54 )
    {
      v34 = DynArrayImpl<0>::AddMultipleAndSet((unsigned __int64)&v52, 0x14u, 1, v64);
      v36 = v34;
      v11 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0LL, v34, 0xC0u);
LABEL_51:
        MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0LL, v36, 0x1E7u);
        goto LABEL_47;
      }
    }
    else
    {
      v32 = v52;
      v33 = 5LL * v55;
      v11 = 0;
      *(_OWORD *)(v52 + 4 * v33) = *(_OWORD *)v64;
      *(_DWORD *)(v32 + 4 * v33 + 16) = *(_DWORD *)&v64[16];
      v55 = v31;
    }
LABEL_34:
    if ( ++v13 >= v56 )
      goto LABEL_35;
  }
  v49 = 484;
LABEL_3:
  v11 = -2147467259;
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, -2147467259, v49);
LABEL_47:
  a1[8] ^= (a1[8] ^ (2 * (a1[8] >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v52);
  return v11;
}
