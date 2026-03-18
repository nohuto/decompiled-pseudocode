/*
 * XREFs of ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18001084C
 * Callers:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x180010428 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 * Callees:
 *     ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180010A84 (--$GetAllHollowRects@V-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_ex.c)
 *     ?clear@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180010C04 (-clear@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180011EFC (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x180011F1C (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180012638 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x1800133B8 (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridDrawListBrush::Initialize(CNineGridDrawListBrush *this)
{
  __int64 v1; // rdx
  D2DMatrixHelper *v2; // r14
  __int64 v4; // rcx
  char v5; // di
  char v6; // al
  __int64 v7; // rcx
  char v8; // al
  float m11; // xmm6_4
  float m12; // xmm7_4
  FLOAT v11; // xmm1_4
  FLOAT v12; // xmm0_4
  FLOAT v13; // xmm1_4
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
  struct D2D_MATRIX_3X2_F *v27; // [rsp+28h] [rbp-69h]
  char v28; // [rsp+38h] [rbp-59h]
  struct D2D_MATRIX_3X2_F v29; // [rsp+48h] [rbp-49h] BYREF
  __int64 v30; // [rsp+60h] [rbp-31h]
  struct D2D_RECT_F v31; // [rsp+68h] [rbp-29h] BYREF
  _OWORD *v32; // [rsp+78h] [rbp-19h] BYREF
  _BYTE *v33; // [rsp+80h] [rbp-11h]
  __int64 *v34; // [rsp+88h] [rbp-9h]
  _BYTE v35[16]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+Fh] BYREF

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
    v8 = *(_BYTE *)(v7 + 169);
    v5 = *(_BYTE *)(v7 + 168);
    if ( v8 )
    {
      *((_QWORD *)this + 7) = *(_QWORD *)(v7 + 160);
      v8 = *(_BYTE *)(v7 + 169);
    }
LABEL_4:
    *((_BYTE *)this + 64) = v8;
    goto LABEL_5;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, 3LL) )
  {
    v25 = *((_QWORD *)this + 9);
    v8 = *(_BYTE *)(v25 + 64);
    if ( v8 )
    {
      *((_QWORD *)this + 7) = *(_QWORD *)(v25 + 56);
      v8 = *(_BYTE *)(v25 + 64);
    }
    goto LABEL_4;
  }
LABEL_5:
  D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(v2, &v29, &v29.m12, &v29.m21, v27);
  m11 = v29.m11;
  m12 = v29.m12;
  v28 = *((_BYTE *)this + 568);
  v11 = v29.m12 * *((float *)this + 9);
  v31.left = v29.m11 * *((float *)this + 8);
  v12 = v29.m11 * *((float *)this + 10);
  v31.top = v11;
  v13 = v29.m12 * *((float *)this + 11);
  v31.right = v12;
  v31.bottom = v13;
  v14 = CoordMap::AddNineGrid(
          (CNineGridDrawListBrush *)((char *)this + 112),
          0,
          &v31,
          (CNineGridDrawListBrush *)((char *)this + 96),
          (const struct D2D_RECT_F *)this + 2,
          (CNineGridDrawListBrush *)((char *)this + 80),
          v28,
          v5);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x69u, 0LL);
  }
  else if ( !CoordMap::IsEmpty((CNineGridDrawListBrush *)((char *)this + 112)) )
  {
    v32 = v35;
    v33 = v35;
    v34 = &v36;
    CoordMap::GetAllHollowRects<detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>>(
      v17,
      &v32);
    if ( (v33 - (_BYTE *)v32) >> 4 )
    {
      v24 = *v32;
      *((_BYTE *)this + 569) = 1;
      *(_OWORD *)((char *)this + 552) = v24;
    }
    v18 = *(_OWORD *)&v29.m[1][0];
    *((_BYTE *)this + 52) = 1;
    v19 = v30;
    *(_OWORD *)v2 = v18;
    v20 = v31;
    *((_QWORD *)v2 + 2) = v19;
    *((struct D2D_RECT_F *)this + 2) = v20;
    if ( *((_BYTE *)this + 64) )
    {
      v26 = m12 * *((float *)this + 15);
      *((float *)this + 14) = m11 * *((float *)this + 14);
      *((float *)this + 15) = v26;
    }
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::clear(&v32);
    v21 = v32;
    v22 = v32 == (_OWORD *)v35;
    v32 = 0LL;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
  }
  return v16;
}
