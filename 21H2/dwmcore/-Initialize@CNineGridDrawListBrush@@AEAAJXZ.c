/*
 * XREFs of ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180059A5C
 * Callers:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x18005A504 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 * Callees:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180059A10 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180059C84 (--$GetAllHollowRects@V-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_ex.c)
 *     ?clear@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180059E00 (-clear@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180059E28 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x180059E48 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x18005A4E0 (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridDrawListBrush::Initialize(CNineGridDrawListBrush *this)
{
  __int64 v1; // rdx
  D2DMatrixHelper *v2; // r15
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rcx
  char v7; // al
  float m11; // xmm6_4
  float m12; // xmm7_4
  FLOAT v10; // xmm1_4
  FLOAT v11; // xmm0_4
  FLOAT v12; // xmm1_4
  int v13; // edx
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  struct D2D_RECT_F v20; // xmm0
  void *v21; // rcx
  bool v22; // zf
  __int128 v24; // xmm0
  __int64 v25; // rcx
  float v26; // xmm7_4
  char v27; // [rsp+38h] [rbp-59h]
  struct D2D_MATRIX_3X2_F v28; // [rsp+48h] [rbp-49h] BYREF
  __int64 v29; // [rsp+60h] [rbp-31h]
  struct D2D_RECT_F v30; // [rsp+68h] [rbp-29h] BYREF
  _OWORD *v31; // [rsp+78h] [rbp-19h] BYREF
  _BYTE *v32; // [rsp+80h] [rbp-11h]
  __int64 *v33; // [rsp+88h] [rbp-9h]
  _BYTE v34[16]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+Fh] BYREF

  v1 = *((_QWORD *)this + 9);
  v2 = (CNineGridDrawListBrush *)((char *)this + 8);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v1 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v1 + 24);
  CDrawListBrush::CopyPrimitiveClamp(this, (const struct CDrawListBrush *)v1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 72) + 8LL))(*(_QWORD *)(v4 + 72), 2LL);
  v6 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    v7 = *(_BYTE *)(v6 + 148);
    if ( v7 )
    {
      *((_QWORD *)this + 7) = *(_QWORD *)(v6 + 136);
      v7 = *(_BYTE *)(v6 + 148);
    }
LABEL_4:
    *((_BYTE *)this + 64) = v7;
    goto LABEL_5;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL) )
  {
    v25 = *((_QWORD *)this + 9);
    v7 = *(_BYTE *)(v25 + 64);
    if ( v7 )
    {
      *((_QWORD *)this + 7) = *(_QWORD *)(v25 + 56);
      v7 = *(_BYTE *)(v25 + 64);
    }
    goto LABEL_4;
  }
LABEL_5:
  D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(v2, &v28, &v28.m12, &v28.m21);
  m11 = v28.m11;
  m12 = v28.m12;
  v27 = *((_BYTE *)this + 568);
  v10 = v28.m12 * *((float *)this + 9);
  v30.left = v28.m11 * *((float *)this + 8);
  v11 = v28.m11 * *((float *)this + 10);
  v30.top = v10;
  v12 = v28.m12 * *((float *)this + 11);
  v30.right = v11;
  v30.bottom = v12;
  v14 = CoordMap::AddNineGrid(
          (CNineGridDrawListBrush *)((char *)this + 112),
          v13,
          &v30,
          (CNineGridDrawListBrush *)((char *)this + 96),
          (const struct D2D_RECT_F *)this + 2,
          (CNineGridDrawListBrush *)((char *)this + 80),
          v27);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x62u, 0LL);
  }
  else if ( !CoordMap::IsEmpty((CNineGridDrawListBrush *)((char *)this + 112)) )
  {
    v31 = v34;
    v32 = v34;
    v33 = &v35;
    CoordMap::GetAllHollowRects<detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>>(
      v17,
      &v31);
    if ( (v32 - (_BYTE *)v31) >> 4 )
    {
      v24 = *v31;
      *((_BYTE *)this + 569) = 1;
      *(_OWORD *)((char *)this + 552) = v24;
    }
    v18 = *(_OWORD *)&v28.m[1][0];
    *((_BYTE *)this + 52) = 1;
    v19 = v29;
    *(_OWORD *)v2 = v18;
    v20 = v30;
    *((_QWORD *)v2 + 2) = v19;
    *((struct D2D_RECT_F *)this + 2) = v20;
    if ( *((_BYTE *)this + 64) )
    {
      v26 = m12 * *((float *)this + 15);
      *((float *)this + 14) = m11 * *((float *)this + 14);
      *((float *)this + 15) = v26;
    }
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::clear(&v31);
    v21 = v31;
    v22 = v31 == (_OWORD *)v34;
    v31 = 0LL;
    if ( v22 )
      v21 = 0LL;
    DefaultHeap::Free(v21);
  }
  return v16;
}
