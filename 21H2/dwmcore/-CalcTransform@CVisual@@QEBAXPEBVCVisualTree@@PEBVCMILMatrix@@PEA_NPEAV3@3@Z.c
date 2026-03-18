/*
 * XREFs of ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180093FA0
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800099AC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x18000A124 (-ProcessPostSubgraphWindowBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B660 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004D320 (-UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009DEF0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B5A64 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B5CB4 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x18020142C (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180049214 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180049584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004D434 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800572F0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18008EBAC (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1800ACDF0 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800AE2B4 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x1800E2270 (-RoundOffsets@CMILMatrix@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x1801F633C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@_ea_1801F633C.c)
 */

void __fastcall CVisual::CalcTransform(
        CVisual *this,
        CVisual **a2,
        const struct CMILMatrix *a3,
        bool *a4,
        struct CMILMatrix *a5,
        struct CMILMatrix *a6)
{
  char v6; // r15
  CTransform3D *v7; // r12
  bool *v8; // r13
  struct CMILMatrix *v12; // rdi
  float v13; // xmm4_4
  CTransform3D *v14; // rcx
  struct CMILMatrix *v15; // rcx
  __int64 v16; // rax
  bool v17; // r13
  __int64 v18; // r14
  __int64 v19; // rax
  const struct CMILMatrix *Matrix; // rax
  char v21; // al
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int v26; // xmm0_4
  int v27; // xmm1_4
  struct CEffect *EffectInternal; // rdi
  struct CEffect *v29; // rax
  bool v30; // zf
  char v31; // cl
  char v32; // al
  const struct CMILMatrix *v33; // rax
  unsigned int v34; // r9d
  int v35; // xmm1_4
  int v36; // xmm0_4
  int v37; // xmm1_4
  int v38; // xmm0_4
  int v39; // xmm1_4
  int v40; // xmm0_4
  int v41; // xmm1_4
  int v42; // xmm0_4
  int v43; // xmm1_4
  int v44; // xmm0_4
  int v45; // xmm1_4
  int v46; // xmm0_4
  int v47; // xmm1_4
  int v48; // xmm0_4
  int v49; // xmm1_4
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  int v53; // xmm1_4
  int v54; // xmm0_4
  int v55; // xmm1_4
  int v56; // xmm0_4
  int v57; // xmm1_4
  int v58; // xmm0_4
  int v59; // xmm1_4
  int v60; // xmm0_4
  int v61; // xmm1_4
  int v62; // xmm0_4
  int v63; // xmm1_4
  int v64; // xmm0_4
  int v65; // xmm1_4
  int v66; // xmm0_4
  int v67; // xmm1_4
  int v68; // ecx
  int v69; // r8d
  int v70; // r9d
  int v71; // [rsp+B0h] [rbp-80h] BYREF
  int v72; // [rsp+B4h] [rbp-7Ch] BYREF
  int v73; // [rsp+B8h] [rbp-78h] BYREF
  int v74; // [rsp+BCh] [rbp-74h] BYREF
  int v75; // [rsp+C0h] [rbp-70h] BYREF
  int v76; // [rsp+C4h] [rbp-6Ch] BYREF
  int v77; // [rsp+C8h] [rbp-68h] BYREF
  int v78; // [rsp+CCh] [rbp-64h] BYREF
  int v79; // [rsp+D0h] [rbp-60h] BYREF
  int v80; // [rsp+D4h] [rbp-5Ch] BYREF
  int v81; // [rsp+D8h] [rbp-58h] BYREF
  struct CInteraction *InteractionInternal; // [rsp+E0h] [rbp-50h] BYREF
  struct CInteraction *v83; // [rsp+E8h] [rbp-48h] BYREF
  _OWORD v84[4]; // [rsp+F0h] [rbp-40h] BYREF
  int v85; // [rsp+130h] [rbp+0h]
  int v86; // [rsp+190h] [rbp+60h] BYREF
  int v87; // [rsp+198h] [rbp+68h] BYREF
  int v88; // [rsp+1A0h] [rbp+70h] BYREF
  bool *v89; // [rsp+1A8h] [rbp+78h] BYREF

