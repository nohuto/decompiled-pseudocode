/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180066A10
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180065300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18000A64C (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x18000EDA4 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18002FAF8 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18002FB48 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z @ 0x18003A468 (-GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18003B2A8 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x1800591F0 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18005E610 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180067460 (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18007D478 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18007D638 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A57F0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A7124 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800A9060 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800B6888 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7A7C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CAE90 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(CVisual *this, CVisual **a2)
{
  bool v2; // r13
  unsigned int v5; // r12d
  _DWORD *v6; // rdi
  int v7; // r11d
  __int64 v8; // rdi
  float v9; // xmm6_4
  float v10; // xmm7_4
  __int64 v11; // rax
  float v12; // xmm0_4
  int v13; // eax
  __int64 v14; // rcx
  float *v15; // rdi
  float v16; // xmm0_4
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // xmm1_8
  unsigned __int8 (__fastcall *v20)(CVisual **); // rax
  __int64 v21; // rcx
  char *v22; // rsi
  struct CTreeData *TreeData; // r15
  __int64 v24; // rcx
  _DWORD *v25; // r8
  CVisual *v26; // r13
  unsigned __int64 v27; // rax
  _DWORD *v28; // r8
  _DWORD *v30; // r8
  __int64 v31; // rax
  struct CEffect *EffectInternal; // rsi
  __int64 v33; // rax
  _BYTE *v34; // rdx
  __int64 i; // rcx
  __int64 *v36; // rdi
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  _BYTE *v40; // rdx
  __int64 j; // rcx
  _QWORD **v42; // rcx
  _QWORD *v43; // rcx
  CVisual *v44; // rax
  __int64 v45; // rax
  _BYTE *v46; // rdx
  __int64 k; // rcx
  _QWORD **v48; // rcx
  _QWORD *v49; // rcx
  __int64 v50; // rax
  _BYTE *v51; // rdx
  __int64 m; // rcx
  _QWORD **v53; // rcx
  _QWORD *v54; // rcx
  float v55; // edx
  float *v56; // rcx
  __int64 *TreeDataListHead; // rax
  __int64 *v58; // rax
  __int64 v59; // rcx
  CTransform3D *Transform3DEffectNoRef; // rax
  _QWORD *ProjectedShadowReceivers; // rax
  int updated; // eax
  int v63; // r15d
  __int64 v64; // rcx
  __int64 v65; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  char v70[4]; // [rsp+40h] [rbp-C0h] BYREF
  float v71; // [rsp+44h] [rbp-BCh]
  _OWORD v72[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v73; // [rsp+90h] [rbp-70h]
  _BYTE v74[64]; // [rsp+A0h] [rbp-60h] BYREF
  int v75; // [rsp+E0h] [rbp-20h]
  _OWORD v76[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v77; // [rsp+130h] [rbp+30h]
  __int128 v78; // [rsp+140h] [rbp+40h] BYREF
  __int64 v79; // [rsp+150h] [rbp+50h]

  v2 = 0;
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 91LL)
    && ((*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 224LL))(this) || *((_QWORD *)this + 77))
    && !CLayerVisual::GetAutomaticBoundsExpansion(this) )
  {
    *((_DWORD *)this + 43) = *((_DWORD *)this + 33);
    *((_DWORD *)this + 44) = *((_DWORD *)this + 34);
    *(_QWORD *)((char *)this + 164) = 0LL;
  }
  v6 = (_DWORD *)*((_QWORD *)this + 28);
  v7 = *v6;
  if ( (*v6 & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers((__int64)this);
    if ( *ProjectedShadowReceivers != ProjectedShadowReceivers[1] )
    {
      *((_DWORD *)this + 43) = *((_DWORD *)this + 33);
      *((_DWORD *)this + 44) = *((_DWORD *)this + 34);
      *(_QWORD *)((char *)this + 164) = 0LL;
      v7 = *v6;
    }
  }
  if ( (v7 & 0x4000000) != 0 )
  {
    v33 = (unsigned int)v6[1];
    v34 = v6 + 2;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v33; ++v34 )
    {
      if ( *v34 == 6 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i >= (unsigned int)v33 )
      v36 = 0LL;
    else
      v36 = (__int64 *)((char *)v6 + 8 * i - (((_BYTE)v33 + 15) & 7) + v33 + 15);
    v8 = *v36;
    if ( v8 )
    {
      v37 = CVisual::CalculateRootBounds(this);
      v5 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x5A7u, 0LL);
        return v5;
      }
      *(_OWORD *)(v8 + 64) = *(_OWORD *)((char *)this + 140);
      *(_QWORD *)(v8 + 80) = *(_QWORD *)((char *)this + 156);
    }
  }
  else
  {
    v8 = 0LL;
  }
  v9 = *(float *)&FLOAT_1_0;
  v10 = *(float *)&FLOAT_1_0;
  if ( (**((_DWORD **)this + 28) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           56LL) )
    {
      v10 = *((float *)EffectInternal + 18);
    }
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v10, 0.0))) & _xmm) < 0.0000011920929 )
    goto LABEL_92;
  if ( this != a2[7] )
  {
    v11 = *((_QWORD *)this + 27);
    if ( (*(_DWORD *)(v11 + 4) & 0x8000000) != 0 )
    {
      v55 = *(float *)(v11 + 12);
      v56 = (float *)(v11 + 12);
      if ( (LODWORD(v55) & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v56 = (float *)((char *)v56 + (LODWORD(v55) & 0xFFFFFF) + 4);
          v55 = *v56;
        }
        while ( (*(_DWORD *)v56 & 0x7F000000) != 0x5000000 );
      }
      v71 = v56[1];
      v12 = v71;
    }
    else
    {
      v12 = *(float *)&FLOAT_1_0;
    }
    v9 = fminf(1.0, fmaxf(v12, 0.0));
  }
  if ( COERCE_FLOAT(LODWORD(v9) & _xmm) < 0.0000011920929 )
  {
LABEL_92:
    *(_QWORD *)((char *)this + 156) = 0LL;
    *(_QWORD *)((char *)this + 148) = 0LL;
    *(_QWORD *)((char *)this + 140) = 0LL;
    return v5;
  }
  if ( !v8 )
  {
    v13 = CVisual::CalculateRootBounds(this);
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x5B9u, 0LL);
      return v5;
    }
  }
  v15 = (float *)((char *)this + 140);
  v16 = *((float *)this + 40);
  v17 = (v16 <= *((float *)this + 39)) + 1;
  if ( *((float *)this + 37) > *((float *)this + 35) )
    v17 = v16 <= *((float *)this + 39);
  v18 = v17 + 1;
  if ( *((float *)this + 38) > *((float *)this + 36) )
    v18 = v17;
  if ( v18 <= 1 )
  {
    v19 = *(_QWORD *)((char *)this + 156);
    v20 = (unsigned __int8 (__fastcall *)(CVisual **))*((_QWORD *)*a2 + 25);
    v78 = *(_OWORD *)v15;
    v77 = 0;
    v79 = v19;
    if ( v20(a2) )
    {
      v22 = (char *)this + 320;
    }
    else
    {
      TreeDataListHead = (__int64 *)CVisual::GetTreeDataListHead(this);
      if ( !TreeDataListHead )
        goto LABEL_35;
      v21 = *TreeDataListHead;
      if ( (__int64 *)*TreeDataListHead == TreeDataListHead )
        goto LABEL_35;
      while ( 1 )
      {
        v22 = (char *)(v21 - 288);
        if ( *(CVisual ***)(v21 + 32) == a2 )
          break;
        v21 = *(_QWORD *)v21;
        if ( (__int64 *)v21 == TreeDataListHead )
          goto LABEL_35;
      }
    }
    if ( v22 )
    {
      TreeData = 0LL;
      if ( this == a2[7] )
        goto LABEL_67;
      v24 = 0LL;
      if ( g_pComposition )
        v24 = *((_QWORD *)g_pComposition + 44);
      if ( v22[18] && *((_QWORD *)v22 + 35) == v24 )
        goto LABEL_27;
      v25 = (_DWORD *)*((_QWORD *)this + 28);
      if ( (*v25 & 0x1000000) == 0 )
        goto LABEL_27;
      v39 = (unsigned int)v25[1];
      v40 = v25 + 2;
      for ( j = 0LL; (unsigned int)j < (unsigned int)v39; ++v40 )
      {
        if ( *v40 == 8 )
          break;
        j = (unsigned int)(j + 1);
      }
      v42 = (unsigned int)j >= (unsigned int)v39
          ? 0LL
          : (_QWORD **)((char *)v25 + v39 + 8 * j - (((_BYTE)v39 + 15) & 7) + 15);
      v43 = *v42;
      if ( v43 && (v44 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v43 + 200LL))(*v43)) != 0LL )
      {
        v2 = 1;
        TreeData = CVisual::FindTreeData(v44, (const struct CVisualTree *)a2);
      }
      else
      {
LABEL_27:
        v26 = (CVisual *)*((_QWORD *)this + 10);
        if ( (*((unsigned __int8 (__fastcall **)(CVisual **))*a2 + 25))(a2) )
        {
          TreeData = (CVisual *)((char *)v26 + 320);
        }
        else
        {
          v58 = (__int64 *)CVisual::GetTreeDataListHead(v26);
          if ( v58 )
          {
            v21 = *v58;
            if ( (__int64 *)*v58 != v58 )
            {
              while ( *(CVisual ***)(v21 + 32) != a2 )
              {
                v21 = *(_QWORD *)v21;
                if ( (__int64 *)v21 == v58 )
                  goto LABEL_29;
              }
              TreeData = (struct CTreeData *)(v21 - 288);
            }
          }
        }
LABEL_29:
        v2 = 0;
      }
      if ( !TreeData )
