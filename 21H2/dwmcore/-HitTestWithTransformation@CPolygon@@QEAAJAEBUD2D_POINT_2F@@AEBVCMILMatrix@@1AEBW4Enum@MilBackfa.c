/*
 * XREFs of ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801FA760
 * Callers:
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x18018FA4C (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800572F0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18009AF00 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801FA6A8 (-GetD2DGeometry@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z @ 0x1801FAA4C (-IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1801FACE0 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 */

__int64 __fastcall CPolygon::HitTestWithTransformation(
        CPolygon *this,
        const struct D2D_POINT_2F *a2,
        const struct CMILMatrix *a3,
        __m128 *a4,
        const enum MilBackfaceVisibility::Enum *a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __m128 v9; // xmm1
  int v10; // eax
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm3
  __m128 v15; // xmm0
  __m128 v16; // xmm2
  __m128 v17; // xmm6
  __m128 v18; // xmm1
  __m128 v19; // xmm6
  bool IsPointInPolygon; // al
  __int64 v21; // rdx
  CGeometry *v22; // rcx
  int ShapeData; // eax
  const struct CMILMatrix *v24; // rdx
  __int64 v25; // rcx
  int D2DGeometry; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  union __m128 v31; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v32; // [rsp+48h] [rbp-99h]
  struct ID2D1Geometry *v33[3]; // [rsp+50h] [rbp-91h] BYREF
  __m128 v34; // [rsp+68h] [rbp-79h]
  __m128 v35; // [rsp+78h] [rbp-69h]
  __m128 v36; // [rsp+88h] [rbp-59h]
  int v37; // [rsp+98h] [rbp-49h]

  v6 = 0;
  v33[0] = 0LL;
  *a6 = 0;
  if ( *((_BYTE *)this + 241) || !*((_BYTE *)this + 240) && *(_DWORD *)a5 )
    return v6;
  v9 = a4[1];
  v10 = a4[4].m128_i32[0];
  *(__m128 *)&v33[1] = *a4;
  v11 = a4[2];
  v34 = v9;
  v12 = a4[3];
  v35 = v11;
  v36 = v12;
  v37 = v10;
  CMILMatrix::Multiply(
    (CPolygon *)((char *)this + 144),
    (const struct CMILMatrix *)&v33[1],
    (struct CMILMatrix *)&v33[1]);
  v15.m128_u64[1] = (unsigned __int64)v33[2];
  v13 = v34;
  v14 = v36;
  *(double *)v15.m128_u64 = DirectX::XMMatrixInverse(0LL);
  if ( !_mm_movemask_ps(
          _mm_or_ps(
            _mm_or_ps(
              _mm_cmpeq_ps(_mm_and_ps(v14, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
              _mm_cmpeq_ps(_mm_and_ps((__m128)_xmm, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)),
            _mm_or_ps(
              _mm_cmpeq_ps(_mm_and_ps(v13, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
              _mm_cmpeq_ps(_mm_and_ps(v15, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)))) )
  {
    v16 = _mm_movelh_ps((__m128)*(_QWORD *)a2, (__m128)_xmm);
    v17 = _mm_add_ps(
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v16, v16, 255), v14),
                _mm_mul_ps(_mm_shuffle_ps(v16, v16, 170), (__m128)_xmm)),
              _mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), v13)),
            _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v15));
    v18 = _mm_shuffle_ps(v17, v17, 255);
    v19 = _mm_div_ps(v17, _mm_shuffle_ps(v18, v18, 0));
    v31 = v19;
    IsPointInPolygon = CPolygon::IsPointInPolygon(this, &v31);
    *a6 = IsPointInPolygon;
    if ( !IsPointInPolygon )
      goto LABEL_11;
    v21 = *((_QWORD *)this + 27);
    v22 = *(CGeometry **)(v21 + 248);
    if ( !v22 || (*(_BYTE *)(v21 + 102) & 2) != 0 )
      goto LABEL_11;
    v31.m128_u64[0] = 0LL;
    v31.m128_i8[8] = 0;
    ShapeData = CGeometry::GetShapeData(v22, (const struct D2D_SIZE_F *)(v21 + 140), (struct CShapePtr *)&v31);
    v6 = ShapeData;
    if ( ShapeData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, ShapeData, 0x1D8u);
    }
    else
    {
      D2DGeometry = CShapePtr::GetD2DGeometry((CShapePtr *)&v31, v24, v33);
      v6 = D2DGeometry;
      if ( D2DGeometry >= 0 )
      {
        CShapePtr::Release((CShapePtr *)&v31);
LABEL_11:
        if ( !v33[0] )
          return v6;
        v28 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, unsigned __int64, _QWORD))(*(_QWORD *)v33[0] + 56LL))(
                v33[0],
                _mm_unpacklo_ps(v19, _mm_shuffle_ps(v19, v19, 85)).m128_u64[0],
                0LL);
        v6 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, v28, 0x1E5u);
        else
          *a6 = (_DWORD)v32 != 0;
        goto LABEL_18;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0LL, D2DGeometry, 0x1D9u);
    }
    CShapePtr::Release((CShapePtr *)&v31);
  }
LABEL_18:
  if ( v33[0] )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v33[0] + 16LL))(v33[0]);
  return v6;
}
