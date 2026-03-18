/*
 * XREFs of ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180010290
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180080610 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008D6F0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CalcEntireInputBoundsFromInputResources(__int64 a1, __int128 *a2, __int64 a3)
{
  int v3; // eax
  int v5; // xmm6_4
  int v6; // xmm7_4
  int v7; // xmm8_4
  unsigned int v8; // esi
  int v9; // xmm9_4
  unsigned int v10; // ecx
  int v11; // eax
  __int128 v12; // xmm0
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // rbx
  int v23; // r12d
  __int64 v24; // rcx
  char v25; // al
  __int64 *v26; // r14
  bool v27; // zf
  __int64 v28; // rax
  unsigned int v29; // ecx
  __int128 v30; // xmm0
  int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  __m128i v35; // xmm0
  int v36; // eax
  unsigned int v37; // r8d
  unsigned int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  _QWORD v43[3]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+48h] [rbp-C0h]
  __int64 v45; // [rsp+50h] [rbp-B8h]
  __int64 v46; // [rsp+58h] [rbp-B0h]
  __m256i v47; // [rsp+60h] [rbp-A8h] BYREF
  int v48; // [rsp+80h] [rbp-88h]
  __int64 v49; // [rsp+88h] [rbp-80h] BYREF
  int v50; // [rsp+90h] [rbp-78h]
  int v51; // [rsp+94h] [rbp-74h]
  _BYTE v52[20]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v53; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD v54[4]; // [rsp+C0h] [rbp-48h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v5 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = DWORD1(TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v7 = DWORD2(TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v8 = 0;
  v9 = HIDWORD(TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v49 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v10 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  v50 = DWORD2(TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  *(_DWORD *)(a1 + 32) = v10;
  LOBYTE(v10) = (v3 ^ (v3 ^ (v3 + 2)) & 6) & 6;
  v51 = v9;
  v46 = a3;
  v47.m256i_i64[0] = (__int64)a2;
  v44 = 0LL;
  LODWORD(v45) = 0;
  *(_OWORD *)&v43[1] = 0LL;
  if ( (_BYTE)v10 != 2 )
  {
    v15 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147467259, 0x209u, 0LL);
    goto LABEL_12;
  }
  v11 = *(_DWORD *)(a1 + 128);
  if ( !v11 )
  {
    v12 = *a2;
    *(_DWORD *)v52 = 0;
    *(_OWORD *)&v52[4] = v12;
    v13 = DynArrayImpl<0>::AddMultipleAndSet(&v43[1], 20LL, 1LL, v52);
    v15 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC0u, 0LL);
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v15, 0x210u, 0LL);
      goto LABEL_12;
    }
    v8 = v45;
LABEL_7:
    if ( v8 )
    {
      v16 = v43[1] + 4LL;
      do
      {
        TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v49, v16);
        v16 = v17 + 20;
      }
      while ( v18 != 1 );
      v9 = v51;
      v7 = v50;
      v6 = HIDWORD(v49);
      v5 = v49;
    }
    goto LABEL_11;
  }
  v20 = *(int *)(a1 + 128);
  v15 = 0;
  if ( v11 > 0 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v21);
      v23 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4 * v21);
      v53 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v24 = *(_QWORD *)(v22 + 24);
      if ( v24 )
      {
        v25 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 56LL))(v24, 59LL);
        v26 = *(__int64 **)(v22 + 24);
        v27 = v25 == 0;
        v28 = *v26;
        if ( v27 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v28 + 56))(v26, 40LL) )
          {
            v15 = -2147467263;
            MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, -2147467263, 0x23Du, 0LL);
            goto LABEL_12;
          }
          v34 = *(_DWORD *)(v22 + 12) - *(_DWORD *)(v22 + 4);
          v54[0] = 0;
          v54[1] = 0;
          v35 = _mm_cvtsi32_si128(v34);
          v36 = *(_DWORD *)(v22 + 16) - *(_DWORD *)(v22 + 8);
          v54[2] = _mm_cvtepi32_ps(v35).m128_u32[0];
          *(float *)&v54[3] = (float)v36;
          CMILMatrix::Transform2DBoundsHelper<1>(v46, v54, &v53);
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v28 + 264))(v26, v47.m256i_i64[0], v46);
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v15, 0x222u, 0LL);
            goto LABEL_12;
          }
          memset(&v47.m256i_u64[1], 0, 24);
          v48 = 0;
          v30 = *(_OWORD *)(v26 + 17);
          *(_DWORD *)v52 = v23;
          *(_OWORD *)&v52[4] = v30;
          v31 = DynArrayImpl<0>::AddMultipleAndSet(&v47.m256i_u64[1], 20LL, 1LL, v52);
          v15 = v31;
          if ( v31 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xC0u, 0LL);
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v15, 0x226u, 0LL);
            DynArrayImpl<0>::~DynArrayImpl<0>(&v47.m256i_u64[1]);
            goto LABEL_12;
          }
          (*(void (__fastcall **)(__int64 *, unsigned __int64 *, __int128 *))(*v26 + 232))(v26, &v47.m256i_u64[1], &v53);
          DynArrayImpl<0>::~DynArrayImpl<0>(&v47.m256i_u64[1]);
        }
      }
      else
      {
        v53 = *a2;
      }
      v37 = v8 + 1;
      *(_DWORD *)v52 = v23;
      *(_OWORD *)&v52[4] = v53;
      if ( v8 + 1 >= v8 )
      {
        if ( v37 <= HIDWORD(v44) )
        {
          v39 = v43[1];
          v15 = 0;
          v40 = v8++;
          LODWORD(v45) = v37;
          v41 = 5 * v40;
          *(_OWORD *)(v43[1] + 4 * v41) = *(_OWORD *)v52;
          *(_DWORD *)(v39 + 4 * v41 + 16) = *(_DWORD *)&v52[16];
          goto LABEL_36;
        }
        v42 = DynArrayImpl<0>::AddMultipleAndSet(&v43[1], 20LL, 1LL, v52);
        v15 = v42;
        if ( v42 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v42, 0xC0u, 0LL);
        v8 = v45;
      }
      else
      {
        v15 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v15, 0x245u, 0LL);
        goto LABEL_12;
      }
LABEL_36:
      if ( ++v21 >= v20 )
        goto LABEL_7;
      a2 = (__int128 *)v47.m256i_i64[0];
    }
  }
LABEL_11:
  *(_DWORD *)(a1 + 136) = v5;
  *(_DWORD *)(a1 + 140) = v6;
  *(_DWORD *)(a1 + 144) = v7;
  *(_DWORD *)(a1 + 148) = v9;
LABEL_12:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>(&v43[1]);
  return (unsigned int)v15;
}
