/*
 * XREFs of ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x1800AD180
 * Callers:
 *     <none>
 * Callees:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x18003FB3C (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z @ 0x1800AD330 (-FindExistingGradient@CGradientSource@@IEAA_NPEAVCD3DDevice@@_NAEBVRetrievalParams@1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLinearGradientBrush::GetD2DBrush(
        CLinearGradientBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1Brush **a4)
{
  struct ID2D1Brush *v4; // rbx
  float v5; // xmm0_4
  float v6; // xmm1_4
  struct CD3DDevice *v9; // r15
  int v11; // esi
  bool v12; // zf
  __int64 v13; // rcx
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm6
  __m128 v17; // xmm7
  __int64 v18; // rcx
  int v20; // eax
  __int64 v21; // rcx
  struct ID2D1Brush *v22; // [rsp+30h] [rbp-50h] BYREF
  float v23; // [rsp+38h] [rbp-48h] BYREF
  float v24; // [rsp+3Ch] [rbp-44h]
  __int128 v25; // [rsp+40h] [rbp-40h] BYREF
  int v26; // [rsp+50h] [rbp-30h]
  int v27; // [rsp+54h] [rbp-2Ch]

  v4 = 0LL;
  v5 = a3->right - a3->left;
  v6 = a3->bottom - a3->top;
  v22 = 0LL;
  *(_QWORD *)&v25 = 0LL;
  v9 = (struct CD3DDevice *)*((_QWORD *)a2 + 5);
  v23 = v5;
  v11 = 0;
  v24 = v6;
  v12 = *((_BYTE *)this + 224) == 0;
  *((_QWORD *)&v25 + 1) = &v22;
  if ( CGradientSource::FindExistingGradient(
         (CLinearGradientBrush *)((char *)this + 88),
         v9,
         v12,
         (const struct CGradientSource::RetrievalParams *)&v25)
    || (v20 = CGradientBrush::Generate(this, v9, (const struct CGradientSource::RetrievalParams *)&v25),
        v11 = v20,
        v20 >= 0) )
  {
    v4 = v22;
    v13 = 0LL;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x1EAu);
    v13 = (__int64)v22;
  }
  if ( v13 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v11, 0xD3u);
    if ( v4 )
      (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    v14 = (__m128)*((unsigned int *)this + 58);
    if ( *((_DWORD *)this + 39) == 1 )
    {
      v17 = (__m128)LODWORD(v24);
      v16 = (__m128)LODWORD(v23);
      v15 = (__m128)LODWORD(v24);
      v15.m128_f32[0] = (float)(v24 * *((float *)this + 59)) + a3->top;
      v14.m128_f32[0] = (float)(v14.m128_f32[0] * v23) + a3->left;
      v17.m128_f32[0] = (float)(v24 * *((float *)this + 61)) + a3->top;
      v16.m128_f32[0] = (float)(v23 * *((float *)this + 60)) + a3->left;
    }
    else
    {
      v15 = (__m128)*((unsigned int *)this + 59);
      v16 = (__m128)*((unsigned int *)this + 60);
      v17 = (__m128)*((unsigned int *)this + 61);
    }
    (*(void (__fastcall **)(struct ID2D1Brush *, unsigned __int64))(*(_QWORD *)v4 + 64LL))(
      v4,
      _mm_unpacklo_ps(v14, v15).m128_u64[0]);
    (*(void (__fastcall **)(struct ID2D1Brush *, unsigned __int64))(*(_QWORD *)v4 + 72LL))(
      v4,
      _mm_unpacklo_ps(v16, v17).m128_u64[0]);
    v18 = *((_QWORD *)this + 27);
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64, float *, __int128 *))(*(_QWORD *)v18 + 208LL))(v18, &v23, &v25);
    }
    else
    {
      v26 = 0;
      v27 = 0;
      v25 = *(_OWORD *)&_xmm;
    }
    (*(void (__fastcall **)(struct ID2D1Brush *, __int128 *))(*(_QWORD *)v4 + 40LL))(v4, &v25);
    *a4 = v4;
    return 0;
  }
  return (unsigned int)v11;
}