LABEL_67:
        v27 = 1LL;
      else
        v27 = *((_QWORD *)TreeData + 15);
      if ( *((_QWORD *)v22 + 15) >= v27
        || (updated = CVisual::UpdateWorldTransform(
                        this,
                        (const struct CVisualTree *)a2,
                        (struct CTreeData *)v22,
                        v2,
                        TreeData),
            v63 = updated,
            updated >= 0) )
      {
        if ( *((_QWORD *)v22 + 15) )
        {
          v76[0] = *(_OWORD *)(v22 + 40);
          v76[1] = *(_OWORD *)(v22 + 56);
          v76[2] = *(_OWORD *)(v22 + 72);
          v76[3] = *(_OWORD *)(v22 + 88);
          v77 = *((_DWORD *)v22 + 26);
          v70[0] = v22[17];
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2003292412, 0x65u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, -2003292412, 0x6E2u, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, updated, 0x793u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x6DDu, 0LL);
      }
    }
LABEL_35:
    if ( this == a2[7] )
    {
      v75 = 0;
      CVisual::GetRootTransform(this, (struct CMILMatrix *)v74);
      CMILMatrix::Multiply((CMILMatrix *)v76, (const struct CMILMatrix *)v74);
      CMILMatrix::Transform3DBoundsHelper<0>(v76, &v78, (char *)this + 140);
    }
    if ( !*((_QWORD *)this + 10) )
      goto LABEL_40;
    if ( (*((_BYTE *)this + 94) & 2) == 0 || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v76) )
    {
      v28 = (_DWORD *)*((_QWORD *)this + 28);
      if ( (*v28 & 0x1000000) == 0 )
        goto LABEL_40;
      v45 = (unsigned int)v28[1];
      v46 = v28 + 2;
      for ( k = 0LL; (unsigned int)k < (unsigned int)v45; ++v46 )
      {
        if ( *v46 == 8 )
          break;
        k = (unsigned int)(k + 1);
      }
      v48 = (unsigned int)k >= (unsigned int)v45
          ? 0LL
          : (_QWORD **)((char *)v28 + 8 * k - (((_BYTE)v45 + 15) & 7) + v45 + 15);
      v49 = *v48;
      if ( !v49 || !(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v49 + 200LL))(*v49) )
      {
LABEL_40:
        v73 = 0;
        v75 = 0;
        v70[0] = 0;
        CVisual::CalcCpuClippingTransform((__int64)this, 5, (__int64)a2, 0LL, v70, (CMILMatrix *)v72, (__int64)v74);
        if ( !v70[0] )
        {
LABEL_41:
          if ( *((float *)this + 37) < *v15
            || *((float *)this + 38) < *((float *)this + 36)
            || *((float *)this + 40) < *((float *)this + 39) )
          {
            *(_OWORD *)v15 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
            *(_QWORD *)((char *)this + 156) = qword_1803487E8;
          }
          return v5;
        }
        if ( this == a2[7] )
        {
          v73 = 0;
          CVisual::GetRootTransform(this, (struct CMILMatrix *)v72);
          CMILMatrix::Multiply((CMILMatrix *)v74, (const struct CMILMatrix *)v72);
        }
LABEL_47:
        CMILMatrix::Transform3DBoundsHelper<0>(v74, &v78, (char *)this + 140);
        goto LABEL_41;
      }
    }
    v30 = (_DWORD *)*((_QWORD *)this + 28);
    if ( (*v30 & 0x1000000) == 0 )
      goto LABEL_54;
    v50 = (unsigned int)v30[1];
    v51 = v30 + 2;
    for ( m = 0LL; (unsigned int)m < (unsigned int)v50; ++v51 )
    {
      if ( *v51 == 8 )
        break;
      m = (unsigned int)(m + 1);
    }
    v53 = (unsigned int)m >= (unsigned int)v50
        ? 0LL
        : (_QWORD **)((char *)v30 + 8 * m - (((_BYTE)v50 + 15) & 7) + v50 + 15);
    v54 = *v53;
    if ( v54 )
      v31 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v54 + 200LL))(*v54);
    else
