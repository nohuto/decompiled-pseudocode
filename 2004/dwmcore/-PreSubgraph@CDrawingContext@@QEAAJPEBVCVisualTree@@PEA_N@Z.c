/*
 * XREFs of ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180066C70 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x180004440 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x180004A08 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800051C8 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIDeviceTarget@@@Z @ 0x1800061C4 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIDeviceTarget@@@Z.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x180007970 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x18000BED8 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x18000DF94 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x18000DFF0 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x18000E0C0 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18000E18C (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x180017184 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z @ 0x18001BA3C (-NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180037108 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18003C0BC (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180057DDC (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180066514 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x180066574 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800666A0 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800668E8 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x18006A8E0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006AEC0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z @ 0x18006F890 (-GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180073590 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FD98 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x180080058 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180080130 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008103C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRec.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800828C0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18008CF60 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18008DB00 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18008E7F0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A1EB8 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AA560 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800AA650 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800AAC20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AAF50 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800B10E0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD6F8 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800BDA00 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?FindData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEBAAEAT?$_Align_type@N$07@std@@I@Z @ 0x1800BEF78 (-FindData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEBAAEAT-$_Align_type@N$07@std@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScopeState@CScopedClipStack@@I@Z @ 0x1800BF658 (-AddMultipleAndSet@-$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScop.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C22D4 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C456C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x1800C4D14 (-SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800D600C (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E5E34 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_32337248@@@details@wil@@QEAA_NXZ @ 0x1800E9134 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_HitTesting_32337248@@@d.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180176864 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x180178E58 (-GetHeatMapProperties@CVisual@@QEBA-AUHeatMapProperty@1@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x180178FE8 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x180179008 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x180179150 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x180179250 (-Push@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CCompos.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x180179398 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x180179D44 (-SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ.c)
 *     ?ShiftLeft@?$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z @ 0x180179FA8 (-ShiftLeft@-$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z.c)
 *     ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x18018FBC8 (-ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1801AF63C (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x180210EB4 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

__int64 __fastcall CDrawingContext::PreSubgraph(struct CVisual **this, const struct CVisualTree *a2, bool *a3)
{
  unsigned int v3; // r14d
  int v4; // esi
  CVisual *v7; // rcx
  struct CVisual *v8; // rax
  __int64 v9; // rax
  _DWORD *v10; // rax
  __int64 ProjectedShadowReceivers; // rax
  CScopedClipStack *v12; // rcx
  CVisual *v13; // rax
  CProjectedShadowReceiver *v14; // r13
  CProjectedShadowScene **v15; // r15
  CProjectedShadowScene **v16; // r12
  CProjectedShadowScene *v17; // rdi
  __int64 ***v18; // rdi
  __int64 **j; // rbx
  char v20; // r15
  unsigned int *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned __int64 v26; // rdi
  int v27; // eax
  __int64 v28; // rcx
  void *v29; // rbx
  unsigned int v30; // eax
  CVisual *v31; // r13
  struct CVisualTree *v32; // r12
  struct CTreeData *TreeData; // rax
  __int64 v34; // rdx
  CVisual *v35; // rax
  int v36; // edi
  unsigned int v37; // ebx
  __int64 v38; // rax
  void *v39; // rbx
  HANDLE ProcessHeap; // rax
  _BYTE *v41; // r15
  __int64 v42; // rax
  unsigned int *v43; // r12
  unsigned int v44; // eax
  __int64 v45; // rcx
  unsigned __int64 v46; // rdi
  int v47; // eax
  __int64 v48; // rcx
  int v49; // ebx
  unsigned __int64 v50; // rax
  void *v51; // rbx
  __int64 v52; // rcx
  unsigned int v53; // eax
  CDrawingContext *v54; // r10
  unsigned int v55; // eax
  unsigned int v56; // edx
  __int64 v57; // rcx
  void *v58; // rdi
  HANDLE v59; // rax
  __int64 v60; // rcx
  CDrawingContext *v61; // rdi
  char *v62; // r15
  CVisual *v63; // rbx
  __int64 v64; // rax
  CVisual *v65; // rax
  CVisual *v66; // r12
  __int64 v67; // rcx
  unsigned int v68; // eax
  unsigned __int64 v69; // rdi
  int v70; // eax
  __int64 v71; // rcx
  int v72; // ebx
  unsigned __int64 v73; // rax
  CScopedClipStack *v74; // rbx
  CDrawingContext *v75; // rax
  unsigned int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // edx
  unsigned int v80; // ebx
  __int64 v81; // rcx
  int v82; // eax
  __int64 v83; // rcx
  CScopedClipStack *v84; // rdi
  HANDLE v85; // rax
  bool *v86; // r15
  bool v87; // cf
  int v88; // eax
  __int64 v89; // rcx
  int v90; // eax
  __int64 v91; // rcx
  unsigned int v92; // ecx
  int v93; // eax
  __int64 v94; // rcx
  int v95; // eax
  void *v96; // rcx
  __int64 v97; // rdx
  char *v98; // r9
  int v99; // ecx
  float v100; // xmm0_4
  void (__fastcall ***v101)(_QWORD, CVisual **); // rcx
  _QWORD *v102; // rbx
  int v103; // r8d
  float v104; // xmm8_4
  float v105; // xmm9_4
  int v106; // eax
  float v107; // xmm6_4
  float v108; // xmm7_4
  int v109; // edx
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rax
  __int64 v113; // rcx
  float v114; // xmm3_4
  float v115; // xmm2_4
  float v116; // xmm1_4
  float v117; // xmm8_4
  float v118; // xmm9_4
  float v119; // xmm6_4
  float v120; // xmm7_4
  __int64 v121; // rdi
  char *v122; // rbx
  __int64 v123; // rax
  __int64 v124; // r8
  unsigned int v125; // eax
  __int64 v126; // rcx
  unsigned __int64 v127; // rdi
  int v128; // eax
  __int64 v129; // rcx
  CScopedClipStack *v130; // rbx
  unsigned int v131; // eax
  __int64 v132; // r9
  __int64 v133; // rcx
  _BYTE *v134; // rax
  unsigned int k; // edx
  _QWORD **v136; // r8
  _QWORD *v137; // rcx
  _QWORD *v138; // rax
  CDrawingContext *v139; // r12
  struct CVisualTree *v140; // rdi
  __int64 v141; // r15
  char *v142; // rbx
  _DWORD *v143; // rdi
  __int64 v144; // rax
  int v145; // eax
  int v146; // ecx
  __int64 v147; // rcx
  CScopedClipStack *v148; // rbx
  HANDLE v149; // rax
  __int64 v150; // r8
  __int64 v151; // rdx
  _BYTE *v152; // rcx
  unsigned int m; // eax
  _QWORD **v154; // rdx
  _QWORD *v155; // rcx
  _QWORD *v156; // rax
  CVisual *v157; // rsi
  char *v158; // r15
  __int64 v159; // rax
  int v160; // r12d
  __int64 v161; // rcx
  char *v162; // rbx
  struct CVisualTree *v163; // r10
  char v164; // r13
  const struct CTreeData *v165; // rdi
  __int64 v166; // rcx
  _DWORD *v167; // r8
  __int64 v168; // rdx
  _BYTE *v169; // rcx
  unsigned int ii; // eax
  _QWORD **v171; // rdx
  __int64 v172; // r8
  __int64 v173; // rdx
  _BYTE *v174; // rcx
  unsigned int n; // eax
  __int64 *v176; // rdx
  _QWORD *v177; // rax
  CVisual *v178; // rsi
  __int64 *TreeDataListHead; // rax
  __int64 *v180; // rax
  unsigned __int64 v181; // rax
  int updated; // eax
  char v183; // di
  bool v184; // zf
  __int64 v185; // rax
  __int64 v186; // rcx
  CDrawingContext *v188; // rax
  int v189; // eax
  __int64 v190; // rcx
  CVisual *v191; // rbx
  unsigned int v192; // r13d
  char v193; // si
  char v194; // cl
  float v195; // xmm2_4
  CGeometry *v196; // rcx
  char v197; // r12
  CVisual *v198; // r15
  int ShapeData; // eax
  __int64 v200; // rcx
  int v201; // ebx
  CVisual *v202; // rdi
  int v203; // eax
  void (__fastcall ***v204)(_QWORD, __int64); // rcx
  int v205; // eax
  __int64 v206; // rcx
  void (__fastcall ***v207)(_QWORD, CVisual **); // rcx
  float v208; // xmm1_4
  _DWORD *v209; // rcx
  __int64 v210; // rcx
  struct CVisualTree *v211; // r12
  char *v212; // rdi
  __int64 v213; // r8
  __int64 v214; // rdx
  _BYTE *v215; // rcx
  unsigned int jj; // eax
  _QWORD **v217; // rdx
  _QWORD *v218; // r8
  _QWORD *v219; // rax
  CVisual *v220; // rbx
  struct _LIST_ENTRY *v221; // rax
  struct _LIST_ENTRY *kk; // rcx
  __int64 v223; // r9
  int v224; // eax
  __int64 v225; // rcx
  __int64 **v226; // rbx
  const struct Windows::Foundation::Numerics::float4x4 *v227; // rdx
  __int64 **v228; // r8
  __int64 v229; // rdx
  _BYTE *v230; // rcx
  unsigned int mm; // eax
  __int64 **v232; // rax
  int Blink; // ebx
  int v234; // eax
  __int64 v235; // rcx
  int v236; // eax
  __int64 v237; // rcx
  int v238; // eax
  __int64 v239; // rcx
  int v240; // eax
  __int64 v241; // rcx
  CDrawingContext *v242; // r15
  void *v243; // rbx
  int v244; // eax
  void *v245; // rcx
  __int64 v246; // rax
  __int64 (__fastcall *v247)(CVisual *, void *, __int128 *, __int128 *, __int128 *, __int128 *); // r10
  int v248; // eax
  int v249; // eax
  __int64 v250; // rcx
  int v251; // eax
  __int64 v252; // rcx
  struct _LIST_ENTRY *v253; // rbx
  struct _LIST_ENTRY *v254; // rax
  struct _LIST_ENTRY *Flink; // rcx
  CScopedClipStack *v256; // r12
  __int128 *v257; // r13
  CDrawingContext *v258; // rdx
  unsigned int v259; // edi
  unsigned int v260; // ebx
  _QWORD *v261; // r15
  int v262; // eax
  __int64 v263; // rcx
  __int64 v264; // rcx
  CDrawingContext *v265; // rax
  int *v266; // rbx
  int v267; // eax
  __int64 v268; // rcx
  __int64 v269; // rcx
  int v270; // r8d
  int v271; // eax
  int v272; // r8d
  __int128 v273; // xmm0
  __int128 v274; // xmm1
  __int128 v275; // xmm0
  __int128 v276; // xmm1
  int v277; // eax
  __int64 v278; // rcx
  char v279; // bl
  __int64 v280; // rcx
  int v281; // eax
  __int64 v282; // rcx
  __int64 v283; // rcx
  unsigned int *v284; // r13
  __int64 v285; // rax
  int v286; // ecx
  float v287; // xmm0_4
  char v288; // r12
  CVisual *v289; // r15
  int v290; // r15d
  bool v291; // di
  __int64 v292; // rbx
  char v293; // al
  int v294; // eax
  __int64 v295; // rcx
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rbx
  CDrawingContext *v297; // rdi
  const struct CMILMatrix *TopByReference; // rax
  char v299; // di
  char v300; // r15
  int BitmapRealizationForEffectInput; // eax
  __int64 v302; // rcx
  const struct CMILMatrix *v303; // rax
  int v304; // edi
  bool v305; // bl
  _DWORD *v306; // r8
  __int64 v307; // rdx
  _BYTE *v308; // rcx
  unsigned int nn; // eax
  _QWORD *v310; // rdx
  char v311; // al
  CDrawingContext *v312; // rbx
  char v313; // bl
  unsigned int Count; // ebx
  CDrawingContext *v315; // rsi
  struct CVisual *ChildAt; // rax
  __int64 v317; // r8
  int v318; // eax
  __int64 v319; // rcx
  __int64 v320; // r8
  unsigned int v321; // eax
  __int64 v322; // rcx
  unsigned __int64 v323; // rdi
  int v324; // eax
  __int64 v325; // rcx
  struct CVisual *v326; // rbx
  unsigned int v327; // eax
  struct CVisual *v328; // rbx
  HANDLE v329; // rax
  unsigned int v330; // eax
  __int64 v331; // rcx
  unsigned __int64 v332; // rdi
  int v333; // eax
  __int64 v334; // rcx
  struct CVisual *v335; // rbx
  unsigned int v336; // eax
  struct CVisual *v337; // rbx
  HANDLE v338; // rax
  int v339; // [rsp+20h] [rbp-E0h]
  __int64 v340; // [rsp+40h] [rbp-C0h] BYREF
  CDrawingContext *v341; // [rsp+48h] [rbp-B8h]
  unsigned int *v342; // [rsp+50h] [rbp-B0h]
  CVisual *v343; // [rsp+58h] [rbp-A8h]
  int v344; // [rsp+60h] [rbp-A0h]
  struct CVisualTree *v345; // [rsp+68h] [rbp-98h]
  CScopedClipStack *v346; // [rsp+70h] [rbp-90h] BYREF
  char v347; // [rsp+78h] [rbp-88h] BYREF
  struct CVisual *v348; // [rsp+80h] [rbp-80h] BYREF
  bool *v349; // [rsp+88h] [rbp-78h]
  void *v350; // [rsp+90h] [rbp-70h] BYREF
  __int64 v351; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v352[12]; // [rsp+A8h] [rbp-58h]
  float v353; // [rsp+B4h] [rbp-4Ch]
  __int128 v354; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v355; // [rsp+C8h] [rbp-38h]
  __int128 v356; // [rsp+D8h] [rbp-28h]
  __int128 v357; // [rsp+E8h] [rbp-18h]
  __int64 v358; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v359; // [rsp+100h] [rbp+0h]
  __int128 v360; // [rsp+110h] [rbp+10h]
  __int128 v361; // [rsp+120h] [rbp+20h]
  __int64 v362; // [rsp+130h] [rbp+30h]
  int v363; // [rsp+138h] [rbp+38h]
  __int64 v364; // [rsp+13Ch] [rbp+3Ch]
  int v365; // [rsp+144h] [rbp+44h]
  unsigned __int8 v366; // [rsp+148h] [rbp+48h]
  __int64 v367; // [rsp+150h] [rbp+50h] BYREF
  int v368; // [rsp+158h] [rbp+58h]
  _OWORD v369[4]; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v370; // [rsp+19Ch] [rbp+9Ch]
  char v371; // [rsp+1A0h] [rbp+A0h]
  __int128 v372; // [rsp+1B0h] [rbp+B0h] BYREF
  CVisual *i; // [rsp+1C0h] [rbp+C0h] BYREF
  float v374; // [rsp+1C8h] [rbp+C8h]
  float v375; // [rsp+1CCh] [rbp+CCh]
  __int128 v376; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v377; // [rsp+1E0h] [rbp+E0h]
  int v378; // [rsp+1E8h] [rbp+E8h]
  int v379; // [rsp+1ECh] [rbp+ECh]
  void *lpMem[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int128 v381; // [rsp+208h] [rbp+108h] BYREF
  __int64 v382; // [rsp+218h] [rbp+118h]
  __int64 v383[2]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v384[24]; // [rsp+230h] [rbp+130h] BYREF
  __int128 v385; // [rsp+248h] [rbp+148h] BYREF
  __int64 v386; // [rsp+258h] [rbp+158h]
  __int64 v387[2]; // [rsp+260h] [rbp+160h] BYREF
  __int128 v388; // [rsp+270h] [rbp+170h] BYREF
  void *retaddr; // [rsp+328h] [rbp+228h]

  v3 = 0;
  v349 = a3;
  v345 = a2;
  v4 = 0;
  v341 = (CDrawingContext *)this;
  v382 = 0LL;
  v386 = 0LL;
  v7 = 0LL;
  *(_OWORD *)v387 = 0LL;
  v343 = 0LL;
  v381 = 0LL;
  v385 = 0LL;
  v388 = 0LL;
  *(_OWORD *)v383 = 0LL;
  if ( *((_BYTE *)this + 5920) )
  {
    if ( *((_BYTE *)this + 5921) )
      v7 = this[413];
    else
      v7 = (CVisual *)*((_QWORD *)this[741] + 7);
    v343 = v7;
  }
  v8 = this[414];
  v364 = 0LL;
  v348 = v8;
  v9 = *((_QWORD *)a2 + 7);
  v351 = 0LL;
  *(_QWORD *)v352 = 1065353216LL;
  *(_DWORD *)&v352[8] = 0;
  v353 = 1.0;
  v358 = 0LL;
  v365 = 0;
  v366 = 0;
  v359 = 0LL;
  v360 = 0LL;
  v361 = 0LL;
  v362 = 0LL;
  v363 = 1065353216;
  LOWORD(v364) = 21887;
  *(_QWORD *)&v372 = v9;
  v10 = (_DWORD *)*((_QWORD *)v7 + 28);
  v342 = (unsigned int *)(this + 408);
  if ( (*v10 & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers((__int64)v7);
    v12 = *(CScopedClipStack **)ProjectedShadowReceivers;
    v13 = *(CVisual **)(ProjectedShadowReceivers + 8);
    v346 = v12;
    for ( i = v13; v12 != v13; v346 = v12 )
    {
      v14 = *(CProjectedShadowReceiver **)v12;
      v15 = *(CProjectedShadowScene ***)(*(_QWORD *)v12 + 64LL);
      v16 = *(CProjectedShadowScene ***)(*(_QWORD *)v12 + 72LL);
      if ( v15 != v16 )
      {
        do
        {
          if ( !CCommonRegistryData::DisableProjectedShadows )
          {
            v17 = *v15;
            if ( !CProjectedShadowScene::IsEmptyProjection(*v15) && !CProjectedShadowReceiver::IsEmptyMaskContent(v14) )
            {
              v18 = (__int64 ***)*((_QWORD *)v17 + 7);
              for ( j = *v18; j != (__int64 **)v18; j = (__int64 **)*j )
              {
                if ( !CProjectedShadowCaster::IsEmptyMaskContent((CProjectedShadowCaster *)j[2]) )
                {
                  v20 = 1;
                  goto LABEL_20;
                }
              }
            }
          }
          ++v15;
        }
        while ( v15 != v16 );
        v12 = v346;
        v13 = i;
      }
      v12 = (CScopedClipStack *)((char *)v12 + 8);
    }
  }
  v20 = 0;
LABEL_20:
  v21 = v342;
  v22 = 0xFFFFFFFFLL;
  lpMem[0] = 0LL;
  v23 = 64LL;
  v24 = v342[1];
  v25 = *v342;
  if ( *v342 != (_DWORD)v24 )
    goto LABEL_26;
  v26 = 2LL * (unsigned int)v24;
  if ( v26 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    goto LABEL_29;
  }
  if ( (unsigned int)v26 <= 0x40 )
    LODWORD(v26) = 64;
  v27 = HrMalloc(1uLL, (unsigned int)v26, lpMem);
  if ( v27 >= 0 )
  {
    v29 = lpMem[0];
    memcpy_0(lpMem[0], *((const void **)v342 + 2), *v342);
    operator delete(*((void **)v342 + 2));
    v25 = *v342;
    *((_QWORD *)v342 + 2) = v29;
    v21[1] = v26;
LABEL_26:
    *(_BYTE *)(v25 + *((_QWORD *)v21 + 2)) = v20;
    v30 = v21[6];
    if ( v30 <= ++*v21 )
      v30 = *v21;
    v21[6] = v30;
    goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x53u, 0LL);
  v39 = lpMem[0];
  if ( lpMem[0] )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v39);
  }
LABEL_29:
  v31 = v343;
  if ( (*((_BYTE *)v343 + 94) & 4) != 0 || (*((_DWORD *)v343 + 22) & 0x100) == 0 )
  {
LABEL_625:
    v330 = *v21;
    if ( *v21 )
      *v21 = --v330;
    v331 = v21[1];
    v348 = 0LL;
    if ( v330 == (_DWORD)v331 )
    {
      v332 = 2LL * (unsigned int)v331;
      if ( v332 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v331, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        *v349 = 0;
        goto LABEL_292;
      }
      if ( (unsigned int)v332 <= 0x40 )
        LODWORD(v332) = 64;
      v333 = HrMalloc(1uLL, (unsigned int)v332, (void **)&v348);
      if ( v333 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v334, 0LL, 0, v333, 0x53u, 0LL);
        v337 = v348;
        if ( v348 )
        {
          v338 = GetProcessHeap();
          HeapFree(v338, 0, v337);
          *v349 = 0;
          goto LABEL_292;
        }
        goto LABEL_636;
      }
      v335 = v348;
      memcpy_0(v348, *((const void **)v21 + 2), *v21);
      operator delete(*((void **)v21 + 2));
      v330 = *v21;
      *((_QWORD *)v21 + 2) = v335;
      v21[1] = v332;
    }
    *(_BYTE *)(v330 + *((_QWORD *)v21 + 2)) = 0;
    v336 = v21[6];
    if ( v336 <= ++*v21 )
      v336 = *v21;
    v21[6] = v336;
LABEL_636:
    *v349 = 0;
    goto LABEL_292;
  }
  v32 = v345;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CVisualTree *, __int64, __int64))(*(_QWORD *)v345 + 200LL))(
          v345,
          v22,
          v23) )
  {
    TreeData = CVisual::FindTreeData(v343, v345);
    if ( TreeData )
    {
      v34 = 0LL;
      if ( g_pComposition )
        v34 = *((_QWORD *)g_pComposition + 44);
      if ( *((_BYTE *)TreeData + 18) && *((_QWORD *)TreeData + 35) == v34 )
      {
        v21 = v342;
        goto LABEL_625;
      }
    }
  }
  if ( (unsigned int)((__int64)(*((_QWORD *)v343 + 35) - *((_QWORD *)v343 + 34)) >> 4)
    || (unsigned int)((__int64)(*((_QWORD *)v343 + 38) - *((_QWORD *)v343 + 37)) >> 4) )
  {
    v35 = (CVisual *)&v346;
    v346 = (CScopedClipStack *)0x100000000LL;
    i = (CVisual *)&v346;
    while ( 1 )
    {
      v36 = *(_DWORD *)v35;
      v37 = 0;
      LODWORD(lpMem[0]) = 0;
      v344 = v36;
      if ( (unsigned int)CVisual::GetLightsCount(v31, v36) )
        break;
LABEL_78:
      v35 = (CVisual *)((char *)i + 4);
      i = v35;
      if ( v35 == (CVisual *)&v347 )
        goto LABEL_79;
    }
    while ( 1 )
    {
      if ( v36 )
        v38 = *((_QWORD *)v31 + 38) - *((_QWORD *)v31 + 37);
      else
        v38 = *((_QWORD *)v31 + 35) - *((_QWORD *)v31 + 34);
      if ( v37 < (unsigned int)(v38 >> 4) )
      {
        if ( v36 )
          v42 = *((_QWORD *)v31 + 37);
        else
          v42 = *((_QWORD *)v31 + 34);
        v41 = *(_BYTE **)(v42 + 16LL * v37);
      }
      else
      {
        v41 = 0LL;
      }
      if ( !v41[162]
        || !(*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, CVisual *))(*(_QWORD *)v41 + 256LL))(
              v41,
              v32,
              v31) )
      {
        goto LABEL_77;
      }
      v43 = (unsigned int *)((char *)v341 + 376);
      LODWORD(v376) = 10;
      *((_QWORD *)&v376 + 1) = v31;
      v350 = 0LL;
      v44 = *((_DWORD *)v341 + 95);
      v45 = *((unsigned int *)v341 + 94);
      if ( (_DWORD)v45 != v44 )
        goto LABEL_63;
      v46 = 2LL * v44;
      if ( v46 > 0xFFFFFFFF )
      {
        v49 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        v4 = -2147024362;
LABEL_74:
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v49, 0x1771u, 0LL);
        v36 = v344;
LABEL_75:
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v4, 0x149Fu, 0LL);
          v21 = v342;
          goto LABEL_292;
        }
        goto LABEL_76;
      }
      if ( (unsigned int)v46 <= 0x40 )
        LODWORD(v46) = 64;
      v47 = HrMalloc(0x10uLL, (unsigned int)v46, &v350);
      v49 = v47;
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x53u, 0LL);
      }
      else
      {
        v50 = 16LL * *v43;
        if ( v50 <= 0xFFFFFFFF )
        {
          v51 = v350;
          memcpy_0(v350, *((const void **)v341 + 49), (unsigned int)v50);
          operator delete(*((void **)v341 + 49));
          v45 = *v43;
          *((_QWORD *)v341 + 49) = v51;
          v43[1] = v46;
LABEL_63:
          v52 = 2 * v45;
          v49 = 0;
          *(_OWORD *)(*((_QWORD *)v43 + 2) + 8 * v52) = v376;
          v53 = v43[6];
          if ( v53 <= ++*v43 )
            v53 = *v43;
          v43[6] = v53;
          goto LABEL_66;
        }
        v49 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, -2147024362, 0x55u, 0LL);
      }
      v58 = v350;
      if ( v350 )
      {
        v59 = GetProcessHeap();
        HeapFree(v59, 0, v58);
      }
LABEL_66:
      v4 = v49;
      if ( v49 < 0 )
        goto LABEL_74;
      v54 = v341;
      v36 = v344;
      *(_QWORD *)v384 = v41;
      *(_DWORD *)&v384[8] = v344;
      v55 = *((_DWORD *)v341 + 156);
      v56 = v55 + 1;
      if ( v55 + 1 >= v55 )
      {
        v4 = 0;
        if ( v56 <= *((_DWORD *)v341 + 155) )
        {
          *(_OWORD *)(*((_QWORD *)v341 + 75) + 16LL * *((unsigned int *)v341 + 156)) = *(_OWORD *)v384;
          *((_DWORD *)v54 + 156) = v56;
LABEL_96:
          (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v41 + 8LL))(v41);
          goto LABEL_97;
        }
        v82 = DynArrayImpl<0>::AddMultipleAndSet((char *)v341 + 600, 16LL, 1LL, v384);
        v4 = v82;
        if ( v82 >= 0 )
          goto LABEL_96;
        MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v82, 0xC0u, 0LL);
      }
      else
      {
        v4 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v4, 0x20u, 0LL);
LABEL_97:
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, v4, 0x1774u, 0LL);
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)v43, 0LL);
        goto LABEL_75;
      }
LABEL_76:
      v37 = (unsigned int)lpMem[0];
      v32 = v345;
LABEL_77:
      LODWORD(lpMem[0]) = ++v37;
      if ( v37 >= (unsigned int)CVisual::GetLightsCount(v31, v36) )
        goto LABEL_78;
    }
  }
LABEL_79:
  v61 = v341;
  v62 = (char *)v341 + 840;
  v63 = *(CVisual **)(*((_QWORD *)v341 + 105) + 8LL * (unsigned int)(*((_DWORD *)v341 + 216) - 1));
  v64 = *(_QWORD *)v31;
  v350 = v63;
  v65 = (CVisual *)(*(__int64 (__fastcall **)(CVisual *))(v64 + 168))(v31);
  v66 = v65;
  if ( !v65 || v65 == v63 )
    goto LABEL_112;
  v67 = *((unsigned int *)v341 + 95);
  v350 = v65;
  v68 = *((_DWORD *)v341 + 94);
  LODWORD(v376) = 11;
  *((_QWORD *)&v376 + 1) = v31;
  v346 = 0LL;
  if ( v68 != (_DWORD)v67 )
    goto LABEL_88;
  v69 = 2LL * (unsigned int)v67;
  if ( v69 > 0xFFFFFFFF )
  {
    v72 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_641:
    ModuleFailFastForHRESULT((unsigned int)v72, retaddr);
  }
  if ( (unsigned int)v69 <= 0x40 )
    LODWORD(v69) = 64;
  v70 = HrMalloc(0x10uLL, (unsigned int)v69, (void **)&v346);
  v72 = v70;
  if ( v70 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x53u, 0LL);
  }
  else
  {
    v73 = 16LL * *((unsigned int *)v341 + 94);
    if ( v73 <= 0xFFFFFFFF )
    {
      v74 = v346;
      memcpy_0(v346, *((const void **)v341 + 49), (unsigned int)v73);
      operator delete(*((void **)v341 + 49));
      v75 = v341;
      *((_DWORD *)v341 + 95) = v69;
      v61 = v75;
      *((_QWORD *)v75 + 49) = v74;
      v68 = *((_DWORD *)v75 + 94);
LABEL_88:
      v72 = 0;
      *(_OWORD *)(*((_QWORD *)v61 + 49) + 16LL * v68) = v376;
      v76 = *((_DWORD *)v61 + 100);
      v77 = (unsigned int)++*((_DWORD *)v61 + 94);
      if ( v76 <= (unsigned int)v77 )
        v76 = *((_DWORD *)v61 + 94);
      *((_DWORD *)v61 + 100) = v76;
      goto LABEL_91;
    }
    v72 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v341, 0LL, 0, -2147024362, 0x55u, 0LL);
  }
  v84 = v346;
  if ( v346 )
  {
    v85 = GetProcessHeap();
    HeapFree(v85, 0, v84);
  }
LABEL_91:
  if ( v72 < 0 )
    goto LABEL_641;
  v78 = *((unsigned int *)v62 + 6);
  i = v66;
  v79 = v78 + 1;
  if ( (int)v78 + 1 < (unsigned int)v78 )
  {
    v80 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_643;
  }
  if ( v79 > *((_DWORD *)v62 + 5) )
  {
    v90 = DynArrayImpl<0>::AddMultipleAndSet(v62, 8LL, 1LL, &i);
    v80 = v90;
    if ( v90 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v91, 0LL, 0, v90, 0xC0u, 0LL);
LABEL_643:
      ModuleFailFastForHRESULT(v80, retaddr);
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v62 + 8 * v78) = v66;
    *((_DWORD *)v62 + 6) = v79;
  }
  v61 = v341;
  if ( g_HeatMaps_TargetProcessId && g_HeatMaps_TargetProcessId == *((_DWORD *)v66 + 32) )
    CDrawingContext::SetHeatMapForCurrentNode(v341);
LABEL_112:
  v86 = v349;
  *v349 = 1;
  if ( (*((_BYTE *)v31 + 93) & 0x60) != 0 )
  {
    CVisual::GetHeatMapProperties(v31, &v376);
    v87 = (*((_BYTE *)v31 + 93) & 0x20) != 0;
    *(_OWORD *)&v384[4] = v376;
    *(_DWORD *)v384 = 2 - v87;
    *(_DWORD *)&v384[20] = v377;
    v88 = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push((char *)g_pComposition + 960, v384);
    v4 = v88;
    if ( v88 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v89, 0LL, 0, v88, 0x14C8u, 0LL);
LABEL_115:
      v21 = v342;
      goto LABEL_292;
    }
  }
  v92 = *((_DWORD *)v31 + 24);
  if ( (_BYTE)v92 )
  {
    LODWORD(v376) = (unsigned __int8)v92;
    LODWORD(v377) = (v92 >> 8) & 3;
    HIDWORD(v376) = (v92 >> 14) & 0x1F;
    DWORD1(v376) = (int)(v92 << 18) >> 28;
    DWORD2(v376) = *((_DWORD *)v31 + 47);
    if ( *((_DWORD *)g_pComposition + 240)
      && *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference((char *)g_pComposition + 960) == 2 )
    {
      HIDWORD(v377) = 0;
    }
    else
    {
      HIDWORD(v377) = *((_DWORD *)v31 + 48);
    }
    v378 = *((_DWORD *)v31 + 49);
    v379 = *((_DWORD *)v31 + 50);
    v93 = CDrawingContext::PushRenderOptionsInternal(v61, v31, (const struct MilRenderOptions *)&v376, 1);
    v4 = v93;
    if ( v93 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v94, 0LL, 0, v93, 0x14D8u, 0LL);
      goto LABEL_115;
    }
  }
  v95 = *((_DWORD *)v61 + 102);
  *(_OWORD *)lpMem = 0LL;
  if ( v95 )
    v96 = (void *)(*((_QWORD *)v61 + 53) + 68LL * (unsigned int)(v95 - 1));
  else
    v96 = &CMILMatrix::Identity;
  v97 = *((_QWORD *)v61 + 741);
  v98 = (char *)(v97 + 64);
  if ( v31 != *(CVisual **)(v97 + 56) )
    v98 = (char *)v31 + 140;
  CMILMatrix::Transform3DBoundsHelper<1>(v96, v98, &v381);
  if ( *((float *)&v381 + 2) > *(float *)&v381 && *((float *)&v381 + 3) > *((float *)&v381 + 1) )
  {
    v99 = *((_DWORD *)v31 + 22);
    if ( (v99 & 0x200) != 0 )
    {
      v100 = FLOAT_4_0;
    }
    else if ( (v99 & 0x800) != 0 )
    {
      v100 = FLOAT_0_5;
    }
    else
    {
      v100 = 0.0;
    }
    if ( (v99 & 0x1000) != 0 )
      v100 = v100 + 0.5;
    if ( v100 != 0.0 )
    {
      *((float *)&v381 + 3) = *((float *)&v381 + 3) + v100;
      *(float *)&v381 = *(float *)&v381 - v100;
      *((float *)&v381 + 1) = *((float *)&v381 + 1) - v100;
      *((float *)&v381 + 2) = *((float *)&v381 + 2) + v100;
      *(float *)&v382 = *(float *)&v382 + 0.0;
      *((float *)&v382 + 1) = *((float *)&v382 + 1) + 0.0;
    }
  }
  v101 = (void (__fastcall ***)(_QWORD, CVisual **))(*((_QWORD *)v61 + 4)
                                                   + 8LL
                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)v61 + 4) + 8LL) + 16LL));
  (**v101)(v101, &i);
  v102 = (_QWORD *)((char *)v61 + 936);
  v103 = *((_DWORD *)v61 + 240);
  v346 = (CDrawingContext *)((char *)v61 + 936);
  v104 = (float)(int)i;
  v105 = (float)SHIDWORD(i);
  if ( !v103 || !*(_DWORD *)(84LL * (unsigned int)(v103 - 1) + *v102) )
    goto LABEL_146;
  v106 = *((_DWORD *)v61 + 800);
  if ( v106 )
  {
    *(_OWORD *)lpMem = *(_OWORD *)(*((_QWORD *)v61 + 402) + 16LL * (unsigned int)(v106 - 1));
    v104 = *(float *)&lpMem[1];
    LODWORD(v105) = _mm_shuffle_ps(*(__m128 *)lpMem, *(__m128 *)lpMem, 255).m128_u32[0];
LABEL_146:
    v107 = *(float *)lpMem;
    v108 = *((float *)lpMem + 1);
    goto LABEL_147;
  }
  LODWORD(v107) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v108 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v104 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v105 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
LABEL_147:
  if ( v103 && *(_DWORD *)(84LL * (unsigned int)(v103 - 1) + *v102 + 4) )
  {
    v109 = *((_DWORD *)v61 + 458);
    v110 = 136LL * (unsigned int)(v109 - 1);
    v111 = *((_QWORD *)v61 + 226);
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= *(float *)(v110 + v111 + 112)
      && *(float *)(v110 + v111 + 120) >= *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                          + 2)
      || *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= *(float *)(v110 + v111 + 116)
      && *(float *)(v110 + v111 + 124) >= *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                          + 3) )
    {
      CScopedClipStack::ComputeCpuClipBoundsInScope((CDrawingContext *)((char *)v61 + 936));
      v109 = *((_DWORD *)v61 + 458);
    }
    v112 = 136LL * (unsigned int)(v109 - 1);
    v113 = *((_QWORD *)v61 + 226);
    if ( *(float *)(v112 + v113 + 112) > v107 )
      v107 = *(float *)(v112 + v113 + 112);
    v114 = v108;
    if ( *(float *)(v112 + v113 + 116) > v108 )
    {
      v108 = *(float *)(v112 + v113 + 116);
      v114 = v108;
    }
    v115 = v104;
    if ( v104 > *(float *)(v112 + v113 + 120) )
    {
      v104 = *(float *)(v112 + v113 + 120);
      v115 = v104;
    }
    v116 = v105;
    if ( v105 > *(float *)(v112 + v113 + 124) )
    {
      v105 = *(float *)(v112 + v113 + 124);
      v116 = v105;
    }
    if ( v115 <= v107 || v116 <= v114 )
    {
      v105 = 0.0;
      v104 = 0.0;
      v108 = 0.0;
      v107 = 0.0;
    }
  }
  v377 = v382;
  *(_QWORD *)&v376 = __PAIR64__(LODWORD(v108), LODWORD(v107));
  *((_QWORD *)&v376 + 1) = __PAIR64__(LODWORD(v105), LODWORD(v104));
  TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
    &v381,
    &v376);
  LODWORD(v117) = v381;
  v118 = *((float *)&v381 + 2);
  v119 = *((float *)&v381 + 1);
  v120 = *((float *)&v381 + 3);
  *(_OWORD *)v387 = v381;
  if ( *((float *)&v381 + 2) <= *(float *)&v381 || *((float *)&v381 + 3) <= *((float *)&v381 + 1) )
  {
    v21 = v342;
    v321 = *v342;
    if ( *v342 )
      *v342 = --v321;
    v322 = v21[1];
    v348 = 0LL;
    if ( v321 == (_DWORD)v322 )
    {
      v323 = 2LL * (unsigned int)v322;
      if ( v323 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v322, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        *v86 = 0;
        goto LABEL_292;
      }
      if ( (unsigned int)v323 <= 0x40 )
        LODWORD(v323) = 64;
      v324 = HrMalloc(1uLL, (unsigned int)v323, (void **)&v348);
      if ( v324 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v325, 0LL, 0, v324, 0x53u, 0LL);
        v328 = v348;
        if ( v348 )
        {
          v329 = GetProcessHeap();
          HeapFree(v329, 0, v328);
          *v86 = 0;
          goto LABEL_292;
        }
        goto LABEL_620;
      }
      v326 = v348;
      memcpy_0(v348, *((const void **)v21 + 2), *v21);
      operator delete(*((void **)v21 + 2));
      v321 = *v21;
      *((_QWORD *)v21 + 2) = v326;
      v21[1] = v323;
    }
    *(_BYTE *)(v321 + *((_QWORD *)v21 + 2)) = 0;
    v327 = v21[6];
    if ( v327 <= ++*v21 )
      v327 = *v21;
    v21[6] = v327;
LABEL_620:
    *v86 = 0;
    goto LABEL_292;
  }
  v121 = *((_QWORD *)v61 + 742);
  if ( v121 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v345 + 200LL))(v345) )
    {
      v122 = (char *)v31 + 320;
      goto LABEL_170;
    }
    v132 = *((_QWORD *)v31 + 28);
    if ( *(int *)v132 < 0 )
    {
      v133 = *(unsigned int *)(v132 + 4);
      v134 = (_BYTE *)(v132 + 8);
      for ( k = 0; k < (unsigned int)v133; ++v134 )
      {
        if ( *v134 == 1 )
          break;
        ++k;
      }
      v136 = k >= (unsigned int)v133 ? 0LL : (_QWORD **)(v133 + 15 + v132 + 8LL * k - (((_BYTE)v133 + 15) & 7));
      v137 = *v136;
      if ( *v136 )
      {
        v138 = (_QWORD *)*v137;
        if ( (_QWORD *)*v137 != v137 )
        {
          while ( 1 )
          {
            v122 = (char *)(v138 - 36);
            if ( (struct CVisualTree *)v138[4] == v345 )
              break;
            v138 = (_QWORD *)*v138;
            if ( v138 == v137 )
              goto LABEL_199;
          }
LABEL_170:
          if ( v122 )
          {
            v123 = *((_QWORD *)v122 + 4);
            if ( v123
              || (v123 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v122 + 3) + 360LL))(*((_QWORD *)v122 + 3)),
                  (*((_QWORD *)v122 + 4) = v123) != 0LL) )
            {
              if ( v118 <= v117
                || v120 <= v119
                || (v124 = *(unsigned int *)(v123 + 12),
                    i = (CVisual *)__PAIR64__(LODWORD(v119), LODWORD(v117)),
                    v374 = v118,
                    v375 = v120,
                    (unsigned __int8)CArrayBasedCoverageSet::IsCovered(v121 + 408, &i, v124)) )
              {
                v21 = v342;
                v125 = *v342;
                if ( *v342 )
                  *v342 = --v125;
                v126 = v21[1];
                v346 = 0LL;
                if ( v125 == (_DWORD)v126 )
                {
                  v127 = 2LL * (unsigned int)v126;
                  if ( v127 > 0xFFFFFFFF )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v126, 0LL, 0, -2147024362, 0x4Cu, 0LL);
                    *v349 = 0;
                    goto LABEL_292;
                  }
                  if ( (unsigned int)v127 <= 0x40 )
                    LODWORD(v127) = 64;
                  v128 = HrMalloc(1uLL, (unsigned int)v127, (void **)&v346);
                  if ( v128 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v129, 0LL, 0, v128, 0x53u, 0LL);
                    v148 = v346;
                    if ( v346 )
                    {
                      v149 = GetProcessHeap();
                      HeapFree(v149, 0, v148);
                      *v349 = 0;
                      goto LABEL_292;
                    }
                    goto LABEL_187;
                  }
                  v130 = v346;
                  memcpy_0(v346, *((const void **)v21 + 2), *v21);
                  operator delete(*((void **)v21 + 2));
                  v125 = *v21;
                  *((_QWORD *)v21 + 2) = v130;
                  v21[1] = v127;
                }
                *(_BYTE *)(v125 + *((_QWORD *)v21 + 2)) = 0;
                v131 = v21[6];
                if ( v131 <= ++*v21 )
                  v131 = *v21;
                v21[6] = v131;
LABEL_187:
                *v349 = 0;
                goto LABEL_292;
              }
            }
          }
        }
      }
    }
  }
LABEL_199:
  v139 = v341;
  v140 = v345;
  v141 = *((_QWORD *)v341 + 742);
  if ( !v141 )
    goto LABEL_224;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v345 + 200LL))(v345) )
  {
    v142 = (char *)v31 + 320;
    goto LABEL_202;
  }
  v150 = *((_QWORD *)v31 + 28);
  if ( *(int *)v150 >= 0 )
    goto LABEL_224;
  v151 = *(unsigned int *)(v150 + 4);
  v152 = (_BYTE *)(v150 + 8);
  for ( m = 0; m < (unsigned int)v151; ++v152 )
  {
    if ( *v152 == 1 )
      break;
    ++m;
  }
  v154 = m >= (unsigned int)v151 ? 0LL : (_QWORD **)(v151 + 15 + v150 + 8LL * m - (((_BYTE)v151 + 15) & 7));
  v155 = *v154;
  if ( !*v154 || (v156 = (_QWORD *)*v155, (_QWORD *)*v155 == v155) )
  {
LABEL_224:
    CDrawingContext::GetEffects(v139, v140, v31, (struct CDrawingContext::NodeEffects *)&v351);
    if ( COERCE_FLOAT(*(_DWORD *)v352 & _xmm) < 0.0000011920929 || COERCE_FLOAT(LODWORD(v353) & _xmm) < 0.0000011920929 )
    {
LABEL_457:
      *v349 = 0;
      goto LABEL_291;
    }
    v157 = (CVisual *)*((_QWORD *)v139 + 413);
    v158 = (char *)&v358 + 4;
    v159 = *(_QWORD *)v140;
    v160 = -2003292412;
    i = v157;
    if ( !(_BYTE)v365 )
      v158 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(v159 + 200))(v140) )
    {
      v162 = (char *)v157 + 320;
    }
    else
    {
      v172 = *((_QWORD *)v157 + 28);
      if ( *(int *)v172 >= 0 )
        goto LABEL_298;
      v173 = *(unsigned int *)(v172 + 4);
      v174 = (_BYTE *)(v172 + 8);
      for ( n = 0; n < (unsigned int)v173; ++v174 )
      {
        if ( *v174 == 1 )
          break;
        ++n;
      }
      v176 = n >= (unsigned int)v173 ? 0LL : (__int64 *)(v173 + 15 + v172 + 8LL * n - (((_BYTE)v173 + 15) & 7));
      v161 = *v176;
      if ( !*v176 )
        goto LABEL_298;
      v177 = *(_QWORD **)v161;
      if ( *(_QWORD *)v161 == v161 )
        goto LABEL_298;
      while ( 1 )
      {
        v162 = (char *)(v177 - 36);
        if ( (struct CVisualTree *)v177[4] == v140 )
          break;
        v177 = (_QWORD *)*v177;
        if ( v177 == (_QWORD *)v161 )
          goto LABEL_298;
      }
    }
    if ( !v162 )
    {
LABEL_298:
      v183 = 0;
      goto LABEL_299;
    }
    v163 = v345;
    v164 = 0;
    v160 = 0;
    v165 = 0LL;
    if ( v157 == *((CVisual **)v345 + 7) )
      goto LABEL_276;
    v166 = 0LL;
    if ( g_pComposition )
      v166 = *((_QWORD *)g_pComposition + 44);
    if ( !v162[18] || *((_QWORD *)v162 + 35) != v166 )
    {
      v167 = (_DWORD *)*((_QWORD *)v157 + 28);
      if ( (*v167 & 0x1000000) != 0 )
      {
        v168 = (unsigned int)v167[1];
        v169 = v167 + 2;
        for ( ii = 0; ii < (unsigned int)v168; ++v169 )
        {
          if ( *v169 == 8 )
            break;
          ++ii;
        }
        v171 = ii >= (unsigned int)v168
             ? 0LL
             : (_QWORD **)((char *)v167 + 8LL * ii - (((_BYTE)v168 + 15) & 7) + v168 + 15);
        if ( *v171 )
        {
          v178 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v171 + 200LL))(**v171);
          if ( v178 )
          {
            v164 = 1;
            if ( !(*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v345 + 200LL))(v345) )
            {
              TreeDataListHead = (__int64 *)CVisual::GetTreeDataListHead(v178);
              v163 = v345;
              if ( TreeDataListHead )
              {
                v161 = *TreeDataListHead;
                if ( (__int64 *)*TreeDataListHead != TreeDataListHead )
                {
                  while ( *(struct CVisualTree **)(v161 + 32) != v345 )
                  {
                    v161 = *(_QWORD *)v161;
                    if ( (__int64 *)v161 == TreeDataListHead )
                      goto LABEL_274;
                  }
LABEL_271:
                  v165 = (const struct CTreeData *)(v161 - 288);
                }
              }
LABEL_274:
              if ( v165 )
              {
                v181 = *((_QWORD *)v165 + 15);
                goto LABEL_277;
              }
LABEL_276:
              v181 = 1LL;
LABEL_277:
              if ( *((_QWORD *)v162 + 15) < v181 )
              {
                updated = CVisual::UpdateWorldTransform((CComposition **)i, v163, (struct CTreeData *)v162, v164, v165);
                v160 = updated;
                if ( updated < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v161, 0LL, 0, updated, 0x793u, 0LL);
              }
              if ( v160 >= 0 )
              {
                if ( !*((_QWORD *)v162 + 15) )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v161, 0LL, 0, -2003292412, 0x74u, 0LL);
                  v160 = -2003292412;
                  MilInstrumentationCheckHR_MaybeFailFast(v186, 0LL, 0, -2003292412, 0x6E2u, 0LL);
                  v4 = -2003292412;
                  goto LABEL_289;
                }
                v354 = *(_OWORD *)(v162 + 40);
                v355 = *(_OWORD *)(v162 + 56);
                v356 = *(_OWORD *)(v162 + 72);
                v357 = *(_OWORD *)(v162 + 88);
                LODWORD(v358) = *((_DWORD *)v162 + 26);
                v183 = v162[17];
                if ( v158 )
                {
                  v184 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_HitTesting_32337248>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_HitTesting_32337248>::GetImpl'::`2'::impl) == 0;
                  v185 = *((_QWORD *)v162 + 14);
                  if ( !v184 && !v185 )
                  {
                    v31 = v343;
                    v160 = 0;
                    *(_OWORD *)v158 = *(_OWORD *)(v162 + 40);
                    *((_OWORD *)v158 + 1) = *(_OWORD *)(v162 + 56);
                    *((_OWORD *)v158 + 2) = *(_OWORD *)(v162 + 72);
                    *((_OWORD *)v158 + 3) = *(_OWORD *)(v162 + 88);
                    *((_DWORD *)v158 + 16) = *((_DWORD *)v162 + 26);
                    goto LABEL_299;
                  }
                  *(_OWORD *)v158 = *(_OWORD *)v185;
                  *((_OWORD *)v158 + 1) = *(_OWORD *)(v185 + 16);
                  *((_OWORD *)v158 + 2) = *(_OWORD *)(v185 + 32);
                  *((_OWORD *)v158 + 3) = *(_OWORD *)(v185 + 48);
                  *((_DWORD *)v158 + 16) = *(_DWORD *)(v185 + 64);
                }
                v31 = v343;
                v160 = 0;
LABEL_299:
                v4 = v160;
                if ( v160 >= 0 )
                {
                  if ( v183 || v31 == (CVisual *)v372 )
                  {
                    if ( !*((_BYTE *)v341 + 5952) )
                      CMILMatrix::Multiply((CMILMatrix *)&v354, (CDrawingContext *)((char *)v341 + 96));
                    v189 = CDrawingContext::PushTransformInternal(v341, v31, (const struct CMILMatrix *)&v354, 0, 1);
                    v4 = v189;
                    if ( v189 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v190, 0LL, 0, v189, 0x153Au, 0LL);
                      goto LABEL_291;
                    }
                  }
                  else
                  {
                    v188 = v341;
                    if ( *((_BYTE *)v341 + 5952) )
                    {
LABEL_308:
                      if ( (_BYTE)v365 && !*((_BYTE *)v188 + 5952) )
                        CMILMatrix::Multiply((CMILMatrix *)((char *)&v358 + 4), (CDrawingContext *)((char *)v188 + 96));
                      v191 = v343;
                      v192 = 0;
                      v193 = 0;
                      if ( !*((_QWORD *)v343 + 30) )
                        goto LABEL_379;
                      if ( SBYTE1(v364) >> 6 )
                      {
                        v194 = SBYTE1(v364) >> 6 == 1;
                      }
                      else
                      {
                        v194 = 0;
                        LODWORD(v195) = COERCE_UNSIGNED_INT(*((float *)&v359 + 1) - 0.0) & _xmm;
                        if ( v195 < 0.000081380211
                          && (COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v360 + 1) - 0.0) & _xmm) < 0.000081380211
                           && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v362 + 1) - 0.0) & _xmm) < 0.000081380211
                           || v195 < 0.000081380211
                           && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v360 + 1) - 0.0) & _xmm) < 0.000081380211
                           && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v360 + 3) - 0.0) & _xmm) < 0.000081380211
                           && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v361 - 0.0) & _xmm) < 0.000081380211
                           && (COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v361 + 1) - 0.0) & _xmm) < 0.000081380211
                            || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v361 + 1) - 1.0) & _xmm) < 0.000081380211)
                           && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v361 + 2) - 0.0) & _xmm) < 0.000081380211
                           && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v362 + 1) - 0.0) & _xmm) < 0.000081380211) )
                        {
                          v194 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                                (float)((float)((float)(COERCE_FLOAT(DWORD2(v360) & _xmm) * 61440.0)
                                                              + (float)(COERCE_FLOAT(DWORD2(v359) & _xmm) * 61440.0))
                                                      + COERCE_FLOAT(v363 & _xmm))
                                              - 1.0) & _xmm) < 0.000081380211;
                        }
                        BYTE1(v364) = BYTE1(v364) & 0x3F | ((v194 << 7) - 64);
                      }
                      if ( (!v194
                         || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v359 - 0.0) & _xmm) >= 0.000081380211
                         || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v359 + 3) - 0.0) & _xmm) >= 0.000081380211)
                        && (COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v358 + 1) - 0.0) & _xmm) >= 0.000081380211
                         || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v360 - 0.0) & _xmm) >= 0.000081380211) )
                      {
                        goto LABEL_379;
                      }
                      v196 = (CGeometry *)*((_QWORD *)v343 + 30);
                      i = 0LL;
                      v197 = 0;
                      *(_QWORD *)&v372 = 0LL;
                      LOBYTE(v374) = 0;
                      v376 = 0LL;
                      v198 = 0LL;
                      BYTE8(v372) = 0;
                      ShapeData = CGeometry::GetShapeData(
                                    v196,
                                    (const struct D2D_SIZE_F *)((char *)v343 + 132),
                                    (struct CShapePtr *)&v372);
                      v201 = ShapeData;
                      if ( ShapeData < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v200, 0LL, 0, ShapeData, 0x881u, 0LL);
                      }
                      else
                      {
                        v202 = (CVisual *)v372;
                        v201 = -2003292412;
                        if ( (_QWORD)v372 )
                        {
                          v203 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(*(_QWORD *)v372 + 32LL))(
                                   v372,
                                   &v376,
                                   0LL);
                          v201 = v203;
                          if ( v203 < 0 )
                            MilInstrumentationCheckHR_MaybeFailFast(v200, 0LL, 0, v203, 0x115u, 0LL);
                          v202 = (CVisual *)v372;
                        }
                        if ( v201 >= 0 )
                        {
                          v197 = BYTE8(v372);
                          v204 = 0LL;
                          LOBYTE(v374) = BYTE8(v372);
                          v198 = v202;
                          *(_QWORD *)&v372 = 0LL;
                          BYTE8(v372) = 0;
                          i = v202;
LABEL_342:
                          v4 = 0;
                          if ( v201 != -2003304438 )
                            v4 = v201;
                          if ( BYTE8(v372) && v204 )
                            (**v204)(v204, 1LL);
                          if ( v4 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast((__int64)v204, 0LL, 0, v4, 0x1553u, 0LL);
                            CShapePtr::Release((CShapePtr *)&i);
                            goto LABEL_290;
                          }
                          if ( !v198
                            || !(*(unsigned __int8 (__fastcall **)(CVisual *, void **))(*(_QWORD *)v202 + 40LL))(
                                  v202,
                                  lpMem)
                            || LODWORD(lpMem[0]) != 1 )
                          {
                            goto LABEL_374;
                          }
                          v372 = 0LL;
                          v205 = (*(__int64 (__fastcall **)(CVisual *, __int128 *, char *))(*(_QWORD *)v198 + 32LL))(
                                   v198,
                                   &v372,
                                   (char *)&v358 + 4);
                          if ( v205 < 0 )
                            MilInstrumentationCheckHR_MaybeFailFast(v206, 0LL, 0, v205, 0x115u, 0LL);
                          if ( *((float *)&v372 + 2) > *(float *)&v372
                            && *((float *)&v372 + 3) > *((float *)&v372 + 1)
                            && (*(float *)&v372 <= -3.4028235e38
                              ? (LODWORD(v372) = -8388609)
                              : (*(float *)&v372 = *(float *)&v372 + -0.015625),
                                *((float *)&v372 + 1) <= -3.4028235e38
                              ? (DWORD1(v372) = -8388609)
                              : (*((float *)&v372 + 1) = *((float *)&v372 + 1) + -0.015625),
                                *((float *)&v372 + 2) >= 3.4028235e38
                              ? (DWORD2(v372) = 2139095039)
                              : (*((float *)&v372 + 2) = *((float *)&v372 + 2) + 0.015625),
                                *((float *)&v372 + 3) >= 3.4028235e38
                              ? (HIDWORD(v372) = 2139095039)
                              : (*((float *)&v372 + 3) = *((float *)&v372 + 3) + 0.015625),
                                (v207 = (void (__fastcall ***)(_QWORD, CVisual **))(*((_QWORD *)v341 + 4)
                                                                                  + 8LL
                                                                                  + *(int *)(*(_QWORD *)(*((_QWORD *)v341 + 4) + 8LL)
                                                                                           + 16LL)),
                                 (**v207)(v207, &i),
                                 v208 = (float)SHIDWORD(i),
                                 (float)(int)i <= 0.0)
                             || v208 <= 9.0
                             || *(float *)&v372 <= 0.0
                             && *((float *)&v372 + 1) <= 9.0
                             && *((float *)&v372 + 2) >= (float)(int)i
                             && *((float *)&v372 + 3) >= v208) )
                          {
                            v192 = 2;
                            v193 = 1;
                          }
                          else
                          {
LABEL_374:
                            v193 = 0;
                          }
                          if ( v197 && v198 )
                            (**(void (__fastcall ***)(CVisual *, __int64))v198)(v198, 1LL);
                          v191 = v343;
LABEL_379:
                          if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v191 + 56LL))(
                                 v191,
                                 178LL) )
                          {
                            v209 = (_DWORD *)*((_QWORD *)v191 + 28);
                            if ( (*v209 & 0x10000) != 0 )
                            {
                              v210 = *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::FindData(v209, 16LL);
                              if ( v210 )
                              {
                                if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v210 + 208LL))(v210) )
                                  v192 = 5;
                              }
                            }
                          }
                          if ( HIBYTE(v365) )
                            v192 = 5;
                          v211 = v345;
                          v212 = 0LL;
                          if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v345 + 200LL))(v345) )
                          {
                            v212 = (char *)v191 + 320;
                          }
                          else
                          {
                            v213 = *((_QWORD *)v191 + 28);
                            if ( *(int *)v213 < 0 )
                            {
                              v214 = *(unsigned int *)(v213 + 4);
                              v215 = (_BYTE *)(v213 + 8);
                              for ( jj = 0; jj < (unsigned int)v214; ++v215 )
                              {
                                if ( *v215 == 1 )
                                  break;
                                ++jj;
                              }
                              v217 = jj >= (unsigned int)v214
                                   ? 0LL
                                   : (_QWORD **)(v214 + 15 + v213 + 8LL * jj - (((_BYTE)v214 + 15) & 7));
                              v218 = *v217;
                              if ( *v217 )
                              {
                                v219 = (_QWORD *)*v218;
                                if ( (_QWORD *)*v218 != v218 )
                                {
                                  while ( (struct CVisualTree *)v219[4] != v345 )
                                  {
                                    v219 = (_QWORD *)*v219;
                                    if ( v219 == v218 )
                                      goto LABEL_402;
                                  }
                                  v212 = (char *)(v219 - 36);
                                }
                              }
                            }
                          }
LABEL_402:
                          if ( v191 != *((CVisual **)v345 + 7) )
                          {
                            v220 = (CVisual *)*((_QWORD *)v191 + 10);
                            if ( !(*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v345 + 200LL))(v345) )
                            {
                              v221 = CVisual::GetTreeDataListHead(v220);
                              if ( v221 )
                              {
                                for ( kk = v221->Flink; kk != v221; kk = kk->Flink )
                                {
                                  if ( (struct CVisualTree *)kk[2].Flink == v345 )
                                    break;
                                }
                              }
                            }
                          }
                          v223 = v192;
                          LOBYTE(v339) = v193;
                          v31 = v343;
                          v224 = CCpuClippingData::Update(v212 + 200, v345, v343, v223, v339);
                          v344 = v224;
                          v4 = v224;
                          if ( v224 < 0 )
                            MilInstrumentationCheckHR_MaybeFailFast(v225, 0LL, 0, v224, 0x7F3u, 0LL);
                          if ( v4 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(v225, 0LL, 0, v4, 0x1587u, 0LL);
                            goto LABEL_291;
                          }
                          v226 = 0LL;
                          if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v345 + 200LL))(v345) )
                          {
                            v226 = (__int64 **)((char *)v343 + 320);
                          }
                          else
                          {
                            v228 = (__int64 **)*((_QWORD *)v343 + 28);
                            if ( *(int *)v228 < 0 )
                            {
                              v229 = *((unsigned int *)v228 + 1);
                              v230 = v228 + 1;
                              for ( mm = 0; mm < (unsigned int)v229; ++v230 )
                              {
                                if ( *v230 == 1 )
                                  break;
                                ++mm;
                              }
                              v227 = mm >= (unsigned int)v229
                                   ? 0LL
                                   : (const struct Windows::Foundation::Numerics::float4x4 *)((char *)v228
                                                                                            + v229
                                                                                            + 8LL * mm
                                                                                            - (((_BYTE)v229 + 15) & 7)
                                                                                            + 15);
                              v228 = *(__int64 ***)v227;
                              if ( *(_QWORD *)v227 )
                              {
                                v232 = (__int64 **)*v228;
                                if ( *v228 != (__int64 *)v228 )
                                {
                                  while ( v232[4] != (__int64 *)v345 )
                                  {
                                    v232 = (__int64 **)*v232;
                                    if ( v232 == v228 )
                                      goto LABEL_426;
                                  }
                                  v226 = v232 - 36;
                                }
                              }
                            }
                          }
LABEL_426:
                          Blink = *((_DWORD *)v226 + 50);
                          if ( Blink != 5 )
                          {
                            if ( Blink != 4 )
                            {
                              if ( Blink == 3 )
                              {
                                LOBYTE(v228) = 1;
                                v376 = 0LL;
                                v238 = CDrawingContext::PushClippingScope(
                                         (_DWORD)v341,
                                         (_DWORD)v343,
                                         (_DWORD)v228,
                                         (unsigned int)&v358 + 4,
                                         (__int64)&v376);
                                v4 = v238;
                                if ( v238 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(v239, 0LL, 0, v238, 0x15AAu, 0LL);
                                  goto LABEL_291;
                                }
                                v240 = CDrawingContext::PushGpuClipRectInternal(
                                         (__int64)v341,
                                         (__int64)v343,
                                         (float *)&v376,
                                         0,
                                         1);
                                v344 = v240;
                                v4 = v240;
                                if ( v240 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(v241, 0LL, 0, v240, 0x15B0u, 0LL);
                                  goto LABEL_291;
                                }
                              }
                              goto LABEL_439;
                            }
                            if ( !(_BYTE)v365 )
                              goto LABEL_440;
                          }
                          if ( *(_BYTE *)(84LL * (unsigned int)(*((_DWORD *)v341 + 240) - 1)
                                        + *((_QWORD *)v341 + 117)
                                        + 80) )
                          {
                            v376 = 0LL;
                            v234 = CDrawingContext::PushClippingScope((_DWORD)v341, (_DWORD)v343, 0, 0, (__int64)&v376);
                            v4 = v234;
                            if ( v234 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(v235, 0LL, 0, v234, 0x1598u, 0LL);
                              goto LABEL_291;
                            }
                            v236 = CDrawingContext::PushGpuClipRectInternal(
                                     (__int64)v341,
                                     (__int64)v343,
                                     (float *)&v376,
                                     0,
                                     1);
                            v344 = v236;
                            v4 = v236;
                            if ( v236 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(v237, 0LL, 0, v236, 0x159Eu, 0LL);
                              goto LABEL_291;
                            }
                          }
LABEL_439:
                          if ( (_BYTE)v365 )
                          {
LABEL_444:
                            if ( !*((_DWORD *)g_pComposition + 240)
                              || *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference((char *)g_pComposition + 960) != 2 )
                            {
                              v242 = v341;
                              v243 = &CMILMatrix::Identity;
                              v377 = 0LL;
                              v376 = 0LL;
                              v244 = *((_DWORD *)v341 + 102);
                              if ( v244 )
                                v245 = (void *)(*((_QWORD *)v341 + 53) + 68LL * (unsigned int)(v244 - 1));
                              else
                                v245 = &CMILMatrix::Identity;
                              CMILMatrix::Transform3DBoundsHelper<1>(v245, (char *)v343 + 164, &v376);
                              v385 = v376;
                              v386 = v377;
                              v246 = *(_QWORD *)v343;
                              v372 = 0LL;
                              v247 = *(__int64 (__fastcall **)(CVisual *, void *, __int128 *, __int128 *, __int128 *, __int128 *))(v246 + 216);
                              v248 = *((_DWORD *)v341 + 102);
                              if ( v248 )
                                v243 = (void *)(*((_QWORD *)v341 + 53) + 68LL * (unsigned int)(v248 - 1));
                              v249 = v247(v343, v243, &v381, &v385, &v388, &v372);
                              v4 = v249;
                              if ( v249 < 0 )
                                MilInstrumentationCheckHR_MaybeFailFast(v250, 0LL, 0, v249, 0xA0Fu, 0LL);
                              else
                                *(_OWORD *)v383 = v372;
                              if ( v4 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(v250, 0LL, 0, v4, 0x15C5u, 0LL);
                                goto LABEL_291;
                              }
                              v251 = CDrawingContext::PushEffects(v341, (__int64)v383, (__int64)v387, (__int64)&v340);
                              v344 = v251;
                              v4 = v251;
                              if ( v251 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(v252, 0LL, 0, v251, 0x15CCu, 0LL);
                                goto LABEL_291;
                              }
                              if ( (_BYTE)v340 )
                                goto LABEL_457;
                              v253 = 0LL;
                              if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v211 + 200LL))(v211) )
                              {
                                Blink = *((_DWORD *)v31 + 130);
                              }
                              else
                              {
                                v254 = CVisual::GetTreeDataListHead(v31);
                                if ( v254 )
                                {
                                  Flink = v254->Flink;
                                  if ( v254->Flink != v254 )
                                  {
                                    while ( (struct CVisualTree *)Flink[2].Flink != v211 )
                                    {
                                      Flink = Flink->Flink;
                                      if ( Flink == v254 )
                                      {
                                        Blink = MEMORY[0xC8];
                                        goto LABEL_468;
                                      }
                                    }
                                    v253 = Flink - 18;
                                  }
                                }
                                Blink = (int)v253[12].Blink;
                              }
                              goto LABEL_468;
                            }
LABEL_467:
                            v242 = v341;
LABEL_468:
                            if ( ((Blink - 2) & 0xFFFFFFFD) != 0 )
                              goto LABEL_521;
                            v256 = v346;
                            v257 = 0LL;
                            if ( Blink == 2 )
                            {
                              v257 = (__int128 *)(84LL * (unsigned int)(*((_DWORD *)v346 + 6) - 1)
                                                + *(_QWORD *)v346
                                                + 12LL);
                            }
                            else if ( Blink == 4 )
                            {
                              v257 = &v354;
                            }
                            v258 = v341;
                            v372 = 0LL;
                            v4 = 0;
                            v259 = 0;
                            v260 = 0;
                            if ( *((_DWORD *)v341 + 140) )
                            {
                              v261 = (_QWORD *)((char *)v341 + 536);
                              while ( 1 )
                              {
                                v262 = CD2DLayer::ApplyState(*(CD2DLayer **)(*v261 + 8LL * v260), v258);
                                v4 = v262;
                                if ( v262 < 0 )
                                  break;
                                v258 = v341;
                                ++v259;
                                if ( ++v260 >= *((_DWORD *)v341 + 140) )
                                  goto LABEL_477;
                              }
                              MilInstrumentationCheckHR_MaybeFailFast(v263, 0LL, 0, v262, 0xFC7u, 0LL);
                            }
                            else
                            {
LABEL_477:
                              v261 = (_QWORD *)((char *)v258 + 536);
                              *((_DWORD *)v258 + 140) = 0;
                              DynArrayImpl<0>::ShrinkToSize((char *)v258 + 536, 8LL);
                            }
                            v265 = v341;
                            if ( v259 < *((_DWORD *)v341 + 140) && v259 )
                            {
                              DynArray<CD2DLayer *,0>::ShiftLeft(v261, v259);
                              v265 = v341;
                            }
                            if ( v4 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(v264, 0LL, 0, v4, 0xFB2u, 0LL);
                              v265 = v341;
                            }
                            else if ( *((_BYTE *)v265 + 5955) )
                            {
                              *((_WORD *)v265 + 2977) = 1;
                            }
                            if ( v4 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(v264, 0LL, 0, v4, 0xB47u, 0LL);
                            }
                            else
                            {
                              v266 = (int *)((char *)v265 + 376);
                              *((_QWORD *)&v376 + 1) = v343;
                              LODWORD(v376) = 4;
                              v267 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                                       (unsigned int *)v265 + 94,
                                       &v376);
                              v4 = v267;
                              if ( v267 >= 0 )
                              {
                                v270 = *((_DWORD *)v256 + 6);
                                v367 = 0LL;
                                v368 = 0;
                                v370 = 0;
                                v371 = 1;
                                if ( v270
                                  && *(_DWORD *)(84LL * (unsigned int)(v270 - 1) + *(_QWORD *)v256)
                                  && (v271 = *((_DWORD *)v256 + 566)) != 0 )
                                {
                                  v372 = *(_OWORD *)(*((_QWORD *)v256 + 285) + 16LL * (unsigned int)(v271 - 1));
                                }
                                else
                                {
                                  v372 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                                }
                                if ( v270 && *(_DWORD *)(84LL * (unsigned int)(v270 - 1) + *(_QWORD *)v256 + 4) )
                                {
                                  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(
                                                          136LL * (unsigned int)(*((_DWORD *)v256 + 224) - 1)
                                                        + *((_QWORD *)v256 + 109)
                                                        + 112LL) )
                                  {
                                    CScopedClipStack::ComputeCpuClipBoundsInScope(v256);
                                    v272 = *((_DWORD *)v256 + 224);
                                  }
                                  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
                                    &v372,
                                    *((_QWORD *)v256 + 109) + 112LL + 136LL * (unsigned int)(v272 - 1));
                                }
                                if ( v257 )
                                {
                                  v273 = *v257;
                                  v274 = v257[1];
                                  v370 = *((_DWORD *)v257 + 16);
                                  v369[0] = v273;
                                  v275 = v257[2];
                                  v369[1] = v274;
                                  v276 = v257[3];
                                  v369[2] = v275;
                                  v369[3] = v276;
                                }
                                else
                                {
                                  CMILMatrix::SetToIdentity((CMILMatrix *)v369);
                                }
                                v277 = DynArray<CScopedClipStack::ClippingScopeState,0>::AddMultipleAndSet(v256, &v367);
                                v4 = v277;
                                if ( v277 < 0 )
                                  MilInstrumentationCheckHR_MaybeFailFast(v278, 0LL, 0, v277, 0x41u, 0LL);
                                if ( v4 >= 0 )
                                {
LABEL_508:
                                  v242 = v341;
                                  v31 = v343;
                                  v279 = 0;
                                  LODWORD(v376) = 1;
                                  *((_QWORD *)&v376 + 1) = v343;
                                  v344 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                                           (unsigned int *)v341 + 94,
                                           &v376);
                                  v4 = v344;
                                  if ( v344 < 0 )
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(v280, 0LL, 0, v344, 0xB08u, 0LL);
                                  }
                                  else
                                  {
                                    v279 = 1;
                                    *(_OWORD *)v383 = v372;
                                    v281 = CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
                                             (unsigned int *)v256 + 566,
                                             v383);
                                    v344 = v281;
                                    v4 = v281;
                                    if ( v281 < 0 )
                                    {
                                      MilInstrumentationCheckHR_MaybeFailFast(v282, 0LL, 0, v281, 0x10Au, 0LL);
                                    }
                                    else
                                    {
                                      v283 = 84LL * (unsigned int)(*((_DWORD *)v256 + 6) - 1);
                                      ++*(_DWORD *)(v283 + *(_QWORD *)v256);
                                    }
                                    if ( v4 < 0 )
                                      MilInstrumentationCheckHR_MaybeFailFast(v283, 0LL, 0, v4, 0xB0Du, 0LL);
                                    else
                                      *((_BYTE *)v242 + 5954) = 1;
                                  }
                                  if ( v4 < 0 )
                                  {
                                    if ( v279 )
                                      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(
                                        (int *)v242 + 94,
                                        0LL);
                                    MilInstrumentationCheckHR_MaybeFailFast(v283, 0LL, 0, v4, 0x15F2u, 0LL);
                                    goto LABEL_291;
                                  }
LABEL_521:
                                  v284 = (unsigned int *)((char *)v242 + 3448);
                                  v285 = 0LL;
                                  v286 = *((_DWORD *)v242 + 862);
                                  if ( v286 )
                                    v285 = *((_QWORD *)v242 + 433) + 16LL * (unsigned int)(v286 - 1);
                                  v347 = *(_BYTE *)(v285 + 8);
                                  v287 = Windows::Foundation::Numerics::determinant(
                                           (Windows::Foundation::Numerics *)&v354,
                                           v227);
                                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v287 - 0.0) & _xmm) >= 0.00000011920929
                                    && _finite((float)(1.0 / v287)) )
                                  {
                                    v288 = v287 < 0.0 == (float)((float)((float)((float)((float)(*((float *)&v354 + 1)
                                                                                               * *((float *)&v355 + 3))
                                                                                       - (float)(*((float *)&v354 + 3)
                                                                                               * *((float *)&v355 + 1)))
                                                                               * *(float *)&v357)
                                                                       + (float)((float)((float)(*((float *)&v354 + 3)
                                                                                               * *(float *)&v355)
                                                                                       - (float)(*(float *)&v354
                                                                                               * *((float *)&v355 + 3)))
                                                                               * *((float *)&v357 + 1)))
                                                               + (float)((float)((float)(*(float *)&v354
                                                                                       * *((float *)&v355 + 1))
                                                                               - (float)(*((float *)&v354 + 1)
                                                                                       * *(float *)&v355))
                                                                       * *((float *)&v357 + 3))) < 0.0;
                                  }
                                  else
                                  {
                                    v288 = (float)((float)(*(float *)&v354 * *((float *)&v355 + 1))
                                                 - (float)(*((float *)&v354 + 1) * *(float *)&v355)) > 0.0;
                                  }
                                  v289 = v343;
                                  if ( (**((_DWORD **)v343 + 28) & 0x400000) == 0 )
                                  {
                                    v290 = *((_DWORD *)v343 + 25);
                                    v291 = v348 && *((_DWORD *)v348 + 25) == 1;
                                    v292 = *((_QWORD *)v343 + 9);
                                    if ( (v292 & 2) != 0 )
                                      v292 = *(_QWORD *)(v292 & 0xFFFFFFFFFFFFFFFCuLL);
                                    else
                                      LODWORD(v292) = v292 & 1;
                                    v293 = (*(__int64 (**)(void))(*(_QWORD *)v343 + 232LL))();
                                    if ( v290 == 1 )
                                      goto LABEL_538;
                                    if ( !v291 )
                                    {
                                      v289 = v343;
                                      goto LABEL_545;
                                    }
                                    if ( (_DWORD)v292 )
                                    {
                                      v289 = v343;
                                    }
                                    else
                                    {
LABEL_538:
                                      v289 = v343;
                                      if ( !v291 || !v293 )
                                        goto LABEL_545;
                                    }
                                  }
                                  *(_QWORD *)&v376 = v289;
                                  BYTE8(v376) = v288;
                                  v294 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                                           v284,
                                           &v376);
                                  v344 = v294;
                                  v4 = v294;
                                  if ( v294 < 0 )
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(v295, 0LL, 0, v294, 0x15FEu, 0LL);
                                    goto LABEL_290;
                                  }
LABEL_545:
                                  if ( (**((_DWORD **)v289 + 28) & 0x200000) != 0 )
                                  {
                                    WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v289);
                                    if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 356) )
                                    {
                                      v297 = v341;
                                      v376 = 0LL;
                                      CDrawingContext::GetClipBoundsWorld(v341, &v376);
                                      memset(v384, 0, sizeof(v384));
                                      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v297 + 408));
                                      CMILMatrix::Transform3DBoundsHelper<0>(
                                        TopByReference,
                                        (char *)WindowBackgroundTreatmentInternal + 144,
                                        v384);
                                      if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                                              &v376,
                                                              v384) )
                                      {
                                        v299 = 1;
                                        v300 = *((_BYTE *)WindowBackgroundTreatmentInternal + 359);
                                        if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 357)
                                          || !CWindowBackgroundTreatment::HasValidSource(
                                                WindowBackgroundTreatmentInternal,
                                                *((const struct IDeviceTarget **)v341 + 4)) )
                                        {
                                          BitmapRealizationForEffectInput = CWindowBackgroundTreatment::GenerateBitmapRealizationForEffectInput(
                                                                              WindowBackgroundTreatmentInternal,
                                                                              v341);
                                          v344 = BitmapRealizationForEffectInput;
                                          v4 = BitmapRealizationForEffectInput;
                                          v299 = v300 == 0;
                                          if ( BitmapRealizationForEffectInput < 0 )
                                          {
                                            MilInstrumentationCheckHR_MaybeFailFast(
                                              v302,
                                              0LL,
                                              0,
                                              BitmapRealizationForEffectInput,
                                              0x1628u,
                                              0LL);
                                            goto LABEL_290;
                                          }
                                        }
                                        if ( v300 )
                                        {
                                          FRAME_TIME_INFO::NotifyWindowBackgroundTreatmentCacheHitOrMiss(
                                            *((FRAME_TIME_INFO **)g_pComposition + 43),
                                            v299);
                                          if ( !v299 )
                                            ++dword_180345330;
                                        }
                                        v303 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v341 + 408));
                                        CWindowBackgroundTreatment::SetWorldTransform(
                                          WindowBackgroundTreatmentInternal,
                                          v303,
                                          3LL);
                                        v289 = v343;
                                      }
                                    }
                                  }
                                  v304 = *((_DWORD *)v289 + 25);
                                  v305 = v348 && *((_DWORD *)v348 + 25) == 1;
                                  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v289 + 232LL))(v289) )
                                    goto LABEL_570;
                                  v306 = (_DWORD *)*((_QWORD *)v289 + 28);
                                  if ( (*v306 & 0x400000) == 0 )
                                    goto LABEL_569;
                                  v307 = (unsigned int)v306[1];
                                  v308 = v306 + 2;
                                  for ( nn = 0; nn < (unsigned int)v307; ++v308 )
                                  {
                                    if ( *v308 == 10 )
                                      break;
                                    ++nn;
                                  }
                                  v310 = nn >= (unsigned int)v307
                                       ? 0LL
                                       : (_QWORD *)((char *)v306 + v307 + 8LL * nn - (((_BYTE)v307 + 15) & 7) + 15);
                                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v310 + 56LL))(
                                         *v310,
                                         59LL) )
                                  {
LABEL_570:
                                    v311 = 1;
                                  }
                                  else
                                  {
LABEL_569:
                                    v311 = 0;
                                  }
                                  if ( v304 == 1 )
                                  {
                                    if ( !v305 )
                                    {
                                      if ( !(unsigned int)CPtrArrayBase::GetCount((CVisual *)((char *)v289 + 72)) )
                                        goto LABEL_574;
LABEL_589:
                                      v31 = v343;
                                      if ( CVisual::HasBspPolygonList(v343) )
                                      {
                                        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                                          McGenEventWrite_EventWriteTransfer(
                                            &Microsoft_Windows_Dwm_Core_Provider_Context,
                                            &EVTDESC_P3D_RENDERING_Start,
                                            v317,
                                            1LL,
                                            &v376);
                                        v318 = CDrawingContext::DrawBspPolygonList(v341, v31, v348);
                                        v4 = v318;
                                        if ( v318 < 0 )
                                        {
                                          MilInstrumentationCheckHR_MaybeFailFast(v319, 0LL, 0, v318, 0x168Cu, 0LL);
                                        }
                                        else
                                        {
                                          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                                            McGenEventWrite_EventWriteTransfer(
                                              &Microsoft_Windows_Dwm_Core_Provider_Context,
                                              &EVTDESC_P3D_RENDERING_Stop,
                                              v320,
                                              1LL,
                                              &v376);
                                          ++*((_DWORD *)v350 + 8);
                                          *v349 = 0;
                                        }
                                      }
                                      goto LABEL_291;
                                    }
                                    if ( v311 )
                                      goto LABEL_589;
                                  }
LABEL_574:
                                  v312 = v341;
                                  LOBYTE(v340) = 0;
                                  if ( *((_DWORD *)v341 + 72) )
                                  {
                                    v313 = v347;
                                    if ( v347 != v288 )
                                    {
                                      if ( (**((_DWORD **)v289 + 28) & 0x400000) == 0
                                        && !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v289 + 232LL))(v289)
                                        || !v288
                                        || *(_BYTE *)(CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference(v284)
                                                    + 8) == v313 )
                                      {
LABEL_581:
                                        v31 = v343;
                                        if ( HIBYTE(v365)
                                          && (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v343 + 56LL))(
                                               v343,
                                               91LL)
                                          && CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(v31) )
                                        {
                                          Count = CPtrArrayBase::GetCount((CVisual *)((char *)v31 + 72));
                                          if ( Count )
                                          {
                                            v315 = v341;
                                            do
                                            {
                                              ChildAt = CVisual::GetChildAt(v31);
                                              CDrawingContext::DrawVisual(v315, ChildAt, 0);
                                              ++v3;
                                            }
                                            while ( v3 < Count );
                                            v4 = v344;
                                            *v349 = 0;
                                            goto LABEL_291;
                                          }
                                        }
                                        else if ( !(_BYTE)v340 )
                                        {
                                          goto LABEL_291;
                                        }
                                        *v349 = 0;
                                        goto LABEL_291;
                                      }
LABEL_580:
                                      LOBYTE(v340) = 1;
                                      goto LABEL_581;
                                    }
                                    v312 = v341;
                                  }
                                  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v289 + 272LL))(v289) )
                                  {
                                    (*(void (__fastcall **)(CVisual *, CDrawingContext *, __int64 *))(*(_QWORD *)v289 + 264LL))(
                                      v289,
                                      v312,
                                      &v340);
                                    ++*((_DWORD *)v350 + 8);
                                    goto LABEL_581;
                                  }
                                  if ( (*((_BYTE *)v289 + 95) & 4) == 0 )
                                    goto LABEL_581;
                                  if ( !*((_BYTE *)g_pComposition + 1129) )
                                  {
                                    *((_BYTE *)v312 + 5948) = 1;
                                    goto LABEL_581;
                                  }
                                  goto LABEL_580;
                                }
                                MilInstrumentationCheckHR_MaybeFailFast(v278, 0LL, 0, v4, 0xB52u, 0LL);
                                CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v266, 0LL);
                              }
                              else
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(v268, 0LL, 0, v267, 0xB4Cu, 0LL);
                              }
                            }
                            if ( v4 >= 0 )
                              goto LABEL_508;
                            MilInstrumentationCheckHR_MaybeFailFast(v269, 0LL, 0, v4, 0x15ECu, 0LL);
LABEL_290:
                            v31 = v343;
LABEL_291:
                            v21 = v342;
                            goto LABEL_292;
                          }
LABEL_440:
                          if ( !*(_WORD *)((char *)&v365 + 1)
                            && __PAIR16__(HIBYTE(v365), 0) == v366
                            && !*(_QWORD *)&v352[4]
                            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v353 - 1.0) & _xmm) < 0.0000011920929 )
                          {
                            goto LABEL_467;
                          }
                          goto LABEL_444;
                        }
                        MilInstrumentationCheckHR_MaybeFailFast(v200, 0LL, 0, v201, 0x882u, 0LL);
                      }
                      v204 = (void (__fastcall ***)(_QWORD, __int64))v372;
                      v202 = 0LL;
                      goto LABEL_342;
                    }
                    CDrawingContext::GetWorldTransform(v341, (struct CMILMatrix *)&v354);
                  }
                  v188 = v341;
                  goto LABEL_308;
                }
LABEL_289:
                MilInstrumentationCheckHR_MaybeFailFast(v161, 0LL, 0, v160, 0x152Cu, 0LL);
                goto LABEL_290;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v161, 0LL, 0, v160, 0x6DDu, 0LL);
              v31 = v343;
              goto LABEL_298;
            }
            goto LABEL_272;
          }
          v157 = i;
        }
      }
    }
    v178 = (CVisual *)*((_QWORD *)v157 + 10);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v345 + 200LL))(v345) )
    {
      v180 = (__int64 *)CVisual::GetTreeDataListHead(v178);
      if ( v180 )
      {
        v161 = *v180;
        if ( (__int64 *)*v180 != v180 )
        {
          v163 = v345;
          while ( *(struct CVisualTree **)(v161 + 32) != v345 )
          {
            v161 = *(_QWORD *)v161;
            if ( (__int64 *)v161 == v180 )
              goto LABEL_274;
          }
          goto LABEL_271;
        }
      }
      goto LABEL_273;
    }
LABEL_272:
    v165 = (CVisual *)((char *)v178 + 320);
LABEL_273:
    v163 = v345;
    goto LABEL_274;
  }
  while ( 1 )
  {
    v142 = (char *)(v156 - 36);
    if ( (struct CVisualTree *)v156[4] == v345 )
      break;
    v156 = (_QWORD *)*v156;
    if ( v156 == v155 )
      goto LABEL_224;
  }
LABEL_202:
  if ( !v142 )
    goto LABEL_224;
  v143 = (_DWORD *)*((_QWORD *)v142 + 4);
  if ( !v143
    && (v144 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v142 + 3) + 360LL))(*((_QWORD *)v142 + 3)),
        *((_QWORD *)v142 + 4) = v144,
        (v143 = (_DWORD *)v144) == 0LL)
    || (v145 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v143 + 24LL))(v143),
        *((_DWORD *)v139 + 1486) = v145,
        v146 = *(_DWORD *)(v141 + 1240),
        v145 < v146) )
  {
    v140 = v345;
    goto LABEL_224;
  }
  v21 = v342;
  if ( v143[3] >= v146 )
  {
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v342);
    LOBYTE(v340) = 0;
    CWatermarkStack<bool,64,2,10>::Push(v147, &v340);
    *v349 = 0;
  }
LABEL_292:
  if ( *((_BYTE *)v341 + 5957) && *v21 && *(_BYTE *)(*v21 - 1 + *((_QWORD *)v21 + 2)) )
    CVisual::RenderProjectedShadows((__int64)v31, v341, 1);
  return (unsigned int)v4;
}
