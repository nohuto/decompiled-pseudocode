/*
 * XREFs of ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18000773C
 * Callers:
 *     ?Create@CNineGridDrawListBrush@@SAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBVInsets@@1_NPEAPEAV1@@Z @ 0x180007318 (-Create@CNineGridDrawListBrush@@SAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawL.c)
 * Callees:
 *     ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800079A4 (--$GetAllHollowRects@V-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_ex.c)
 *     ?clear@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180007B24 (-clear@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180007B4C (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180007B6C (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z @ 0x1800080E8 (-CopyPrimitiveClamp@CDrawListBrush@@QEAAXPEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x1800F3F84 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridDrawListBrush::Initialize(CNineGridDrawListBrush *this)
{
  __int64 v1; // rdx
  D2DMatrixHelper *v2; // r14
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // rcx
  char v7; // al
  __int64 v8; // rcx
  float m11; // xmm6_4
  float m12; // xmm7_4
  unsigned int v11; // xmm1_4
  int v12; // edx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // edi
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  __int128 v20; // xmm0
  float v21; // xmm7_4
  void *v22; // rcx
  bool v23; // zf
  struct D2D_MATRIX_3X2_F *v25; // [rsp+28h] [rbp-69h]
  char v26; // [rsp+38h] [rbp-59h]
  struct D2D_MATRIX_3X2_F v27; // [rsp+48h] [rbp-49h] BYREF
  __int128 v28; // [rsp+60h] [rbp-31h] BYREF
  __int64 v29; // [rsp+70h] [rbp-21h]
  _OWORD *v30; // [rsp+78h] [rbp-19h] BYREF
  _BYTE *v31; // [rsp+80h] [rbp-11h]
  __int64 *v32; // [rsp+88h] [rbp-9h]
  _BYTE v33[16]; // [rsp+90h] [rbp-1h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+Fh] BYREF

  v1 = *((_QWORD *)this + 9);
  v2 = (CNineGridDrawListBrush *)((char *)this + 8);
  *(_OWORD *)((char *)this + 8) = *(_OWORD *)(v1 + 8);
  *((_QWORD *)this + 3) = *(_QWORD *)(v1 + 24);
  CDrawListBrush::CopyPrimitiveClamp(this, (const struct CDrawListBrush *)v1);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 72) + 8LL))(*(_QWORD *)(v4 + 72), 2LL);
  v6 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    v7 = *(_BYTE *)(v6 + 170);
    if ( v7 )
    {
      *((_QWORD *)this + 7) = *(_QWORD *)(v6 + 160);
      v7 = *(_BYTE *)(v6 + 170);
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, 3LL) )
      goto LABEL_8;
    v8 = *((_QWORD *)this + 9);
    v7 = *(_BYTE *)(v8 + 64);
    if ( v7 )
    {
      *((_QWORD *)this + 7) = *(_QWORD *)(v8 + 56);
      v7 = *(_BYTE *)(v8 + 64);
    }
  }
  *((_BYTE *)this + 64) = v7;
LABEL_8:
  D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(v2, &v27, &v27.m12, (float *)&v28, v25);
  m11 = v27.m11;
  m12 = v27.m12;
  v26 = *((_BYTE *)this + 568);
  *(float *)&v11 = v27.m12 * *((float *)this + 9);
  v27.m21 = v27.m11 * *((float *)this + 8);
  *(_QWORD *)&v27.m[1][1] = __PAIR64__(v27.m11 * *((float *)this + 10), v11);
  v27.dy = v27.m12 * *((float *)this + 11);
  v13 = CoordMap::AddNineGrid(
          (CNineGridDrawListBrush *)((char *)this + 112),
          v12,
          (const struct D2D_RECT_F *)v27.m[1],
          (CNineGridDrawListBrush *)((char *)this + 96),
          (const struct D2D_RECT_F *)this + 2,
          (CNineGridDrawListBrush *)((char *)this + 80),
          v26);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x66u, 0LL);
  }
  else if ( !CoordMap::IsEmpty((CNineGridDrawListBrush *)((char *)this + 112)) )
  {
    v30 = v33;
    v31 = v33;
    v32 = &v34;
    CoordMap::GetAllHollowRects<detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>>(
      v16,
      &v30);
    if ( (v31 - (_BYTE *)v30) >> 4 )
    {
      v17 = *v30;
      *((_BYTE *)this + 569) = 1;
      *(_OWORD *)((char *)this + 552) = v17;
    }
    v18 = v28;
    *((_BYTE *)this + 52) = 1;
    v19 = v29;
    *(_OWORD *)v2 = v18;
    v20 = *(_OWORD *)&v27.m[1][0];
    *((_QWORD *)v2 + 2) = v19;
    *((_OWORD *)this + 2) = v20;
    if ( *((_BYTE *)this + 64) )
    {
      v21 = m12 * *((float *)this + 15);
      *((float *)this + 14) = m11 * *((float *)this + 14);
      *((float *)this + 15) = v21;
    }
    detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::clear(&v30);
    v22 = v30;
    v23 = v30 == (_OWORD *)v33;
    v30 = 0LL;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
  }
  return v15;
}
