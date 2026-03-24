/*
 * XREFs of ?GetD2DBrush@CRadialGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x1801E80C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CB404 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x1801E6EE8 (-GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGr.c)
 */

__int64 __fastcall CRadialGradientBrush::GetD2DBrush(
        CRadialGradientBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_RECT_F *a3,
        struct ID2D1Brush **a4)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  __m128 v8; // xmm6
  __m128 v10; // xmm7
  __m128 v12; // xmm10
  __m128 v13; // xmm11
  int CurrentD2DRadialGradientBrush; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  struct ID2D1Brush *v17; // rbx
  __int64 v18; // rcx
  struct ID2D1RadialGradientBrush *v20; // [rsp+38h] [rbp-59h] BYREF
  float v21; // [rsp+40h] [rbp-51h] BYREF
  float v22; // [rsp+44h] [rbp-4Dh]
  __int128 v23; // [rsp+48h] [rbp-49h] BYREF
  int v24; // [rsp+58h] [rbp-39h]
  int v25; // [rsp+5Ch] [rbp-35h]

  v6 = a3->right - a3->left;
  v7 = a3->bottom - a3->top;
  v8 = (__m128)*((unsigned int *)this + 48);
  v10 = (__m128)*((unsigned int *)this + 49);
  v12 = (__m128)*((unsigned int *)this + 52);
  v13 = (__m128)*((unsigned int *)this + 53);
  v20 = 0LL;
  v21 = v6;
  v22 = v7;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  CurrentD2DRadialGradientBrush = CGradientBrush::GetCurrentD2DRadialGradientBrush(this, a2, &v20);
  v16 = CurrentD2DRadialGradientBrush;
  if ( CurrentD2DRadialGradientBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, CurrentD2DRadialGradientBrush, 0xDDu, 0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 27) == 1 )
    {
      v8.m128_f32[0] = (float)(v8.m128_f32[0] * v21) + a3->left;
      v10.m128_f32[0] = (float)(v10.m128_f32[0] * v22) + a3->top;
      v12.m128_f32[0] = v12.m128_f32[0] * v21;
      v13.m128_f32[0] = v13.m128_f32[0] * v22;
    }
    v17 = v20;
    (*(void (__fastcall **)(struct ID2D1RadialGradientBrush *, unsigned __int64))(*(_QWORD *)v20 + 64LL))(
      v20,
      _mm_unpacklo_ps(v8, v10).m128_u64[0]);
    (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v17 + 80LL))(v17);
    (*(void (__fastcall **)(struct ID2D1Brush *))(*(_QWORD *)v17 + 88LL))(v17);
    (*(void (__fastcall **)(struct ID2D1Brush *, unsigned __int64))(*(_QWORD *)v17 + 72LL))(
      v17,
      _mm_unpacklo_ps(v12, v13).m128_u64[0]);
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
    v16 = 0;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v20);
  return v16;
}
