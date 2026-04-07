/*
 * XREFs of ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800B8F8C
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800B9250 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z @ 0x18000D870 (-Update@CSizeResourceProxy@@QEAAJAEBUMilSizeD@@@Z.c)
 *     ?Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z @ 0x18000E244 (-Update@CRectResourceProxy@@QEAAJAEBUMilRectF@@@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x180032B1C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateDestinationRect(CIconicAnimatedVisual *this)
{
  _QWORD *v1; // rbp
  _DWORD *v3; // rsi
  int RectangleGeometry; // eax
  unsigned int v5; // ebx
  CRectResourceProxy *v6; // r9
  int v7; // eax
  __int64 v8; // r8
  int v9; // r10d
  __int64 v10; // rcx
  int v11; // r11d
  int v12; // ecx
  int v13; // eax
  float v14; // xmm2_4
  int v15; // r10d
  __int64 v16; // rcx
  int v17; // ecx
  unsigned int v18; // eax
  float v19; // xmm1_4
  __int64 v20; // rcx
  __m128i v21; // xmm0
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  unsigned int v28; // ecx
  __int64 v29; // rax
  __m128i v30; // xmm0
  CSizeResourceProxy *v31; // rcx
  int v32; // eax
  _DWORD v34[4]; // [rsp+30h] [rbp-38h] BYREF
  double v35[2]; // [rsp+40h] [rbp-28h] BYREF

  v1 = (_QWORD *)((char *)this + 344);
  v3 = (_DWORD *)((char *)this + 352);
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        (const struct tagRECT *)this + 22,
                        (struct CRectangleGeometryProxy **)this + 43);
  v5 = RectangleGeometry;
  if ( RectangleGeometry >= 0 )
  {
    if ( *v1 )
    {
      v6 = (CRectResourceProxy *)*((_QWORD *)this + 40);
      if ( v6 )
      {
        if ( *((_QWORD *)this + 41) )
        {
          v7 = 0;
          v8 = *((_QWORD *)this + 36);
          if ( v3[2] - *v3 >= 0 )
            v7 = v3[2] - *v3;
          v9 = 0;
          v10 = *(_QWORD *)(v8 + 376);
          if ( v10 )
            v9 = *(_DWORD *)(v10 + 120);
          v11 = *((_DWORD *)this + 89);
          v12 = v7 / 2;
          v13 = 0;
          v14 = (float)(v12 - v9 / 2 - *v3);
          if ( *((_DWORD *)this + 91) - v11 >= 0 )
            v13 = *((_DWORD *)this + 91) - v11;
          v15 = 0;
          *(float *)v34 = v14;
          v16 = *(_QWORD *)(v8 + 376);
          if ( v16 )
            v15 = *(_DWORD *)(v16 + 124);
          v17 = v13 / 2;
          v18 = 0;
          v19 = (float)(v17 - v15 / 2 - v11);
          *(float *)&v34[1] = v19;
          v20 = *(_QWORD *)(v8 + 376);
          if ( v20 )
            v18 = *(_DWORD *)(v20 + 120);
          v21 = _mm_cvtsi32_si128(v18);
          v22 = 0;
          *(float *)&v34[2] = _mm_cvtepi32_ps(v21).m128_f32[0] + v14;
          v23 = *(_QWORD *)(v8 + 376);
          if ( v23 )
            v22 = *(_DWORD *)(v23 + 124);
          *(float *)&v34[3] = (float)v22 + v19;
          v24 = CRectResourceProxy::Update(v6, (const struct MilRectF *)v34);
          v5 = v24;
          if ( v24 >= 0 )
          {
            v25 = *((_QWORD *)this + 36);
            v26 = 0;
            v27 = *(_QWORD *)(v25 + 376);
            if ( v27 )
              v26 = *(_DWORD *)(v27 + 120);
            v28 = 0;
            v35[0] = (double)v26;
            v29 = *(_QWORD *)(v25 + 376);
            if ( v29 )
              v28 = *(_DWORD *)(v29 + 124);
            v30 = _mm_cvtsi32_si128(v28);
            v31 = (CSizeResourceProxy *)*((_QWORD *)this + 41);
            *(_QWORD *)&v35[1] = *(_OWORD *)&_mm_cvtepi32_pd(v30);
            v32 = CSizeResourceProxy::Update(v31, (const struct MilSizeD *)v35);
            v5 = v32;
            if ( v32 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, 0xA5u);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x9Fu);
          }
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, RectangleGeometry, 0x91u);
  }
  return v5;
}
