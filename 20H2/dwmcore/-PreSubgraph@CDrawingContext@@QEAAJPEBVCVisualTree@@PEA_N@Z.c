/*
 * XREFs of ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800866D0
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180085A80 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCDrawingContext@@W4.c)
 * Callees:
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x180006108 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x180007360 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x18000B6A0 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x18000D75C (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x18000D7B8 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x18000D888 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18000D954 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180011F38 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIDeviceTarget@@@Z @ 0x180012F34 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIDeviceTarget@@@Z.c)
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x180016FA4 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z @ 0x18001B82C (-NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180029964 (McGenEventWrite_EventWriteTransfer.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800391F0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18004B760 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x18004BD60 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18004D678 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18004E2D0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18004E668 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004EEC0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800752FC (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRec.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180076B48 (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180076E40 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180077340 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180085320 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x180085380 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800854AC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800856F4 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800896C0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x180089CA0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UM.c)
 *     ?GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z @ 0x18008E670 (-GetEffects@CDrawingContext@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEAUNodeEffects@1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180092390 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800979A8 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800AAAA8 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B1FB0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800B2B50 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B3840 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B3920 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800B3A10 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B5304 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800B6AF0 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BBE68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD378 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800BD6BC (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?FindData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEBAAEAT?$_Align_type@N$07@std@@I@Z @ 0x1800BF068 (-FindData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEBAAEAT-$_Align_type@N$07@std@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScopeState@CScopedClipStack@@I@Z @ 0x1800BF218 (-AddMultipleAndSet@-$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScop.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C1524 (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C463C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x1800C4D10 (-SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800E6818 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     memcpy_0 @ 0x1800EE9CB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180174B94 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x180177188 (-GetHeatMapProperties@CVisual@@QEBA-AUHeatMapProperty@1@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x180177318 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x180177338 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801773B0 (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x180177500 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x180177600 (-Push@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CCompos.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x180177748 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x1801780F4 (-SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ.c)
 *     ?ShiftLeft@?$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z @ 0x180178358 (-ShiftLeft@-$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z.c)
 *     ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x18018DF48 (-ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1801AD730 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18020F074 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
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
  char *v61; // r15
  CVisual *v62; // rbx
  __int64 v63; // rax
  CVisual *v64; // rax
  CVisual *v65; // r12
  CDrawingContext *v66; // rdx
  __int64 v67; // rcx
  unsigned int v68; // eax
  unsigned __int64 v69; // rdi
  int v70; // eax
  __int64 v71; // rcx
  int v72; // ebx
  unsigned __int64 v73; // rax
  CScopedClipStack *v74; // rbx
  unsigned int v75; // eax
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // edx
  unsigned int v79; // ebx
  __int64 v80; // rcx
  int v81; // eax
  __int64 v82; // rcx
  CScopedClipStack *v83; // rdi
  HANDLE v84; // rax
  bool v85; // zf
  CDrawingContext *v86; // r12
  int v87; // eax
  __int64 v88; // rcx
  bool *v89; // r15
  bool v90; // cf
  int v91; // eax
  __int64 v92; // rcx
  unsigned int v93; // ecx
  int v94; // eax
  __int64 v95; // rcx
  int v96; // eax
  void *v97; // rcx
  __int64 v98; // rdx
  char *v99; // r9
  int v100; // ecx
  float v101; // xmm0_4
  void (__fastcall ***v102)(_QWORD, CVisual **); // rcx
  _QWORD *v103; // rbx
  int v104; // r8d
  float v105; // xmm8_4
  float v106; // xmm9_4
  int v107; // eax
  float v108; // xmm6_4
  float v109; // xmm7_4
  int v110; // edx
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rcx
  float v115; // xmm3_4
  float v116; // xmm2_4
  float v117; // xmm1_4
  float v118; // xmm8_4
  float v119; // xmm9_4
  float v120; // xmm6_4
  float v121; // xmm7_4
  __int64 v122; // rdi
  char *v123; // rbx
  __int64 v124; // rax
  __int64 v125; // r8
  unsigned int v126; // eax
  __int64 v127; // rcx
  unsigned __int64 v128; // rdi
  int v129; // eax
  __int64 v130; // rcx
  CScopedClipStack *v131; // rbx
  unsigned int v132; // eax
  __int64 v133; // r9
  __int64 v134; // rcx
  _BYTE *v135; // rax
  unsigned int k; // edx
  _QWORD **v137; // r8
  _QWORD *v138; // rcx
  _QWORD *v139; // rax
  __int64 v140; // r15
  struct CVisualTree *v141; // rdi
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
  __int64 v157; // rax
  char *v158; // r13
  CVisual *v159; // rsi
  int v160; // r15d
  __int64 v161; // rcx
  char *v162; // rbx
  struct CVisualTree *v163; // r10
  bool v164; // r12
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
  __int64 v183; // rax
  __int64 v184; // rcx
  int v186; // eax
  __int64 v187; // rcx
  CVisual *v188; // rbx
  unsigned int v189; // r13d
  char v190; // si
  char v191; // cl
  float v192; // xmm2_4
  CGeometry *v193; // rcx
  char v194; // r12
  CVisual *v195; // r15
  int ShapeData; // eax
  __int64 v197; // rcx
  int v198; // ebx
  CVisual *v199; // rdi
  int v200; // eax
  void (__fastcall ***v201)(_QWORD, __int64); // rcx
  int v202; // eax
  __int64 v203; // rcx
  void (__fastcall ***v204)(_QWORD, CVisual **); // rcx
  float v205; // xmm1_4
  _DWORD *v206; // rcx
  __int64 v207; // rcx
  struct CVisualTree *v208; // r15
  char *v209; // rdi
  __int64 v210; // r8
  __int64 v211; // rdx
  _BYTE *v212; // rcx
  unsigned int jj; // eax
  _QWORD **v214; // rdx
  _QWORD *v215; // r8
  _QWORD *v216; // rax
  CVisual *v217; // rbx
  struct _LIST_ENTRY *v218; // rax
  struct _LIST_ENTRY *kk; // rcx
  __int64 v220; // r9
  int v221; // eax
  __int64 v222; // rcx
  char *v223; // rbx
  const struct Windows::Foundation::Numerics::float4x4 *v224; // rdx
  __int64 v225; // r8
  __int64 v226; // rdx
  _BYTE *v227; // rcx
  unsigned int mm; // eax
  _QWORD *v229; // r8
  _QWORD *v230; // rax
  int Blink; // ebx
  int v232; // eax
  __int64 v233; // rcx
  int v234; // eax
  __int64 v235; // rcx
  int v236; // eax
  __int64 v237; // rcx
  int v238; // eax
  __int64 v239; // rcx
  int v240; // eax
  void *v241; // rbx
  void *v242; // rcx
  __int64 v243; // rax
  __int64 (__fastcall *v244)(CVisual *, void *, __int128 *, struct _EVENT_DATA_DESCRIPTOR *, __int128 *, __int128 *); // r10
  int v245; // eax
  int v246; // eax
  __int64 v247; // rcx
  int v248; // eax
  __int64 v249; // rcx
  struct _LIST_ENTRY *v250; // rbx
  struct _LIST_ENTRY *v251; // rax
  struct _LIST_ENTRY *Flink; // rcx
  CScopedClipStack *v253; // r12
  __int128 *v254; // r13
  CDrawingContext *v255; // rdx
  unsigned int v256; // edi
  unsigned int v257; // ebx
  _QWORD *v258; // r15
  int v259; // eax
  __int64 v260; // rcx
  __int64 v261; // rcx
  CDrawingContext *v262; // r15
  int v263; // eax
  __int64 v264; // rcx
  __int64 v265; // rcx
  int v266; // r8d
  int v267; // eax
  int v268; // r8d
  __int128 v269; // xmm0
  __int128 v270; // xmm1
  __int128 v271; // xmm0
  __int128 v272; // xmm1
  int v273; // eax
  __int64 v274; // rcx
  char v275; // bl
  __int64 v276; // rcx
  int v277; // eax
  __int64 v278; // rcx
  __int64 v279; // rcx
  unsigned int *v280; // r13
  __int64 v281; // rax
  int v282; // ecx
  float v283; // xmm0_4
  char v284; // r12
  CVisual *v285; // r15
  int v286; // r15d
  bool v287; // di
  __int64 v288; // rbx
  char v289; // al
  int v290; // eax
  __int64 v291; // rcx
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rbx
  CDrawingContext *v293; // rdi
  const struct CMILMatrix *TopByReference; // rax
  char v295; // di
  char v296; // r15
  int BitmapRealizationForEffectInput; // eax
  __int64 v298; // rcx
  const struct CMILMatrix *v299; // rax
  int v300; // edi
  bool v301; // bl
  _DWORD *v302; // r8
  __int64 v303; // rdx
  _BYTE *v304; // rcx
  unsigned int nn; // eax
  _QWORD *v306; // rdx
  char v307; // al
  CDrawingContext *v308; // rbx
  char v309; // bl
  unsigned int Count; // ebx
  CDrawingContext *v311; // rsi
  struct CVisual *ChildAt; // rax
  __int64 v313; // r8
  int v314; // eax
  __int64 v315; // rcx
  __int64 v316; // r8
  unsigned int v317; // eax
  __int64 v318; // rcx
  unsigned __int64 v319; // rdi
  int v320; // eax
  __int64 v321; // rcx
  struct CVisual *v322; // rbx
  unsigned int v323; // eax
  struct CVisual *v324; // rbx
  HANDLE v325; // rax
  unsigned int v326; // eax
  __int64 v327; // rcx
  unsigned __int64 v328; // rdi
  int v329; // eax
  __int64 v330; // rcx
  struct CVisual *v331; // rbx
  unsigned int v332; // eax
  struct CVisual *v333; // rbx
  HANDLE v334; // rax
  int v335; // [rsp+20h] [rbp-E0h]
  __int64 v336; // [rsp+40h] [rbp-C0h] BYREF
  CDrawingContext *v337; // [rsp+48h] [rbp-B8h]
  unsigned int *v338; // [rsp+50h] [rbp-B0h]
  CVisual *v339; // [rsp+58h] [rbp-A8h]
  int v340; // [rsp+60h] [rbp-A0h]
  struct CVisualTree *v341; // [rsp+68h] [rbp-98h]
  CScopedClipStack *v342; // [rsp+70h] [rbp-90h] BYREF
  char v343; // [rsp+78h] [rbp-88h] BYREF
  struct CVisual *v344; // [rsp+80h] [rbp-80h] BYREF
  bool *v345; // [rsp+88h] [rbp-78h]
  void *v346; // [rsp+90h] [rbp-70h] BYREF
  __int64 v347; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v348[12]; // [rsp+A8h] [rbp-58h]
  float v349; // [rsp+B4h] [rbp-4Ch]
  __int128 v350; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v351; // [rsp+C8h] [rbp-38h]
  __int128 v352; // [rsp+D8h] [rbp-28h]
  __int128 v353; // [rsp+E8h] [rbp-18h]
  __int64 v354; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v355; // [rsp+100h] [rbp+0h]
  __int128 v356; // [rsp+110h] [rbp+10h]
  __int128 v357; // [rsp+120h] [rbp+20h]
  __int64 v358; // [rsp+130h] [rbp+30h]
  int v359; // [rsp+138h] [rbp+38h]
  __int64 v360; // [rsp+13Ch] [rbp+3Ch]
  int v361; // [rsp+144h] [rbp+44h]
  unsigned __int8 v362; // [rsp+148h] [rbp+48h]
  __int64 v363; // [rsp+150h] [rbp+50h] BYREF
  int v364; // [rsp+158h] [rbp+58h]
  _OWORD v365[4]; // [rsp+15Ch] [rbp+5Ch] BYREF
  int v366; // [rsp+19Ch] [rbp+9Ch]
  char v367; // [rsp+1A0h] [rbp+A0h]
  __int128 v368; // [rsp+1B0h] [rbp+B0h] BYREF
  CVisual *i; // [rsp+1C0h] [rbp+C0h] BYREF
  float v370; // [rsp+1C8h] [rbp+C8h]
  float v371; // [rsp+1CCh] [rbp+CCh]
  struct _EVENT_DATA_DESCRIPTOR v372; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v373; // [rsp+1E0h] [rbp+E0h]
  int v374; // [rsp+1E8h] [rbp+E8h]
  int v375; // [rsp+1ECh] [rbp+ECh]
  void *lpMem[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int128 v377; // [rsp+208h] [rbp+108h] BYREF
  __int64 v378; // [rsp+218h] [rbp+118h]
  __int64 v379[2]; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v380[24]; // [rsp+230h] [rbp+130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v381; // [rsp+248h] [rbp+148h] BYREF
  __int64 v382; // [rsp+258h] [rbp+158h]
  __int64 v383[2]; // [rsp+260h] [rbp+160h] BYREF
  __int128 v384; // [rsp+270h] [rbp+170h] BYREF
  void *retaddr; // [rsp+328h] [rbp+228h]

  v3 = 0;
  v345 = a3;
  v341 = a2;
  v4 = 0;
  v337 = (CDrawingContext *)this;
  v378 = 0LL;
  v382 = 0LL;
  v7 = 0LL;
  *(_OWORD *)v383 = 0LL;
  v339 = 0LL;
  v377 = 0LL;
  v381 = 0LL;
  v384 = 0LL;
  *(_OWORD *)v379 = 0LL;
  if ( *((_BYTE *)this + 5920) )
  {
    if ( *((_BYTE *)this + 5921) )
      v7 = this[413];
    else
      v7 = (CVisual *)*((_QWORD *)this[741] + 7);
    v339 = v7;
  }
  v8 = this[414];
  v360 = 0LL;
  v344 = v8;
  v9 = *((_QWORD *)a2 + 7);
  v347 = 0LL;
  *(_QWORD *)v348 = 1065353216LL;
  *(_DWORD *)&v348[8] = 0;
  v349 = 1.0;
  v354 = 0LL;
  v361 = 0;
  v362 = 0;
  v355 = 0LL;
  v356 = 0LL;
  v357 = 0LL;
  v358 = 0LL;
  v359 = 1065353216;
  LOWORD(v360) = 21887;
  *(_QWORD *)&v368 = v9;
  v10 = (_DWORD *)*((_QWORD *)v7 + 28);
  v338 = (unsigned int *)(this + 408);
  if ( (*v10 & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers((__int64)v7);
    v12 = *(CScopedClipStack **)ProjectedShadowReceivers;
    v13 = *(CVisual **)(ProjectedShadowReceivers + 8);
    v342 = v12;
    for ( i = v13; v12 != v13; v342 = v12 )
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
        v12 = v342;
        v13 = i;
      }
      v12 = (CScopedClipStack *)((char *)v12 + 8);
    }
  }
  v20 = 0;
LABEL_20:
  v21 = v338;
  v22 = 0xFFFFFFFFLL;
  lpMem[0] = 0LL;
  v23 = 64LL;
  v24 = v338[1];
  v25 = *v338;
  if ( *v338 != (_DWORD)v24 )
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
    memcpy_0(lpMem[0], *((const void **)v338 + 2), *v338);
    operator delete(*((void **)v338 + 2));
    v25 = *v338;
    *((_QWORD *)v338 + 2) = v29;
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
  v31 = v339;
  if ( (*((_BYTE *)v339 + 94) & 4) != 0 || (*((_DWORD *)v339 + 22) & 0x100) == 0 )
  {
LABEL_624:
    v326 = *v21;
    if ( *v21 )
      *v21 = --v326;
    v327 = v21[1];
    v344 = 0LL;
    if ( v326 == (_DWORD)v327 )
    {
      v328 = 2LL * (unsigned int)v327;
      if ( v328 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v327, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        *v345 = 0;
        goto LABEL_292;
      }
      if ( (unsigned int)v328 <= 0x40 )
        LODWORD(v328) = 64;
      v329 = HrMalloc(1uLL, (unsigned int)v328, (void **)&v344);
      if ( v329 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v330, 0LL, 0, v329, 0x53u, 0LL);
        v333 = v344;
        if ( v344 )
        {
          v334 = GetProcessHeap();
          HeapFree(v334, 0, v333);
          *v345 = 0;
          goto LABEL_292;
        }
        goto LABEL_635;
      }
      v331 = v344;
      memcpy_0(v344, *((const void **)v21 + 2), *v21);
      operator delete(*((void **)v21 + 2));
      v326 = *v21;
      *((_QWORD *)v21 + 2) = v331;
      v21[1] = v328;
    }
    *(_BYTE *)(v326 + *((_QWORD *)v21 + 2)) = 0;
    v332 = v21[6];
    if ( v332 <= ++*v21 )
      v332 = *v21;
    v21[6] = v332;
LABEL_635:
    *v345 = 0;
    goto LABEL_292;
  }
  v32 = v341;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CVisualTree *, __int64, __int64))(*(_QWORD *)v341 + 200LL))(
          v341,
          v22,
          v23) )
  {
    TreeData = CVisual::FindTreeData(v339, v341);
    if ( TreeData )
    {
      v34 = 0LL;
      if ( g_pComposition )
        v34 = *((_QWORD *)g_pComposition + 44);
      if ( *((_BYTE *)TreeData + 18) && *((_QWORD *)TreeData + 35) == v34 )
      {
        v21 = v338;
        goto LABEL_624;
      }
    }
  }
  if ( (unsigned int)((__int64)(*((_QWORD *)v339 + 35) - *((_QWORD *)v339 + 34)) >> 4)
    || (unsigned int)((__int64)(*((_QWORD *)v339 + 38) - *((_QWORD *)v339 + 37)) >> 4) )
  {
    v35 = (CVisual *)&v342;
    v342 = (CScopedClipStack *)0x100000000LL;
    i = (CVisual *)&v342;
    while ( 1 )
    {
      v36 = *(_DWORD *)v35;
      v37 = 0;
      LODWORD(lpMem[0]) = 0;
      v340 = v36;
      if ( (unsigned int)CVisual::GetLightsCount(v31, v36) )
        break;
LABEL_78:
      v35 = (CVisual *)((char *)i + 4);
      i = v35;
      if ( v35 == (CVisual *)&v343 )
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
      v43 = (unsigned int *)((char *)v337 + 376);
      LODWORD(v372.Ptr) = 10;
      *(_QWORD *)&v372.Size = v31;
      v346 = 0LL;
      v44 = *((_DWORD *)v337 + 95);
      v45 = *((unsigned int *)v337 + 94);
      if ( (_DWORD)v45 != v44 )
        goto LABEL_63;
      v46 = 2LL * v44;
      if ( v46 > 0xFFFFFFFF )
      {
        v49 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        v4 = -2147024362;
LABEL_74:
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v49, 0x1785u, 0LL);
        v36 = v340;
LABEL_75:
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v4, 0x14B3u, 0LL);
          v21 = v338;
          goto LABEL_292;
        }
        goto LABEL_76;
      }
      if ( (unsigned int)v46 <= 0x40 )
        LODWORD(v46) = 64;
      v47 = HrMalloc(0x10uLL, (unsigned int)v46, &v346);
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
          v51 = v346;
          memcpy_0(v346, *((const void **)v337 + 49), (unsigned int)v50);
          operator delete(*((void **)v337 + 49));
          v45 = *v43;
          *((_QWORD *)v337 + 49) = v51;
          v43[1] = v46;
LABEL_63:
          v52 = 2 * v45;
          v49 = 0;
          *(struct _EVENT_DATA_DESCRIPTOR *)(*((_QWORD *)v43 + 2) + 8 * v52) = v372;
          v53 = v43[6];
          if ( v53 <= ++*v43 )
            v53 = *v43;
          v43[6] = v53;
          goto LABEL_66;
        }
        v49 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, -2147024362, 0x55u, 0LL);
      }
      v58 = v346;
      if ( v346 )
      {
        v59 = GetProcessHeap();
        HeapFree(v59, 0, v58);
      }
LABEL_66:
      v4 = v49;
      if ( v49 < 0 )
        goto LABEL_74;
      v54 = v337;
      v36 = v340;
      *(_QWORD *)v380 = v41;
      *(_DWORD *)&v380[8] = v340;
      v55 = *((_DWORD *)v337 + 156);
      v56 = v55 + 1;
      if ( v55 + 1 >= v55 )
      {
        v4 = 0;
        if ( v56 <= *((_DWORD *)v337 + 155) )
        {
          *(_OWORD *)(*((_QWORD *)v337 + 75) + 16LL * *((unsigned int *)v337 + 156)) = *(_OWORD *)v380;
          *((_DWORD *)v54 + 156) = v56;
LABEL_96:
          (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v41 + 8LL))(v41);
          goto LABEL_97;
        }
        v81 = DynArrayImpl<0>::AddMultipleAndSet((char *)v337 + 600, 16LL, 1LL, v380);
        v4 = v81;
        if ( v81 >= 0 )
          goto LABEL_96;
        MilInstrumentationCheckHR_MaybeFailFast(v82, 0LL, 0, v81, 0xC0u, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, v4, 0x1788u, 0LL);
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)v43, 0LL);
        goto LABEL_75;
      }
LABEL_76:
      v37 = (unsigned int)lpMem[0];
      v32 = v341;
LABEL_77:
      LODWORD(lpMem[0]) = ++v37;
      if ( v37 >= (unsigned int)CVisual::GetLightsCount(v31, v36) )
        goto LABEL_78;
    }
  }
LABEL_79:
  v61 = (char *)v337 + 840;
  v62 = *(CVisual **)(*((_QWORD *)v337 + 105) + 8LL * (unsigned int)(*((_DWORD *)v337 + 216) - 1));
  v63 = *(_QWORD *)v31;
  v346 = v62;
  v64 = (CVisual *)(*(__int64 (__fastcall **)(CVisual *))(v63 + 168))(v31);
  v65 = v64;
  if ( !v64 || v64 == v62 )
  {
LABEL_114:
    v86 = v337;
    goto LABEL_115;
  }
  v66 = v337;
  v346 = v64;
  LODWORD(v372.Ptr) = 11;
  *(_QWORD *)&v372.Size = v31;
  v67 = *((unsigned int *)v337 + 95);
  v68 = *((_DWORD *)v337 + 94);
  v342 = 0LL;
  if ( v68 != (_DWORD)v67 )
    goto LABEL_88;
  v69 = 2LL * (unsigned int)v67;
  if ( v69 > 0xFFFFFFFF )
  {
    v72 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_640:
    ModuleFailFastForHRESULT((unsigned int)v72, retaddr);
  }
  if ( (unsigned int)v69 <= 0x40 )
    LODWORD(v69) = 64;
  v70 = HrMalloc(0x10uLL, (unsigned int)v69, (void **)&v342);
  v72 = v70;
  if ( v70 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v70, 0x53u, 0LL);
  }
  else
  {
    v73 = 16LL * *((unsigned int *)v337 + 94);
    if ( v73 <= 0xFFFFFFFF )
    {
      v74 = v342;
      memcpy_0(v342, *((const void **)v337 + 49), (unsigned int)v73);
      operator delete(*((void **)v337 + 49));
      v66 = v337;
      v68 = *((_DWORD *)v337 + 94);
      *((_QWORD *)v337 + 49) = v74;
      *((_DWORD *)v66 + 95) = v69;
LABEL_88:
      v72 = 0;
      *(struct _EVENT_DATA_DESCRIPTOR *)(*((_QWORD *)v66 + 49) + 16LL * v68) = v372;
      v75 = *((_DWORD *)v66 + 100);
      v76 = (unsigned int)++*((_DWORD *)v66 + 94);
      if ( v75 <= (unsigned int)v76 )
        v75 = *((_DWORD *)v66 + 94);
      *((_DWORD *)v66 + 100) = v75;
      goto LABEL_91;
    }
    v72 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v337, 0LL, 0, -2147024362, 0x55u, 0LL);
  }
  v83 = v342;
  if ( v342 )
  {
    v84 = GetProcessHeap();
    HeapFree(v84, 0, v83);
  }
LABEL_91:
  if ( v72 < 0 )
    goto LABEL_640;
  v77 = *((unsigned int *)v61 + 6);
  i = v65;
  v78 = v77 + 1;
  if ( (int)v77 + 1 < (unsigned int)v77 )
  {
    v79 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, -2147024362, 0xB5u, 0LL);
    goto LABEL_642;
  }
  if ( v78 > *((_DWORD *)v61 + 5) )
  {
    v87 = DynArrayImpl<0>::AddMultipleAndSet(v61, 8LL, 1LL, &i);
    v79 = v87;
    if ( v87 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v88, 0LL, 0, v87, 0xC0u, 0LL);
LABEL_642:
      ModuleFailFastForHRESULT(v79, retaddr);
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v61 + 8 * v77) = v65;
    *((_DWORD *)v61 + 6) = v78;
  }
  if ( !g_HeatMaps_TargetProcessId )
    goto LABEL_114;
  v85 = g_HeatMaps_TargetProcessId == *((_DWORD *)v65 + 32);
  v86 = v337;
  if ( v85 )
    CDrawingContext::SetHeatMapForCurrentNode(v337);
LABEL_115:
  v89 = v345;
  *v345 = 1;
  if ( (*((_BYTE *)v31 + 93) & 0x60) != 0 )
  {
    CVisual::GetHeatMapProperties(v31, &v372);
    v90 = (*((_BYTE *)v31 + 93) & 0x20) != 0;
    *(struct _EVENT_DATA_DESCRIPTOR *)&v380[4] = v372;
    *(_DWORD *)v380 = 2 - v90;
    *(_DWORD *)&v380[20] = v373;
    v91 = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push((char *)g_pComposition + 960, v380);
    v4 = v91;
    if ( v91 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0, v91, 0x14DCu, 0LL);
LABEL_118:
      v21 = v338;
      goto LABEL_292;
    }
  }
  v93 = *((_DWORD *)v31 + 24);
  if ( (_BYTE)v93 )
  {
    LODWORD(v372.Ptr) = (unsigned __int8)v93;
    LODWORD(v373) = (v93 >> 8) & 3;
    v372.Reserved = (v93 >> 14) & 0x1F;
    HIDWORD(v372.Ptr) = (int)(v93 << 18) >> 28;
    v372.Size = *((_DWORD *)v31 + 47);
    if ( *((_DWORD *)g_pComposition + 240)
      && *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference() == 2 )
    {
      HIDWORD(v373) = 0;
    }
    else
    {
      HIDWORD(v373) = *((_DWORD *)v31 + 48);
    }
    v374 = *((_DWORD *)v31 + 49);
    v375 = *((_DWORD *)v31 + 50);
    v94 = CDrawingContext::PushRenderOptionsInternal(v86, v31, (const struct MilRenderOptions *)&v372, 1);
    v4 = v94;
    if ( v94 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, v94, 0x14ECu, 0LL);
      goto LABEL_118;
    }
  }
  v96 = *((_DWORD *)v86 + 102);
  *(_OWORD *)lpMem = 0LL;
  if ( v96 )
    v97 = (void *)(*((_QWORD *)v86 + 53) + 68LL * (unsigned int)(v96 - 1));
  else
    v97 = &CMILMatrix::Identity;
  v98 = *((_QWORD *)v86 + 741);
  v99 = (char *)(v98 + 64);
  if ( v31 != *(CVisual **)(v98 + 56) )
    v99 = (char *)v31 + 140;
  CMILMatrix::Transform3DBoundsHelper<1>(v97, v99, &v377);
  if ( *((float *)&v377 + 2) > *(float *)&v377 && *((float *)&v377 + 3) > *((float *)&v377 + 1) )
  {
    v100 = *((_DWORD *)v31 + 22);
    if ( (v100 & 0x200) != 0 )
    {
      v101 = FLOAT_4_0;
    }
    else if ( (v100 & 0x800) != 0 )
    {
      v101 = FLOAT_0_5;
    }
    else
    {
      v101 = 0.0;
    }
    if ( (v100 & 0x1000) != 0 )
      v101 = v101 + 0.5;
    if ( v101 != 0.0 )
    {
      *((float *)&v377 + 3) = *((float *)&v377 + 3) + v101;
      *(float *)&v377 = *(float *)&v377 - v101;
      *((float *)&v377 + 1) = *((float *)&v377 + 1) - v101;
      *((float *)&v377 + 2) = *((float *)&v377 + 2) + v101;
      *(float *)&v378 = *(float *)&v378 + 0.0;
      *((float *)&v378 + 1) = *((float *)&v378 + 1) + 0.0;
    }
  }
  v102 = (void (__fastcall ***)(_QWORD, CVisual **))(*((_QWORD *)v86 + 4)
                                                   + 8LL
                                                   + *(int *)(*(_QWORD *)(*((_QWORD *)v86 + 4) + 8LL) + 16LL));
  (**v102)(v102, &i);
  v103 = (_QWORD *)((char *)v86 + 936);
  v104 = *((_DWORD *)v86 + 240);
  v342 = (CDrawingContext *)((char *)v86 + 936);
  v105 = (float)(int)i;
  v106 = (float)SHIDWORD(i);
  if ( !v104 || !*(_DWORD *)(84LL * (unsigned int)(v104 - 1) + *v103) )
    goto LABEL_147;
  v107 = *((_DWORD *)v86 + 800);
  if ( v107 )
  {
    *(_OWORD *)lpMem = *(_OWORD *)(*((_QWORD *)v86 + 402) + 16LL * (unsigned int)(v107 - 1));
    v105 = *(float *)&lpMem[1];
    LODWORD(v106) = _mm_shuffle_ps(*(__m128 *)lpMem, *(__m128 *)lpMem, 255).m128_u32[0];
LABEL_147:
    v108 = *(float *)lpMem;
    v109 = *((float *)lpMem + 1);
    goto LABEL_148;
  }
  LODWORD(v108) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v109 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v105 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v106 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
LABEL_148:
  if ( v104 && *(_DWORD *)(84LL * (unsigned int)(v104 - 1) + *v103 + 4) )
  {
    v110 = *((_DWORD *)v86 + 458);
    v111 = 136LL * (unsigned int)(v110 - 1);
    v112 = *((_QWORD *)v86 + 226);
    if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= *(float *)(v111 + v112 + 112)
      && *(float *)(v111 + v112 + 120) >= *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                          + 2)
      || *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= *(float *)(v111 + v112 + 116)
      && *(float *)(v111 + v112 + 124) >= *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite
                                          + 3) )
    {
      CScopedClipStack::ComputeCpuClipBoundsInScope((CDrawingContext *)((char *)v86 + 936));
      v110 = *((_DWORD *)v86 + 458);
    }
    v113 = 136LL * (unsigned int)(v110 - 1);
    v114 = *((_QWORD *)v86 + 226);
    if ( *(float *)(v113 + v114 + 112) > v108 )
      v108 = *(float *)(v113 + v114 + 112);
    v115 = v109;
    if ( *(float *)(v113 + v114 + 116) > v109 )
    {
      v109 = *(float *)(v113 + v114 + 116);
      v115 = v109;
    }
    v116 = v105;
    if ( v105 > *(float *)(v113 + v114 + 120) )
    {
      v105 = *(float *)(v113 + v114 + 120);
      v116 = v105;
    }
    v117 = v106;
    if ( v106 > *(float *)(v113 + v114 + 124) )
    {
      v106 = *(float *)(v113 + v114 + 124);
      v117 = v106;
    }
    if ( v116 <= v108 || v117 <= v115 )
    {
      v106 = 0.0;
      v105 = 0.0;
      v109 = 0.0;
      v108 = 0.0;
    }
  }
  v373 = v378;
  v372.Ptr = __PAIR64__(LODWORD(v109), LODWORD(v108));
  *(float *)&v372.Size = v105;
  *(float *)&v372.Reserved = v106;
  TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
    &v377,
    &v372);
  LODWORD(v118) = v377;
  v119 = *((float *)&v377 + 2);
  v120 = *((float *)&v377 + 1);
  v121 = *((float *)&v377 + 3);
  *(_OWORD *)v383 = v377;
  if ( *((float *)&v377 + 2) <= *(float *)&v377 || *((float *)&v377 + 3) <= *((float *)&v377 + 1) )
  {
    v21 = v338;
    v317 = *v338;
    if ( *v338 )
      *v338 = --v317;
    v318 = v21[1];
    v344 = 0LL;
    if ( v317 == (_DWORD)v318 )
    {
      v319 = 2LL * (unsigned int)v318;
      if ( v319 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v318, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        *v89 = 0;
        goto LABEL_292;
      }
      if ( (unsigned int)v319 <= 0x40 )
        LODWORD(v319) = 64;
      v320 = HrMalloc(1uLL, (unsigned int)v319, (void **)&v344);
      if ( v320 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v321, 0LL, 0, v320, 0x53u, 0LL);
        v324 = v344;
        if ( v344 )
        {
          v325 = GetProcessHeap();
          HeapFree(v325, 0, v324);
          *v89 = 0;
          goto LABEL_292;
        }
        goto LABEL_619;
      }
      v322 = v344;
      memcpy_0(v344, *((const void **)v21 + 2), *v21);
      operator delete(*((void **)v21 + 2));
      v317 = *v21;
      *((_QWORD *)v21 + 2) = v322;
      v21[1] = v319;
    }
    *(_BYTE *)(v317 + *((_QWORD *)v21 + 2)) = 0;
    v323 = v21[6];
    if ( v323 <= ++*v21 )
      v323 = *v21;
    v21[6] = v323;
LABEL_619:
    *v89 = 0;
    goto LABEL_292;
  }
  v122 = *((_QWORD *)v86 + 742);
  if ( v122 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v341 + 200LL))(v341) )
    {
      v123 = (char *)v31 + 320;
      goto LABEL_171;
    }
    v133 = *((_QWORD *)v31 + 28);
    if ( *(int *)v133 < 0 )
    {
      v134 = *(unsigned int *)(v133 + 4);
      v135 = (_BYTE *)(v133 + 8);
      for ( k = 0; k < (unsigned int)v134; ++v135 )
      {
        if ( *v135 == 1 )
          break;
        ++k;
      }
      v137 = k >= (unsigned int)v134 ? 0LL : (_QWORD **)(v134 + 15 + v133 + 8LL * k - (((_BYTE)v134 + 15) & 7));
      v138 = *v137;
      if ( *v137 )
      {
        v139 = (_QWORD *)*v138;
        if ( (_QWORD *)*v138 != v138 )
        {
          while ( 1 )
          {
            v123 = (char *)(v139 - 36);
            if ( (struct CVisualTree *)v139[4] == v341 )
              break;
            v139 = (_QWORD *)*v139;
            if ( v139 == v138 )
              goto LABEL_200;
          }
LABEL_171:
          if ( v123 )
          {
            v124 = *((_QWORD *)v123 + 4);
            if ( v124
              || (v124 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v123 + 3) + 360LL))(*((_QWORD *)v123 + 3)),
                  (*((_QWORD *)v123 + 4) = v124) != 0LL) )
            {
              if ( v119 <= v118
                || v121 <= v120
                || (v125 = *(unsigned int *)(v124 + 12),
                    i = (CVisual *)__PAIR64__(LODWORD(v120), LODWORD(v118)),
                    v370 = v119,
                    v371 = v121,
                    (unsigned __int8)CArrayBasedCoverageSet::IsCovered(v122 + 408, &i, v125)) )
              {
                v21 = v338;
                v126 = *v338;
                if ( *v338 )
                  *v338 = --v126;
                v127 = v21[1];
                v342 = 0LL;
                if ( v126 == (_DWORD)v127 )
                {
                  v128 = 2LL * (unsigned int)v127;
                  if ( v128 > 0xFFFFFFFF )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v127, 0LL, 0, -2147024362, 0x4Cu, 0LL);
                    *v345 = 0;
                    goto LABEL_292;
                  }
                  if ( (unsigned int)v128 <= 0x40 )
                    LODWORD(v128) = 64;
                  v129 = HrMalloc(1uLL, (unsigned int)v128, (void **)&v342);
                  if ( v129 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v130, 0LL, 0, v129, 0x53u, 0LL);
                    v148 = v342;
                    if ( v342 )
                    {
                      v149 = GetProcessHeap();
                      HeapFree(v149, 0, v148);
                      *v345 = 0;
                      goto LABEL_292;
                    }
                    goto LABEL_188;
                  }
                  v131 = v342;
                  memcpy_0(v342, *((const void **)v21 + 2), *v21);
                  operator delete(*((void **)v21 + 2));
                  v126 = *v21;
                  *((_QWORD *)v21 + 2) = v131;
                  v21[1] = v128;
                }
                *(_BYTE *)(v126 + *((_QWORD *)v21 + 2)) = 0;
                v132 = v21[6];
                if ( v132 <= ++*v21 )
                  v132 = *v21;
                v21[6] = v132;
LABEL_188:
                *v345 = 0;
                goto LABEL_292;
              }
            }
          }
        }
      }
    }
  }
LABEL_200:
  v140 = *((_QWORD *)v86 + 742);
  v141 = v341;
  if ( !v140 )
    goto LABEL_225;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v341 + 200LL))(v341) )
  {
    v142 = (char *)v31 + 320;
    goto LABEL_203;
  }
  v150 = *((_QWORD *)v31 + 28);
  if ( *(int *)v150 >= 0 )
    goto LABEL_225;
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
LABEL_225:
    CDrawingContext::GetEffects(v86, v141, v31, (struct CDrawingContext::NodeEffects *)&v347);
    if ( COERCE_FLOAT(*(_DWORD *)v348 & _xmm) < 0.0000011920929 || COERCE_FLOAT(LODWORD(v349) & _xmm) < 0.0000011920929 )
    {
LABEL_456:
      *v345 = 0;
      goto LABEL_291;
    }
    v157 = *(_QWORD *)v141;
    v158 = (char *)&v354 + 4;
    v159 = (CVisual *)*((_QWORD *)v86 + 413);
    v160 = -2003292412;
    i = v159;
    if ( !(_BYTE)v361 )
      v158 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(v157 + 200))(v141) )
    {
      v162 = (char *)v159 + 320;
    }
    else
    {
      v172 = *((_QWORD *)v159 + 28);
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
        if ( (struct CVisualTree *)v177[4] == v141 )
          break;
        v177 = (_QWORD *)*v177;
        if ( v177 == (_QWORD *)v161 )
          goto LABEL_298;
      }
    }
    if ( !v162 )
    {
LABEL_298:
      LOBYTE(v161) = 0;
      goto LABEL_299;
    }
    v163 = v341;
    v164 = 0;
    v160 = 0;
    v165 = 0LL;
    if ( v159 == *((CVisual **)v341 + 7) )
      goto LABEL_277;
    v166 = 0LL;
    if ( g_pComposition )
      v166 = *((_QWORD *)g_pComposition + 44);
    if ( !v162[18] || *((_QWORD *)v162 + 35) != v166 )
    {
      v167 = (_DWORD *)*((_QWORD *)v159 + 28);
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
            if ( !(*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v341 + 200LL))(v341) )
            {
              TreeDataListHead = (__int64 *)CVisual::GetTreeDataListHead(v178);
              v163 = v341;
              if ( TreeDataListHead )
              {
                v161 = *TreeDataListHead;
                if ( (__int64 *)*TreeDataListHead != TreeDataListHead )
                {
                  while ( *(struct CVisualTree **)(v161 + 32) != v341 )
                  {
                    v161 = *(_QWORD *)v161;
                    if ( (__int64 *)v161 == TreeDataListHead )
                      goto LABEL_275;
                  }
LABEL_272:
                  v165 = (const struct CTreeData *)(v161 - 288);
                }
              }
LABEL_275:
              if ( v165 )
              {
                v181 = *((_QWORD *)v165 + 15);
                goto LABEL_278;
              }
LABEL_277:
              v181 = 1LL;
LABEL_278:
              if ( *((_QWORD *)v162 + 15) < v181 )
              {
                updated = CVisual::UpdateWorldTransform(i, v163, (struct CTreeData *)v162, v164, v165);
                v160 = updated;
                if ( updated < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v161, 0LL, 0, updated, 0x793u, 0LL);
              }
              if ( v160 >= 0 )
              {
                if ( !*((_QWORD *)v162 + 15) )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v161, 0LL, 0, -2003292412, 0x69u, 0LL);
                  v160 = -2003292412;
                  MilInstrumentationCheckHR_MaybeFailFast(v184, 0LL, 0, -2003292412, 0x6E2u, 0LL);
                  v4 = -2003292412;
                  goto LABEL_289;
                }
                v350 = *(_OWORD *)(v162 + 40);
                v351 = *(_OWORD *)(v162 + 56);
                v352 = *(_OWORD *)(v162 + 72);
                v353 = *(_OWORD *)(v162 + 88);
                LODWORD(v354) = *((_DWORD *)v162 + 26);
                v161 = (unsigned __int8)v162[17];
                if ( v158 )
                {
                  v183 = *((_QWORD *)v162 + 14);
                  if ( v183 )
                  {
                    v86 = v337;
                    v160 = 0;
                    *(_OWORD *)v158 = *(_OWORD *)v183;
                    *((_OWORD *)v158 + 1) = *(_OWORD *)(v183 + 16);
                    *((_OWORD *)v158 + 2) = *(_OWORD *)(v183 + 32);
                    *((_OWORD *)v158 + 3) = *(_OWORD *)(v183 + 48);
                    *((_DWORD *)v158 + 16) = *(_DWORD *)(v183 + 64);
                    goto LABEL_299;
                  }
                  *(_OWORD *)v158 = *(_OWORD *)(v162 + 40);
                  *((_OWORD *)v158 + 1) = *(_OWORD *)(v162 + 56);
                  *((_OWORD *)v158 + 2) = *(_OWORD *)(v162 + 72);
                  *((_OWORD *)v158 + 3) = *(_OWORD *)(v162 + 88);
                  *((_DWORD *)v158 + 16) = *((_DWORD *)v162 + 26);
                }
                v86 = v337;
                v160 = 0;
LABEL_299:
                v4 = v160;
                if ( v160 >= 0 )
                {
                  v31 = v339;
                  if ( (_BYTE)v161 || v339 == (CVisual *)v368 )
                  {
                    if ( !*((_BYTE *)v86 + 5952) )
                      CMILMatrix::Multiply((CMILMatrix *)&v350, (CDrawingContext *)((char *)v86 + 96));
                    v186 = CDrawingContext::PushTransformInternal(v86, v339, (const struct CMILMatrix *)&v350, 0, 1);
                    v4 = v186;
                    if ( v186 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v187, 0LL, 0, v186, 0x154Eu, 0LL);
                      goto LABEL_291;
                    }
                  }
                  else if ( !*((_BYTE *)v86 + 5952) )
                  {
                    CDrawingContext::GetWorldTransform(v86, (struct CMILMatrix *)&v350);
                  }
                  if ( (_BYTE)v361 && !*((_BYTE *)v86 + 5952) )
                    CMILMatrix::Multiply((CMILMatrix *)((char *)&v354 + 4), (CDrawingContext *)((char *)v86 + 96));
                  v188 = v339;
                  v189 = 0;
                  v190 = 0;
                  if ( !*((_QWORD *)v339 + 30) )
                    goto LABEL_378;
                  if ( SBYTE1(v360) >> 6 )
                  {
                    v191 = SBYTE1(v360) >> 6 == 1;
                  }
                  else
                  {
                    v191 = 0;
                    LODWORD(v192) = COERCE_UNSIGNED_INT(*((float *)&v355 + 1) - 0.0) & _xmm;
                    if ( v192 < 0.000081380211
                      && (COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v356 + 1) - 0.0) & _xmm) < 0.000081380211
                       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v358 + 1) - 0.0) & _xmm) < 0.000081380211
                       || v192 < 0.000081380211
                       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v356 + 1) - 0.0) & _xmm) < 0.000081380211
                       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v356 + 3) - 0.0) & _xmm) < 0.000081380211
                       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v357 - 0.0) & _xmm) < 0.000081380211
                       && (COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v357 + 1) - 0.0) & _xmm) < 0.000081380211
                        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v357 + 1) - 1.0) & _xmm) < 0.000081380211)
                       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v357 + 2) - 0.0) & _xmm) < 0.000081380211
                       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v358 + 1) - 0.0) & _xmm) < 0.000081380211) )
                    {
                      v191 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                            (float)((float)((float)(COERCE_FLOAT(DWORD2(v356) & _xmm) * 61440.0)
                                                          + (float)(COERCE_FLOAT(DWORD2(v355) & _xmm) * 61440.0))
                                                  + COERCE_FLOAT(v359 & _xmm))
                                          - 1.0) & _xmm) < 0.000081380211;
                    }
                    BYTE1(v360) = BYTE1(v360) & 0x3F | ((v191 << 7) - 64);
                  }
                  if ( (!v191
                     || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v355 - 0.0) & _xmm) >= 0.000081380211
                     || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v355 + 3) - 0.0) & _xmm) >= 0.000081380211)
                    && (COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v354 + 1) - 0.0) & _xmm) >= 0.000081380211
                     || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v356 - 0.0) & _xmm) >= 0.000081380211) )
                  {
                    goto LABEL_378;
                  }
                  v193 = (CGeometry *)*((_QWORD *)v339 + 30);
                  i = 0LL;
                  v194 = 0;
                  *(_QWORD *)&v368 = 0LL;
                  LOBYTE(v370) = 0;
                  v372 = 0LL;
                  v195 = 0LL;
                  BYTE8(v368) = 0;
                  ShapeData = CGeometry::GetShapeData(
                                v193,
                                (const struct D2D_SIZE_F *)((char *)v339 + 132),
                                (struct CShapePtr *)&v368);
                  v198 = ShapeData;
                  if ( ShapeData < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v197, 0LL, 0, ShapeData, 0x895u, 0LL);
                  }
                  else
                  {
                    v199 = (CVisual *)v368;
                    v198 = -2003292412;
                    if ( (_QWORD)v368 )
                    {
                      v200 = (*(__int64 (__fastcall **)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *, _QWORD))(*(_QWORD *)v368 + 32LL))(
                               v368,
                               &v372,
                               0LL);
                      v198 = v200;
                      if ( v200 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v197, 0LL, 0, v200, 0x115u, 0LL);
                      v199 = (CVisual *)v368;
                    }
                    if ( v198 >= 0 )
                    {
                      v194 = BYTE8(v368);
                      v201 = 0LL;
                      LOBYTE(v370) = BYTE8(v368);
                      v195 = v199;
                      *(_QWORD *)&v368 = 0LL;
                      BYTE8(v368) = 0;
                      i = v199;
LABEL_341:
                      v4 = 0;
                      if ( v198 != -2003304438 )
                        v4 = v198;
                      if ( BYTE8(v368) && v201 )
                        (**v201)(v201, 1LL);
                      if ( v4 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast((__int64)v201, 0LL, 0, v4, 0x1567u, 0LL);
                        CShapePtr::Release((CShapePtr *)&i);
                        goto LABEL_290;
                      }
                      if ( !v195
                        || !(*(unsigned __int8 (__fastcall **)(CVisual *, void **))(*(_QWORD *)v199 + 40LL))(
                              v199,
                              lpMem)
                        || LODWORD(lpMem[0]) != 1 )
                      {
                        goto LABEL_373;
                      }
                      v368 = 0LL;
                      v202 = (*(__int64 (__fastcall **)(CVisual *, __int128 *, char *))(*(_QWORD *)v195 + 32LL))(
                               v195,
                               &v368,
                               (char *)&v354 + 4);
                      if ( v202 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v203, 0LL, 0, v202, 0x115u, 0LL);
                      if ( *((float *)&v368 + 2) > *(float *)&v368
                        && *((float *)&v368 + 3) > *((float *)&v368 + 1)
                        && (*(float *)&v368 <= -3.4028235e38
                          ? (LODWORD(v368) = -8388609)
                          : (*(float *)&v368 = *(float *)&v368 + -0.015625),
                            *((float *)&v368 + 1) <= -3.4028235e38
                          ? (DWORD1(v368) = -8388609)
                          : (*((float *)&v368 + 1) = *((float *)&v368 + 1) + -0.015625),
                            *((float *)&v368 + 2) >= 3.4028235e38
                          ? (DWORD2(v368) = 2139095039)
                          : (*((float *)&v368 + 2) = *((float *)&v368 + 2) + 0.015625),
                            *((float *)&v368 + 3) >= 3.4028235e38
                          ? (HIDWORD(v368) = 2139095039)
                          : (*((float *)&v368 + 3) = *((float *)&v368 + 3) + 0.015625),
                            (v204 = (void (__fastcall ***)(_QWORD, CVisual **))(*((_QWORD *)v337 + 4)
                                                                              + 8LL
                                                                              + *(int *)(*(_QWORD *)(*((_QWORD *)v337 + 4) + 8LL)
                                                                                       + 16LL)),
                             (**v204)(v204, &i),
                             v205 = (float)SHIDWORD(i),
                             (float)(int)i <= 0.0)
                         || v205 <= 9.0
                         || *(float *)&v368 <= 0.0
                         && *((float *)&v368 + 1) <= 9.0
                         && *((float *)&v368 + 2) >= (float)(int)i
                         && *((float *)&v368 + 3) >= v205) )
                      {
                        v189 = 2;
                        v190 = 1;
                      }
                      else
                      {
LABEL_373:
                        v190 = 0;
                      }
                      if ( v194 && v195 )
                        (**(void (__fastcall ***)(CVisual *, __int64))v195)(v195, 1LL);
                      v188 = v339;
                      v86 = v337;
LABEL_378:
                      if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v188 + 56LL))(v188, 178LL) )
                      {
                        v206 = (_DWORD *)*((_QWORD *)v188 + 28);
                        if ( (*v206 & 0x10000) != 0 )
                        {
                          v207 = *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::FindData(v206, 16LL);
                          if ( v207 )
                          {
                            if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v207 + 208LL))(v207) )
                              v189 = 5;
                          }
                        }
                      }
                      if ( HIBYTE(v361) )
                        v189 = 5;
                      v208 = v341;
                      v209 = 0LL;
                      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v341 + 200LL))(v341) )
                      {
                        v209 = (char *)v188 + 320;
                      }
                      else
                      {
                        v210 = *((_QWORD *)v188 + 28);
                        if ( *(int *)v210 < 0 )
                        {
                          v211 = *(unsigned int *)(v210 + 4);
                          v212 = (_BYTE *)(v210 + 8);
                          for ( jj = 0; jj < (unsigned int)v211; ++v212 )
                          {
                            if ( *v212 == 1 )
                              break;
                            ++jj;
                          }
                          v214 = jj >= (unsigned int)v211
                               ? 0LL
                               : (_QWORD **)(v210 + v211 + 15 + 8LL * jj - (((_BYTE)v211 + 15) & 7));
                          v215 = *v214;
                          if ( *v214 )
                          {
                            v216 = (_QWORD *)*v215;
                            if ( (_QWORD *)*v215 != v215 )
                            {
                              while ( (struct CVisualTree *)v216[4] != v341 )
                              {
                                v216 = (_QWORD *)*v216;
                                if ( v216 == v215 )
                                  goto LABEL_401;
                              }
                              v209 = (char *)(v216 - 36);
                            }
                          }
                        }
                      }
LABEL_401:
                      if ( v188 != *((CVisual **)v341 + 7) )
                      {
                        v217 = (CVisual *)*((_QWORD *)v188 + 10);
                        if ( !(*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v341 + 200LL))(v341) )
                        {
                          v218 = CVisual::GetTreeDataListHead(v217);
                          if ( v218 )
                          {
                            for ( kk = v218->Flink; kk != v218; kk = kk->Flink )
                            {
                              if ( (struct CVisualTree *)kk[2].Flink == v341 )
                                break;
                            }
                          }
                        }
                      }
                      v220 = v189;
                      LOBYTE(v335) = v190;
                      v31 = v339;
                      v221 = CCpuClippingData::Update(v209 + 200, v341, v339, v220, v335);
                      v340 = v221;
                      v4 = v221;
                      if ( v221 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v222, 0LL, 0, v221, 0x7F3u, 0LL);
                      if ( v4 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v222, 0LL, 0, v4, 0x159Bu, 0LL);
                        goto LABEL_291;
                      }
                      v223 = 0LL;
                      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v341 + 200LL))(v341) )
                      {
                        v223 = (char *)v339 + 320;
                      }
                      else
                      {
                        v225 = *((_QWORD *)v339 + 28);
                        if ( *(int *)v225 < 0 )
                        {
                          v226 = *(unsigned int *)(v225 + 4);
                          v227 = (_BYTE *)(v225 + 8);
                          for ( mm = 0; mm < (unsigned int)v226; ++v227 )
                          {
                            if ( *v227 == 1 )
                              break;
                            ++mm;
                          }
                          v224 = mm >= (unsigned int)v226
                               ? 0LL
                               : (const struct Windows::Foundation::Numerics::float4x4 *)(v226
                                                                                        + 15
                                                                                        + v225
                                                                                        + 8LL * mm
                                                                                        - (((_BYTE)v226 + 15) & 7));
                          v229 = *(_QWORD **)v224;
                          if ( *(_QWORD *)v224 )
                          {
                            v230 = (_QWORD *)*v229;
                            if ( (_QWORD *)*v229 != v229 )
                            {
                              while ( (struct CVisualTree *)v230[4] != v341 )
                              {
                                v230 = (_QWORD *)*v230;
                                if ( v230 == v229 )
                                  goto LABEL_425;
                              }
                              v223 = (char *)(v230 - 36);
                            }
                          }
                        }
                      }
LABEL_425:
                      Blink = *((_DWORD *)v223 + 50);
                      if ( Blink != 5 )
                      {
                        if ( Blink != 4 )
                        {
                          if ( Blink == 3 )
                          {
                            v372 = 0LL;
                            v236 = CDrawingContext::PushClippingScope(
                                     (int *)v86,
                                     (__int64)v339,
                                     1,
                                     (__int64)&v354 + 4,
                                     (__int64)&v372);
                            v4 = v236;
                            if ( v236 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(v237, 0LL, 0, v236, 0x15BEu, 0LL);
                              goto LABEL_291;
                            }
                            v238 = CDrawingContext::PushGpuClipRectInternal(
                                     (__int64)v86,
                                     (__int64)v339,
                                     (float *)&v372,
                                     0,
                                     1);
                            v340 = v238;
                            v4 = v238;
                            if ( v238 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(v239, 0LL, 0, v238, 0x15C4u, 0LL);
                              goto LABEL_291;
                            }
                          }
                          goto LABEL_438;
                        }
                        if ( !(_BYTE)v361 )
                        {
LABEL_439:
                          if ( !*(_WORD *)((char *)&v361 + 1)
                            && __PAIR16__(HIBYTE(v361), 0) == v362
                            && !*(_QWORD *)&v348[4]
                            && COERCE_FLOAT(COERCE_UNSIGNED_INT(v349 - 1.0) & _xmm) < 0.0000011920929 )
                          {
LABEL_466:
                            if ( ((Blink - 2) & 0xFFFFFFFD) != 0 )
                            {
                              v262 = v337;
                              goto LABEL_520;
                            }
                            v253 = v342;
                            v254 = 0LL;
                            if ( Blink == 2 )
                            {
                              v254 = (__int128 *)(84LL * (unsigned int)(*((_DWORD *)v342 + 6) - 1)
                                                + *(_QWORD *)v342
                                                + 12LL);
                            }
                            else if ( Blink == 4 )
                            {
                              v254 = &v350;
                            }
                            v255 = v337;
                            v368 = 0LL;
                            v4 = 0;
                            v256 = 0;
                            v257 = 0;
                            if ( *((_DWORD *)v337 + 140) )
                            {
                              v258 = (_QWORD *)((char *)v337 + 536);
                              while ( 1 )
                              {
                                v259 = CD2DLayer::ApplyState(*(CD2DLayer **)(*v258 + 8LL * v257), v255);
                                v4 = v259;
                                if ( v259 < 0 )
                                  break;
                                v255 = v337;
                                ++v256;
                                if ( ++v257 >= *((_DWORD *)v337 + 140) )
                                  goto LABEL_475;
                              }
                              MilInstrumentationCheckHR_MaybeFailFast(v260, 0LL, 0, v259, 0xFDBu, 0LL);
                            }
                            else
                            {
LABEL_475:
                              v258 = (_QWORD *)((char *)v255 + 536);
                              *((_DWORD *)v255 + 140) = 0;
                              DynArrayImpl<0>::ShrinkToSize((char *)v255 + 536, 8LL);
                            }
                            if ( v256 < *((_DWORD *)v337 + 140) && v256 )
                              DynArray<CD2DLayer *,0>::ShiftLeft(v258, v256);
                            if ( v4 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(v261, 0LL, 0, v4, 0xFC6u, 0LL);
                              v262 = v337;
                            }
                            else
                            {
                              v262 = v337;
                              if ( *((_BYTE *)v337 + 5955) )
                                *((_WORD *)v337 + 2977) = 1;
                            }
                            if ( v4 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(v261, 0LL, 0, v4, 0xB5Bu, 0LL);
                            }
                            else
                            {
                              *(_QWORD *)&v372.Size = v339;
                              LODWORD(v372.Ptr) = 4;
                              v263 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                                       (unsigned int *)v262 + 94,
                                       &v372);
                              v4 = v263;
                              if ( v263 >= 0 )
                              {
                                v266 = *((_DWORD *)v253 + 6);
                                v363 = 0LL;
                                v364 = 0;
                                v366 = 0;
                                v367 = 1;
                                if ( v266
                                  && *(_DWORD *)(84LL * (unsigned int)(v266 - 1) + *(_QWORD *)v253)
                                  && (v267 = *((_DWORD *)v253 + 566)) != 0 )
                                {
                                  v368 = *(_OWORD *)(*((_QWORD *)v253 + 285) + 16LL * (unsigned int)(v267 - 1));
                                }
                                else
                                {
                                  v368 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                                }
                                if ( v266 && *(_DWORD *)(84LL * (unsigned int)(v266 - 1) + *(_QWORD *)v253 + 4) )
                                {
                                  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(
                                                          136LL * (unsigned int)(*((_DWORD *)v253 + 224) - 1)
                                                        + *((_QWORD *)v253 + 109)
                                                        + 112LL) )
                                  {
                                    CScopedClipStack::ComputeCpuClipBoundsInScope(v253);
                                    v268 = *((_DWORD *)v253 + 224);
                                  }
                                  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
                                    &v368,
                                    *((_QWORD *)v253 + 109) + 112LL + 136LL * (unsigned int)(v268 - 1));
                                }
                                if ( v254 )
                                {
                                  v269 = *v254;
                                  v270 = v254[1];
                                  v366 = *((_DWORD *)v254 + 16);
                                  v365[0] = v269;
                                  v271 = v254[2];
                                  v365[1] = v270;
                                  v272 = v254[3];
                                  v365[2] = v271;
                                  v365[3] = v272;
                                }
                                else
                                {
                                  CMILMatrix::SetToIdentity((CMILMatrix *)v365);
                                }
                                v273 = DynArray<CScopedClipStack::ClippingScopeState,0>::AddMultipleAndSet(v253, &v363);
                                v4 = v273;
                                if ( v273 < 0 )
                                  MilInstrumentationCheckHR_MaybeFailFast(v274, 0LL, 0, v273, 0x41u, 0LL);
                                if ( v4 >= 0 )
                                {
LABEL_506:
                                  v31 = v339;
                                  *(_QWORD *)&v372.Size = v339;
                                  v275 = 0;
                                  LODWORD(v372.Ptr) = 1;
                                  v340 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                                           (unsigned int *)v262 + 94,
                                           &v372);
                                  v4 = v340;
                                  if ( v340 < 0 )
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(v276, 0LL, 0, v340, 0xB1Cu, 0LL);
                                  }
                                  else
                                  {
                                    v275 = 1;
                                    *(_OWORD *)v379 = v368;
                                    v277 = CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
                                             (unsigned int *)v253 + 566,
                                             v379);
                                    v340 = v277;
                                    v4 = v277;
                                    if ( v277 < 0 )
                                    {
                                      MilInstrumentationCheckHR_MaybeFailFast(v278, 0LL, 0, v277, 0x10Au, 0LL);
                                    }
                                    else
                                    {
                                      v279 = 84LL * (unsigned int)(*((_DWORD *)v253 + 6) - 1);
                                      ++*(_DWORD *)(v279 + *(_QWORD *)v253);
                                    }
                                    if ( v4 < 0 )
                                      MilInstrumentationCheckHR_MaybeFailFast(v279, 0LL, 0, v4, 0xB21u, 0LL);
                                    else
                                      *((_BYTE *)v262 + 5954) = 1;
                                  }
                                  if ( v4 < 0 )
                                  {
                                    if ( v275 )
                                      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(
                                        (int *)v262 + 94,
                                        0LL);
                                    MilInstrumentationCheckHR_MaybeFailFast(v279, 0LL, 0, v4, 0x1606u, 0LL);
                                    goto LABEL_291;
                                  }
LABEL_520:
                                  v280 = (unsigned int *)((char *)v262 + 3448);
                                  v281 = 0LL;
                                  v282 = *((_DWORD *)v262 + 862);
                                  if ( v282 )
                                    v281 = *((_QWORD *)v262 + 433) + 16LL * (unsigned int)(v282 - 1);
                                  v343 = *(_BYTE *)(v281 + 8);
                                  v283 = Windows::Foundation::Numerics::determinant(
                                           (Windows::Foundation::Numerics *)&v350,
                                           v224);
                                  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v283 - 0.0) & _xmm) >= 0.00000011920929
                                    && _finite((float)(1.0 / v283)) )
                                  {
                                    v284 = v283 < 0.0 == (float)((float)((float)((float)((float)(*((float *)&v350 + 1)
                                                                                               * *((float *)&v351 + 3))
                                                                                       - (float)(*((float *)&v350 + 3)
                                                                                               * *((float *)&v351 + 1)))
                                                                               * *(float *)&v353)
                                                                       + (float)((float)((float)(*((float *)&v350 + 3)
                                                                                               * *(float *)&v351)
                                                                                       - (float)(*(float *)&v350
                                                                                               * *((float *)&v351 + 3)))
                                                                               * *((float *)&v353 + 1)))
                                                               + (float)((float)((float)(*(float *)&v350
                                                                                       * *((float *)&v351 + 1))
                                                                               - (float)(*((float *)&v350 + 1)
                                                                                       * *(float *)&v351))
                                                                       * *((float *)&v353 + 3))) < 0.0;
                                  }
                                  else
                                  {
                                    v284 = (float)((float)(*(float *)&v350 * *((float *)&v351 + 1))
                                                 - (float)(*((float *)&v350 + 1) * *(float *)&v351)) > 0.0;
                                  }
                                  v285 = v339;
                                  if ( (**((_DWORD **)v339 + 28) & 0x400000) == 0 )
                                  {
                                    v286 = *((_DWORD *)v339 + 25);
                                    v287 = v344 && *((_DWORD *)v344 + 25) == 1;
                                    v288 = *((_QWORD *)v339 + 9);
                                    if ( (v288 & 2) != 0 )
                                      v288 = *(_QWORD *)(v288 & 0xFFFFFFFFFFFFFFFCuLL);
                                    else
                                      LODWORD(v288) = v288 & 1;
                                    v289 = (*(__int64 (**)(void))(*(_QWORD *)v339 + 232LL))();
                                    if ( v286 == 1 )
                                      goto LABEL_537;
                                    if ( !v287 )
                                    {
                                      v285 = v339;
                                      goto LABEL_544;
                                    }
                                    if ( (_DWORD)v288 )
                                    {
                                      v285 = v339;
                                    }
                                    else
                                    {
LABEL_537:
                                      v285 = v339;
                                      if ( !v287 || !v289 )
                                        goto LABEL_544;
                                    }
                                  }
                                  v372.Ptr = (ULONGLONG)v285;
                                  LOBYTE(v372.Size) = v284;
                                  v290 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(
                                           v280,
                                           &v372);
                                  v340 = v290;
                                  v4 = v290;
                                  if ( v290 < 0 )
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(v291, 0LL, 0, v290, 0x1612u, 0LL);
                                    goto LABEL_290;
                                  }
LABEL_544:
                                  if ( (**((_DWORD **)v285 + 28) & 0x200000) != 0 )
                                  {
                                    WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v285);
                                    if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 356) )
                                    {
                                      v293 = v337;
                                      v372 = 0LL;
                                      CDrawingContext::GetClipBoundsWorld((__int64)v337);
                                      memset(v380, 0, sizeof(v380));
                                      TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v293 + 408));
                                      CMILMatrix::Transform3DBoundsHelper<0>(
                                        TopByReference,
                                        (char *)WindowBackgroundTreatmentInternal + 144,
                                        v380);
                                      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                             (float *)&v372,
                                             (float *)v380) )
                                      {
                                        v295 = 1;
                                        v296 = *((_BYTE *)WindowBackgroundTreatmentInternal + 359);
                                        if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 357)
                                          || !CWindowBackgroundTreatment::HasValidSource(
                                                WindowBackgroundTreatmentInternal,
                                                *((const struct IDeviceTarget **)v337 + 4)) )
                                        {
                                          BitmapRealizationForEffectInput = CWindowBackgroundTreatment::GenerateBitmapRealizationForEffectInput(
                                                                              WindowBackgroundTreatmentInternal,
                                                                              v337);
                                          v340 = BitmapRealizationForEffectInput;
                                          v4 = BitmapRealizationForEffectInput;
                                          v295 = v296 == 0;
                                          if ( BitmapRealizationForEffectInput < 0 )
                                          {
                                            MilInstrumentationCheckHR_MaybeFailFast(
                                              v298,
                                              0LL,
                                              0,
                                              BitmapRealizationForEffectInput,
                                              0x163Cu,
                                              0LL);
                                            goto LABEL_290;
                                          }
                                        }
                                        if ( v296 )
                                        {
                                          FRAME_TIME_INFO::NotifyWindowBackgroundTreatmentCacheHitOrMiss(
                                            *((FRAME_TIME_INFO **)g_pComposition + 43),
                                            v295);
                                          if ( !v295 )
                                            ++dword_180344320;
                                        }
                                        v299 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)v337 + 408));
                                        CWindowBackgroundTreatment::SetWorldTransform(
                                          WindowBackgroundTreatmentInternal,
                                          v299,
                                          3LL);
                                        v285 = v339;
                                      }
                                    }
                                  }
                                  v300 = *((_DWORD *)v285 + 25);
                                  v301 = v344 && *((_DWORD *)v344 + 25) == 1;
                                  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v285 + 232LL))(v285) )
                                    goto LABEL_569;
                                  v302 = (_DWORD *)*((_QWORD *)v285 + 28);
                                  if ( (*v302 & 0x400000) == 0 )
                                    goto LABEL_568;
                                  v303 = (unsigned int)v302[1];
                                  v304 = v302 + 2;
                                  for ( nn = 0; nn < (unsigned int)v303; ++v304 )
                                  {
                                    if ( *v304 == 10 )
                                      break;
                                    ++nn;
                                  }
                                  v306 = nn >= (unsigned int)v303
                                       ? 0LL
                                       : (_QWORD *)((char *)v302 + 8LL * nn - (((_BYTE)v303 + 15) & 7) + v303 + 15);
                                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v306 + 56LL))(
                                         *v306,
                                         59LL) )
                                  {
LABEL_569:
                                    v307 = 1;
                                  }
                                  else
                                  {
LABEL_568:
                                    v307 = 0;
                                  }
                                  if ( v300 == 1 )
                                  {
                                    if ( !v301 )
                                    {
                                      if ( !(unsigned int)CPtrArrayBase::GetCount((CVisual *)((char *)v285 + 72)) )
                                        goto LABEL_573;
LABEL_588:
                                      v31 = v339;
                                      if ( CVisual::HasBspPolygonList(v339) )
                                      {
                                        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                                          McGenEventWrite_EventWriteTransfer(
                                            &Microsoft_Windows_Dwm_Core_Provider_Context,
                                            &EVTDESC_P3D_RENDERING_Start,
                                            v313,
                                            1u,
                                            &v372);
                                        v314 = CDrawingContext::DrawBspPolygonList(v337, v31, v344);
                                        v4 = v314;
                                        if ( v314 < 0 )
                                        {
                                          MilInstrumentationCheckHR_MaybeFailFast(v315, 0LL, 0, v314, 0x16A0u, 0LL);
                                        }
                                        else
                                        {
                                          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                                            McGenEventWrite_EventWriteTransfer(
                                              &Microsoft_Windows_Dwm_Core_Provider_Context,
                                              &EVTDESC_P3D_RENDERING_Stop,
                                              v316,
                                              1u,
                                              &v372);
                                          ++*((_DWORD *)v346 + 8);
                                          *v345 = 0;
                                        }
                                      }
                                      goto LABEL_291;
                                    }
                                    if ( v307 )
                                      goto LABEL_588;
                                  }
LABEL_573:
                                  v308 = v337;
                                  LOBYTE(v336) = 0;
                                  if ( *((_DWORD *)v337 + 72) )
                                  {
                                    v309 = v343;
                                    if ( v343 != v284 )
                                    {
                                      if ( (**((_DWORD **)v285 + 28) & 0x400000) == 0
                                        && !(*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v285 + 232LL))(v285)
                                        || !v284
                                        || *(_BYTE *)(CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference(v280)
                                                    + 8) == v309 )
                                      {
LABEL_580:
                                        v31 = v339;
                                        if ( HIBYTE(v361)
                                          && (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v339 + 56LL))(
                                               v339,
                                               91LL)
                                          && CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(v31) )
                                        {
                                          Count = CPtrArrayBase::GetCount((CVisual *)((char *)v31 + 72));
                                          if ( Count )
                                          {
                                            v311 = v337;
                                            do
                                            {
                                              ChildAt = CVisual::GetChildAt(v31);
                                              CDrawingContext::DrawVisual(v311, ChildAt, 0);
                                              ++v3;
                                            }
                                            while ( v3 < Count );
                                            v4 = v340;
                                            *v345 = 0;
                                            goto LABEL_291;
                                          }
                                        }
                                        else if ( !(_BYTE)v336 )
                                        {
                                          goto LABEL_291;
                                        }
                                        *v345 = 0;
                                        goto LABEL_291;
                                      }
LABEL_579:
                                      LOBYTE(v336) = 1;
                                      goto LABEL_580;
                                    }
                                    v308 = v337;
                                  }
                                  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v285 + 272LL))(v285) )
                                  {
                                    (*(void (__fastcall **)(CVisual *, CDrawingContext *, __int64 *))(*(_QWORD *)v285 + 264LL))(
                                      v285,
                                      v308,
                                      &v336);
                                    ++*((_DWORD *)v346 + 8);
                                    goto LABEL_580;
                                  }
                                  if ( !CVisual::HasProtectedContent(v285) )
                                    goto LABEL_580;
                                  if ( !*((_BYTE *)g_pComposition + 1129) )
                                  {
                                    *((_BYTE *)v308 + 5948) = 1;
                                    goto LABEL_580;
                                  }
                                  goto LABEL_579;
                                }
                                MilInstrumentationCheckHR_MaybeFailFast(v274, 0LL, 0, v4, 0xB66u, 0LL);
                                CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)v262 + 94, 0LL);
                              }
                              else
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(v264, 0LL, 0, v263, 0xB60u, 0LL);
                              }
                            }
                            if ( v4 >= 0 )
                              goto LABEL_506;
                            MilInstrumentationCheckHR_MaybeFailFast(v265, 0LL, 0, v4, 0x1600u, 0LL);
LABEL_290:
                            v31 = v339;
LABEL_291:
                            v21 = v338;
                            goto LABEL_292;
                          }
LABEL_443:
                          if ( !*((_DWORD *)g_pComposition + 240)
                            || *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference() != 2 )
                          {
                            v240 = *((_DWORD *)v86 + 102);
                            v241 = &CMILMatrix::Identity;
                            v373 = 0LL;
                            v372 = 0LL;
                            if ( v240 )
                              v242 = (void *)(*((_QWORD *)v86 + 53) + 68LL * (unsigned int)(v240 - 1));
                            else
                              v242 = &CMILMatrix::Identity;
                            CMILMatrix::Transform3DBoundsHelper<1>(v242, (char *)v339 + 164, &v372);
                            v381 = v372;
                            v382 = v373;
                            v243 = *(_QWORD *)v339;
                            v368 = 0LL;
                            v244 = *(__int64 (__fastcall **)(CVisual *, void *, __int128 *, struct _EVENT_DATA_DESCRIPTOR *, __int128 *, __int128 *))(v243 + 216);
                            v245 = *((_DWORD *)v86 + 102);
                            if ( v245 )
                              v241 = (void *)(*((_QWORD *)v86 + 53) + 68LL * (unsigned int)(v245 - 1));
                            v246 = v244(v339, v241, &v377, &v381, &v384, &v368);
                            v4 = v246;
                            if ( v246 < 0 )
                              MilInstrumentationCheckHR_MaybeFailFast(v247, 0LL, 0, v246, 0xA23u, 0LL);
                            else
                              *(_OWORD *)v379 = v368;
                            if ( v4 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(v247, 0LL, 0, v4, 0x15D9u, 0LL);
                              goto LABEL_291;
                            }
                            v248 = CDrawingContext::PushEffects(v86, (__int64)v379, (__int64)v383, (__int64)&v336);
                            v340 = v248;
                            v4 = v248;
                            if ( v248 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(v249, 0LL, 0, v248, 0x15E0u, 0LL);
                              goto LABEL_291;
                            }
                            if ( (_BYTE)v336 )
                              goto LABEL_456;
                            v250 = 0LL;
                            if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v208 + 200LL))(v208) )
                            {
                              v250 = (struct _LIST_ENTRY *)((char *)v31 + 320);
                            }
                            else
                            {
                              v251 = CVisual::GetTreeDataListHead(v31);
                              if ( v251 )
                              {
                                Flink = v251->Flink;
                                if ( v251->Flink != v251 )
                                {
                                  while ( (struct CVisualTree *)Flink[2].Flink != v208 )
                                  {
                                    Flink = Flink->Flink;
                                    if ( Flink == v251 )
                                      goto LABEL_465;
                                  }
                                  v250 = Flink - 18;
                                }
                              }
                            }
LABEL_465:
                            Blink = (int)v250[12].Blink;
                          }
                          goto LABEL_466;
                        }
                      }
                      if ( *(_BYTE *)(84LL * (unsigned int)(*((_DWORD *)v86 + 240) - 1) + *((_QWORD *)v86 + 117) + 80) )
                      {
                        v372 = 0LL;
                        v232 = CDrawingContext::PushClippingScope((int *)v86, (__int64)v339, 0, 0LL, (__int64)&v372);
                        v4 = v232;
                        if ( v232 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(v233, 0LL, 0, v232, 0x15ACu, 0LL);
                          goto LABEL_291;
                        }
                        v234 = CDrawingContext::PushGpuClipRectInternal(
                                 (__int64)v86,
                                 (__int64)v339,
                                 (float *)&v372,
                                 0,
                                 1);
                        v340 = v234;
                        v4 = v234;
                        if ( v234 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(v235, 0LL, 0, v234, 0x15B2u, 0LL);
                          goto LABEL_291;
                        }
                      }
LABEL_438:
                      if ( (_BYTE)v361 )
                        goto LABEL_443;
                      goto LABEL_439;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(v197, 0LL, 0, v198, 0x896u, 0LL);
                  }
                  v201 = (void (__fastcall ***)(_QWORD, __int64))v368;
                  v199 = 0LL;
                  goto LABEL_341;
                }
LABEL_289:
                MilInstrumentationCheckHR_MaybeFailFast(v161, 0LL, 0, v160, 0x1540u, 0LL);
                goto LABEL_290;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v161, 0LL, 0, v160, 0x6DDu, 0LL);
              v86 = v337;
              goto LABEL_298;
            }
            goto LABEL_273;
          }
          v159 = i;
        }
      }
    }
    v178 = (CVisual *)*((_QWORD *)v159 + 10);
    if ( !(*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v341 + 200LL))(v341) )
    {
      v180 = (__int64 *)CVisual::GetTreeDataListHead(v178);
      if ( v180 )
      {
        v161 = *v180;
        if ( (__int64 *)*v180 != v180 )
        {
          v163 = v341;
          while ( *(struct CVisualTree **)(v161 + 32) != v341 )
          {
            v161 = *(_QWORD *)v161;
            if ( (__int64 *)v161 == v180 )
              goto LABEL_275;
          }
          goto LABEL_272;
        }
      }
      goto LABEL_274;
    }
LABEL_273:
    v165 = (CVisual *)((char *)v178 + 320);
LABEL_274:
    v163 = v341;
    goto LABEL_275;
  }
  while ( 1 )
  {
    v142 = (char *)(v156 - 36);
    if ( (struct CVisualTree *)v156[4] == v341 )
      break;
    v156 = (_QWORD *)*v156;
    if ( v156 == v155 )
      goto LABEL_225;
  }
LABEL_203:
  if ( !v142 )
    goto LABEL_225;
  v143 = (_DWORD *)*((_QWORD *)v142 + 4);
  if ( !v143
    && (v144 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v142 + 3) + 360LL))(*((_QWORD *)v142 + 3)),
        *((_QWORD *)v142 + 4) = v144,
        (v143 = (_DWORD *)v144) == 0LL)
    || (v145 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v143 + 24LL))(v143),
        *((_DWORD *)v86 + 1486) = v145,
        v146 = *(_DWORD *)(v140 + 1240),
        v145 < v146) )
  {
    v141 = v341;
    goto LABEL_225;
  }
  v21 = v338;
  if ( v143[3] >= v146 )
  {
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v338);
    LOBYTE(v336) = 0;
    CWatermarkStack<bool,64,2,10>::Push(v147, &v336);
    *v345 = 0;
  }
LABEL_292:
  if ( *((_BYTE *)v337 + 5957) && *v21 && *(_BYTE *)(*v21 - 1 + *((_QWORD *)v21 + 2)) )
    CVisual::RenderProjectedShadows((__int64)v31, v337, 1);
  return (unsigned int)v4;
}
