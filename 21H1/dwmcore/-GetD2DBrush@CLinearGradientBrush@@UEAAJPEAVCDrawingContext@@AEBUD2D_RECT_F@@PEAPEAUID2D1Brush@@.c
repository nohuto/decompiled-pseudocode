/*
 * XREFs of ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x1801D6920
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x1801EA8A4 (-GetCurrentD2DLinearGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1LinearGr.c)
 */

__int64 __fastcall CLinearGradientBrush::GetD2DBrush(
        CLinearGradientBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1Brush **a4)
{
  float v5; // xmm0_4
  float v6; // xmm1_4
  int CurrentD2DLinearGradientBrush; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __m128 v15; // xmm7
  __m128 v16; // xmm6
  struct ID2D1Brush *v17; // rbx
  __int64 v18; // rcx
  struct ID2D1LinearGradientBrush *v20; // [rsp+30h] [rbp-50h] BYREF
  float v21; // [rsp+38h] [rbp-48h] BYREF
  float v22; // [rsp+3Ch] [rbp-44h]
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  int v24; // [rsp+50h] [rbp-30h]
  int v25; // [rsp+54h] [rbp-2Ch]

  v5 = a3->right - a3->left;
  v6 = a3->bottom - a3->top;
  v20 = 0LL;
  v21 = v5;
  v22 = v6;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  CurrentD2DLinearGradientBrush = CGradientBrush::GetCurrentD2DLinearGradientBrush(this, a2, &v20);
  v12 = CurrentD2DLinearGradientBrush;
  if ( CurrentD2DLinearGradientBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, CurrentD2DLinearGradientBrush, 0xD9u, 0LL);
  }
  else
  {
    v13 = (__m128)*((unsigned int *)this + 46);
    if ( *((_DWORD *)this + 27) == 1 )
    {
      v15 = (__m128)LODWORD(v22);
      v16 = (__m128)LODWORD(v21);
      v14 = (__m128)LODWORD(v22);
      v14.m128_f32[0] = (float)(v22 * *((float *)this + 47)) + a3->top;
      v13.m128_f32[0] = (float)(v13.m128_f32[0] * v21) + a3->left;
      v15.m128_f32[0] = (float)(v22 * *((float *)this + 49)) + a3->top;
      v16.m128_f32[0] = (float)(v21 * *((float *)this + 48)) + a3->left;
    }
    else
    {
      v14 = (__m128)*((unsigned int *)this + 47);
      v16 = (__m128)*((unsigned int *)this + 48);
      v15 = (__m128)*((unsigned int *)this + 49);
    }
    v17 = v20;
    (*(void (__fastcall **)(struct ID2D1LinearGradientBrush *, unsigned __int64))(*(_QWORD *)v20 + 64LL))(
      v20,
      _mm_unpacklo_ps(v13, v14).m128_u64[0]);
    (*(void (__fastcall **)(struct ID2D1Brush *, unsigned __int64))(*(_QWORD *)v17 + 72LL))(
      v17,
      _mm_unpacklo_ps(v16, v15).m128_u64[0]);
    v18 = *((_QWORD *)this + 21);
    if ( v18 )
    {
      (*(void (__fastcall **)(__int64, float *, __int128 *))(*(_QWORD *)v18 + 224LL))(v18, &v21, &v23);
    }
    else
    {
      v24 = 0;
      v25 = 0;
      v23 = _xmm;
    }
    (*(void (__fastcall **)(struct ID2D1Brush *, __int128 *))(*(_QWORD *)v17 + 40LL))(v17, &v23);
    v20 = 0LL;
    *a4 = v17;
    v12 = 0;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  return v12;
}