  v89 = a4;
  v6 = 0;
  v7 = 0LL;
  v8 = a4;
  if ( (**((_DWORD **)this + 29) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           186LL) )
    {
      v7 = EffectInternal;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                EffectInternal,
                56LL) )
    {
      v7 = (CTransform3D *)*((_QWORD *)EffectInternal + 11);
    }
  }
  v12 = a5;
  *v8 = 0;
  if ( a3 )
  {
    v6 = 1;
    *(_OWORD *)v12 = *(_OWORD *)a3;
    *((_OWORD *)v12 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)v12 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)v12 + 3) = *((_OWORD *)a3 + 3);
    *((_DWORD *)v12 + 16) = *((_DWORD *)a3 + 16);
  }
  if ( this != a2[8] )
  {
    v13 = *((float *)this + 31);
    if ( v13 != 0.0 || *((float *)this + 32) != 0.0 || *((float *)this + 30) != 0.0 )
    {
      if ( v6 )
      {
        CMILMatrix::PrependTranslate(v12, *((float *)this + 31), *((float *)this + 32), *((float *)this + 30));
      }
      else
      {
        v26 = *((_DWORD *)this + 32);
        v6 = 1;
        v27 = *((_DWORD *)this + 30);
        *(_QWORD *)v12 = 1065353216LL;
        *((_QWORD *)v12 + 1) = 0LL;
        *((_DWORD *)v12 + 4) = 0;
        *(_QWORD *)((char *)v12 + 20) = 1065353216LL;
        *(_QWORD *)((char *)v12 + 28) = 0LL;
        *((_DWORD *)v12 + 9) = 0;
        *((_QWORD *)v12 + 5) = 1065353216LL;
        *((float *)v12 + 12) = v13;
        *((_DWORD *)v12 + 13) = v26;
        *((_DWORD *)v12 + 14) = v27;
        *((_DWORD *)v12 + 15) = 1065353216;
        *((_BYTE *)v12 + 64) = 84;
        *((_BYTE *)v12 + 65) = *((_BYTE *)v12 + 65) & 0xC0 | 0x17;
      }
      *v8 = 1;
    }
    v14 = (CTransform3D *)*((_QWORD *)this + 30);
    if ( v14 )
    {
      Matrix = CTransform3D::GetMatrix(v14, (const struct D2D_SIZE_F *)((char *)this + 140));
      if ( v6 )
      {
        CMILMatrix::Multiply(Matrix, v12, v12);
      }
      else
      {
        v6 = 1;
        *(_OWORD *)v12 = *(_OWORD *)Matrix;
        *((_OWORD *)v12 + 1) = *((_OWORD *)Matrix + 1);
        *((_OWORD *)v12 + 2) = *((_OWORD *)Matrix + 2);
        *((_OWORD *)v12 + 3) = *((_OWORD *)Matrix + 3);
        *((_DWORD *)v12 + 16) = *((_DWORD *)Matrix + 16);
      }
      *v8 = 1;
    }
  }
  v15 = a6;
  if ( a6 )
  {
    if ( v6 )
    {
      *(_OWORD *)a6 = *(_OWORD *)v12;
      *((_OWORD *)v15 + 1) = *((_OWORD *)v12 + 1);
      *((_OWORD *)v15 + 2) = *((_OWORD *)v12 + 2);
      *((_OWORD *)v15 + 3) = *((_OWORD *)v12 + 3);
      *((_DWORD *)v15 + 16) = *((_DWORD *)v12 + 16);
    }
    else
    {
      *(_QWORD *)a6 = 1065353216LL;
      *((_QWORD *)v15 + 1) = 0LL;
      *((_DWORD *)v15 + 4) = 0;
      *(_QWORD *)((char *)v15 + 20) = 1065353216LL;
      *(_QWORD *)((char *)v15 + 28) = 0LL;
      *((_DWORD *)v15 + 9) = 0;
      *((_QWORD *)v15 + 5) = 1065353216LL;
      *((_QWORD *)v15 + 6) = 0LL;
      *((_DWORD *)v15 + 14) = 0;
      *((_DWORD *)v15 + 15) = 1065353216;
      v21 = *((_BYTE *)v15 + 65);
      *((_BYTE *)v15 + 64) = 85;
      *((_BYTE *)v15 + 65) = v21 & 0xC0 | 0x17;
    }
  }
  if ( v7 )
  {
    if ( *((_DWORD *)this + 27) != 2 )
      goto LABEL_63;
    v16 = *((_QWORD *)this + 11);
    goto LABEL_12;
  }
  v16 = *((_QWORD *)this + 11);
  if ( *((_DWORD *)this + 27) != 1 )
  {
LABEL_12:
    LOBYTE(a6) = 1;
    goto LABEL_13;
  }
  LOBYTE(a6) = 0;
