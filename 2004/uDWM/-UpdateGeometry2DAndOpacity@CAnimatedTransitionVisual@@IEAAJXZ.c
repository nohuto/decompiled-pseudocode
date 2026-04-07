/*
 * XREFs of ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180023800
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000FB40 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180005C6C (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006320 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x1800139D4 (-Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001528C (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180016160 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x1800178D0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001D170 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180023210 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800272F4 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x18003D858 (-Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800BFE10 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity(CAnimatedTransitionVisual *this)
{
  CRenderDataVisual *v1; // r14
  struct CPushTransformInstruction *v3; // rbx
  char v4; // si
  unsigned int v5; // edx
  struct CPopInstruction *v6; // rdi
  int v7; // r8d
  char v8; // r13
  unsigned __int64 v9; // xmm0_8
  char v10; // r12
  int v11; // ecx
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // ecx
  __m128i v15; // xmm5
  __m128i v16; // xmm15
  unsigned int v17; // eax
  float v18; // xmm5_4
  __m128i v19; // xmm9
  int v20; // eax
  float v21; // xmm9_4
  float v22; // xmm15_4
  float v23; // xmm10_4
  float v24; // xmm11_4
  float v25; // xmm11_4
  float left; // xmm7_4
  float v27; // xmm15_4
  float v28; // xmm14_4
  float v29; // xmm8_4
  float v30; // xmm13_4
  float top; // xmm6_4
  __int64 v32; // rsi
  float v33; // xmm12_4
  float v34; // xmm7_4
  LONG v35; // eax
  int v36; // ecx
  float v37; // xmm8_4
  float v38; // xmm6_4
  float v39; // xmm1_4
  int v40; // xmm0_4
  float v41; // xmm0_4
  CMatrixTransformProxy *v42; // rcx
  int v43; // eax
  unsigned int v44; // esi
  int v45; // eax
  struct CBaseImageProxy *v46; // rsi
  int v47; // eax
  float v49; // xmm9_4
  int v50; // ecx
  int v51; // eax
  __int64 v52; // rdx
  char v53; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v54; // [rsp+50h] [rbp-B8h] BYREF
  int v55; // [rsp+58h] [rbp-B0h]
  float v56[2]; // [rsp+60h] [rbp-A8h] BYREF
  float v57[2]; // [rsp+68h] [rbp-A0h] BYREF
  CBaseObject *v58; // [rsp+70h] [rbp-98h] BYREF
  struct tagRECT v59; // [rsp+78h] [rbp-90h] BYREF
  struct CPushTransformInstruction *v60; // [rsp+88h] [rbp-80h] BYREF
  struct CPopInstruction *v61; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v62[4]; // [rsp+98h] [rbp-70h] BYREF
  struct _MilMatrix3x2D v63; // [rsp+A8h] [rbp-60h] BYREF
  float v64; // [rsp+D8h] [rbp-30h]
  float v65; // [rsp+DCh] [rbp-2Ch]
  int v66; // [rsp+E0h] [rbp-28h]
  int v67; // [rsp+E4h] [rbp-24h]
  float v68; // [rsp+E8h] [rbp-20h] BYREF
  float v69; // [rsp+ECh] [rbp-1Ch]
  int v70; // [rsp+F0h] [rbp-18h]
  int v71; // [rsp+F4h] [rbp-14h]
  float v72; // [rsp+F8h] [rbp-10h]
  float v73; // [rsp+FCh] [rbp-Ch]
  int v74; // [rsp+100h] [rbp-8h]
  int v75; // [rsp+104h] [rbp-4h]
  int v76; // [rsp+108h] [rbp+0h]
  int v77; // [rsp+10Ch] [rbp+4h]
  int v78; // [rsp+110h] [rbp+8h]
  int v79; // [rsp+114h] [rbp+Ch]
  float v80; // [rsp+118h] [rbp+10h]
  float v81; // [rsp+11Ch] [rbp+14h]
  int v82; // [rsp+120h] [rbp+18h]
  int v83; // [rsp+124h] [rbp+1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
  CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), 0.9999899864196777);
  v58 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = *((_DWORD *)this + 212);
  v6 = 0LL;
  v7 = *((_DWORD *)this + 213);
  v8 = 0;
  v9 = *(_QWORD *)((char *)this + 756);
  v10 = 0;
  v11 = *((_DWORD *)this + 214);
  v55 = *((_DWORD *)this + 191);
  v12 = v11 - v5;
  v54 = v9;
  v13 = 0;
  if ( v12 >= 0 )
    v13 = v12;
  v14 = *((_DWORD *)this + 215) - v7;
  v15 = _mm_cvtsi32_si128(v5);
  v59 = (struct tagRECT)*((_OWORD *)this + 53);
  v53 = 0;
  v16 = _mm_cvtsi32_si128(v13);
  v17 = 0;
  if ( v14 >= 0 )
    v17 = v14;
  v18 = _mm_cvtepi32_ps(v15).m128_f32[0];
  v60 = 0LL;
  v61 = 0LL;
  v19 = _mm_cvtsi32_si128(v17);
  v20 = *((_DWORD *)this + 236);
  v56[0] = v18;
  v21 = _mm_cvtepi32_ps(v19).m128_f32[0];
  v57[0] = (float)v7;
  v22 = _mm_cvtepi32_ps(v16).m128_f32[0];
  v23 = (float)(v21 * *((float *)this + 193)) + (float)v7;
  v24 = v22 * *((float *)this + 192);
  *(float *)&v62[1] = v23;
  v25 = v24 + v18;
  *(float *)v62 = v25;
  if ( v20 || *((_DWORD *)this + 237) )
  {
    left = (float)v59.left;
    v27 = v22 / (float)((float)v20 / *((float *)this + 201));
    v28 = *(float *)&v54 * v27;
    v29 = v21 / (float)((float)*((int *)this + 237) / *((float *)this + 202));
    v30 = *((float *)&v54 + 1) * v29;
    top = (float)v59.top;
    v32 = HIDWORD(*(_QWORD *)&v59.right);
    v59.left = RoundToNearestInt((float)((float)((float)v59.left - v25) / v27) + v25);
    v59.top = RoundToNearestInt((float)((float)((float)v59.top - v23) / v29) + v23);
    v33 = (float)((float)((float)((float)((float)v59.left - v25) * v27) + v25) - left) * *((float *)this + 189);
    v34 = (float)((float)((float)((float)((float)v59.top - v23) * v29) + v23) - top) * *((float *)this + 190);
    v59.right = RoundToNearestInt((float)((float)((float)v59.right - v25) / v27) + v25);
    v35 = RoundToNearestInt((float)((float)((float)(int)v32 - v23) / v29) + v23);
    v18 = v56[0];
    v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
    v5 = *((_DWORD *)this + 212);
    v4 = 0;
    v7 = *((_DWORD *)this + 213);
    v59.bottom = v35;
  }
  else
  {
    v30 = *((float *)&v54 + 1);
    v33 = 0.0;
    LODWORD(v28) = v54;
    v34 = 0.0;
  }
  v36 = *((_DWORD *)this + 214);
  v37 = (float)(v7 + *((_DWORD *)this + 215)) * 0.5;
  v38 = (float)(int)(v36 + v5) * 0.5;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v28 - 1.0) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v30 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    v54 = __PAIR64__(LODWORD(v30), LODWORD(v28));
    v10 = 1;
  }
  if ( COERCE_FLOAT(*((_DWORD *)this + 195) & _xmm) >= 0.0000011920929 )
  {
    v49 = v21 * *((float *)this + 199);
    v50 = v36 - v5;
    v51 = 0;
    v8 = 1;
    if ( v50 >= 0 )
      v51 = v50;
    v56[1] = v49 + v57[0];
    v56[0] = (float)((float)v51 * *((float *)this + 198)) + v18;
  }
  v39 = *((float *)this + 187);
  if ( COERCE_FLOAT(*((_DWORD *)this + 186) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(LODWORD(v39) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(LODWORD(v33) & _xmm) >= 0.0000011920929
    || COERCE_FLOAT(LODWORD(v34) & _xmm) >= 0.0000011920929 )
  {
    v4 = 1;
    v57[0] = *((float *)this + 186) - v33;
    v57[1] = v39 - v34;
  }
  v40 = *((_DWORD *)this + 233);
  v82 = 0;
  v81 = 0.0;
  v80 = 0.0;
  v79 = 0;
  v77 = 0;
  v76 = 0;
  v75 = 0;
  v74 = 0;
  v72 = 0.0;
  v71 = 0;
  v70 = 0;
  v69 = 0.0;
  v83 = 1065353216;
  v78 = 1065353216;
  v73 = 1.0;
  v68 = 1.0;
  if ( COERCE_FLOAT(v40 & _xmm) >= 0.0000011920929 )
  {
    v63.DX = 0.0;
    v63.S_22 = 0.0;
    v63.S_21 = 0.0078125;
    v63.S_12 = 0.0;
    v66 = 0;
    LODWORD(v64) = LODWORD(v38) ^ _xmm;
    LODWORD(v65) = LODWORD(v37) ^ _xmm;
    v53 = 1;
    v67 = 1065353216;
    *(_QWORD *)&v63.DY = 1065353216LL;
    *(_QWORD *)&v63.S_11 = 1065353216LL;
    D2DMatrixMultiply((struct D2DMatrix *)&v68, (const struct D2DMatrix *)&v68, (const struct D2DMatrix *)&v63);
    D2DMatrixRotationZ((struct D2DMatrix *)&v63, *((float *)this + 233) * 0.017453292);
    D2DMatrixMultiply((struct D2DMatrix *)&v68, (const struct D2DMatrix *)&v68, (const struct D2DMatrix *)&v63);
    v63.DX = 0.0;
    v63.S_22 = 0.0;
    v63.S_21 = 0.0078125;
    v63.S_12 = 0.0;
    v66 = 0;
    v64 = v38;
    v65 = v37;
    v67 = 1065353216;
    *(_QWORD *)&v63.DY = 1065353216LL;
    *(_QWORD *)&v63.S_11 = 1065353216LL;
    D2DMatrixMultiply((struct D2DMatrix *)&v68, (const struct D2DMatrix *)&v68, (const struct D2DMatrix *)&v63);
  }
  if ( (v10 || v8 || v4)
    && (v8 ? (v41 = *((float *)this + 195)) : (v41 = 0.0),
        (D2DMatrixTransformation2D(
           (struct D2DMatrix *)&v63,
           (const struct D2DVector2 *)((unsigned __int64)v62 & -(__int64)(v10 != 0)),
           0.0,
           (const struct D2DVector2 *)((unsigned __int64)&v54 & -(__int64)(v10 != 0)),
           (const struct D2DVector2 *)((unsigned __int64)v56 & -(__int64)(v8 != 0)),
           v41,
           (const struct D2DVector2 *)((unsigned __int64)v57 & -(__int64)(v4 != 0))),
         D2DMatrixMultiply((struct D2DMatrix *)&v68, (const struct D2DMatrix *)&v68, (const struct D2DMatrix *)&v63),
         v8)
     || v10
     || v4)
    || v53 )
  {
    v42 = (CMatrixTransformProxy *)*((_QWORD *)this + 41);
    v63.S_11 = v68;
    v63.S_12 = v69;
    v63.S_21 = v72;
    v63.S_22 = v73;
    v63.DX = v80;
    v63.DY = v81;
    v43 = CMatrixTransformProxy::Update(v42, &v63);
    v44 = v43;
    if ( v43 < 0 )
    {
      v52 = 1344LL;
      goto LABEL_58;
    }
    v45 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 41), &v60);
    v44 = v45;
    if ( v45 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x542,
        (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v45);
      v3 = v60;
      goto LABEL_36;
    }
    v3 = v60;
    v43 = CRenderDataVisual::AddInstruction(v1, v60);
    v44 = v43;
    if ( v43 < 0 )
    {
      v52 = 1347LL;
      goto LABEL_58;
    }
  }
  v46 = (struct CBaseImageProxy *)*((_QWORD *)this + 74);
  if ( !v46 )
    v46 = (struct CBaseImageProxy *)*((_QWORD *)this + 72);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v58);
  v43 = CDrawTileImageInstruction::Create(v46, &v59, (const struct tagPOINT *)this + 117, *((float *)this + 184), &v58);
  v44 = v43;
  if ( v43 < 0 )
  {
    v52 = 1356LL;
  }
  else
  {
    v43 = CRenderDataVisual::AddInstruction(v1, v58);
    v44 = v43;
    if ( v43 < 0 )
    {
      v52 = 1357LL;
    }
    else
    {
      if ( !v3 )
      {
LABEL_35:
        v44 = 0;
        goto LABEL_36;
      }
      v47 = CPopInstruction::Create(&v61);
      v44 = v47;
      if ( v47 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x551,
          (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
          (const char *)(unsigned int)v47);
        v6 = v61;
        goto LABEL_36;
      }
      v6 = v61;
      v43 = CRenderDataVisual::AddInstruction(v1, v61);
      v44 = v43;
      if ( v43 >= 0 )
        goto LABEL_35;
      v52 = 1362LL;
    }
  }
LABEL_58:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v52,
    (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v43);
LABEL_36:
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v3 )
    CBaseObject::Release(v3);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v58);
  return v44;
}