LABEL_54:
      v31 = 0LL;
    if ( v70[0] )
    {
      if ( !v31 )
      {
        v59 = *((_QWORD *)this + 10);
        v73 = 0;
        CVisual::GetWorldTransform(v59, a2, 1LL, v72, 0LL, 0LL);
        if ( CMILMatrix::Invert((CMILMatrix *)v72) )
        {
          v75 = 0;
          CMILMatrix::Multiply((const struct CMILMatrix *)v76, (const struct CMILMatrix *)v72, (struct CMILMatrix *)v74);
          Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(this);
          if ( !Transform3DEffectNoRef )
            goto LABEL_47;
          Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)((char *)this + 132));
          v67 = *((_OWORD *)Matrix + 1);
          v72[0] = *(_OWORD *)Matrix;
          v68 = *((_OWORD *)Matrix + 2);
          v72[1] = v67;
          v69 = *((_OWORD *)Matrix + 3);
          LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
          v72[2] = v68;
          v72[3] = v69;
          v73 = (int)Matrix;
          if ( CMILMatrix::IsIdentity<1>((__int64)v72) )
            goto LABEL_47;
          if ( CMILMatrix::Invert((CMILMatrix *)v72) )
          {
            CMILMatrix::Multiply(
              (const struct CMILMatrix *)v72,
              (const struct CMILMatrix *)v74,
              (struct CMILMatrix *)v74);
            goto LABEL_47;
          }
        }
      }
    }
    else if ( !v31 )
    {
      goto LABEL_41;
    }
    *(_OWORD *)v15 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *(_QWORD *)((char *)this + 156) = qword_1803487E8;
    goto LABEL_41;
  }
  return v5;
}