LABEL_13:
  v17 = v16 && *(_DWORD *)(v16 + 108) == 1;
  v18 = *((_QWORD *)this + 10);
  if ( (v18 & 2) != 0 )
    v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v18) = v18 & 1;
  LOBYTE(v86) = (**((_DWORD **)this + 29) & 0x400000) != 0
             && (v29 = CVisual::GetEffectInternal(this),
                 (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v29 + 56LL))(v29, 59LL));
  v19 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this);
  if ( v19 )
    LOBYTE(v19) = 1;
  if ( !(_BYTE)a6 )
    goto LABEL_52;
  if ( !v17 )
  {
    v8 = v89;
    goto LABEL_25;
  }
  if ( (_DWORD)v18 )
  {
    v8 = v89;
  }
  else
  {
LABEL_52:
    v30 = !v17;
    v8 = v89;
    if ( v30 || !(_BYTE)v86 && !(_BYTE)v19 )
      goto LABEL_25;
  }
LABEL_63:
  if ( v6 )
  {
    v31 = *((_BYTE *)v12 + 64);
  }
  else
  {
    *(_QWORD *)v12 = 1065353216LL;
    v6 = 1;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_DWORD *)v12 + 4) = 0;
    *(_QWORD *)((char *)v12 + 20) = 1065353216LL;
    *((_DWORD *)v12 + 7) = 0;
    *((_QWORD *)v12 + 6) = 0LL;
    *((_DWORD *)v12 + 14) = 0;
    *((_DWORD *)v12 + 15) = 1065353216;
    v31 = 85;
    v32 = *((_BYTE *)v12 + 65) & 0xC0 | 0x17;
    *((_BYTE *)v12 + 64) = 85;
    *((_BYTE *)v12 + 65) = v32;
  }
  *((_QWORD *)v12 + 4) = 0LL;
  *((_QWORD *)v12 + 5) = 0LL;
  *((_BYTE *)v12 + 64) = v31 & 0xF0 | 3;
  *v8 = 1;
