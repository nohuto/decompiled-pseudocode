/*
 * XREFs of ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000E26C
 * Callers:
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000E26C (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18009FAF0 (-GetBoundsWithEffects@CVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 * Callees:
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000E26C (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800656F0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::GetBounds(__int64 a1, __int128 *a2, __int64 a3)
{
  int v3; // eax
  unsigned int v6; // r8d
  unsigned int v8; // ecx
  int v9; // eax
  __int128 v10; // xmm0
  int v11; // eax
  unsigned __int64 v12; // rcx
  int v13; // ebx
  int v15; // r9d
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rbx
  int v19; // r12d
  char v20; // al
  __int64 v21; // rcx
  int Bounds; // eax
  __m128i v23; // xmm1
  unsigned __int64 v24; // xmm0_8
  unsigned int v25; // r9d
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-60h]
  __int128 v31; // [rsp+30h] [rbp-50h] BYREF
  int v32; // [rsp+40h] [rbp-40h]
  unsigned int v33; // [rsp+44h] [rbp-3Ch]
  unsigned int v34; // [rsp+48h] [rbp-38h]
  __int128 v35; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v36[20]; // [rsp+60h] [rbp-20h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v32 = 0;
  v33 = 0;
  v6 = 0;
  v34 = 0;
  v8 = v3 ^ ((unsigned __int8)v3 ^ (unsigned __int8)(v3 + 2)) & 6;
  *(_DWORD *)(a1 + 32) = v8;
  LOBYTE(v8) = (v3 ^ (v3 ^ (v3 + 2)) & 6) & 6;
  v31 = 0LL;
  if ( (_BYTE)v8 != 2 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147467259, 0xD4u, 0LL);
    goto LABEL_7;
  }
  v9 = *(_DWORD *)(a1 + 128);
  if ( v9 )
  {
    v13 = 0;
    v16 = *(int *)(a1 + 128);
    if ( v9 <= 0 )
    {
LABEL_6:
      (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 232LL))(a1, &v31, a3);
      goto LABEL_7;
    }
    v17 = 0LL;
    while ( 1 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 120) + 8 * v17);
      v19 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 4 * v17);
      v35 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v12 = *(_QWORD *)(v18 + 24);
      if ( v12 )
      {
        v20 = (*(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v12 + 56LL))(v12, 59LL);
        v21 = *(_QWORD *)(v18 + 24);
        if ( v20 )
        {
          Bounds = CFilterEffect::GetBounds(v21, a2, &v35);
          v13 = Bounds;
          if ( Bounds < 0 )
          {
            v15 = Bounds;
            v30 = 238;
            goto LABEL_11;
          }
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 56LL))(v21, 40LL) )
          {
            v13 = -2147467263;
            v30 = 256;
            goto LABEL_10;
          }
          v23 = *(__m128i *)(v18 + 4);
          *(_QWORD *)&v35 = 0LL;
          v24 = _mm_srli_si128(v23, 8).m128i_u64[0];
          v12 = HIDWORD(v23.m128i_i64[0]);
          *((float *)&v35 + 3) = (float)(HIDWORD(v24) - v23.m128i_i32[1]);
          *((float *)&v35 + 2) = (float)((int)v24 - v23.m128i_i32[0]);
        }
        v6 = v34;
      }
      else
      {
        v35 = *a2;
      }
      v25 = v6 + 1;
      *(_DWORD *)v36 = v19;
      *(_OWORD *)&v36[4] = v35;
      if ( v6 + 1 >= v6 )
      {
        if ( v25 <= v33 )
        {
          v26 = v31;
          v13 = 0;
          v27 = v6++;
          v28 = 5 * v27;
          *(_OWORD *)(v31 + 4 * v28) = *(_OWORD *)v36;
          *(_DWORD *)(v26 + 4 * v28 + 16) = *(_DWORD *)&v36[16];
          v34 = v25;
          goto LABEL_30;
        }
        v29 = DynArrayImpl<0>::AddMultipleAndSet(&v31, 20LL, 1LL, v36);
        v13 = v29;
        if ( v29 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v29, 0xC0u, 0LL);
      }
      else
      {
        v13 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      if ( v13 < 0 )
      {
        v30 = 265;
        goto LABEL_10;
      }
      v6 = v34;
LABEL_30:
      if ( ++v17 >= v16 )
        goto LABEL_6;
    }
  }
  v10 = *a2;
  *(_DWORD *)v36 = 0;
  *(_OWORD *)&v36[4] = v10;
  v11 = DynArrayImpl<0>::AddMultipleAndSet(&v31, 20LL, 1LL, v36);
  v13 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC0u, 0LL);
  if ( v13 >= 0 )
    goto LABEL_6;
  v30 = 218;
LABEL_10:
  v15 = v13;
LABEL_11:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v15, v30, 0LL);
LABEL_7:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<0>::~DynArrayImpl<0>(&v31);
  return (unsigned int)v13;
}
