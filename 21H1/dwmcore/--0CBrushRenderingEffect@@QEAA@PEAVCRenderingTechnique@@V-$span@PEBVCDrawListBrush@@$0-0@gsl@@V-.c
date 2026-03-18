/*
 * XREFs of ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x18006DBD8
 * Callers:
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180034A20 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 * Callees:
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180046338 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x18006E7E0 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x18006E940 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1800DCE30 (--0SamplerMode@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushRenderingEffect::CBrushRenderingEffect(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 v7; // rsi
  __int64 v8; // r14
  CDrawListBitmap *v9; // rbp
  __int64 v10; // r15
  SamplerMode *v11; // rbp
  _QWORD *v12; // rcx
  int v13; // r14d
  unsigned __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int128 v17; // xmm0
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  float v20; // xmm1_4
  __int128 v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 *v24; // [rsp+88h] [rbp+20h]

  v24 = a4;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CBrushRenderingEffect::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = 4LL;
  v8 = 4LL;
  v9 = (CDrawListBitmap *)(a1 + 24);
  do
  {
    CDrawListBitmap::CDrawListBitmap(v9);
    v9 = (CDrawListBitmap *)((char *)v9 + 48);
    --v8;
  }
  while ( v8 );
  v10 = a1 + 216;
  v11 = (SamplerMode *)(a1 + 216);
  do
  {
    SamplerMode::SamplerMode(v11);
    v11 = (SamplerMode *)((char *)v11 + 3);
    --v7;
  }
  while ( v7 );
  v12 = *(_QWORD **)(a1 + 16);
  if ( v12 != a2 )
  {
    if ( a2 )
    {
      (**(void (__fastcall ***)(_QWORD))*a2)(*a2);
      v12 = *(_QWORD **)(a1 + 16);
    }
    *(_QWORD *)(a1 + 16) = a2;
    if ( v12 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 8LL))(*v12);
  }
  v13 = 0;
  if ( *a3 > 0 )
  {
    v14 = 0LL;
    v15 = a1 + 228;
    do
    {
      if ( v14 >= *a3 )
      {
LABEL_23:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
      v16 = *(_QWORD *)(a3[1] + 8 * v14);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 8LL))(v16, 2LL) )
      {
        CDrawListBitmap::operator=(a1 + 48LL * v13 + 24, v16 + 56);
        *(_WORD *)v10 = *(_WORD *)(v16 + 104);
        *(_BYTE *)(v10 + 2) = *(_BYTE *)(v16 + 106);
        if ( v14 >= *v24 )
          goto LABEL_23;
        *(_BYTE *)(v14 + a1 + 356) = *(_BYTE *)(v14 + v24[1]);
        if ( !*(_BYTE *)(v16 + 168) || *(_BYTE *)(v16 + 52) )
          v17 = 0LL;
        else
          v17 = *(_OWORD *)(v16 + 144);
        *(_OWORD *)v15 = v17;
        CDrawListBitmap::GetSize((CDrawListBitmap *)(v16 + 56), &v23);
        v18 = 0LL;
        v19 = 0LL;
        v18.m128_f32[0] = (float)(int)v23;
        v19.m128_f32[0] = (float)SHIDWORD(v23);
        v20 = 1.0 / (float)(int)v23;
        *(_QWORD *)(v15 + 16) = _mm_unpacklo_ps(v18, v19).m128_u64[0];
        *(float *)(v15 + 24) = v20;
        *(float *)(v15 + 28) = 1.0 / v19.m128_f32[0];
      }
      else
      {
        HIDWORD(v22) = *(_DWORD *)(v16 + 68);
        *(float *)&v22 = *((float *)&v22 + 3) * *(float *)(v16 + 56);
        *((float *)&v22 + 1) = *((float *)&v22 + 3) * *(float *)(v16 + 60);
        *((float *)&v22 + 2) = *((float *)&v22 + 3) * *(float *)(v16 + 64);
        *(_OWORD *)v15 = v22;
      }
      ++v13;
      ++v14;
      v10 += 3LL;
      v15 += 32LL;
    }
    while ( v13 < *a3 );
  }
  return a1;
}
