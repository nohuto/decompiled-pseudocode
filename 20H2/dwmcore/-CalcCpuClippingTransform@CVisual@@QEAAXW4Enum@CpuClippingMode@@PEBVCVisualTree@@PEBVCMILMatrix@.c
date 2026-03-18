/*
 * XREFs of ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x18008C1B0
 * Callers:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x180012340 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18001263C (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800896C0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18008FBC0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800936C0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180094DD0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180096E60 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A8E00 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800AAAA8 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180199684 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801998E0 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1800170FC (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18004E618 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18004E790 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18004EF4C (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800859E8 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18008CFA0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18008FA10 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x180091A60 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800AA8E8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x1800AABC0 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x1801AC358 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18020E908 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CVisual::CalcCpuClippingTransform(
        __int64 a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        _BYTE *a5,
        CMILMatrix *a6,
        __int64 a7)
{
  CMILMatrix *v7; // rdi
  char v8; // r10
  CTransform3D *v11; // r12
  _DWORD *v14; // rax
  _BYTE *v15; // r11
  __int64 v16; // rsi
  float v17; // xmm7_4
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rax
  bool v21; // r15
  bool v22; // r14
  __int64 v23; // rsi
  char v24; // al
  char v25; // dl
  _BYTE *v26; // r11
  float v27; // xmm0_4
  int v28; // eax
  float v29; // xmm1_4
  int v30; // eax
  float v31; // xmm1_4
  int v32; // eax
  float *v33; // rdx
  bool v34; // al
  __int128 v35; // xmm0
  __int128 v36; // xmm0
  int v37; // xmm0_4
  int v38; // xmm1_4
  char v39; // al
  char v40; // al
  char v41; // cl
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm1
  int v51; // eax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  float v54; // xmm4_4
  float v55; // xmm5_4
  float v56; // xmm2_4
  float v57; // xmm0_4
  char v58; // al
  float v59; // xmm1_4
  float v60; // xmm2_4
  float v61; // xmm3_4
  float v62; // xmm0_4
  float v63; // xmm4_4
  float v64; // xmm0_4
  float v65; // xmm3_4
  float v66; // xmm1_4
  float v67; // xmm5_4
  float v68; // xmm1_4
  float v69; // xmm2_4
  float v70; // xmm7_4
  float v71; // xmm2_4
  float v72; // xmm7_4
  float v73; // xmm2_4
  char v74; // al
  char v75; // cl
  struct CEffect *EffectInternal; // rsi
  struct CEffect *v77; // rax
  __int128 *v78; // rax
  __int128 v79; // xmm1
  float v80; // xmm2_4
  float v81; // xmm1_4
  char v82; // cl
  const struct D2D_SIZE_F *v83; // rdx
  const struct CMILMatrix *Matrix; // rax
  const struct CMILMatrix *v85; // rax
  __m128 v86; // xmm2
  __m128 v87; // rt1
  __m128 v88; // xmm2
  __m128 v89; // rt1
  __m128 v90; // xmm2
  __m128 v91; // rt1
  unsigned int v92; // edx
  __int64 v93; // rcx
  int v94; // xmm1_4
  int v95; // xmm0_4
  int v96; // xmm1_4
  int v97; // xmm0_4
  int v98; // xmm1_4
  int v99; // xmm0_4
  int v100; // xmm1_4
  int v101; // xmm0_4
  int v102; // xmm1_4
  int v103; // xmm0_4
  int v104; // xmm1_4
  int v105; // xmm0_4
  int v106; // xmm1_4
  int v107; // xmm0_4
  int v108; // xmm1_4
  int v109; // ecx
  int v110; // r8d
  int v111; // r9d
  int v112; // xmm1_4
  int v113; // xmm0_4
  int v114; // xmm1_4
  int v115; // xmm0_4
  int v116; // xmm1_4
  int v117; // xmm0_4
  int v118; // xmm1_4
  int v119; // xmm0_4
  int v120; // xmm1_4
  int v121; // xmm0_4
  int v122; // xmm1_4
  int v123; // xmm0_4
  int v124; // xmm1_4
  int v125; // xmm0_4
  int v126; // xmm1_4
  int v127; // ecx
  int v128; // r8d
  int v129; // r9d
  int v130; // [rsp+B8h] [rbp-80h] BYREF
  int v131; // [rsp+BCh] [rbp-7Ch] BYREF
  int v132; // [rsp+C0h] [rbp-78h] BYREF
  int v133; // [rsp+C4h] [rbp-74h] BYREF
  int v134; // [rsp+C8h] [rbp-70h] BYREF
  int v135; // [rsp+CCh] [rbp-6Ch] BYREF
  int v136; // [rsp+D0h] [rbp-68h] BYREF
  int v137; // [rsp+D4h] [rbp-64h] BYREF
  int v138; // [rsp+D8h] [rbp-60h] BYREF
  int v139; // [rsp+DCh] [rbp-5Ch] BYREF
  int v140; // [rsp+E0h] [rbp-58h] BYREF
  int v141; // [rsp+E4h] [rbp-54h] BYREF
  struct CInteraction *InteractionInternal; // [rsp+E8h] [rbp-50h] BYREF
  struct CInteraction *v143; // [rsp+F0h] [rbp-48h] BYREF
  __int128 v144; // [rsp+F8h] [rbp-40h] BYREF
  __int128 v145; // [rsp+108h] [rbp-30h]
  __int128 v146; // [rsp+118h] [rbp-20h]
  __int128 v147; // [rsp+128h] [rbp-10h]
  int v148; // [rsp+138h] [rbp+0h]
  char v149[56]; // [rsp+148h] [rbp+10h] BYREF
  int v150; // [rsp+208h] [rbp+D0h] BYREF
  __int128 v151; // [rsp+210h] [rbp+D8h] BYREF

  v7 = a6;
  v8 = 0;
  v11 = 0LL;
  v14 = *(_DWORD **)(a1 + 224);
  LOBYTE(v151) = 0;
  if ( (*v14 & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal((CVisual *)a1);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           186LL) )
    {
      v11 = EffectInternal;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                EffectInternal,
                56LL) )
    {
      v11 = (CTransform3D *)*((_QWORD *)EffectInternal + 10);
    }
    v8 = 0;
  }
  v15 = a5;
  v16 = a7;
  *a5 = 0;
  if ( a2 == 3 )
    goto LABEL_52;
  if ( a2 == 4 && !v16 )
  {
LABEL_87:
    *v15 = 1;
LABEL_28:
    *(_QWORD *)v7 = 1065353216LL;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_DWORD *)v7 + 4) = 0;
    *(_QWORD *)((char *)v7 + 20) = 1065353216LL;
    *(_QWORD *)((char *)v7 + 28) = 0LL;
    *((_DWORD *)v7 + 9) = 0;
    *((_QWORD *)v7 + 5) = 1065353216LL;
    *((_QWORD *)v7 + 6) = 0LL;
    *((_DWORD *)v7 + 14) = 0;
    *((_DWORD *)v7 + 15) = 1065353216;
    *((_BYTE *)v7 + 64) = 85;
    *((_BYTE *)v7 + 65) = 125;
    goto LABEL_29;
  }
  if ( a4 )
  {
    v36 = *a4;
    v8 = 1;
    LOBYTE(v151) = 1;
    *(_OWORD *)v7 = v36;
    *((_OWORD *)v7 + 1) = a4[1];
    *((_OWORD *)v7 + 2) = a4[2];
    *((_OWORD *)v7 + 3) = a4[3];
    *((_DWORD *)v7 + 16) = *((_DWORD *)a4 + 16);
  }
  if ( a1 != *(_QWORD *)(a3 + 56) )
  {
    v17 = *(float *)(a1 + 116);
    if ( v17 != 0.0 || *(float *)(a1 + 120) != 0.0 || *(float *)(a1 + 112) != 0.0 )
    {
      if ( v8 )
      {
        v54 = *(float *)(a1 + 120);
        v55 = *(float *)(a1 + 112);
        v56 = v17 * *(float *)v7;
        v57 = v54 * *((float *)v7 + 4);
        v58 = *((_BYTE *)v7 + 64) & 0xFC;
        v59 = v55 * *((float *)v7 + 8);
        *((_BYTE *)v7 + 64) = v58;
        v60 = (float)(v56 + v57) + v59;
        v61 = (float)(v17 * *((float *)v7 + 1)) + (float)(v54 * *((float *)v7 + 5));
        v62 = v54;
        v63 = v54 * *((float *)v7 + 7);
        v64 = v62 * *((float *)v7 + 6);
        v65 = v61 + (float)(v55 * *((float *)v7 + 9));
        v66 = v55;
        v67 = v55 * *((float *)v7 + 11);
        v68 = v66 * *((float *)v7 + 10);
        *((float *)v7 + 12) = v60 + *((float *)v7 + 12);
        v69 = v17;
        v70 = (float)(v17 * *((float *)v7 + 3)) + v63;
        v71 = (float)(v69 * *((float *)v7 + 2)) + v64;
        *((float *)v7 + 13) = v65 + *((float *)v7 + 13);
        v72 = (float)(v70 + v67) + *((float *)v7 + 15);
        v73 = (float)(v71 + v68) + *((float *)v7 + 14);
        *((float *)v7 + 15) = v72;
        *((float *)v7 + 14) = v73;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v72 - 1.0) & _xmm) >= 0.000081380211 )
        {
          *((_BYTE *)v7 + 64) = v58 | 0xF0;
          v74 = *((_BYTE *)v7 + 65) | 0x3F;
          *((_BYTE *)v7 + 65) = v74;
        }
        else
        {
          v74 = *((_BYTE *)v7 + 65);
        }
        *((_BYTE *)v7 + 65) = v74 & 0x3F;
        *v15 = 1;
      }
      else
      {
        v37 = *(_DWORD *)(a1 + 120);
        v8 = 1;
        v38 = *(_DWORD *)(a1 + 112);
        *(_QWORD *)v7 = 1065353216LL;
        *((_QWORD *)v7 + 1) = 0LL;
        *((_DWORD *)v7 + 4) = 0;
        *(_QWORD *)((char *)v7 + 20) = 1065353216LL;
        *(_QWORD *)((char *)v7 + 28) = 0LL;
        *((_DWORD *)v7 + 9) = 0;
        *((_QWORD *)v7 + 5) = 1065353216LL;
        *((float *)v7 + 12) = v17;
        *((_DWORD *)v7 + 13) = v37;
        *((_DWORD *)v7 + 14) = v38;
        *((_DWORD *)v7 + 15) = 1065353216;
        v39 = *((_BYTE *)v7 + 64) & 0xF4;
        LOBYTE(v151) = 1;
        *((_BYTE *)v7 + 64) = v39 & 0xB | 0x54;
        v40 = *((_BYTE *)v7 + 65) & 0xC0 | 0x3D;
        *((_BYTE *)v7 + 65) = v40;
        *((_BYTE *)v7 + 65) = v40 & 0x3F;
        *v15 = 1;
      }
    }
    v18 = *(_QWORD *)(a1 + 232);
    if ( v18 )
    {
      v33 = (float *)(a1 + 132);
      if ( !v8 )
      {
        v34 = (*(_BYTE *)(v18 + 32) & 1) != 0;
        if ( a1 != -132 )
        {
          if ( (*(_BYTE *)(v18 + 32) & 1) == 0
            && *(_BYTE *)(v18 + 148)
            && (*(float *)(v18 + 140) != *v33 || *(float *)(v18 + 144) != *(float *)(a1 + 136)) )
          {
            v34 = 1;
          }
          *(_QWORD *)(v18 + 140) = *(_QWORD *)v33;
        }
        if ( v34 )
        {
          (*(void (__fastcall **)(__int64, float *, __int64))(*(_QWORD *)v18 + 216LL))(v18, v33, v18 + 72);
          *(_DWORD *)(v18 + 32) &= ~1u;
          v15 = a5;
        }
        v35 = *(_OWORD *)(v18 + 72);
        v8 = 1;
        LOBYTE(v151) = 1;
        *(_OWORD *)v7 = v35;
        *((_OWORD *)v7 + 1) = *(_OWORD *)(v18 + 88);
        *((_OWORD *)v7 + 2) = *(_OWORD *)(v18 + 104);
        *((_OWORD *)v7 + 3) = *(_OWORD *)(v18 + 120);
        *((_DWORD *)v7 + 16) = *(_DWORD *)(v18 + 136);
LABEL_52:
        *v15 = 1;
        goto LABEL_11;
      }
      v41 = *(_BYTE *)(v18 + 32) & 1;
      if ( a1 != -132 )
      {
        if ( (*(_BYTE *)(v18 + 32) & 1) == 0
          && *(_BYTE *)(v18 + 148)
          && (*(float *)(v18 + 140) != *v33 || *(float *)(v18 + 144) != *(float *)(a1 + 136)) )
        {
          v41 = 1;
        }
        *(_QWORD *)(v18 + 140) = *(_QWORD *)v33;
      }
      if ( v41 )
      {
        (*(void (__fastcall **)(__int64, float *, __int64))(*(_QWORD *)v18 + 216LL))(v18, v33, v18 + 72);
        *(_DWORD *)(v18 + 32) &= ~1u;
      }
      v42 = *(_OWORD *)(v18 + 72);
      v43 = *(_OWORD *)(v18 + 88);
      v148 = *(_DWORD *)(v18 + 136);
      v144 = v42;
      v44 = *(_OWORD *)(v18 + 104);
      v145 = v43;
      v45 = *(_OWORD *)(v18 + 120);
      v146 = v44;
      v147 = v45;
      if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(&v144, v33) )
      {
        v46 = *(_OWORD *)v7;
        v47 = *((_OWORD *)v7 + 1);
        v148 = *((_DWORD *)v7 + 16);
        v144 = v46;
        v48 = *((_OWORD *)v7 + 2);
        v145 = v47;
        v49 = *((_OWORD *)v7 + 3);
LABEL_67:
        v147 = v49;
        v146 = v48;
LABEL_68:
        v50 = v145;
        v51 = v148;
        *(_OWORD *)v7 = v144;
        *v15 = 1;
        v52 = v146;
        *((_OWORD *)v7 + 1) = v50;
        v53 = v147;
        *((_OWORD *)v7 + 2) = v52;
        *((_OWORD *)v7 + 3) = v53;
        *((_DWORD *)v7 + 16) = v51;
        goto LABEL_11;
      }
      CMILMatrix::Ensure3DFlags(v7);
      v75 = *((_BYTE *)v7 + 64);
      if ( (v75 & 3) == 1 )
        goto LABEL_68;
      if ( (v75 & 0xC) != 4 )
      {
        if ( (v75 & 0xC0) == 0x40 )
        {
          v80 = *((float *)v7 + 5);
          v81 = *(float *)v7;
        }
        else
        {
          if ( (*((_BYTE *)v7 + 65) & 0xC) != 4 )
          {
            v78 = Windows::Foundation::Numerics::operator*((__int64)v149, &v144, v7);
            v148 = 0;
            v79 = v78[1];
            v144 = *v78;
            v48 = v78[2];
            v145 = v79;
            v49 = v78[3];
            goto LABEL_67;
          }
          CMILMatrix::Rotate90((CMILMatrix *)&v144);
          LODWORD(v81) = *((_DWORD *)v7 + 4) ^ _xmm;
          v80 = *((float *)v7 + 1);
        }
        CMILMatrix::Scale((CMILMatrix *)&v144, v81, v80, *((float *)v7 + 10));
      }
      CMILMatrix::Translate((CMILMatrix *)&v144, *((float *)v7 + 12), *((float *)v7 + 13), *((float *)v7 + 14));
      goto LABEL_68;
    }
  }
LABEL_11:
  v19 = 0LL;
  if ( v16 )
  {
    if ( v8 )
    {
      *(_OWORD *)v16 = *(_OWORD *)v7;
      *(_OWORD *)(v16 + 16) = *((_OWORD *)v7 + 1);
      *(_OWORD *)(v16 + 32) = *((_OWORD *)v7 + 2);
      *(_OWORD *)(v16 + 48) = *((_OWORD *)v7 + 3);
      *(_DWORD *)(v16 + 64) = *((_DWORD *)v7 + 16);
    }
    else
    {
      *(_QWORD *)v16 = 1065353216LL;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_DWORD *)(v16 + 16) = 0;
      *(_QWORD *)(v16 + 20) = 1065353216LL;
      *(_QWORD *)(v16 + 28) = 0LL;
      *(_DWORD *)(v16 + 36) = 0;
      *(_QWORD *)(v16 + 40) = 1065353216LL;
      *(_QWORD *)(v16 + 48) = 0LL;
      *(_DWORD *)(v16 + 56) = 0;
      *(_DWORD *)(v16 + 60) = 1065353216;
      *(_WORD *)(v16 + 64) = 32085;
    }
  }
  if ( a2 == 4 )
    goto LABEL_87;
  if ( !v11 || *(_DWORD *)(a1 + 100) == 2 )
  {
    v20 = *(_QWORD *)(a1 + 80);
    v21 = *(_DWORD *)(a1 + 100) != 1;
    v22 = v20 && *(_DWORD *)(v20 + 100) == 1;
    v23 = *(_QWORD *)(a1 + 72);
    if ( (v23 & 2) != 0 )
      v23 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v23) = v23 & 1;
    LOBYTE(a7) = (**(_DWORD **)(a1 + 224) & 0x400000) != 0
              && (v77 = CVisual::GetEffectInternal((CVisual *)a1),
                  (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v77 + 56LL))(v77, 59LL));
    v24 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 232LL))(a1, v19);
    if ( !v21 )
      goto LABEL_98;
    if ( !v22 )
    {
      v8 = v151;
      goto LABEL_26;
    }
    if ( (_DWORD)v23 )
    {
      v8 = v151;
      v15 = a5;
    }
    else
    {
LABEL_98:
      v8 = v151;
      v15 = a5;
      if ( !v22 || !(_BYTE)a7 && !v24 )
        goto LABEL_26;
    }
    v19 = 0LL;
  }
  if ( v8 )
  {
    v82 = *((_BYTE *)v7 + 64);
  }
  else
  {
    *(_QWORD *)v7 = 1065353216LL;
    v8 = 1;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_DWORD *)v7 + 4) = 0;
    *(_QWORD *)((char *)v7 + 20) = 1065353216LL;
    *((_DWORD *)v7 + 7) = 0;
    *((_QWORD *)v7 + 6) = 0LL;
    *((_DWORD *)v7 + 14) = 0;
    *((_DWORD *)v7 + 15) = 1065353216;
    LOBYTE(v151) = 1;
    v82 = 85;
    *((_BYTE *)v7 + 64) = 85;
    *((_BYTE *)v7 + 65) = 125;
  }
  *((_QWORD *)v7 + 4) = 0LL;
  *((_BYTE *)v7 + 64) = v82 | 0xF;
  *((_QWORD *)v7 + 5) = 0LL;
  *v15 = 1;
LABEL_26:
  if ( v11 )
  {
    v83 = (const struct D2D_SIZE_F *)(a1 + 132);
    if ( v8 )
    {
      Matrix = CTransform3D::GetMatrix(v11, v83);
      CMILMatrix::Multiply(Matrix, v7, v7);
      v8 = v151;
    }
    else
    {
      v85 = CTransform3D::GetMatrix(v11, v83);
      v8 = 1;
      *(_OWORD *)v7 = *(_OWORD *)v85;
      *((_OWORD *)v7 + 1) = *((_OWORD *)v85 + 1);
      *((_OWORD *)v7 + 2) = *((_OWORD *)v85 + 2);
      *((_OWORD *)v7 + 3) = *((_OWORD *)v85 + 3);
      *((_DWORD *)v7 + 16) = *((_DWORD *)v85 + 16);
    }
    *a5 = 1;
  }
  if ( !v8 )
    goto LABEL_28;
  if ( (*(_BYTE *)(a1 + 94) & 2) != 0 )
  {
    if ( (LOBYTE(v19) = 1, (unsigned __int8)CMILMatrix::Is2DAffine<1>(v7, v19))
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v7 + 1) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v7 + 4) - 0.0) & _xmm) < 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)v7 - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)v7 + 5) - 0.0) & _xmm) < 0.000081380211 )
    {
      v27 = *((float *)v7 + 12);
      if ( (LODWORD(v27) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v86 = 0LL;
        v86.m128_f32[0] = (float)(int)v27 - v27;
        v87.m128_f32[0] = FLOAT_N0_5;
        LODWORD(v151) = _mm_cmple_ss(v86, v87).m128_u32[0];
        v28 = (int)v27 - v151;
      }
      else
      {
        *(float *)&v151 = v27 + 6291456.25;
        v28 = (int)((_DWORD)v151 << 10) >> 11;
      }
      v29 = *((float *)v7 + 13);
      *((float *)v7 + 12) = (float)v28;
      if ( (LODWORD(v29) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v88 = 0LL;
        v88.m128_f32[0] = (float)(int)v29 - v29;
        v89.m128_f32[0] = FLOAT_N0_5;
        LODWORD(v151) = _mm_cmple_ss(v88, v89).m128_u32[0];
        v30 = (int)v29 - v151;
      }
      else
      {
        *(float *)&v151 = v29 + 6291456.25;
        v30 = (int)((_DWORD)v151 << 10) >> 11;
      }
      v31 = *((float *)v7 + 14);
      *((float *)v7 + 13) = (float)v30;
      if ( (LODWORD(v31) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v90 = 0LL;
        v90.m128_f32[0] = (float)(int)v31 - v31;
        v91.m128_f32[0] = FLOAT_N0_5;
        LODWORD(v151) = _mm_cmple_ss(v90, v91).m128_u32[0];
        v32 = (int)v31 - v151;
      }
      else
      {
        *(float *)&v151 = v31 + 6291456.25;
        v32 = (int)((_DWORD)v151 << 10) >> 11;
      }
      *v26 = v25;
      *((float *)v7 + 14) = (float)v32;
    }
  }
LABEL_29:
  if ( (*(_BYTE *)(a1 + 264) & 4) != 0 )
  {
    v92 = dword_180341E80;
    v93 = qword_180341E98;
    if ( (unsigned int)dword_180341E80 > 4 && (qword_180341E90 & 2) != 0 && (qword_180341E98 & 2) == qword_180341E98 )
    {
      v94 = *((_DWORD *)v7 + 14);
      LODWORD(v151) = *((_DWORD *)v7 + 15);
      v95 = *((_DWORD *)v7 + 13);
      LODWORD(a5) = v94;
      v96 = *((_DWORD *)v7 + 12);
      LODWORD(a7) = v95;
      v97 = *((_DWORD *)v7 + 11);
      v150 = v96;
      v98 = *((_DWORD *)v7 + 10);
      v130 = v97;
      v99 = *((_DWORD *)v7 + 9);
      v131 = v98;
      v100 = *((_DWORD *)v7 + 8);
      v132 = v99;
      v101 = *((_DWORD *)v7 + 7);
      v133 = v100;
      v102 = *((_DWORD *)v7 + 6);
      v134 = v101;
      v103 = *((_DWORD *)v7 + 5);
      v135 = v102;
      v104 = *((_DWORD *)v7 + 4);
      v136 = v103;
      v105 = *((_DWORD *)v7 + 3);
      v137 = v104;
      v106 = *((_DWORD *)v7 + 2);
      v138 = v105;
      v107 = *((_DWORD *)v7 + 1);
      v139 = v106;
      v108 = *(_DWORD *)v7;
      v140 = v107;
      v141 = v108;
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)a1);
      v143 = (struct CInteraction *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v109,
        (unsigned int)&unk_1802E4D43,
        v110,
        v111,
        (__int64)&v143,
        (__int64)&InteractionInternal,
        (__int64)&v141,
        (__int64)&v140,
        (__int64)&v139,
        (__int64)&v138,
        (__int64)&v137,
        (__int64)&v136,
        (__int64)&v135,
        (__int64)&v134,
        (__int64)&v133,
        (__int64)&v132,
        (__int64)&v131,
        (__int64)&v130,
        (__int64)&v150,
        (__int64)&a7,
        (__int64)&a5,
        (__int64)&v151);
      v93 = qword_180341E98;
      v92 = dword_180341E80;
    }
    if ( a4 && v92 > 4 && (qword_180341E90 & 2) != 0 && (v93 & 2) == v93 )
    {
      v112 = *((_DWORD *)a4 + 14);
      LODWORD(v151) = *((_DWORD *)a4 + 15);
      v113 = *((_DWORD *)a4 + 13);
      LODWORD(a5) = v112;
      v114 = *((_DWORD *)a4 + 12);
      LODWORD(a7) = v113;
      v115 = *((_DWORD *)a4 + 11);
      v150 = v114;
      v116 = *((_DWORD *)a4 + 10);
      v141 = v115;
      v117 = *((_DWORD *)a4 + 9);
      v140 = v116;
      v118 = *((_DWORD *)a4 + 8);
      v139 = v117;
      v119 = *((_DWORD *)a4 + 7);
      v138 = v118;
      v120 = *((_DWORD *)a4 + 6);
      v137 = v119;
      v121 = *((_DWORD *)a4 + 5);
      v136 = v120;
      v122 = *((_DWORD *)a4 + 4);
      v135 = v121;
      v123 = *((_DWORD *)a4 + 3);
      v134 = v122;
      v124 = *((_DWORD *)a4 + 2);
      v133 = v123;
      v125 = *((_DWORD *)a4 + 1);
      v132 = v124;
      v126 = *(_DWORD *)a4;
      v131 = v125;
      v130 = v126;
      v143 = CVisual::GetInteractionInternal((CVisual *)a1);
      InteractionInternal = (struct CInteraction *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v127,
        (unsigned int)&unk_1802E4B4E,
        v128,
        v129,
        (__int64)&InteractionInternal,
        (__int64)&v143,
        (__int64)&v130,
        (__int64)&v131,
        (__int64)&v132,
        (__int64)&v133,
        (__int64)&v134,
        (__int64)&v135,
        (__int64)&v136,
        (__int64)&v137,
        (__int64)&v138,
        (__int64)&v139,
        (__int64)&v140,
        (__int64)&v141,
        (__int64)&v150,
        (__int64)&a7,
        (__int64)&a5,
        (__int64)&v151);
    }
  }
}
