/*
 * XREFs of ??0CBrushRenderingEffect@@QEAA@PEAVCRenderingTechnique@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@V?$span@_N$0?0@3@@Z @ 0x18004759C
 * Callers:
 *     ?CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180047820 (-CreateRenderingEffect@CBrushRenderingEffectFactory@@UEAAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@.c)
 * Callees:
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x180049A60 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x18004C460 (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18004C5B8 (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1800DE290 (--0SamplerMode@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
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
  __int128 v21; // [rsp+20h] [rbp-48h]
  int v22; // [rsp+70h] [rbp+8h]
  int v23; // [rsp+74h] [rbp+Ch]

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
        if ( v14 >= *a4 )
          goto LABEL_23;
        *(_BYTE *)(v14 + a1 + 356) = *(_BYTE *)(v14 + a4[1]);
        if ( !*(_BYTE *)(v16 + 168) || *(_BYTE *)(v16 + 52) )
          v17 = 0LL;
        else
          v17 = *(_OWORD *)(v16 + 144);
        *(_OWORD *)v15 = v17;
        CDrawListBitmap::GetSize((CDrawListBitmap *)(v16 + 56));
        v18 = 0LL;
        v19 = 0LL;
        v18.m128_f32[0] = (float)v22;
        v19.m128_f32[0] = (float)v23;
        *(_QWORD *)(v15 + 16) = _mm_unpacklo_ps(v18, v19).m128_u64[0];
        *(float *)(v15 + 24) = 1.0 / (float)v22;
        *(float *)(v15 + 28) = 1.0 / (float)v23;
      }
      else
      {
        HIDWORD(v21) = *(_DWORD *)(v16 + 68);
        *(float *)&v21 = *((float *)&v21 + 3) * *(float *)(v16 + 56);
        *((float *)&v21 + 1) = *((float *)&v21 + 3) * *(float *)(v16 + 60);
        *((float *)&v21 + 2) = *((float *)&v21 + 3) * *(float *)(v16 + 64);
        *(_OWORD *)v15 = v21;
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
