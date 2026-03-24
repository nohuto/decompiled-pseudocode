/*
 * XREFs of ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18008C0D0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088930 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x180005F64 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18000C27C (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180041A78 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180041AC8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006C068 (-GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18006C618 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007A590 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18007AC58 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x180081420 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180084C80 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008C970 (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18009FC08 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18009FDC8 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A7320 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B7380 (-GetWorldTransform@CVisual@@QEAAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800BA570 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800C208C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800C666C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800D6404 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::ConvertInnerToOuterBounds(CVisual *this, CVisual **a2)
{
  bool v2; // r13
  unsigned int v5; // r12d
  _DWORD *v6; // r11
  int v7; // edi
  _QWORD *ProjectedShadowReceivers; // rax
  __int64 v9; // rdi
  float v10; // xmm6_4
  float v11; // xmm7_4
  struct CEffect *EffectInternal; // rsi
  __int64 v13; // rcx
  float v14; // xmm0_4
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  unsigned int i; // eax
  __int64 *v18; // rdi
  int v19; // eax
  __int64 v20; // rcx
  float v21; // edx
  float *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  float *v25; // rsi
  float v26; // xmm0_4
  int v27; // ecx
  unsigned int v28; // eax
  __int64 v29; // xmm1_8
  unsigned __int8 (__fastcall *v30)(CVisual **); // rax
  __int64 v31; // rcx
  char *v32; // rdi
  struct CTreeData *TreeData; // r14
  __int64 v34; // rcx
  _DWORD *v35; // r8
  __int64 v36; // rdx
  _BYTE *v37; // rcx
  unsigned int j; // eax
  _QWORD **v39; // rcx
  __int64 *TreeDataListHead; // rax
  _QWORD *v41; // rcx
  CVisual *v42; // rax
  CVisual *v43; // r13
  __int64 *v44; // rax
  unsigned __int64 v45; // rax
  int updated; // eax
  int v47; // r14d
  __int64 v48; // rcx
  __int64 v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // r10
  __int64 v52; // rcx
  _QWORD **v53; // rdx
  unsigned int Slot; // eax
  __int64 v55; // r10
  __int64 v56; // rcx
  _QWORD **v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  CTransform3D *Transform3DEffectNoRef; // rax
  const struct CMILMatrix *Matrix; // rax
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  char v66[4]; // [rsp+40h] [rbp-C0h] BYREF
  float v67; // [rsp+44h] [rbp-BCh]
  _OWORD v68[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v69; // [rsp+90h] [rbp-70h]
  _BYTE v70[64]; // [rsp+A0h] [rbp-60h] BYREF
  int v71; // [rsp+E0h] [rbp-20h]
  _OWORD v72[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v73; // [rsp+130h] [rbp+30h]
  __int128 v74; // [rsp+140h] [rbp+40h] BYREF
  __int64 v75; // [rsp+150h] [rbp+50h]

  v2 = 0;
  v5 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 56LL))(this, 91LL)
    && ((*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 232LL))(this) || *((_QWORD *)this + 77))
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
    v15 = (unsigned int)v6[1];
    v16 = v6 + 2;
    for ( i = 0; i < (unsigned int)v15; ++v16 )
    {
      if ( *v16 == 6 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v15 )
      v18 = 0LL;
    else
      v18 = (__int64 *)((char *)v6 + 8LL * i - (((_BYTE)v15 + 15) & 7) + v15 + 15);
    v9 = *v18;
    if ( v9 )
    {
      v19 = CVisual::CalculateRootBounds(this);
      v5 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x5C4u, 0LL);
        return v5;
      }
      *(_OWORD *)(v9 + 64) = *(_OWORD *)((char *)this + 140);
      *(_QWORD *)(v9 + 80) = *(_QWORD *)((char *)this + 156);
    }
  }
  else
  {
    v9 = 0LL;
  }
  v10 = *(float *)&FLOAT_1_0;
  v11 = *(float *)&FLOAT_1_0;
  if ( (**((_DWORD **)this + 28) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           56LL) )
    {
      v11 = *((float *)EffectInternal + 18);
    }
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v11, 0.0))) & _xmm) < 0.0000011920929 )
    goto LABEL_117;
  if ( this != a2[7] )
  {
    v13 = *((_QWORD *)this + 27);
    if ( (*(_DWORD *)(v13 + 4) & 0x8000000) != 0 )
    {
      v21 = *(float *)(v13 + 12);
      v22 = (float *)(v13 + 12);
      if ( (LODWORD(v21) & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v22 = (float *)((char *)v22 + (LODWORD(v21) & 0xFFFFFF) + 4);
          v21 = *v22;
        }
        while ( (*(_DWORD *)v22 & 0x7F000000) != 0x5000000 );
      }
      v67 = v22[1];
      v14 = v67;
    }
    else
    {
      v14 = *(float *)&FLOAT_1_0;
    }
    v10 = fminf(1.0, fmaxf(v14, 0.0));
  }
  if ( COERCE_FLOAT(LODWORD(v10) & _xmm) < 0.0000011920929 )
  {
LABEL_117:
    *(_QWORD *)((char *)this + 156) = 0LL;
    *(_QWORD *)((char *)this + 148) = 0LL;
    *(_QWORD *)((char *)this + 140) = 0LL;
    return v5;
  }
  if ( !v9 )
  {
    v23 = CVisual::CalculateRootBounds(this);
    v5 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x5D6u, 0LL);
      return v5;
    }
  }
  v25 = (float *)((char *)this + 140);
  v26 = *((float *)this + 40);
  v27 = (v26 <= *((float *)this + 39)) + 1;
  if ( *((float *)this + 37) > *((float *)this + 35) )
    v27 = v26 <= *((float *)this + 39);
  v28 = v27 + 1;
  if ( *((float *)this + 38) > *((float *)this + 36) )
    v28 = v27;
  if ( v28 <= 1 )
  {
    v29 = *(_QWORD *)((char *)this + 156);
    v30 = (unsigned __int8 (__fastcall *)(CVisual **))*((_QWORD *)*a2 + 25);
    v74 = *(_OWORD *)v25;
    v73 = 0;
    v75 = v29;
    if ( v30(a2) )
    {
      v32 = (char *)this + 320;
    }
    else
    {
      TreeDataListHead = (__int64 *)CVisual::GetTreeDataListHead(this);
      if ( !TreeDataListHead )
        goto LABEL_82;
      v31 = *TreeDataListHead;
      if ( (__int64 *)*TreeDataListHead == TreeDataListHead )
        goto LABEL_82;
      while ( 1 )
      {
        v32 = (char *)(v31 - 288);
        if ( *(CVisual ***)(v31 + 32) == a2 )
          break;
        v31 = *(_QWORD *)v31;
        if ( (__int64 *)v31 == TreeDataListHead )
          goto LABEL_82;
      }
    }
    if ( v32 )
    {
      TreeData = 0LL;
      if ( this == a2[7] )
        goto LABEL_75;
      v34 = 0LL;
      if ( g_pComposition )
        v34 = *((_QWORD *)g_pComposition + 44);
      if ( v32[18] && *((_QWORD *)v32 + 35) == v34 )
        goto LABEL_64;
      v35 = (_DWORD *)*((_QWORD *)this + 28);
      if ( (*v35 & 0x1000000) == 0 )
        goto LABEL_64;
      v36 = (unsigned int)v35[1];
      v37 = v35 + 2;
      for ( j = 0; j < (unsigned int)v36; ++v37 )
      {
        if ( *v37 == 8 )
          break;
        ++j;
      }
      v39 = j >= (unsigned int)v36 ? 0LL : (_QWORD **)((char *)v35 + v36 + 8LL * j - (((_BYTE)v36 + 15) & 7) + 15);
      v41 = *v39;
      if ( v41 && (v42 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v41 + 200LL))(*v41)) != 0LL )
      {
        v2 = 1;
        TreeData = CVisual::FindTreeData(v42, (const struct CVisualTree *)a2);
      }
      else
      {
LABEL_64:
        v43 = (CVisual *)*((_QWORD *)this + 10);
        if ( (*((unsigned __int8 (__fastcall **)(CVisual **))*a2 + 25))(a2) )
        {
          TreeData = (CVisual *)((char *)v43 + 320);
        }
        else
        {
          v44 = (__int64 *)CVisual::GetTreeDataListHead(v43);
          if ( v44 )
          {
            v31 = *v44;
            if ( (__int64 *)*v44 != v44 )
            {
              while ( *(CVisual ***)(v31 + 32) != a2 )
              {
                v31 = *(_QWORD *)v31;
                if ( (__int64 *)v31 == v44 )
                  goto LABEL_72;
              }
              TreeData = (struct CTreeData *)(v31 - 288);
            }
          }
        }
LABEL_72:
        v2 = 0;
      }
      if ( !TreeData )
LABEL_75:
        v45 = 1LL;
      else
        v45 = *((_QWORD *)TreeData + 15);
      if ( *((_QWORD *)v32 + 15) >= v45
        || (updated = CVisual::UpdateWorldTransform(
                        this,
                        (const struct CVisualTree *)a2,
                        (struct CTreeData *)v32,
                        v2,
                        TreeData),
            v47 = updated,
            updated >= 0) )
      {
        if ( *((_QWORD *)v32 + 15) )
        {
          v72[0] = *(_OWORD *)(v32 + 40);
          v72[1] = *(_OWORD *)(v32 + 56);
          v72[2] = *(_OWORD *)(v32 + 72);
          v72[3] = *(_OWORD *)(v32 + 88);
          v73 = *((_DWORD *)v32 + 26);
          v66[0] = v32[17];
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2003292412, 0x69u, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, -2003292412, 0x6FFu, 0LL);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, updated, 0x7B0u, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x6FAu, 0LL);
      }
    }
LABEL_82:
    if ( this == a2[7] )
    {
      v71 = 0;
      CVisual::GetRootTransform(this, (struct CMILMatrix *)v70);
      CMILMatrix::Multiply((CMILMatrix *)v72, (const struct CMILMatrix *)v70);
      CMILMatrix::Transform3DBoundsHelper<0>(v72, &v74, (char *)this + 140);
    }
    if ( *((_QWORD *)this + 10)
      && ((*((_BYTE *)this + 94) & 2) != 0 && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v72)
       || (**((_DWORD **)this + 28) & 0x1000000) != 0
       && ((v50 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*((_QWORD *)this + 28), 8LL),
            v52 = *(unsigned int *)(v51 + 4),
            v50 >= (unsigned int)v52)
         ? (v53 = 0LL)
         : (v53 = (_QWORD **)(v52 + 15 + v51 + 8LL * v50 - (((_BYTE)v52 + 15) & 7))),
           *v53 && (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v53 + 200LL))(**v53))) )
    {
      if ( (**((_DWORD **)this + 28) & 0x1000000) != 0
        && ((Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*((_QWORD *)this + 28), 8LL),
             v56 = *(unsigned int *)(v55 + 4),
             Slot >= (unsigned int)v56)
          ? (v57 = 0LL)
          : (v57 = (_QWORD **)(v56 + 15 + v55 + 8LL * Slot - (((_BYTE)v56 + 15) & 7))),
            *v57) )
      {
        v58 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v57 + 200LL))(**v57);
      }
      else
      {
        v58 = 0LL;
      }
      if ( v66[0] )
      {
        if ( !v58 )
        {
          v59 = *((_QWORD *)this + 10);
          v69 = 0;
          CVisual::GetWorldTransform(v59, a2, 1LL, v68, 0LL, 0LL);
          if ( CMILMatrix::Invert((CMILMatrix *)v68) )
          {
            v71 = 0;
            CMILMatrix::Multiply(
              (const struct CMILMatrix *)v72,
              (const struct CMILMatrix *)v68,
              (struct CMILMatrix *)v70);
            Transform3DEffectNoRef = CVisual::GetTransform3DEffectNoRef(this);
            if ( !Transform3DEffectNoRef )
              goto LABEL_112;
            Matrix = CTransform3D::GetMatrix(Transform3DEffectNoRef, (const struct D2D_SIZE_F *)((char *)this + 132));
            v62 = *((_OWORD *)Matrix + 1);
            v68[0] = *(_OWORD *)Matrix;
            v63 = *((_OWORD *)Matrix + 2);
            v68[1] = v62;
            v64 = *((_OWORD *)Matrix + 3);
            LODWORD(Matrix) = *((_DWORD *)Matrix + 16);
            v68[2] = v63;
            v68[3] = v64;
            v69 = (int)Matrix;
            if ( CMILMatrix::IsIdentity<1>((__int64)v68) )
              goto LABEL_112;
            if ( CMILMatrix::Invert((CMILMatrix *)v68) )
            {
              CMILMatrix::Multiply(
                (const struct CMILMatrix *)v68,
                (const struct CMILMatrix *)v70,
                (struct CMILMatrix *)v70);
LABEL_112:
              CMILMatrix::Transform3DBoundsHelper<0>(v70, &v74, (char *)this + 140);
              goto LABEL_113;
            }
          }
        }
        goto LABEL_108;
      }
      if ( v58 )
      {
LABEL_108:
        *(_OWORD *)v25 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        *(_QWORD *)((char *)this + 156) = qword_1803467E8;
      }
    }
    else
    {
      v69 = 0;
      v71 = 0;
      v66[0] = 0;
      CVisual::CalcCpuClippingTransform((__int64)this, 5, (__int64)a2, 0LL, v66, (CMILMatrix *)v68, (__int64)v70);
      if ( v66[0] )
      {
        if ( this == a2[7] )
        {
          v69 = 0;
          CVisual::GetRootTransform(this, (struct CMILMatrix *)v68);
          CMILMatrix::Multiply((CMILMatrix *)v70, (const struct CMILMatrix *)v68);
        }
        goto LABEL_112;
      }
    }
LABEL_113:
    if ( *((float *)this + 37) < *v25
      || *((float *)this + 38) < *((float *)this + 36)
      || *((float *)this + 40) < *((float *)this + 39) )
    {
      *(_OWORD *)v25 = TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      *(_QWORD *)((char *)this + 156) = qword_1803467E8;
    }
  }
  return v5;
}