LABEL_25:
  if ( v7 )
  {
    v33 = CTransform3D::GetMatrix(v7, (const struct D2D_SIZE_F *)((char *)this + 140));
    if ( v6 )
    {
      CMILMatrix::Multiply(v33, v12, v12);
    }
    else
    {
      *(_OWORD *)v12 = *(_OWORD *)v33;
      *((_OWORD *)v12 + 1) = *((_OWORD *)v33 + 1);
      *((_OWORD *)v12 + 2) = *((_OWORD *)v33 + 2);
      *((_OWORD *)v12 + 3) = *((_OWORD *)v33 + 3);
      *((_DWORD *)v12 + 16) = *((_DWORD *)v33 + 16);
    }
    *v8 = 1;
  }
  else if ( !v6 )
  {
    *(_QWORD *)v12 = 1065353216LL;
    *((_QWORD *)v12 + 1) = 0LL;
    *((_DWORD *)v12 + 4) = 0;
    *(_QWORD *)((char *)v12 + 20) = 1065353216LL;
    *(_QWORD *)((char *)v12 + 28) = 0LL;
    *((_DWORD *)v12 + 9) = 0;
    *((_QWORD *)v12 + 5) = 1065353216LL;
    *((_QWORD *)v12 + 6) = 0LL;
    *((_DWORD *)v12 + 14) = 0;
    *((_DWORD *)v12 + 15) = 1065353216;
    *((_BYTE *)v12 + 64) = 85;
    *((_BYTE *)v12 + 65) = *((_BYTE *)v12 + 65) & 0xC0 | 0x17;
    goto LABEL_28;
  }
  if ( (*((_BYTE *)this + 102) & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_71;
    if ( CMILMatrix::Is2DAxisAlignedPreserving(v12) )
    {
      v22 = *(_OWORD *)v12;
      v23 = *((_OWORD *)v12 + 1);
      v85 = *((_DWORD *)v12 + 16);
      v84[0] = v22;
      v24 = *((_OWORD *)v12 + 2);
      v84[1] = v23;
      v25 = *((_OWORD *)v12 + 3);
      v84[2] = v24;
      v84[3] = v25;
      CMILMatrix::RoundOffsets((CMILMatrix *)v84);
      if ( !CMILMatrix::IsEqualTo<0>((float *)v12, (float *)v84) )
      {
LABEL_71:
        CMILMatrix::RoundOffsets(v12);
        *v8 = 1;
      }
    }
  }
LABEL_28:
  if ( (*((_BYTE *)this + 272) & 8) != 0 )
  {
    v34 = dword_1803D0EF0;
    if ( (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
    {
      v35 = *((_DWORD *)v12 + 14);
      LODWORD(v89) = *((_DWORD *)v12 + 15);
      v36 = *((_DWORD *)v12 + 13);
      LODWORD(a6) = v35;
      v37 = *((_DWORD *)v12 + 12);
      v86 = v36;
      v38 = *((_DWORD *)v12 + 11);
      v87 = v37;
      v39 = *((_DWORD *)v12 + 10);
      v88 = v38;
      v40 = *((_DWORD *)v12 + 9);
      v71 = v39;
      v41 = *((_DWORD *)v12 + 8);
      v72 = v40;
      v42 = *((_DWORD *)v12 + 7);
      v73 = v41;
      v43 = *((_DWORD *)v12 + 6);
      v74 = v42;
      v44 = *((_DWORD *)v12 + 5);
      v75 = v43;
      v45 = *((_DWORD *)v12 + 4);
      v76 = v44;
      v46 = *((_DWORD *)v12 + 3);
      v77 = v45;
      v47 = *((_DWORD *)v12 + 2);
      v78 = v46;
      v48 = *((_DWORD *)v12 + 1);
      v79 = v47;
      v49 = *(_DWORD *)v12;
      v80 = v48;
      v81 = v49;
      InteractionInternal = CVisual::GetInteractionInternal(this);
      v83 = this;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v50,
        (unsigned int)&unk_1803703C4,
        v51,
        v52,
        (__int64)&v83,
        (__int64)&InteractionInternal,
        (__int64)&v81,
        (__int64)&v80,
        (__int64)&v79,
        (__int64)&v78,
        (__int64)&v77,
        (__int64)&v76,
        (__int64)&v75,
        (__int64)&v74,
        (__int64)&v73,
        (__int64)&v72,
        (__int64)&v71,
        (__int64)&v88,
        (__int64)&v87,
        (__int64)&v86,
        (__int64)&a6,
        (__int64)&v89);
      v34 = dword_1803D0EF0;
    }
    if ( a3 && v34 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
      {
        v53 = *((_DWORD *)a3 + 14);
        LODWORD(v89) = *((_DWORD *)a3 + 15);
        v54 = *((_DWORD *)a3 + 13);
        LODWORD(a6) = v53;
        v55 = *((_DWORD *)a3 + 12);
        v86 = v54;
        v56 = *((_DWORD *)a3 + 11);
        v87 = v55;
        v57 = *((_DWORD *)a3 + 10);
        v88 = v56;
        v58 = *((_DWORD *)a3 + 9);
        v81 = v57;
        v59 = *((_DWORD *)a3 + 8);
        v80 = v58;
        v60 = *((_DWORD *)a3 + 7);
        v79 = v59;
        v61 = *((_DWORD *)a3 + 6);
        v78 = v60;
        v62 = *((_DWORD *)a3 + 5);
        v77 = v61;
        v63 = *((_DWORD *)a3 + 4);
        v76 = v62;
        v64 = *((_DWORD *)a3 + 3);
        v75 = v63;
        v65 = *((_DWORD *)a3 + 2);
        v74 = v64;
        v66 = *((_DWORD *)a3 + 1);
        v73 = v65;
        v67 = *(_DWORD *)a3;
        v72 = v66;
        v71 = v67;
        v83 = CVisual::GetInteractionInternal(this);
        InteractionInternal = this;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v68,
          (unsigned int)&unk_1803701CF,
          v69,
          v70,
          (__int64)&InteractionInternal,
          (__int64)&v83,
          (__int64)&v71,
          (__int64)&v72,
          (__int64)&v73,
          (__int64)&v74,
          (__int64)&v75,
          (__int64)&v76,
          (__int64)&v77,
          (__int64)&v78,
          (__int64)&v79,
          (__int64)&v80,
          (__int64)&v81,
          (__int64)&v88,
          (__int64)&v87,
          (__int64)&v86,
          (__int64)&a6,
          (__int64)&v89);
      }
    }
  }
}
