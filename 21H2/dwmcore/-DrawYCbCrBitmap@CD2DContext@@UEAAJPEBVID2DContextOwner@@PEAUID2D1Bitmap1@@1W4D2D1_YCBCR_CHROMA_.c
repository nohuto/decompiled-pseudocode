/*
 * XREFs of ?DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180278280
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18000FFB4 (-DrawImage@ID2D1DeviceContext@@QEAAXPEAUID2D1Effect@@PEBUD2D_POINT_2F@@PEBUD2D_RECT_F@@W4D2D1_IN.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007F688 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007FAC8 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180080698 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800DC60C (-SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DrawYCbCrBitmap(
        ID2D1DeviceContext **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 *a3,
        struct ID2D1Bitmap1 *a4,
        enum D2D1_YCBCR_CHROMA_SUBSAMPLING a5,
        const struct D2D_RECT_F *a6,
        float a7,
        enum D2D1_INTERPOLATION_MODE a8,
        enum D2D1_COMPOSITE_MODE a9)
{
  const struct D2D_RECT_F *v9; // rsi
  __int64 v14; // rax
  int v15; // edi
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  ID2D1DeviceContext *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  struct ID2D1Effect *v24; // [rsp+30h] [rbp-99h] BYREF
  __int64 v25; // [rsp+38h] [rbp-91h] BYREF
  __int64 v26; // [rsp+40h] [rbp-89h] BYREF
  _BYTE v27[28]; // [rsp+48h] [rbp-81h]
  __int128 v28; // [rsp+68h] [rbp-61h] BYREF
  __int64 v29; // [rsp+78h] [rbp-51h]
  int v30; // [rsp+80h] [rbp-49h]
  __m128i v31; // [rsp+88h] [rbp-41h] BYREF
  __int64 v32; // [rsp+98h] [rbp-31h]
  enum D2D1_INTERPOLATION_MODE v33; // [rsp+A0h] [rbp-29h]
  _BYTE v34[24]; // [rsp+A8h] [rbp-21h] BYREF

  v9 = a6;
  CD2DContext::FlushDrawList((CD2DContext *)this);
  v24 = 0LL;
  v14 = (__int64)(this + 134);
  v26 = 0LL;
  v25 = 0LL;
  if ( !this )
    v14 = 1088LL;
  v15 = *(_DWORD *)v14;
  if ( *(int *)v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(1088LL, 0LL, 0LL, v15, 0x3C6u);
  }
  else
  {
    CD2DContext::EnsureBeginDraw((CD2DContext *)this);
    (*(void (__fastcall **)(const struct ID2DContextOwner *, _BYTE *))(*(_QWORD *)a2 + 8LL))(a2, v34);
    (*(void (__fastcall **)(ID2D1DeviceContext *, _BYTE *))(*(_QWORD *)this[25] + 240LL))(this[25], v34);
    v16 = (*((__int64 (__fastcall **)(ID2D1DeviceContext **, __int64, struct ID2D1Effect **))*this + 25))(
            this,
            5LL,
            &v24);
    v15 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x3CDu);
    }
    else
    {
      (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v24 + 112LL))(
        v24,
        0LL,
        a3,
        1LL);
      (*(void (__fastcall **)(struct ID2D1Effect *, __int64, struct ID2D1Bitmap1 *, __int64))(*(_QWORD *)v24 + 112LL))(
        v24,
        1LL,
        a4,
        1LL);
      v18 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, enum D2D1_YCBCR_CHROMA_SUBSAMPLING *, int))(*(_QWORD *)v24 + 72LL))(
              v24,
              0LL,
              0LL,
              &a5,
              4);
      v15 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x3D1u);
      }
      else if ( a9 )
      {
        ID2D1DeviceContext::DrawImage(this[25], v24, 0LL, v9, a8, a9);
      }
      else
      {
        CD2DContext::SetPrimitiveBlend((CD2DContext *)this, D2D1_PRIMITIVE_BLEND_SOURCE_OVER);
        (*(void (__fastcall **)(struct ID2D1Effect *, __int64 *))(*(_QWORD *)v24 + 144LL))(v24, &v25);
        v29 = 0LL;
        v20 = this[25];
        v31 = _mm_loadu_si128((const __m128i *)v9);
        v33 = a8;
        v32 = 0LL;
        *(float *)v27 = a7;
        *(_QWORD *)&v27[20] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        *(_OWORD *)&v27[4] = *(_OWORD *)&_xmm;
        v30 = *(_DWORD *)&v27[24];
        v28 = *(_OWORD *)v27;
        v29 = *(_QWORD *)&v27[16];
        v21 = (*(__int64 (__fastcall **)(ID2D1DeviceContext *, __int64, __m128i *, __int128 *, __int64 *))(*(_QWORD *)v20 + 520LL))(
                v20,
                v25,
                &v31,
                &v28,
                &v26);
        v15 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x3E7u);
        else
          (*(void (__fastcall **)(ID2D1DeviceContext *, const struct D2D_RECT_F *, __int64))(*(_QWORD *)this[25] + 136LL))(
            this[25],
            v9,
            v26);
      }
    }
  }
  if ( v24 )
  {
    (*(void (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, __int64))(*(_QWORD *)v24 + 112LL))(v24, 0LL, 0LL, 1LL);
    (*(void (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, __int64))(*(_QWORD *)v24 + 112LL))(
      v24,
      1LL,
      0LL,
      1LL);
  }
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((unsigned __int64)(this - 2) & -(__int64)(this != 0LL), v15, 0);
}
