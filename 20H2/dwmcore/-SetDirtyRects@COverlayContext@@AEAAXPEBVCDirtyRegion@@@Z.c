/*
 * XREFs of ?SetDirtyRects@COverlayContext@@AEAAXPEBVCDirtyRegion@@@Z @ 0x18009B420
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18009AEB0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180091760 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COverlayContext::SetDirtyRects(COverlayContext *this, const struct CDirtyRegion *a2)
{
  unsigned int *v4; // rax
  __m128i v5; // xmm9
  __m128i v6; // xmm6
  __m128i v7; // xmm7
  __m128i v8; // xmm8
  float v9; // xmm9_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  __int64 v13; // rax
  __int64 v14; // rdi
  const __m128i *v15; // rbx
  const __m128i *v16; // rdi
  __m128i v17; // xmm0
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  CMILMatrix *v21; // rax
  __m128i v22; // [rsp+20h] [rbp-58h] BYREF

  v4 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 168LL))(*(_QWORD *)this);
  v5 = _mm_cvtsi32_si128(*v4);
  v6 = _mm_cvtsi32_si128(v4[1]);
  v7 = _mm_cvtsi32_si128(v4[2]);
  v8 = _mm_cvtsi32_si128(v4[3]);
  *((_DWORD *)this + 2760) = 0;
  LODWORD(v9) = _mm_cvtepi32_ps(v5).m128_u32[0];
  LODWORD(v10) = _mm_cvtepi32_ps(v6).m128_u32[0];
  LODWORD(v11) = _mm_cvtepi32_ps(v7).m128_u32[0];
  LODWORD(v12) = _mm_cvtepi32_ps(v8).m128_u32[0];
  if ( *((_BYTE *)a2 + 4456) )
  {
    v15 = (const __m128i *)((char *)a2 + 4436);
    if ( !v15 )
      goto LABEL_21;
    v14 = 1LL;
  }
  else
  {
    v13 = *((unsigned int *)a2 + 713);
    v14 = v13;
    v15 = (const __m128i *)((char *)a2 + 2692);
    if ( !v15 )
    {
      v15 = 0LL;
      if ( v13 )
      {
LABEL_21:
        ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
        __debugbreak();
      }
    }
  }
  v16 = &v15[v14];
  while ( v15 != v16 )
  {
    v17 = _mm_loadu_si128(v15);
    v22 = v17;
    v22.m128i_i32[0] = v17.m128i_i32[0];
    if ( v9 > *(float *)v17.m128i_i32 )
    {
      *(float *)v17.m128i_i32 = v9;
      *(float *)v22.m128i_i32 = v9;
    }
    v18 = *(float *)&v22.m128i_i32[1];
    if ( v10 > *(float *)&v22.m128i_i32[1] )
    {
      *(float *)&v22.m128i_i32[1] = v10;
      v18 = v10;
    }
    v19 = *(float *)&v22.m128i_i32[2];
    if ( *(float *)&v22.m128i_i32[2] > v11 )
    {
      *(float *)&v22.m128i_i32[2] = v11;
      v19 = v11;
    }
    v20 = *(float *)&v22.m128i_i32[3];
    if ( *(float *)&v22.m128i_i32[3] > v12 )
    {
      *(float *)&v22.m128i_i32[3] = v12;
      v20 = v12;
    }
    if ( v19 > *(float *)v17.m128i_i32 && v20 > v18 )
    {
      v21 = (CMILMatrix *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      CMILMatrix::Transform2DBoundsHelper<0>(
        v21,
        (__int64)&v22,
        (float *)this + 4 * *((unsigned int *)this + 2760) + 2761);
      ++*((_DWORD *)this + 2760);
    }
    ++v15;
  }
}
