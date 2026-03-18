/*
 * XREFs of ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18000946C
 * Callers:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x180009048 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 * Callees:
 *     ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180009728 (--$GetAllHollowRects@V-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_ex.c)
 *     ?clear@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800098A8 (-clear@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x1800098D0 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800098F0 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x180009E6C (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@details@wil@@QEAA_NXZ @ 0x1800E9B30 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2108c_33322639@@@detail.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x1800EDCF4 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 *     ?AddNineGrid_before_33322639@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x1800EE448 (-AddNineGrid_before_33322639@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridDrawListBrush::Initialize(CNineGridDrawListBrush *this)
{
  __int64 v1; // rdx
  D2DMatrixHelper *v2; // r15
  __int64 v4; // rcx
  char v5; // di
  char v6; // al
  __int64 v7; // rcx
  char v8; // al
  __int64 v9; // rcx
  float m11; // xmm6_4
  float m12; // xmm7_4
  FLOAT v12; // xmm1_4
  FLOAT v13; // xmm0_4
  FLOAT v14; // xmm1_4
  char IsEnabled; // al
  int v16; // edx
  const struct Insets *v17; // r9
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edi
  int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rcx
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  struct D2D_RECT_F v27; // xmm0
  float v28; // xmm7_4
  void *v29; // rcx
  bool v30; // zf
  struct D2D_MATRIX_3X2_F *v32; // [rsp+28h] [rbp-69h]
  struct D2D_MATRIX_3X2_F v33; // [rsp+48h] [rbp-49h] BYREF
  __int64 v34; // [rsp+60h] [rbp-31h]
  struct D2D_RECT_F v35; // [rsp+68h] [rbp-29h] BYREF
  _OWORD *v36; // [rsp+78h] [rbp-19h] BYREF
  _BYTE *v37; // [rsp+80h] [rbp-11h]
  __int64 *v38; // [rsp+88h] [rbp-9h]
  _BYTE v39[16]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v40; // [rsp+A0h] [rbp+Fh] BYREF

  v1 = *((_QWORD *)this + 9);
  v2 = (CNineGridDrawListBrush *)((char *)this + 8);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v1 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v1 + 24);
  CDrawListBrush::CopyPrimitiveClamp(this, (const struct CDrawListBrush *)v1);
  v5 = 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 72) + 8LL))(*(_QWORD *)(v4 + 72), 2LL);
  v7 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    v8 = *(_BYTE *)(v7 + 170);
    v5 = *(_BYTE *)(v7 + 168);
    if ( v8 )
    {
      *((_QWORD *)this + 7) = *(_QWORD *)(v7 + 160);
      v8 = *(_BYTE *)(v7 + 170);
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, 3LL) )
      goto LABEL_8;
    v9 = *((_QWORD *)this + 9);
    v8 = *(_BYTE *)(v9 + 64);
    if ( v8 )
    {
      *((_QWORD *)this + 7) = *(_QWORD *)(v9 + 56);
      v8 = *(_BYTE *)(v9 + 64);
    }
  }
  *((_BYTE *)this + 64) = v8;
LABEL_8:
  D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(v2, &v33, &v33.m12, &v33.m21, v32);
  m11 = v33.m11;
  m12 = v33.m12;
  v12 = v33.m12 * *((float *)this + 9);
  v35.left = v33.m11 * *((float *)this + 8);
  v13 = v33.m11 * *((float *)this + 10);
  v35.top = v12;
  v14 = v33.m12 * *((float *)this + 11);
  v35.right = v13;
  v35.bottom = v14;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2108c_33322639>::GetImpl'::`2'::impl);
  LOBYTE(v16) = *((_BYTE *)this + 568);
  v17 = (CNineGridDrawListBrush *)((char *)this + 96);
  if ( IsEnabled )
  {
    v18 = CoordMap::AddNineGrid(
            (CNineGridDrawListBrush *)((char *)this + 112),
            v16,
            &v35,
            v17,
            (const struct D2D_RECT_F *)this + 2,
            (CNineGridDrawListBrush *)((char *)this + 80),
            *((_BYTE *)this + 568));
    v20 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x6Au, 0LL);
      return v20;
    }
  }
  else
  {
    v21 = CoordMap::AddNineGrid_before_33322639(
            (CNineGridDrawListBrush *)((char *)this + 112),
            0,
            &v35,
            v17,
            (const struct D2D_RECT_F *)this + 2,
            (CNineGridDrawListBrush *)((char *)this + 80),
            v16,
            v5);
    v20 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x74u, 0LL);
      return v20;
    }
  }
  if ( !CoordMap::IsEmpty((CNineGridDrawListBrush *)((char *)this + 112)) )
  {
    v36 = v39;
    v37 = v39;
    v38 = &v40;
    CoordMap::GetAllHollowRects<detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>>(
      v23,
      &v36);
    if ( (v37 - (_BYTE *)v36) >> 4 )
    {
      v24 = *v36;
      *((_BYTE *)this + 569) = 1;
      *(_OWORD *)((char *)this + 552) = v24;
    }
    v25 = *(_OWORD *)&v33.m[1][0];
    *((_BYTE *)this + 52) = 1;
    v26 = v34;
    *(_OWORD *)v2 = v25;
    v27 = v35;
    *((_QWORD *)v2 + 2) = v26;
    *((struct D2D_RECT_F *)this + 2) = v27;
    if ( *((_BYTE *)this + 64) )
    {
      v28 = m12 * *((float *)this + 15);
      *((float *)this + 14) = m11 * *((float *)this + 14);
      *((float *)this + 15) = v28;
    }
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::clear(&v36);
    v29 = v36;
    v30 = v36 == (_OWORD *)v39;
    v36 = 0LL;
    if ( v30 )
      v29 = 0LL;
    operator delete(v29);
  }
  return v20;
}
