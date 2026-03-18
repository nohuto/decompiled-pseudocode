/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18000F810
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180070A30 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180077110 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800B2740 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B5304 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C1524 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x1801B22D8 (-InvertTransformToCalc2DBounds@CFilterEffect@@SA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@UM.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // eax
  __int64 v8; // r12
  __int128 v10; // xmm0
  unsigned int v11; // ecx
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // edi
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rcx
  char v20; // al
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
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
  float v34; // xmm0_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  int v39; // eax
  unsigned int v40; // [rsp+20h] [rbp-B9h]
  int v41; // [rsp+40h] [rbp-99h]
  __int128 v43; // [rsp+50h] [rbp-89h] BYREF
  __int64 v44; // [rsp+60h] [rbp-79h]
  unsigned int v45; // [rsp+68h] [rbp-71h]
  __int64 v46; // [rsp+70h] [rbp-69h]
  __int128 v47; // [rsp+78h] [rbp-61h] BYREF
  float v48; // [rsp+88h] [rbp-51h] BYREF
  float v49; // [rsp+8Ch] [rbp-4Dh]
  float v50; // [rsp+90h] [rbp-49h]
  float v51; // [rsp+94h] [rbp-45h]
  __int128 v52; // [rsp+98h] [rbp-41h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE v54[20]; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v55; // [rsp+D0h] [rbp-9h] BYREF

  v6 = a1[8];
  v8 = 0LL;
  v43 = 0LL;
  v10 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v44 = 0LL;
  v11 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(v6 + 2)) & 6;
  v45 = 0;
  a1[8] = v11;
  LOBYTE(v11) = (v6 ^ (v6 ^ (v6 + 2)) & 6) & 6;
  v12 = a2;
  v53 = v10;
  v52 = 0LL;
  v55 = 0LL;
  if ( (_BYTE)v11 == 2 )
  {
    (*(void (__fastcall **)(_DWORD *, __int64, __int64, _DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 272LL))(
      a1,
      a2,
      a3,
      a1 + 34,
      &v52,
      &v55);
    v13 = (int)a1[32];
    if ( !(_DWORD)v13 )
    {
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, &v52);
      v14 = 0;
      *(_OWORD *)a6 = v55;
      goto LABEL_4;
    }
    v46 = (int)a1[32];
    v14 = 0;
    v47 = 0LL;
    if ( v13 > 0 )
    {
      do
      {
        v17 = *((_QWORD *)a1 + 15);
        v47 = v52;
        v18 = *(_QWORD *)(v17 + 8 * v8);
        v19 = *(_QWORD *)(v18 + 24);
        v41 = *(_DWORD *)(*((_QWORD *)a1 + 14) + 4 * v8);
        if ( v19 )
        {
          v20 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 56LL))(v19, 59LL);
          v21 = *(_QWORD *)(v18 + 24);
          if ( v20 )
          {
            v12 = a2;
            *(_OWORD *)v54 = v47;
            v22 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, __int64, __int128 *))(*(_QWORD *)v21 + 256LL))(
                    v21,
                    a2,
                    v54,
                    v21 + 136,
                    a5,
                    &v47);
            v14 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1C0u, 0LL);
              goto LABEL_4;
            }
          }
          else
          {
            if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 56LL))(v21, 40LL) )
            {
              v14 = -2147467263;
              v40 = 469;
LABEL_9:
              v16 = v14;
              goto LABEL_10;
            }
            v24 = *(_DWORD *)(v18 + 12) - *(_DWORD *)(v18 + 4);
            v48 = 0.0;
            v49 = 0.0;
            v25 = _mm_cvtsi32_si128(v24);
            v26 = *(_DWORD *)(v18 + 16) - *(_DWORD *)(v18 + 8);
            v12 = a2;
            LODWORD(v50) = _mm_cvtepi32_ps(v25).m128_u32[0];
            v51 = (float)v26;
            CMILMatrix::Transform2DBoundsHelper<1>(a2, &v48, &v48);
            v27 = *(float *)&v47;
            if ( v48 > *(float *)&v47 )
            {
              *(float *)&v47 = v48;
              v27 = v48;
            }
            v28 = *((float *)&v47 + 1);
            if ( v49 > *((float *)&v47 + 1) )
            {
              *((float *)&v47 + 1) = v49;
              v28 = v49;
            }
            v29 = *((float *)&v47 + 2);
            if ( *((float *)&v47 + 2) > v50 )
            {
              *((float *)&v47 + 2) = v50;
              v29 = v50;
            }
            v30 = *((float *)&v47 + 3);
            if ( *((float *)&v47 + 3) > v51 )
            {
              *((float *)&v47 + 3) = v51;
              v30 = v51;
            }
            if ( v29 <= v27 || v30 <= v28 )
              v47 = 0uLL;
            TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, &v47);
          }
        }
        else
        {
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, &v47);
          v12 = a2;
        }
        if ( (float)(*((float *)&v47 + 2) - *(float *)&v47) > 0.0000099999997
          && (float)(*((float *)&v47 + 3) - *((float *)&v47 + 1)) > 0.0000099999997 )
        {
          if ( !(unsigned __int8)CFilterEffect::InvertTransformToCalc2DBounds(v12, &v47, &v47) )
          {
            v40 = 484;
            goto LABEL_7;
          }
          *(_DWORD *)v54 = v41;
          *(_OWORD *)&v54[4] = v47;
          v31 = v45 + 1;
          if ( v45 + 1 >= v45 )
          {
            if ( v31 <= HIDWORD(v44) )
            {
              v32 = v43;
              v33 = 5LL * v45;
              v14 = 0;
              *(_OWORD *)(v43 + 4 * v33) = *(_OWORD *)v54;
              *(_DWORD *)(v32 + 4 * v33 + 16) = *(_DWORD *)&v54[16];
              v45 = v31;
              goto LABEL_38;
            }
            v39 = DynArrayImpl<0>::AddMultipleAndSet(&v43, 20LL, 1LL, v54);
            v14 = v39;
            if ( v39 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v39, 0xC0u, 0LL);
          }
          else
          {
            v14 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
          if ( v14 < 0 )
          {
            v40 = 487;
            goto LABEL_9;
          }
        }
LABEL_38:
        ++v8;
      }
      while ( v8 < v46 );
    }
    (*(void (__fastcall **)(_DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 232LL))(a1, &v43, &v53);
    CMILMatrix::Transform2DBoundsHelper<1>(v12, &v53, a6);
    if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a6) )
    {
      if ( *(float *)a3 > *(float *)a6 )
        *(_DWORD *)a6 = *(_DWORD *)a3;
      v34 = *(float *)(a3 + 4);
      if ( v34 > *(float *)(a6 + 4) )
        *(float *)(a6 + 4) = v34;
      v35 = *(float *)(a3 + 8);
      v36 = *(float *)(a6 + 8);
      if ( v36 > v35 )
      {
        *(float *)(a6 + 8) = v35;
        v36 = v35;
      }
      v37 = *(float *)(a3 + 12);
      v38 = *(float *)(a6 + 12);
      if ( v38 > v37 )
      {
        *(float *)(a6 + 12) = v37;
        v38 = v37;
        v36 = *(float *)(a6 + 8);
      }
      if ( v36 <= *(float *)a6 || v38 <= *(float *)(a6 + 4) )
      {
        *(_QWORD *)(a6 + 8) = 0LL;
        *(_QWORD *)a6 = 0LL;
      }
    }
  }
  else
  {
    v40 = 406;
LABEL_7:
    v16 = -2147467259;
    v14 = -2147467259;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v16, v40, 0LL);
  }
LABEL_4:
  a1[8] ^= (a1[8] ^ (2 * (a1[8] >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>(&v43);
  return (unsigned int)v14;
}
