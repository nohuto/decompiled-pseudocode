/*
 * XREFs of ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088930
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180088360 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCPreComputeConte.c)
 * Callees:
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x1800049D8 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIDeviceTarget@@@Z @ 0x180011864 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIDeviceTarget@@@Z.c)
 *     ?AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180012C58 (-AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ??8?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV0@@Z @ 0x18001545C (--8-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1800156E4 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x180015A1C (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INPUT_SINK_TRANSFORM@@I@Z @ 0x180017F00 (-AddMultipleAndSet@-$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INP.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x18001B654 (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180041A78 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180041BF0 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800423AC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006BB30 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x18006C1FC (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007A590 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV5@4@Z @ 0x180081420 (-CalcCpuClippingTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCVisualTree@@PEBVCMILMatrix@.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180082980 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180084C80 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800869D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x180086CD0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180087600 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18008C0D0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008D82C (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A7320 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800A7EC0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AD110 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B23CC (McGenEventWrite_EventWriteTransfer.c)
 *     ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B8360 (-UnionUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800BA570 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800C1764 (-ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800C189C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C569C (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C5704 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CopyInputTransform@@YAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1800CF9FC (-CopyInputTransform@@YAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800D5F10 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800D6404 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1800D98E4 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     IsNotifyInputSinkParentedPresent @ 0x1800E8588 (IsNotifyInputSinkParentedPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x1801779D0 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180199754 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x180199ADC (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x180199B9C (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z @ 0x18019A740 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEBVCVisualTree@@PEAVCVisual@@1@Z.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x18019B2A0 (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1801AE150 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x180211528 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall CPreComputeContext::PostSubgraph(CPreComputeContext *this, const struct CVisualTree *a2, bool *a3)
{
  struct CVisual *v3; // r12
  __int64 v5; // rax
  _QWORD **v6; // rsi
  __int64 v7; // rbx
  __int64 v10; // r13
  __int64 v11; // rcx
  char v12; // al
  _DWORD *v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  char v16; // al
  void *v17; // r12
  struct CComposition *v18; // r11
  unsigned __int8 v19; // dl
  _DWORD *v20; // rdx
  int v21; // r8d
  struct CVisual *v22; // r13
  unsigned int v23; // edi
  int v24; // eax
  _DWORD *v25; // rdx
  _DWORD *v27; // rdx
  _DWORD *v28; // rdx
  __int64 v29; // rax
  __int64 k; // r8
  __int64 v31; // r8
  int v32; // ecx
  unsigned int v33; // r10d
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // edx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  _BYTE *v40; // rcx
  unsigned int mm; // r8d
  _QWORD *v42; // rsi
  int v43; // ecx
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // r9
  float v47; // xmm2_4
  float v48; // xmm3_4
  float v49; // xmm4_4
  float v50; // xmm1_4
  int v51; // ecx
  float v52; // xmm0_4
  int v53; // eax
  float v54; // xmm6_4
  float v55; // xmm0_4
  float v56; // xmm8_4
  float v57; // xmm5_4
  float v58; // xmm3_4
  float v59; // xmm7_4
  float v60; // xmm1_4
  __int128 *v61; // r12
  int v62; // edx
  unsigned int i; // edi
  __int64 v64; // rax
  __int64 v65; // rax
  _BYTE *v66; // rcx
  __int128 v67; // xmm0
  __int64 v68; // rax
  _BYTE *v69; // rcx
  __int64 m; // r9
  __int64 v71; // r9
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 jj; // r9
  __int64 v75; // r9
  __int64 v76; // r12
  __int64 v77; // rax
  __int64 v78; // rax
  CVisual *v79; // r12
  struct CTreeData *TreeData; // rdi
  int v81; // ecx
  _QWORD *v82; // rax
  int v83; // eax
  __int64 v84; // rax
  _BYTE *v85; // rcx
  __int64 j; // r8
  _QWORD *v87; // r8
  _QWORD *v88; // rdi
  int v89; // eax
  int v90; // eax
  __int64 v91; // rcx
  __int64 v92; // rax
  __int128 v93; // xmm0
  int v94; // eax
  void *v95; // rcx
  const struct CVisualTree *v96; // rdx
  int v97; // eax
  __int64 v98; // r8
  int v99; // eax
  __int64 v100; // rdi
  float v101; // xmm6_4
  float v102; // xmm7_4
  float v103; // xmm8_4
  float v104; // xmm9_4
  __int64 v105; // rcx
  __int64 v106; // rdx
  _DWORD *v107; // rdx
  CVisual *v108; // r12
  __int128 v109; // xmm1
  int v110; // eax
  __int64 v111; // rcx
  float v112; // xmm3_4
  float v113; // xmm2_4
  float v114; // xmm0_4
  __int128 v115; // xmm0
  __int64 v116; // xmm1_8
  unsigned int v117; // eax
  struct CWindowBackgroundTreatment *v118; // rax
  int v119; // eax
  int v120; // eax
  struct CWindowBackgroundTreatment *v121; // rax
  struct CWindowBackgroundTreatment *v122; // rdi
  unsigned int v123; // ecx
  __int64 v124; // rdx
  __int64 v125; // r8
  bool v126; // al
  _OWORD *v127; // rcx
  __int128 v128; // xmm1
  bool v129; // cc
  unsigned int v130; // xmm0_4
  float v131; // xmm7_4
  unsigned int v132; // xmm2_4
  float v133; // xmm6_4
  unsigned int v134; // xmm3_4
  float v135; // xmm4_4
  struct _LIST_ENTRY *v136; // rax
  struct _LIST_ENTRY *v137; // rdx
  struct _LIST_ENTRY *v138; // rax
  struct _LIST_ENTRY *ii; // rcx
  __int64 v140; // r8
  _BYTE *v141; // rcx
  unsigned int n; // eax
  _QWORD **v143; // r8
  CVisual *v144; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  __int128 v146; // xmm1
  __int128 v147; // xmm0
  __int128 v148; // xmm1
  const struct CMILMatrix *TopByReference; // rax
  int v150; // eax
  __int64 v151; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  float v154; // xmm2_4
  float v155; // xmm1_4
  __int128 *v156; // rax
  __int64 v157; // rcx
  _BYTE *v158; // r8
  unsigned int kk; // eax
  _QWORD **v160; // r8
  CVisual *v161; // rax
  __int64 *v162; // rax
  int v163; // eax
  char HasEffects; // r12
  int v165; // eax
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r8
  struct CBspNode *v169; // rdx
  int v170; // eax
  __int64 v171; // rcx
  __int64 v172; // r8
  int v173; // eax
  __int64 v174; // rcx
  unsigned int v175; // [rsp+20h] [rbp-258h]
  char v176; // [rsp+40h] [rbp-238h]
  char v177; // [rsp+40h] [rbp-238h]
  char v178; // [rsp+41h] [rbp-237h] BYREF
  char v179; // [rsp+42h] [rbp-236h]
  __int64 v180; // [rsp+48h] [rbp-230h] BYREF
  char v181; // [rsp+50h] [rbp-228h]
  struct CVisual *v182; // [rsp+58h] [rbp-220h]
  __int128 v183; // [rsp+60h] [rbp-218h] BYREF
  __int128 v184; // [rsp+70h] [rbp-208h]
  __int128 v185; // [rsp+80h] [rbp-1F8h]
  __int128 v186; // [rsp+90h] [rbp-1E8h]
  int v187; // [rsp+A0h] [rbp-1D8h]
  __int128 v188; // [rsp+B0h] [rbp-1C8h] BYREF
  __int128 v189; // [rsp+C0h] [rbp-1B8h]
  __int128 v190; // [rsp+D0h] [rbp-1A8h]
  __int128 v191; // [rsp+E0h] [rbp-198h]
  int v192; // [rsp+F0h] [rbp-188h]
  char v193[64]; // [rsp+100h] [rbp-178h] BYREF
  __int128 v194; // [rsp+140h] [rbp-138h] BYREF
  _QWORD v195[4]; // [rsp+150h] [rbp-128h] BYREF
  void *lpMem; // [rsp+170h] [rbp-108h]
  int v197; // [rsp+178h] [rbp-100h]
  __int64 v198; // [rsp+180h] [rbp-F8h]
  __int128 v199; // [rsp+190h] [rbp-E8h] BYREF
  __int128 v200; // [rsp+1A0h] [rbp-D8h] BYREF
  __int64 v201; // [rsp+1B0h] [rbp-C8h]
  __int128 v202; // [rsp+1B8h] [rbp-C0h] BYREF
  __int64 v203; // [rsp+1C8h] [rbp-B0h]
  __int128 v204; // [rsp+1D0h] [rbp-A8h] BYREF
  __int64 v205; // [rsp+1E0h] [rbp-98h]
  __int128 v206; // [rsp+1E8h] [rbp-90h] BYREF

  v3 = (struct CVisual *)*((_QWORD *)this + 70);
  v5 = *(_QWORD *)a2;
  v6 = 0LL;
  v7 = *((_QWORD *)this + 69);
  v182 = v3;
  v10 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v5 + 200))(a2) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
    {
      v10 = v7 + 320;
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v7);
      if ( TreeDataListHead )
      {
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
          {
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_4;
          }
          v10 = (__int64)&Flink[-18];
        }
      }
    }
  }
LABEL_4:
  *a3 = 1;
  v11 = 1LL;
  if ( (unsigned int)((__int64)(*(_QWORD *)(v7 + 280) - *(_QWORD *)(v7 + 272)) >> 4)
    || (unsigned int)((__int64)(*(_QWORD *)(v7 + 304) - *(_QWORD *)(v7 + 296)) >> 4) )
  {
    *(_QWORD *)&v199 = 0x100000000LL;
    v61 = &v199;
    do
    {
      v62 = *(_DWORD *)v61;
      for ( i = 0; i < (unsigned int)CVisual::GetLightsCount((_QWORD *)v7, v62); ++i )
      {
        if ( v62 )
          v64 = *(_QWORD *)(v7 + 304) - *(_QWORD *)(v7 + 296);
        else
          v64 = *(_QWORD *)(v7 + 280) - *(_QWORD *)(v7 + 272);
        if ( i >= (unsigned int)(v64 >> 4) )
        {
          v66 = 0LL;
        }
        else
        {
          if ( v62 )
            v65 = *(_QWORD *)(v7 + 296);
          else
            v65 = *(_QWORD *)(v7 + 272);
          v66 = *(_BYTE **)(v65 + 16LL * i);
        }
        if ( v66[162] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, const struct CVisualTree *, __int64))(*(_QWORD *)v66 + 256LL))(
                 v66,
                 a2,
                 v7) )
          {
            v67 = *(_OWORD *)(*((_QWORD *)this + 37) + 16LL * (unsigned int)--*((_DWORD *)this + 80));
            if ( (_QWORD)v67 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v67 + 16LL))(v67);
          }
          v62 = *(_DWORD *)v61;
        }
      }
      v61 = (__int128 *)((char *)v61 + 4);
    }
    while ( v61 != (__int128 *)((char *)&v199 + 8) );
    v3 = v182;
  }
  v12 = *(_BYTE *)(v7 + 88);
  if ( (v12 & 1) != 0 )
  {
    v38 = CVisual::ConvertInnerToOuterBounds((CVisual *)v7, a2);
    v23 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v38, 0x292u, 0LL);
      return v23;
    }
    *(_BYTE *)(v7 + 88) &= ~1u;
    v12 = *(_BYTE *)(v7 + 88);
  }
  if ( (v12 & 0x10) == 0 )
    goto LABEL_8;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 280LL))(v7) )
    *(_DWORD *)(v7 + 88) |= 0x100u;
  v27 = *(_DWORD **)(v7 + 224);
  if ( (*v27 & 0x400000) != 0 )
  {
    v84 = (unsigned int)v27[1];
    v85 = v27 + 2;
    for ( j = 0LL; (unsigned int)j < (unsigned int)v84; ++v85 )
    {
      if ( *v85 == 10 )
        break;
      j = (unsigned int)(j + 1);
    }
    if ( (unsigned int)j >= (unsigned int)v84 )
      v87 = 0LL;
    else
      v87 = (_QWORD *)((char *)v27 + v84 + 8 * j - (((_BYTE)v84 + 15) & 7) + 15);
    v88 = (_QWORD *)*v87;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v87 + 56LL))(*v87, 186LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v88 + 56LL))(v88, 56LL) )
        goto LABEL_44;
      v88 = (_QWORD *)v88[10];
    }
    if ( v88 )
      *(_DWORD *)(v7 + 88) |= 0x200u;
  }
LABEL_44:
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 344LL))(v7) )
    *(_DWORD *)(v7 + 88) |= 0x400u;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 352LL))(v7) )
    *(_DWORD *)(v7 + 88) |= 0x800u;
  v11 = *(_QWORD *)(v7 + 248);
  if ( v11
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, 14LL)
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 248) + 312LL))(*(_QWORD *)(v7 + 248)) )
  {
    *(_DWORD *)(v7 + 88) |= 0x1000u;
  }
  v28 = *(_DWORD **)(v7 + 224);
  if ( (*v28 & 0x800000) != 0 )
  {
    v29 = (unsigned int)v28[1];
    v11 = (__int64)(v28 + 2);
    for ( k = 0LL; (unsigned int)k < (unsigned int)v29; ++v11 )
    {
      if ( *(_BYTE *)v11 == 9 )
        break;
      k = (unsigned int)(k + 1);
    }
    if ( (unsigned int)k >= (unsigned int)v29 )
    {
      v31 = 0LL;
    }
    else
    {
      v11 = v29 + 15;
      v31 = (__int64)v28 + 8 * k - (((_BYTE)v29 + 15) & 7) + v29 + 15;
    }
    if ( *(_QWORD *)v31 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)v31 + 96LL);
      if ( v11 )
      {
        if ( *(_QWORD *)(v11 + 64) )
          *(_DWORD *)(v7 + 88) |= 0x2000u;
      }
    }
  }
LABEL_8:
  if ( v3 )
  {
    v13 = *(_DWORD **)(v7 + 224);
    v14 = 0LL;
    if ( (*v13 & 0x800000) != 0 )
    {
      v68 = (unsigned int)v13[1];
      v69 = v13 + 2;
      for ( m = 0LL; (unsigned int)m < (unsigned int)v68; ++v69 )
      {
        if ( *v69 == 9 )
          break;
        m = (unsigned int)(m + 1);
      }
      if ( (unsigned int)m >= (unsigned int)v68 )
        v71 = 0LL;
      else
        v71 = (__int64)v13 + 8 * m - (((_BYTE)v68 + 15) & 7) + v68 + 15;
      if ( *(_QWORD *)v71 )
      {
        v72 = *(_QWORD *)(*(_QWORD *)v71 + 96LL);
        if ( v72 )
          v14 = *(_QWORD *)(v72 + 64);
      }
    }
    v15 = v14 != 0 ? 0x40 : 0;
    if ( (*(_BYTE *)(v7 + 94) & 0x40) != 0 )
      LOWORD(v15) = 64;
    v11 = *((_DWORD *)v3 + 22) ^ ((unsigned __int16)*((_DWORD *)v3 + 22) ^ (unsigned __int16)(*(_WORD *)(v7 + 88) | *((_DWORD *)v3 + 22) | ((_WORD)v15 << 8))) & 0x7F00u;
    *((_DWORD *)v3 + 22) = v11;
    if ( (v11 & 1) != 0 )
      TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((char *)v3 + 164);
  }
  if ( (*(_BYTE *)(v7 + 264) & 2) == 0 )
    goto LABEL_15;
  v100 = v7;
  LODWORD(v101) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v102 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v103 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v104 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  v188 = _xmm;
  v189 = _xmm;
  v190 = _xmm;
  v191 = _xmm;
  v199 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  LOWORD(v192) = 32085;
  v176 = 0;
  while ( (**(_DWORD **)(v100 + 224) & 0x200000) == 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
    {
      v105 = v100 + 320;
    }
    else
    {
      v136 = CVisual::GetTreeDataListHead((CVisual *)v100);
      if ( !v136 )
        goto LABEL_208;
      v137 = v136->Flink;
      if ( v136->Flink == v136 )
        goto LABEL_208;
      while ( 1 )
      {
        v105 = (__int64)&v137[-18];
        if ( (const struct CVisualTree *)v137[2].Flink == a2 )
          break;
        v137 = v137->Flink;
        if ( v137 == v136 )
          goto LABEL_208;
      }
    }
    if ( !v105 || v100 == *((_QWORD *)a2 + 7) )
      goto LABEL_208;
    v106 = 0LL;
    if ( g_pComposition )
      v106 = *((_QWORD *)g_pComposition + 44);
    if ( *(_BYTE *)(v105 + 18) && *(_QWORD *)(v105 + 280) == v106 )
      goto LABEL_207;
    v107 = *(_DWORD **)(v100 + 224);
    if ( (*v107 & 0x1000000) == 0 )
      goto LABEL_207;
    v140 = (unsigned int)v107[1];
    v141 = v107 + 2;
    for ( n = 0; n < (unsigned int)v140; ++v141 )
    {
      if ( *v141 == 8 )
        break;
      ++n;
    }
    v143 = n >= (unsigned int)v140 ? 0LL : (_QWORD **)((char *)v107 + 8LL * n - (((_BYTE)v140 + 15) & 7) + v140 + 15);
    if ( !*v143 || (v144 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v143 + 200LL))(**v143)) == 0LL )
    {
LABEL_207:
      v108 = *(CVisual **)(v100 + 80);
      if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
      {
        v138 = CVisual::GetTreeDataListHead(v108);
        if ( v138 )
        {
          for ( ii = v138->Flink; ii != v138; ii = ii->Flink )
          {
            if ( (const struct CVisualTree *)ii[2].Flink == a2 )
              break;
          }
        }
      }
LABEL_208:
      v178 = 0;
      v187 = 0;
      LODWORD(v198) = 0;
      CVisual::CalcCpuClippingTransform(v100, 5, (__int64)a2, 0LL, &v178, (CMILMatrix *)&v183, (__int64)&v194);
      if ( !v176 )
      {
        if ( CMILMatrix::IsIdentity<1>((__int64)&v188) )
        {
          v188 = v183;
          v189 = v184;
          v109 = v186;
          v190 = v185;
          v192 = v187;
        }
        else
        {
          CMILMatrix::Ensure3DFlags((CMILMatrix *)&v183);
          if ( (v187 & 3) == 1 )
            goto LABEL_211;
          if ( (v187 & 0xC) == 4 )
          {
LABEL_240:
            CMILMatrix::Translate((CMILMatrix *)&v188, *(float *)&v186, *((float *)&v186 + 1), *((float *)&v186 + 2));
            goto LABEL_211;
          }
          if ( (v187 & 0xC0) == 0x40 )
          {
            v154 = *((float *)&v184 + 1);
            v155 = *(float *)&v183;
LABEL_338:
            CMILMatrix::Scale((CMILMatrix *)&v188, v155, v154, *((float *)&v185 + 2));
            goto LABEL_240;
          }
          if ( (BYTE1(v187) & 0xC) == 4 )
          {
            CMILMatrix::Rotate90((CMILMatrix *)&v188);
            LODWORD(v155) = v184 ^ _xmm;
            v154 = *((float *)&v183 + 1);
            goto LABEL_338;
          }
          v156 = Windows::Foundation::Numerics::operator*((__int64)v193, &v188, &v183);
          v188 = *v156;
          v189 = v156[1];
          v190 = v156[2];
          v109 = v156[3];
          v192 = 0;
        }
        v191 = v109;
      }
LABEL_211:
      if ( (TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < v101
         || v103 < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
        && (*(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v102
         || v104 < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
      {
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v183, (__int64)&v199, (float *)&v199);
        v104 = *((float *)&v199 + 3);
        v103 = *((float *)&v199 + 2);
        v102 = *((float *)&v199 + 1);
        LODWORD(v101) = v199;
      }
      v11 = *(_QWORD *)(v100 + 240);
      if ( !v11 )
        goto LABEL_215;
      v180 = 0LL;
      v181 = 0;
      if ( (int)CGeometry::GetShapeData(
                  (CGeometry *)v11,
                  (const struct D2D_SIZE_F *)(v100 + 132),
                  (struct CShapePtr *)&v180) < 0 )
      {
LABEL_234:
        v11 = v180;
      }
      else
      {
        v11 = v180;
        v206 = 0LL;
        if ( v180 )
        {
          v110 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int128 *))(*(_QWORD *)v180 + 32LL))(
                   v180,
                   &v206,
                   &v194);
          if ( v110 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v111, 0LL, 0, v110, 0x115u, 0LL);
          }
          else
          {
            if ( *(float *)&v206 > v101 )
            {
              LODWORD(v199) = v206;
              LODWORD(v101) = v206;
            }
            v112 = v102;
            if ( *((float *)&v206 + 1) > v102 )
            {
              DWORD1(v199) = DWORD1(v206);
              v102 = *((float *)&v206 + 1);
              v112 = *((float *)&v206 + 1);
            }
            v113 = v103;
            if ( v103 > *((float *)&v206 + 2) )
            {
              DWORD2(v199) = DWORD2(v206);
              v103 = *((float *)&v206 + 2);
              v113 = *((float *)&v206 + 2);
            }
            v114 = v104;
            if ( v104 > *((float *)&v206 + 3) )
            {
              HIDWORD(v199) = HIDWORD(v206);
              v104 = *((float *)&v206 + 3);
              v114 = *((float *)&v206 + 3);
            }
            if ( v113 <= v101 || v114 <= v112 )
            {
              v104 = 0.0;
              v103 = 0.0;
              v102 = 0.0;
              v101 = 0.0;
              v199 = 0uLL;
            }
          }
          goto LABEL_234;
        }
      }
      if ( v181 && v11 )
        (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
      v180 = 0LL;
      v181 = 0;
      goto LABEL_215;
    }
    CVisual::FindTreeData(v144, a2);
    LODWORD(v101) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v102 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v103 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v104 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v199 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v176 = 1;
LABEL_215:
    v100 = *(_QWORD *)(v100 + 80);
    if ( !v100 )
      goto LABEL_15;
  }
  if ( !v176 )
    goto LABEL_242;
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v100);
  v146 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 232);
  v183 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 216);
  v147 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 248);
  v184 = v146;
  v148 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 264);
  LODWORD(WindowBackgroundTreatmentInternal) = *((_DWORD *)WindowBackgroundTreatmentInternal + 70);
  v185 = v147;
  v186 = v148;
  v187 = (int)WindowBackgroundTreatmentInternal;
  if ( CMILMatrix::Invert((CMILMatrix *)&v183) )
  {
    TopByReference = CMatrixStack::GetTopByReference((CPreComputeContext *)((char *)this + 232));
    CMILMatrix::Multiply(TopByReference, (const struct CMILMatrix *)&v183, (struct CMILMatrix *)&v188);
LABEL_242:
    v115 = *(_OWORD *)(v7 + 164);
    v201 = 0LL;
    v116 = *(_QWORD *)(v7 + 180);
    v204 = v115;
    v205 = v116;
    v200 = 0LL;
    CMILMatrix::Transform3DBoundsHelper<0>(&v188, &v204, &v200);
    if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(&v199) )
    {
      v203 = v201;
      *(_QWORD *)&v202 = __PAIR64__(LODWORD(v102), LODWORD(v101));
      *((_QWORD *)&v202 + 1) = __PAIR64__(LODWORD(v104), LODWORD(v103));
      TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
        &v200,
        &v202);
    }
    v11 = 1LL;
    v117 = *((float *)&v201 + 1) <= *(float *)&v201;
    if ( *((float *)&v200 + 2) <= *(float *)&v200 )
      ++v117;
    if ( *((float *)&v200 + 3) <= *((float *)&v200 + 1) )
      ++v117;
    if ( v117 <= 1 )
    {
      v118 = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v100);
      v119 = CWindowBackgroundTreatment::AddRectangleToBounds((__int64)v118, (__int64)&v200);
      v23 = v119;
      if ( v119 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v119, 0x367u, 0LL);
        return v23;
      }
    }
  }
LABEL_15:
  v16 = *(_BYTE *)(v7 + 92);
  if ( (v16 & 2) != 0 )
  {
    v11 = *((unsigned int *)this + 58);
    if ( (_DWORD)v11 )
    {
      *((_DWORD *)this + 58) = v11 - 1;
      v16 = *(_BYTE *)(v7 + 92);
    }
  }
  if ( (v16 & 4) != 0 )
  {
    v11 = *((unsigned int *)this + 66);
    if ( (_DWORD)v11 )
    {
      *((_DWORD *)this + 66) = v11 - 1;
      v16 = *(_BYTE *)(v7 + 92);
    }
  }
  if ( (v16 & 0x10) != 0 )
  {
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((char *)this + 168);
    v16 = *(_BYTE *)(v7 + 92);
  }
  if ( (v16 & 8) != 0 )
  {
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((char *)this + 136);
    v16 = *(_BYTE *)(v7 + 92);
  }
  if ( (v16 & 0x20) != 0 )
  {
    v11 = *((unsigned int *)this + 50);
    if ( (_DWORD)v11 )
    {
      *((_DWORD *)this + 50) = v11 - 1;
      v16 = *(_BYTE *)(v7 + 92);
    }
  }
  if ( (v16 & 0x40) != 0 )
    *((_BYTE *)this + 1161) = *((_BYTE *)this + 1161) == 0;
  v17 = &CMILMatrix::Identity;
  if ( (*(_BYTE *)(v7 + 264) & 1) != 0 )
  {
    v11 = *(_QWORD *)(v7 + 248);
    if ( v11 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, 14LL) )
      *(_BYTE *)(v7 + 616) &= ~1u;
    v90 = *((_DWORD *)this + 26);
    if ( v90 )
    {
      v201 = 0LL;
      v91 = (unsigned int)(v90 - 1);
      *((_DWORD *)this + 26) = v91;
      v92 = *((_QWORD *)this + 15);
      v200 = 0LL;
      v93 = *(_OWORD *)(v92 + 16 * v91);
      v94 = *((_DWORD *)this + 58);
      v202 = v93;
      v95 = v94 ? (void *)(*((_QWORD *)this + 31) + 68LL * (unsigned int)(v94 - 1)) : &CMILMatrix::Identity;
      v96 = v7 == *((_QWORD *)a2 + 7)
          ? (const struct CVisualTree *)((char *)a2 + 64)
          : (const struct CVisualTree *)(v7 + 140);
      CMILMatrix::Transform3DBoundsHelper<1>(v95, v96, &v200);
      v97 = *((_DWORD *)this + 66);
      if ( v97 )
      {
        v127 = (_OWORD *)(*((_QWORD *)this + 35) + 16LL * (unsigned int)(v97 - 1));
        v128 = *v127;
        v129 = *(float *)&v200 <= COERCE_FLOAT(*v127);
        v199 = *v127;
        if ( !v129 )
          LODWORD(v128) = v200;
        v130 = DWORD1(v199);
        v131 = *((float *)&v199 + 1);
        if ( *((float *)&v200 + 1) > *((float *)&v199 + 1) )
        {
          v130 = DWORD1(v200);
          v131 = *((float *)&v200 + 1);
        }
        v132 = DWORD2(v199);
        v133 = *((float *)&v199 + 2);
        if ( *((float *)&v199 + 2) > *((float *)&v200 + 2) )
        {
          v132 = DWORD2(v200);
          v133 = *((float *)&v200 + 2);
        }
        v134 = HIDWORD(v199);
        v135 = *((float *)&v199 + 3);
        if ( *((float *)&v199 + 3) > *((float *)&v200 + 3) )
        {
          v134 = HIDWORD(v200);
          v135 = *((float *)&v200 + 3);
        }
        if ( v133 <= *(float *)&v128 || v135 <= v131 )
        {
          v134 = 0;
          v132 = 0;
          v130 = 0;
          LODWORD(v128) = 0;
        }
        *(_QWORD *)&v199 = __PAIR64__(v130, v128);
        *((_QWORD *)&v199 + 1) = __PAIR64__(v134, v132);
      }
      else
      {
        v199 = v200;
      }
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
             (float *)&v202,
             (float *)&v199) )
      {
        LOBYTE(v98) = 1;
        v99 = CDirtyRegion::Add(*((_QWORD *)this + 86), v7, v98, &v199);
        v23 = v99;
        if ( v99 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v99, 0x3AFu, 0LL);
          return v23;
        }
        *(_BYTE *)(v7 + 616) |= 1u;
      }
    }
  }
  if ( (**(_DWORD **)(v7 + 224) & 0x200000) == 0 )
    goto LABEL_26;
  v121 = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v7);
  v11 = *((unsigned int *)this + 26);
  v122 = v121;
  *(_QWORD *)&v199 = v121;
  if ( !(_DWORD)v11
    || (v123 = v11 - 1,
        *((_DWORD *)this + 26) = v123,
        v124 = v123,
        v11 = *((_QWORD *)this + 15),
        v200 = *(_OWORD *)(v11 + 16 * v124),
        !*((_BYTE *)v121 + 356)) )
  {
LABEL_26:
    v18 = g_pComposition;
    goto LABEL_27;
  }
  v177 = 0;
  v202 = 0LL;
  CMILMatrix::Transform2DBoundsHelper<0>(
    (struct CWindowBackgroundTreatment *)((char *)v121 + 216),
    (__int64)v121 + 144,
    (float *)&v202);
  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
         (float *)&v200,
         (float *)&v202) )
  {
    LOBYTE(v125) = 1;
    v150 = CDirtyRegion::Add(*((_QWORD *)this + 86), v7, v125, &v202);
    v23 = v150;
    if ( v150 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v151, 0LL, 0, v150, 0x3E1u, 0LL);
      return v23;
    }
    v122 = (struct CWindowBackgroundTreatment *)v199;
    v177 = 1;
  }
  v178 = *((_BYTE *)v122 + 360);
  v179 = *((_BYTE *)v122 + 359);
  if ( !CWindowBackgroundTreatment::HasValidSource(v122, 0LL)
    || !TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::operator==(
          (float *)v122 + 36,
          (float *)v122 + 48)
    || !(unsigned __int8)CWindowBackgroundTreatment::AreWorldBoundsUnchangedForPreCompute(v122) )
  {
    CWindowBackgroundTreatment::ClearRenderTargetMaps(v122);
    goto LABEL_26;
  }
  v18 = g_pComposition;
  v126 = v178
      && *((_QWORD *)g_pComposition + 57) - *((_QWORD *)v122 + 47) < CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta;
  if ( !v179 || v126 || !v177 )
    *((_BYTE *)v122 + 357) = 0;
LABEL_27:
  if ( (*(_BYTE *)(v7 + 88) & 4) != 0 )
  {
    v44 = *((_QWORD *)this + 86);
    v200 = 0LL;
    v201 = 0LL;
    --*(_DWORD *)(v44 + 4432);
    v45 = *((_DWORD *)this + 58);
    if ( v45 )
      v17 = (void *)(*((_QWORD *)this + 31) + 68LL * (unsigned int)(v45 - 1));
    v46 = *(_QWORD *)this + 64LL;
    if ( v7 != *(_QWORD *)(*(_QWORD *)this + 56LL) )
      v46 = v7 + 140;
    CMILMatrix::Transform3DBoundsHelper<1>(v17, v46, &v200);
    v47 = *((float *)&v200 + 2);
    LODWORD(v48) = v200;
    v49 = *((float *)&v200 + 3);
    v50 = *((float *)&v200 + 1);
    if ( *((float *)&v200 + 2) > *(float *)&v200 && *((float *)&v200 + 3) > *((float *)&v200 + 1) )
    {
      v51 = *(_DWORD *)(v7 + 88);
      if ( *((_DWORD *)this + 134) || (v51 & 0x200) != 0 )
      {
        v52 = FLOAT_4_0;
      }
      else if ( (v51 & 0x800) != 0 )
      {
        v52 = FLOAT_0_5;
      }
      else
      {
        v52 = 0.0;
      }
      if ( (v51 & 0x1000) != 0 )
        v52 = v52 + 0.5;
      if ( v52 != 0.0 )
      {
        v48 = *(float *)&v200 - v52;
        v50 = *((float *)&v200 + 1) - v52;
        v47 = *((float *)&v200 + 2) + v52;
        v49 = *((float *)&v200 + 3) + v52;
      }
    }
    v53 = *((_DWORD *)this + 66);
    if ( v53 )
    {
      v202 = *(_OWORD *)(*((_QWORD *)this + 35) + 16LL * (unsigned int)(v53 - 1));
      LODWORD(v54) = v202;
      if ( v48 > *(float *)&v202 )
        v54 = v48;
      v55 = *((float *)&v202 + 1);
      v56 = *((float *)&v202 + 1);
      if ( v50 > *((float *)&v202 + 1) )
      {
        v55 = v50;
        v56 = v50;
      }
      v57 = *((float *)&v202 + 2);
      v58 = *((float *)&v202 + 2);
      if ( *((float *)&v202 + 2) > v47 )
      {
        v57 = v47;
        v58 = v47;
      }
      v59 = *((float *)&v202 + 3);
      v60 = *((float *)&v202 + 3);
      if ( *((float *)&v202 + 3) > v49 )
      {
        v59 = v49;
        v60 = v49;
      }
      if ( v58 <= v54 || v60 <= v56 )
      {
        v59 = 0.0;
        v57 = 0.0;
        v55 = 0.0;
        v54 = 0.0;
      }
      *(_QWORD *)&v199 = __PAIR64__(LODWORD(v55), LODWORD(v54));
      v48 = v54;
      v50 = v55;
      *((_QWORD *)&v199 + 1) = __PAIR64__(LODWORD(v59), LODWORD(v57));
      v47 = v57;
      v49 = v59;
    }
    else
    {
      *(_QWORD *)&v199 = __PAIR64__(LODWORD(v50), LODWORD(v48));
      *((_QWORD *)&v199 + 1) = __PAIR64__(LODWORD(v49), LODWORD(v47));
    }
    v11 = *((_QWORD *)this + 86);
    v23 = 0;
    if ( !*(_BYTE *)(v11 + 4456) && !*(_DWORD *)(v11 + 4432) )
    {
      if ( (TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < v48
         || v47 < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
        && (*(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v50
         || v49 < *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
      {
        v89 = CDirtyRegion::_Add((CDirtyRegion *)v11, v7, 1, (float *)&v199);
        v23 = v89;
        if ( v89 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v89, 0x161u, 0LL);
      }
      else
      {
        CDirtyRegion::SetFullDirty((CDirtyRegion *)v11);
      }
    }
    if ( (v23 & 0x80000000) == 0 )
    {
      v18 = g_pComposition;
      goto LABEL_28;
    }
    v175 = 1050;
LABEL_399:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v23, v175, 0LL);
    return v23;
  }
LABEL_28:
  if ( !v10 )
    goto LABEL_32;
  v19 = *(_BYTE *)(v7 + 93);
  if ( (v19 & 1) == 0 )
    goto LABEL_30;
  v11 = (unsigned int)(*(int *)(v7 + 88) >> 8) >> 5;
  LOBYTE(v11) = (v19 >> 1) ^ v11;
  if ( (v11 & 1) == 0 )
    goto LABEL_30;
  *(_BYTE *)(v7 + 93) = v19 ^ (v19 ^ (*(_DWORD *)(v7 + 88) >> 12)) & 2;
  *(_QWORD *)&v202 = CVisual::GetTopLevelWindow((CVisual *)v7);
  v35 = *((unsigned int *)this + 162);
  DWORD2(v202) = (v33 >> 1) & 1;
  v36 = v35 + 1;
  if ( (int)v35 + 1 < (unsigned int)v35 )
  {
    v23 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_65;
  }
  if ( v36 <= *((_DWORD *)this + 161) )
  {
    v11 = 2 * v35;
    *(_OWORD *)(*((_QWORD *)this + 78) + 16 * v35) = v202;
    *((_DWORD *)this + 162) = v36;
    goto LABEL_30;
  }
  v37 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 624, 16LL, 1LL, &v202);
  v23 = v37;
  if ( v37 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v37, 0xC0u, 0LL);
LABEL_65:
  if ( (v23 & 0x80000000) != 0 )
  {
    v175 = 1060;
    goto LABEL_399;
  }
  v18 = g_pComposition;
LABEL_30:
  v20 = *(_DWORD **)(v7 + 224);
  v21 = *v20;
  if ( (*v20 & 0x800000) != 0 )
  {
    v73 = (unsigned int)v20[1];
    v11 = (__int64)(v20 + 2);
    for ( jj = 0LL; (unsigned int)jj < (unsigned int)v73; ++v11 )
    {
      if ( *(_BYTE *)v11 == 9 )
        break;
      jj = (unsigned int)(jj + 1);
    }
    if ( (unsigned int)jj >= (unsigned int)v73 )
    {
      v75 = 0LL;
    }
    else
    {
      v11 = v73 + 15;
      v75 = (__int64)v20 + 8 * jj - (((_BYTE)v73 + 15) & 7) + v73 + 15;
    }
    if ( *(_QWORD *)v75 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)v75 + 96LL);
      v76 = 0LL;
      *(_QWORD *)&v199 = 0LL;
      if ( v11 )
      {
        v76 = *(_QWORD *)(v11 + 64);
        *(_QWORD *)&v199 = v76;
      }
      if ( v76 )
      {
        if ( *((_BYTE *)this + 1161) )
          goto LABEL_161;
        v77 = 0LL;
        if ( v18 )
          v77 = *((_QWORD *)v18 + 44);
        if ( *(_QWORD *)(v10 + 120) == v77 || v7 == *((_QWORD *)a2 + 7) )
          goto LABEL_161;
        v78 = 0LL;
        if ( v18 )
          v78 = *((_QWORD *)v18 + 44);
        if ( *(_BYTE *)(v10 + 18) && *(_QWORD *)(v10 + 280) == v78 || (v21 & 0x1000000) == 0 )
          goto LABEL_156;
        v157 = (unsigned int)v20[1];
        v158 = v20 + 2;
        for ( kk = 0; kk < (unsigned int)v157; ++v158 )
        {
          if ( *v158 == 8 )
            break;
          ++kk;
        }
        v160 = kk >= (unsigned int)v157
             ? 0LL
             : (_QWORD **)((char *)v20 + v157 + 8LL * kk - (((_BYTE)v157 + 15) & 7) + 15);
        if ( *v160 && (v161 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v160 + 200LL))(**v160)) != 0LL )
        {
          TreeData = CVisual::FindTreeData(v161, a2);
        }
        else
        {
LABEL_156:
          v79 = *(CVisual **)(v7 + 80);
          TreeData = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2) )
          {
            TreeData = (CVisual *)((char *)v79 + 320);
          }
          else
          {
            v162 = (__int64 *)CVisual::GetTreeDataListHead(v79);
            if ( v162 )
            {
              v11 = *v162;
              if ( (__int64 *)*v162 != v162 )
              {
                while ( *(const struct CVisualTree **)(v11 + 32) != a2 )
                {
                  v11 = *(_QWORD *)v11;
                  if ( (__int64 *)v11 == v162 )
                    goto LABEL_158;
                }
                TreeData = (struct CTreeData *)(v11 - 288);
              }
            }
          }
LABEL_158:
          v76 = v199;
        }
        if ( !TreeData || *(_QWORD *)(v10 + 120) < *((_QWORD *)TreeData + 15) )
        {
LABEL_161:
          v81 = *((_DWORD *)this + 50);
          v82 = 0LL;
          *(_QWORD *)&v194 = v76;
          if ( v81 )
            v82 = (_QWORD *)(*((_QWORD *)this + 27) + 8LL * (unsigned int)(v81 - 1));
          *((_QWORD *)&v194 + 1) = *v82;
          if ( (unsigned __int8)IsNotifyInputSinkParentedPresent() )
            NotifyInputSinkParented(v194, *((_QWORD *)&v194 + 1));
          CopyInputTransform((const struct CMILMatrix *)(v10 + 40), (struct tagINPUT_TRANSFORM *)v195);
          v83 = DynArray<COMPOSITION_INPUT_SINK_TRANSFORM,0>::AddMultipleAndSet((__int64 *)this + 82, &v194);
          v23 = v83;
          if ( v83 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v83, 0x440u, 0LL);
            return v23;
          }
        }
      }
    }
  }
  *(_BYTE *)(v7 + 92) &= ~0x80u;
LABEL_32:
  v22 = v182;
  if ( *((_BYTE *)this + 1160) )
  {
    v163 = CDepthSortingPreComputeHelper::PreComputePostSubgraph(
             (CPreComputeContext *)((char *)this + 696),
             a2,
             (struct CVisual *)v7,
             v182);
    v23 = v163;
    if ( v163 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v163, 0x44Cu, 0LL);
      return v23;
    }
  }
  v23 = 0;
  if ( *((_DWORD *)this + 204) && (v22 && *((_DWORD *)v22 + 25) == 1 || CVisual::IsPreserve3DRoot((CVisual *)v7, v22)) )
  {
    HasEffects = CVisual::IsSimple3DRootOrHasEffects((CVisual *)v7, v22);
    v165 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
             (CPreComputeContext *)((char *)this + 720),
             (struct CVisual *)v7,
             HasEffects);
    v23 = v165;
    if ( v165 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v166, 0LL, 0, v165, 0x180u, 0LL);
    }
    else
    {
      if ( !CVisual::IsPreserve3DRoot((CVisual *)v7, v22) )
        goto LABEL_394;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_P3D_BUILDING_BSPTREE_Stop,
          v167,
          1LL,
          &v200);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_P3D_BUILDING_POLYGONLIST_Start,
            v168,
            1LL,
            &v202);
      }
      *(_QWORD *)((char *)&v195[2] + 4) = 0LL;
      lpMem = 0LL;
      v197 = 0;
      *(_QWORD *)((char *)&v195[1] + 4) = 1LL;
      DWORD1(v194) = 0;
      *((_QWORD *)&v194 + 1) = 0LL;
      v195[0] = 0LL;
      v198 = v7;
      v169 = *(struct CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((char *)this + 720);
      if ( v169 )
      {
        v170 = CBspPolygonListBuilder::BuildPolygonList((CBspPolygonListBuilder *)&v194, v169);
        v23 = v170;
        if ( v170 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v171, 0LL, 0, v170, 0x18Du, 0LL);
          goto LABEL_387;
        }
      }
      CBspPreComputeHelper::PopStacksForBspRootVisual((CPreComputeContext *)((char *)this + 720), v169);
      if ( *((_DWORD *)this + 204)
        && HasEffects
        && (v173 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
                     (CPreComputeContext *)((char *)this + 720),
                     (struct CVisual *)v7,
                     1),
            v23 = v173,
            v173 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v174, 0LL, 0, v173, 0x195u, 0LL);
LABEL_387:
        operator delete(lpMem);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_P3D_BUILDING_POLYGONLIST_Stop,
            v172,
            1LL,
            &v206);
        operator delete(lpMem);
LABEL_394:
        if ( v22 && *((_DWORD *)v22 + 25) == 1 )
          CBspPreComputeHelper::PopStacksForBspChildVisual(
            (CPreComputeContext *)((char *)this + 720),
            (const struct CVisual *)v7);
      }
    }
  }
  if ( (v23 & 0x80000000) != 0 )
  {
    v175 = 1103;
    goto LABEL_399;
  }
  v24 = *(_DWORD *)(v7 + 96);
  if ( (v24 & 2) != 0 )
  {
    v43 = *((_DWORD *)this + 2);
    if ( v43 )
    {
      *((_DWORD *)this + 2) = v43 - 1;
      v24 = *(_DWORD *)(v7 + 96);
    }
  }
  if ( (v24 & 8) != 0 )
  {
    v32 = *((_DWORD *)this + 10);
    if ( v32 )
    {
      *((_DWORD *)this + 10) = v32 - 1;
      v24 = *(_DWORD *)(v7 + 96);
    }
  }
  if ( (v24 & 0x80u) != 0 )
  {
    v120 = *((_DWORD *)this + 18);
    if ( v120 )
      *((_DWORD *)this + 18) = v120 - 1;
  }
  v25 = *(_DWORD **)(v7 + 224);
  if ( (*v25 & 0x400000) == 0 )
    goto LABEL_39;
  v39 = (unsigned int)v25[1];
  v40 = v25 + 2;
  for ( mm = 0; mm < (unsigned int)v39; ++v40 )
  {
    if ( *v40 == 10 )
      break;
    ++mm;
  }
  if ( mm < (unsigned int)v39 )
    v6 = (_QWORD **)((char *)v25 + v39 + 8LL * mm - (((_BYTE)v39 + 15) & 7) + 15);
  v42 = *v6;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v42 + 56LL))(v42, 186LL) )
  {
LABEL_81:
    if ( v42 )
      --*((_DWORD *)this + 134);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v42 + 56LL))(v42, 56LL) )
  {
    v42 = (_QWORD *)v42[10];
    goto LABEL_81;
  }
LABEL_39:
  *(_BYTE *)(v7 + 92) &= 0x81u;
  *(_BYTE *)(v7 + 88) = 0;
  return v23;
}
