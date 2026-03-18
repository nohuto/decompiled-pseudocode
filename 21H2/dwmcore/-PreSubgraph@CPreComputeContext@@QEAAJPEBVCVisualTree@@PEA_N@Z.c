/*
 * XREFs of ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18008FDF0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeCont.c)
 * Callees:
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x180012D84 (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x180012DCC (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x1800144FC (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180014C58 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ @ 0x180044E3C (-GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x180047410 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180048DDC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E38 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetInputHandle@CVisual@@QEBAPEAXXZ @ 0x18004933C (-GetInputHandle@CVisual@@QEBAPEAXXZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004962C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18004A6C4 (--0CTreeData@@IEAA@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004D434 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006D8F4 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?CollectAdditionalDirtyRectsForSubTrees@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180088064 (-CollectAdditionalDirtyRectsForSubTrees@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z @ 0x1800899E8 (-AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008A238 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?Top@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18008A268 (-Top@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008AF20 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x18008AF48 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008D5F4 (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?reserve_region@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVSubTreeContext@CPreComputeContext@@_K0@Z @ 0x18008D84C (-reserve_region@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeConte.c)
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x18008DB18 (--0CBspPreComputeHelper@@QEAA@XZ.c)
 *     ?BeginWalk@SubTreeContext@CPreComputeContext@@QEAA_NPEBVCVisualTree@@@Z @ 0x18008DC18 (-BeginWalk@SubTreeContext@CPreComputeContext@@QEAA_NPEBVCVisualTree@@@Z.c)
 *     ?AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x18008E330 (-AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18008EBAC (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008ECB8 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180093FA0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800956F0 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Rect.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C4DE0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z @ 0x1800CFC74 (-Push@-$CWatermarkStack@PEAX$01$01$09@@QEAAJAEBQEAX@Z.c)
 *     ?Push@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z @ 0x1800CFD50 (-Push@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAAJAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Push@?$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z @ 0x1800CFE38 (-Push@-$CWatermarkStack@M$01$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilDepthMode@@@Z @ 0x1800CFF14 (-Push@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilDepthMode@@@Z.c)
 *     ?GetUnoptimizedBounds@CDirtyRegion@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800D3744 (-GetUnoptimizedBounds@CDirtyRegion@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800D4DD0 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ??0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z @ 0x1800D4F10 (--0CVisualTreePath@@QEAA@PEBVCVisualTree@@@Z.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x1800D4F5C (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1800D5E90 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 *     ?CalculateWorldRenderingScale@CVisual@@IEAAMXZ @ 0x1800D635C (-CalculateWorldRenderingScale@CVisual@@IEAAMXZ.c)
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x1800D6444 (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D74F0 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN_ea_1800D74F0.c)
 *     ?IsDisabled@CDirtyRegion@@QEBA_NXZ @ 0x1800DEA18 (-IsDisabled@CDirtyRegion@@QEBA_NXZ.c)
 *     ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x1800DFA58 (-SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z.c)
 *     ?InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800E1CC4 (-InvalidateExistingBounds@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x1800E4878 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800E8D60 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?GetWorldUpVectorOverride@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800F4634 (-GetWorldUpVectorOverride@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _o_sqrtf_0 @ 0x18010197C (_o_sqrtf_0.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18017CDBC (-NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z.c)
 *     ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x180193F24 (-GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180194114 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEBAPEBW4Enum@MilDepthMode@@XZ @ 0x180194170 (-GetTopByReference@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEBAPEBW4Enum@MilDepthMod.c)
 *     ?SetSuperWetInkClip@CTreeData@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B4A54 (-SetSuperWetInkClip@CTreeData@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B5874 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B5A64 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z @ 0x1801B68CC (-PreComputePreSubgraph@CDepthSortingPreComputeHelper@@QEAAXPEAVCVisual@@@Z.c)
 *     ?Get3DContentBounds@CSceneVisual@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020256C (-Get3DContentBounds@CSceneVisual@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPreComputeContext::PreSubgraph(CPreComputeContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // r13
  __int64 *v4; // rsi
  struct CTreeData *v5; // rbx
  __int64 v6; // rax
  __int64 v10; // rax
  _DWORD *v11; // rdx
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rdi
  _QWORD *v15; // rax
  CPreComputeContext *v16; // r15
  bool *v17; // r14
  int v18; // eax
  _DWORD *v19; // rdx
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rdi
  struct CComposition *v25; // rax
  __int64 v26; // r15
  _QWORD *v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  CLightStack *v31; // rbx
  char v32; // cl
  char v33; // al
  struct CVisualTree *v34; // r13
  bool *v35; // r14
  __int64 v36; // rdx
  char v37; // al
  struct CTreeData *v38; // rdi
  int v39; // eax
  char v40; // bl
  _DWORD *v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // r14
  const struct CVisualTree *v44; // r13
  __int64 v45; // rdi
  _DWORD *v46; // rdx
  int v47; // r15d
  bool v48; // r12
  bool v49; // di
  _DWORD *v50; // rdx
  char v51; // al
  __int64 v52; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  _BYTE *v56; // rcx
  __int64 v57; // rdx
  _QWORD **v58; // rdx
  _QWORD *v59; // rcx
  _QWORD *v60; // rdx
  struct CTreeData *UnusedTreeData; // r11
  CTreeData *v62; // rax
  _QWORD *v63; // rcx
  __int64 v64; // r8
  __int64 v65; // rax
  _BYTE *v66; // rcx
  __int64 v67; // rdx
  _QWORD **v68; // rdx
  _QWORD *v69; // rax
  _QWORD *v70; // rdx
  ULONGLONG Ptr; // rax
  __int64 v72; // rbx
  __int128 v73; // xmm6
  __int128 v74; // xmm7
  __int128 v75; // xmm8
  __int128 v76; // xmm9
  char v77; // r12
  CVisual *v78; // rdi
  __int64 v79; // rax
  bool v80; // zf
  bool v81; // cl
  const struct CVisualTree *v82; // r13
  _BYTE *v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r15
  char v86; // r12
  __int64 **TreeData; // r14
  _DWORD *v88; // rdx
  _QWORD *v89; // rdx
  __int64 v90; // rdi
  __int64 *v91; // rax
  __int64 v92; // rcx
  int v93; // r13d
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 *v96; // rax
  __int64 v97; // r8
  __int64 v98; // rax
  _BYTE *v99; // rcx
  __int64 v100; // rdx
  _QWORD **v101; // rdx
  _QWORD *v102; // rax
  _QWORD *v103; // rcx
  __int64 v104; // rax
  _BYTE *v105; // rcx
  __int64 v106; // rdx
  __int64 *v107; // rax
  float v108; // xmm6_4
  float v109; // xmm4_4
  float v110; // xmm7_4
  float v111; // xmm5_4
  float v112; // xmm8_4
  float v113; // xmm9_4
  __int64 v114; // rcx
  ULONG v115; // eax
  float v116; // xmm2_4
  float v117; // xmm3_4
  float v118; // xmm1_4
  float v119; // xmm0_4
  bool v120; // r14
  char v121; // di
  __int64 v122; // rax
  int v123; // eax
  unsigned int v124; // ebx
  struct _EVENT_DATA_DESCRIPTOR v125; // xmm0
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // rax
  unsigned int v130; // eax
  __int64 v131; // r14
  __int64 v132; // rdi
  __int64 v133; // rax
  _BYTE *v134; // rcx
  __int64 v135; // r8
  _QWORD *v136; // r8
  const struct CMILMatrix *v137; // rdi
  struct CMILMatrix *v138; // rax
  _BOOL8 v139; // r8
  _BYTE *v140; // r9
  __int64 v141; // rcx
  _BYTE *v142; // r8
  unsigned int v143; // eax
  __int64 v144; // rax
  _BYTE *v145; // rcx
  __int64 v146; // r8
  _QWORD *v147; // r8
  _QWORD *v148; // rbx
  __int64 v149; // rcx
  _BYTE *v150; // rax
  __int64 v151; // rdx
  __int64 *v152; // rax
  __int64 v153; // rax
  __int128 v154; // xmm1
  __int128 v155; // xmm0
  __int128 v156; // xmm1
  int v157; // eax
  CGeometry *v158; // rcx
  int BoundsSafe; // eax
  unsigned int v160; // edi
  __int64 v161; // rcx
  __int64 v162; // rdi
  __int64 v163; // r14
  bool IsEqual; // al
  __int64 v165; // rax
  _BYTE *v166; // rcx
  __int64 v167; // r9
  char *v168; // r9
  __int64 v169; // rax
  char v170; // al
  char v171; // al
  __int64 v172; // rax
  _BYTE *v173; // rcx
  __int64 v174; // r8
  __int64 *v175; // r8
  __int64 v176; // rbx
  __int64 v177; // rax
  void **v178; // rax
  __int64 v179; // rcx
  __int64 v180; // rax
  int v181; // eax
  unsigned int v182; // ebx
  unsigned int v183; // r15d
  __int64 v184; // rcx
  unsigned __int64 v185; // rax
  HANDLE ProcessHeap; // rax
  void *v187; // r14
  unsigned __int64 v188; // rcx
  void *v189; // rdi
  __int64 *v190; // rax
  __int64 v191; // rcx
  struct _EVENT_DATA_DESCRIPTOR *UnoptimizedBounds; // rdx
  CVisual *v193; // rbx
  float v194; // xmm7_4
  __int64 *v195; // rdi
  float v196; // xmm6_4
  __int64 *v197; // rcx
  float v198; // xmm0_4
  __int64 v199; // rax
  float v200; // xmm1_4
  float v201; // xmm2_4
  struct CEffect *EffectInternal; // r14
  int v203; // edx
  int *v204; // rcx
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rbx
  __int64 v206; // r9
  const struct CMILMatrix *TopByReference; // rax
  __int64 v208; // r9
  __int64 v209; // rcx
  __int128 *v210; // rdx
  CVisual *v211; // rbx
  float v212; // xmm7_4
  __int64 *v213; // rdi
  float v214; // xmm6_4
  __int64 *v215; // rcx
  float v216; // xmm0_4
  __int64 v217; // rax
  float v218; // xmm1_4
  float v219; // xmm2_4
  struct CEffect *v220; // r14
  __int64 v221; // rbx
  float v222; // xmm0_4
  int v223; // eax
  unsigned int v224; // ebx
  int v225; // eax
  const struct D2D_VECTOR_2F *v226; // r8
  int v227; // eax
  float *v228; // rcx
  __int64 v229; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  char v232; // al
  _DWORD *v233; // r10
  __int64 v234; // rcx
  unsigned int Slot; // eax
  __int64 v236; // r10
  int v237; // r8d
  int *v238; // rdx
  __int128 *v239; // r15
  unsigned int v240; // r12d
  unsigned int i; // r14d
  __int64 v242; // rcx
  __int64 v243; // rcx
  _BYTE *v244; // r8
  unsigned int v245; // eax
  _QWORD **v246; // r8
  __int64 v247; // rcx
  _BYTE *v248; // r8
  unsigned int v249; // eax
  __int64 v250; // rcx
  _BYTE *LightAtNoRef; // rax
  __int64 v252; // rdi
  __int64 v253; // rcx
  int v254; // edi
  unsigned int *j; // rdx
  HANDLE v256; // rax
  HANDLE v257; // rax
  __int64 v258; // rcx
  int v259; // r15d
  __int64 v260; // rbx
  __int64 v261; // rdi
  int v262; // eax
  unsigned int v263; // ebx
  unsigned int ActiveLightCount; // eax
  CComposition *v265; // rdi
  int ManipulationManager; // eax
  int v267; // r9d
  unsigned __int64 v268; // r9
  __int64 v269; // rdx
  bool IsDisabled; // al
  __int64 v271; // r11
  float v272; // xmm7_4
  float v273; // xmm8_4
  float v274; // xmm0_4
  int v275; // eax
  unsigned int v276; // ebx
  unsigned int *k; // rdx
  __int64 v278; // rcx
  _BYTE *v279; // r8
  unsigned int v280; // eax
  int v281; // eax
  __int64 v282; // rcx
  __int64 v283; // rcx
  int v284; // eax
  unsigned int v285; // ebx
  _QWORD *ProjectedShadowReceivers; // rax
  int v287; // xmm1_4
  __int64 v288; // rbx
  __int64 v289; // rdi
  __int64 **v290; // rax
  int v291; // edx
  CVisualTreePath *v292; // rbx
  DwmDbg::DbgString *v293; // rax
  _OWORD *v294; // rcx
  __int64 v295; // rax
  bool v296; // [rsp+30h] [rbp-D0h]
  bool v297; // [rsp+31h] [rbp-CFh] BYREF
  struct CManipulationManager *v298; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v299; // [rsp+40h] [rbp-C0h]
  CPreComputeContext *v300; // [rsp+48h] [rbp-B8h]
  __int64 v301; // [rsp+50h] [rbp-B0h] BYREF
  struct CVisualTree *v302; // [rsp+58h] [rbp-A8h]
  bool *v303; // [rsp+60h] [rbp-A0h]
  struct CTreeData *v304; // [rsp+68h] [rbp-98h]
  float v305[20]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v306[64]; // [rsp+C0h] [rbp-40h] BYREF
  int v307; // [rsp+100h] [rbp+0h]
  _BYTE v308[64]; // [rsp+110h] [rbp+10h] BYREF
  int v309; // [rsp+150h] [rbp+50h]
  struct _EVENT_DATA_DESCRIPTOR v310; // [rsp+160h] [rbp+60h] BYREF
  __int128 v311; // [rsp+170h] [rbp+70h] BYREF
  __int128 v312; // [rsp+180h] [rbp+80h] BYREF
  __int128 v313; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v314[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v315; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v316; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v317; // [rsp+1E0h] [rbp+E0h]
  __int128 v318; // [rsp+1F0h] [rbp+F0h]
  int v319; // [rsp+200h] [rbp+100h]
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+1C8h]

  v3 = *((_QWORD *)this + 234);
  v4 = (__int64 *)*((_QWORD *)this + 233);
  v5 = 0LL;
  v6 = *(_QWORD *)a2;
  v319 = 0;
  v303 = a3;
  v302 = a2;
  v300 = this;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v6 + 184))(a2) )
  {
    v5 = (struct CTreeData *)(v4 + 42);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v4);
    if ( TreeDataListHead )
    {
      Flink = TreeDataListHead->Flink;
      if ( TreeDataListHead->Flink != TreeDataListHead )
      {
        while ( (const struct CVisualTree *)Flink[2].Flink != a2 )
        {
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_3;
        }
        v5 = (struct CTreeData *)&Flink[-24];
      }
    }
  }
LABEL_3:
  *a3 = 0;
  v10 = *(_QWORD *)a2;
  v304 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v10 + 184))(a2) )
    v304 = v5;
  v11 = (_DWORD *)v4[29];
  if ( (*v11 & 0x4000000) == 0 )
    goto LABEL_6;
  v172 = (unsigned int)v11[1];
  v173 = v11 + 2;
  v174 = 0LL;
  if ( (_DWORD)v172 )
  {
    while ( *v173 != 6 )
    {
      v174 = (unsigned int)(v174 + 1);
      ++v173;
      if ( (unsigned int)v174 >= (unsigned int)v172 )
        goto LABEL_343;
    }
  }
  else
  {
LABEL_343:
    if ( (unsigned int)v174 >= (unsigned int)v172 )
    {
      v175 = 0LL;
      goto LABEL_287;
    }
  }
  v175 = (__int64 *)((char *)v11 + 8 * v174 - (((_BYTE)v172 + 15) & 7) + v172 + 15);
LABEL_287:
  v176 = *v175;
  if ( *v175 )
  {
    v177 = *(_QWORD *)(v176 + 64);
    if ( v177 )
    {
      if ( *(_BYTE *)(v177 + 96) )
      {
        v178 = detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::reserve_region(
                 (__int64 *)this,
                 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 6));
        CBspPreComputeHelper::CBspPreComputeHelper((CBspPreComputeHelper *)v178);
        *(_QWORD *)(v179 + 360) = 0LL;
        *(_QWORD *)(v179 + 376) = 0LL;
        *(_DWORD *)(v179 + 368) = 0;
        *(_DWORD *)(v179 + 384) = 0;
        *(_QWORD *)(v179 + 392) = 0LL;
        *(_QWORD *)(v179 + 408) = 0LL;
        *(_DWORD *)(v179 + 400) = 0;
        *(_DWORD *)(v179 + 416) = 0;
        *(_QWORD *)(v179 + 424) = v176 + 104;
        *(_QWORD *)(v179 + 432) = v176;
        *(_DWORD *)(v179 + 440) = 0;
        *(_WORD *)(v179 + 444) = 0;
        if ( !CPreComputeContext::SubTreeContext::BeginWalk(
                (CPreComputeContext::SubTreeContext *)(*((_QWORD *)this + 1) - 448LL),
                (const void **)a2) )
        {
          v260 = *(_QWORD *)this;
          v261 = *((_QWORD *)this + 1);
          while ( v260 != v261 )
          {
            CDirtyRegion::SetFullDirty(*(CDirtyRegion **)(v260 + 424));
            v260 += 448LL;
          }
          return 0LL;
        }
      }
    }
  }
LABEL_6:
  v12 = *((_QWORD *)this + 1);
  v13 = *(_QWORD *)this;
  v299 = *(_QWORD *)this;
  v301 = v12;
  while ( v13 != v12 )
  {
    v14 = *(_QWORD *)(v13 + 432);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 184LL))(v14) )
    {
      v15 = v4 + 42;
      goto LABEL_10;
    }
    v54 = v4[29];
    if ( *(int *)v54 < 0 )
    {
      v55 = *(unsigned int *)(v54 + 4);
      v56 = (_BYTE *)(v54 + 8);
      v57 = 0LL;
      if ( (_DWORD)v55 )
      {
        while ( *v56 != 1 )
        {
          v57 = (unsigned int)(v57 + 1);
          ++v56;
          if ( (unsigned int)v57 >= (unsigned int)v55 )
            goto LABEL_209;
        }
LABEL_94:
        v58 = (_QWORD **)(v54 + v55 + 15 + 8 * v57 - (((_BYTE)v55 + 15) & 7));
      }
      else
      {
LABEL_209:
        if ( (unsigned int)v57 < (unsigned int)v55 )
          goto LABEL_94;
        v58 = 0LL;
      }
      v59 = *v58;
      if ( *v58 )
      {
        v60 = (_QWORD *)*v59;
        if ( (_QWORD *)*v59 != v59 )
        {
          while ( 1 )
          {
            v15 = v60 - 48;
            if ( v60[4] == v14 )
              break;
            v60 = (_QWORD *)*v60;
            if ( v60 == v59 )
              goto LABEL_99;
          }
LABEL_10:
          if ( v15 )
            goto LABEL_11;
        }
      }
    }
LABEL_99:
    UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)v4);
    if ( UnusedTreeData )
    {
      v233 = (_DWORD *)v4[29];
      if ( (*v233 & 0x8000000) != 0 )
      {
        v234 = v4[29];
        *v233 &= ~0x8000000u;
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v234, 5);
        if ( Slot < *(_DWORD *)(v236 + 4) )
          *(_BYTE *)(Slot + v236 + 8) = 0;
      }
    }
    else
    {
      v62 = (CTreeData *)operator new(0x1A8uLL);
      if ( v62 )
      {
        CTreeData::CTreeData(v62);
        *v63 = &CVisualTreeData::`vftable';
        v63[52] = 0LL;
      }
      else
      {
        UnusedTreeData = 0LL;
      }
    }
    (*(void (__fastcall **)(struct CTreeData *, __int64, __int64 *))(*(_QWORD *)UnusedTreeData + 8LL))(
      UnusedTreeData,
      v14,
      v4);
LABEL_11:
    v13 += 448LL;
  }
  v16 = v300;
  v17 = v303;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*v4 + 56))(v4, 91LL) )
  {
    v232 = *((_BYTE *)v4 + 96);
    if ( v232 < 0 )
      *((_BYTE *)v4 + 96) = v232 | 4;
  }
  if ( *((char *)v4 + 104) < 0 )
  {
    LODWORD(v298) = *((_DWORD *)v4 + 53);
    v262 = CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Push((char *)v16 + 1368, &v298);
    v263 = v262;
    if ( v262 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x283,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v262);
      return v263;
    }
  }
  v18 = *((_DWORD *)v16 + 342);
  v19 = 0LL;
  if ( v18 )
    v19 = (_DWORD *)(*((_QWORD *)v16 + 173) + 4LL * (unsigned int)(v18 - 1));
  v20 = *((_DWORD *)v4 + 27);
  if ( v20 != *v19 )
  {
    *((_DWORD *)v4 + 27) = *(_DWORD *)CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::GetTopByReference();
    CVisual::OnOuterTransformChanged((CVisual *)v4);
    v20 = *((_DWORD *)v4 + 27);
  }
  if ( ((v20 - 1) & 0xFFFFFFFD) == 0 )
    *v17 = 1;
  if ( *((int *)v4 + 67) > 0 || *((int *)v4 + 66) > 0 )
    *v17 = 1;
  v21 = v299;
  v22 = *(_QWORD *)(v299 + 424);
  if ( !*(_BYTE *)(v22 + 4424) && !*(_DWORD *)(v22 + 4400) )
  {
    v23 = *(_QWORD *)v16;
    v24 = *((_QWORD *)v16 + 1);
    v25 = g_pComposition;
    while ( 1 )
    {
      if ( v23 == v24 )
      {
        v16 = v300;
        v21 = v299;
        goto LABEL_32;
      }
      v26 = *(_QWORD *)(v23 + 432);
      v27 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26 + 184LL))(v26) )
      {
        v27 = v4 + 42;
        goto LABEL_28;
      }
      v64 = v4[29];
      if ( *(int *)v64 < 0 )
        break;
LABEL_28:
      v25 = g_pComposition;
      v28 = 0LL;
      if ( g_pComposition )
        v28 = *((_QWORD *)g_pComposition + 62);
      v27[32] = v28;
      v23 += 448LL;
    }
    v65 = *(unsigned int *)(v64 + 4);
    v66 = (_BYTE *)(v64 + 8);
    v67 = 0LL;
    if ( (_DWORD)v65 )
    {
      while ( *v66 != 1 )
      {
        v67 = (unsigned int)(v67 + 1);
        ++v66;
        if ( (unsigned int)v67 >= (unsigned int)v65 )
          goto LABEL_212;
      }
    }
    else
    {
LABEL_212:
      if ( (unsigned int)v67 >= (unsigned int)v65 )
      {
        v68 = 0LL;
        goto LABEL_107;
      }
    }
    v68 = (_QWORD **)(v64 + v65 + 15 + 8 * v67 - (((_BYTE)v65 + 15) & 7));
LABEL_107:
    v69 = *v68;
    if ( *v68 )
    {
      v70 = (_QWORD *)*v69;
      if ( (_QWORD *)*v69 != v69 )
      {
        while ( v70[4] != v26 )
        {
          v70 = (_QWORD *)*v70;
          if ( v70 == v69 )
            goto LABEL_28;
        }
        v27 = v70 - 48;
      }
    }
    goto LABEL_28;
  }
  v25 = g_pComposition;
LABEL_32:
  v29 = 0LL;
  if ( v25 )
    v29 = *((_QWORD *)v25 + 62);
  if ( v4[41] != v29 )
  {
    v30 = v4[11];
    if ( !v30 || (*(_BYTE *)(v30 + 96) & 1) != 0 )
    {
      v108 = *((float *)v4 + 31);
      v109 = 0.0;
      v110 = *((float *)v4 + 32);
      v111 = 0.0;
      v112 = *((float *)v4 + 35);
      v113 = *((float *)v4 + 36);
      if ( v30 )
      {
        v109 = *(float *)(v30 + 140);
        v111 = *(float *)(v30 + 144);
      }
      v114 = v4[28];
      if ( (*(_DWORD *)(v114 + 4) & 0x10000000) != 0 )
      {
        v237 = *(_DWORD *)(v114 + 12);
        v238 = (int *)(v114 + 12);
        if ( (v237 & 0x7F000000) != 0x4000000 )
        {
          do
          {
            v238 = (int *)((char *)v238 + (v237 & 0xFFFFFF) + 4);
            v237 = *v238;
          }
          while ( (*v238 & 0x7F000000) != 0x4000000 );
        }
        v115 = v238[3];
        v310.Ptr = *(_QWORD *)(v238 + 1);
      }
      else
      {
        v115 = 0;
        v310.Ptr = 0LL;
      }
      v310.Size = v115;
      v116 = (float)(*(float *)&v310.Ptr * v109) + *((float *)v4 + 28);
      v117 = (float)(*((float *)&v310.Ptr + 1) * v111) + *((float *)v4 + 29);
      *((float *)v4 + 31) = v116;
      *((float *)v4 + 32) = v117;
      if ( (*(_DWORD *)(v114 + 4) & 0x20000000) != 0 )
      {
        v203 = *(_DWORD *)(v114 + 12);
        v204 = (int *)(v114 + 12);
        if ( (v203 & 0x7F000000) != 0x3000000 )
        {
          do
          {
            v204 = (int *)((char *)v204 + (v203 & 0xFFFFFF) + 4);
            v203 = *v204;
          }
          while ( (*v204 & 0x7F000000) != 0x3000000 );
        }
        *(_QWORD *)&v311 = *(_QWORD *)(v204 + 1);
      }
      else
      {
        *(_QWORD *)&v311 = 0LL;
      }
      v118 = (float)(*(float *)&v311 * v109) + *((float *)v4 + 33);
      v119 = (float)(*((float *)&v311 + 1) * v111) + *((float *)v4 + 34);
      *((float *)v4 + 35) = v118;
      *((float *)v4 + 36) = v119;
      if ( v118 < 0.0 )
      {
        *((_DWORD *)v4 + 35) = 0;
        v118 = 0.0;
      }
      if ( v119 < 0.0 )
      {
        *((_DWORD *)v4 + 36) = 0;
        v119 = 0.0;
      }
      v120 = v108 != v116 || v110 != v117;
      if ( v112 == v118 && v113 == v119 )
      {
        v121 = 0;
      }
      else
      {
        v229 = v4[31];
        v121 = 1;
        if ( v229 && *(_BYTE *)(v229 + 136) )
          CVisual::OnClipChanged((CVisual *)v4);
        CVisual::OnLayoutChanged((CVisual *)v4);
      }
      if ( v120 )
      {
        CVisual::OnOuterTransformChanged((CVisual *)v4);
      }
      else if ( !v121 )
      {
LABEL_190:
        v21 = v299;
        v4[41] = v29;
        goto LABEL_37;
      }
      *((_BYTE *)v4 + 96) |= 1u;
      goto LABEL_190;
    }
  }
LABEL_37:
  v31 = (CPreComputeContext *)((char *)v16 + 1496);
  if ( (unsigned int)((v4[36] - v4[35]) >> 4) || (unsigned int)((v4[39] - v4[38]) >> 4) )
  {
    *(_QWORD *)&v311 = 0x100000000LL;
    v239 = &v311;
    do
    {
      v240 = *(_DWORD *)v239;
      for ( i = 0; i < (unsigned int)CVisual::GetLightsCount(v4, v240); ++i )
      {
        LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v242, i, v240);
        v252 = (__int64)LightAtNoRef;
        if ( LightAtNoRef[170] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64 *))(*(_QWORD *)LightAtNoRef
                                                                                           + 240LL))(
                 LightAtNoRef,
                 v302,
                 v4) )
          {
            v254 = CLightStack::Push((__int64)v31, v252, v240);
            if ( v254 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v253, 0LL, 0LL, v254, 0x4Bu);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2B5,
                (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
                (const char *)(unsigned int)v254);
              return (unsigned int)v254;
            }
          }
        }
      }
      v239 = (__int128 *)((char *)v239 + 4);
    }
    while ( v239 != (__int128 *)((char *)&v311 + 8) );
    v16 = v300;
    v12 = v301;
    v21 = v299;
  }
  v32 = *((_BYTE *)v4 + 96);
  if ( (*(_DWORD *)(v4[28] + 4) & 0x2000000) != 0 && (v32 & 0xC0) != 0 )
  {
    v32 |= 4u;
    *((_BYTE *)v4 + 96) = v32;
  }
  v33 = v32;
  if ( v3 && (*(_BYTE *)(v3 + 96) & 2) != 0 )
  {
    v33 = v32 | 2;
    *((_BYTE *)v4 + 96) = v32 | 2;
  }
  v34 = v302;
  if ( (v33 & 6) == 2 )
  {
    ActiveLightCount = CLightStack::GetActiveLightCount(v31, (struct CVisual *)v4, v302, 0);
    v21 = v299;
    if ( ActiveLightCount )
      *((_BYTE *)v4 + 96) = *((_BYTE *)v4 + 96) ^ 2 | 4;
  }
  if ( (v4[34] & 1) != 0 )
  {
    v191 = *(_QWORD *)(v21 + 424);
    if ( *(_BYTE *)(v191 + 4424) )
    {
      UnoptimizedBounds = &v310;
      v310 = (struct _EVENT_DATA_DESCRIPTOR)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    else
    {
      UnoptimizedBounds = (struct _EVENT_DATA_DESCRIPTOR *)CDirtyRegion::GetUnoptimizedBounds(v191, v314);
    }
    CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
      (char *)v16 + 1736,
      UnoptimizedBounds);
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v34 + 184LL))(v34) )
    {
      v193 = (CVisual *)v4;
      v194 = *(float *)&FLOAT_1_0;
      v195 = v4;
      while ( (*((_BYTE *)v193 + 103) & 2) != 0 && (*((_BYTE *)v193 + 102) & 4) == 0 )
      {
        v196 = *(float *)&FLOAT_1_0;
        if ( (**((_DWORD **)v193 + 29) & 0x400000) != 0 )
        {
          EffectInternal = CVisual::GetEffectInternal(v193);
          if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                 EffectInternal,
                 56LL) )
          {
            v196 = *((float *)EffectInternal + 20);
          }
        }
        v197 = (__int64 *)*((_QWORD *)v34 + 8);
        v198 = fminf(1.0, fmaxf(v196, 0.0));
        if ( v193 == (CVisual *)v197 )
        {
          v201 = *(float *)&FLOAT_1_0;
        }
        else
        {
          v199 = *((_QWORD *)v193 + 28);
          if ( (*(_DWORD *)(v199 + 4) & 0x8000000) != 0 )
          {
            v21 = *(unsigned int *)(v199 + 12);
            for ( j = (unsigned int *)(v199 + 12); (*j & 0x7F000000) != 0x5000000; v21 = *j )
              j = (unsigned int *)((char *)j + (v21 & 0xFFFFFF) + 4);
            LODWORD(v298) = j[1];
            v200 = *(float *)&v298;
          }
          else
          {
            v200 = *(float *)&FLOAT_1_0;
          }
          v201 = fminf(1.0, fmaxf(v200, 0.0));
        }
        v194 = v194 * (float)(v198 * v201);
        if ( COERCE_FLOAT(LODWORD(v194) & _xmm) < 0.0000011920929 )
          break;
        if ( v193 == (CVisual *)v197 )
        {
          CPreComputeContext::AddVisualToBVIPreRenderList(v16, (struct CVisual *)v4);
          break;
        }
        if ( !v195
          || (v195 = (__int64 *)v195[11]) == 0LL
          || v193 != (CVisual *)v195 && (v195 = (__int64 *)v195[11], v193 != (CVisual *)v195) )
        {
          v193 = (CVisual *)*((_QWORD *)v193 + 11);
          if ( v193 )
            continue;
        }
        break;
      }
    }
  }
  v35 = v303;
  if ( (v4[12] & 0xD3) != 0 )
    *v303 = 1;
  v36 = v4[29];
  if ( (*(_DWORD *)v36 & 0x400000) == 0 )
    goto LABEL_48;
  v144 = *(unsigned int *)(v36 + 4);
  v145 = (_BYTE *)(v36 + 8);
  v146 = 0LL;
  if ( (_DWORD)v144 )
  {
    while ( *v145 != 10 )
    {
      v146 = (unsigned int)(v146 + 1);
      ++v145;
      if ( (unsigned int)v146 >= (unsigned int)v144 )
        goto LABEL_401;
    }
  }
  else
  {
LABEL_401:
    if ( (unsigned int)v146 >= (unsigned int)v144 )
    {
      v147 = 0LL;
      goto LABEL_238;
    }
  }
  v147 = (_QWORD *)(v144 + 15 + v36 + 8 * v146 - (((_BYTE)v144 + 15) & 7));
LABEL_238:
  v148 = (_QWORD *)*v147;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v147 + 56LL))(*v147, 186LL) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v148 + 56LL))(v148, 56LL) )
      goto LABEL_48;
    v148 = (_QWORD *)v148[11];
  }
  if ( v148 )
    ++*(_DWORD *)(v12 - 8);
LABEL_48:
  v37 = *((_BYTE *)v4 + 96);
  if ( (v37 & 4) != 0 )
  {
    if ( (v37 & 1) != 0 )
    {
      v180 = *(_QWORD *)(v12 - 24);
      if ( !*(_BYTE *)(v180 + 4424) && !*(_DWORD *)(v180 + 4400) )
      {
        v181 = CPreComputeContext::AddLocalBoundsToSubTreesDirtyRegion(v16, (struct CVisual *)v4, 1);
        v182 = v181;
        if ( v181 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x317,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
            (const char *)(unsigned int)v181);
          return v182;
        }
      }
    }
    ++*(_DWORD *)(*(_QWORD *)(v12 - 24) + 4400LL);
  }
  v38 = v304;
  if ( !v304 )
    goto LABEL_54;
  v39 = *((_DWORD *)v4 + 24);
  if ( (v39 & 0x10000) != 0 )
    goto LABEL_464;
  if ( !*v35 )
  {
    if ( (*((_BYTE *)v4 + 100) & 0x40) != 0 && (v39 & 0x2000) != 0 )
    {
LABEL_464:
      *v35 = 1;
      goto LABEL_54;
    }
    if ( (v39 & 0x4000) != 0 )
    {
      if ( CVisual::EnsureWorldTransform((CVisual *)v4, (CVisual **)v34, v304) )
        *v35 = 1;
      v40 = 1;
      goto LABEL_55;
    }
  }
LABEL_54:
  v40 = 0;
LABEL_55:
  if ( !*v35 || (*((_DWORD *)v4 + 24) &= 0xFFFE00FF, *((_BYTE *)v4 + 96) = *((_DWORD *)v4 + 24) | 0x10, !*v35) )
  {
    if ( (v4[34] & 5) == 0 && ((v4[12] & 8) == 0 || CDirtyRegion::IsDisabled(*(CDirtyRegion **)(v12 - 24))) )
      goto LABEL_58;
  }
  Ptr = *((_QWORD *)v16 + 1);
  v72 = *(_QWORD *)v16;
  v73 = v318;
  v74 = v317;
  v75 = v316;
  v76 = v315;
  v77 = v297;
  v310.Ptr = Ptr;
  while ( v72 != Ptr )
  {
    v78 = 0LL;
    if ( v4 == *(__int64 **)(*(_QWORD *)(v301 - 16) + 64LL) )
      v79 = 0LL;
    else
      v79 = v4[11];
    v80 = v4[31] == 0;
    v309 = 0;
    *(_QWORD *)&v311 = 0LL;
    v81 = !v80
       && (*((_BYTE *)v4 + 102) & 2) == 0
       && (!v79 || *(_DWORD *)(v79 + 108) != 1)
       && (*((_DWORD *)v4 + 27) != 1 || !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v4 + 10)));
    v82 = *(const struct CVisualTree **)(v72 + 432);
    v83 = v308;
    v296 = v81;
    if ( !v81 )
      v83 = 0LL;
    *(_QWORD *)&v313 = v83;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *, __int64, __int64))(*(_QWORD *)v82 + 184LL))(
           v82,
           v36,
           v21) )
    {
      v85 = (__int64)(v4 + 42);
      goto LABEL_124;
    }
    v21 = v4[29];
    if ( *(int *)v21 >= 0 )
      goto LABEL_490;
    v94 = *(unsigned int *)(v21 + 4);
    v84 = v21 + 8;
    v95 = 0LL;
    if ( (_DWORD)v94 )
    {
      while ( *(_BYTE *)v84 != 1 )
      {
        v95 = (unsigned int)(v95 + 1);
        ++v84;
        if ( (unsigned int)v95 >= (unsigned int)v94 )
          goto LABEL_252;
      }
LABEL_148:
      v84 = v94 + 15;
      v36 = v94 + 15 + v21 + 8 * v95 - (((_BYTE)v94 + 15) & 7);
      goto LABEL_149;
    }
LABEL_252:
    if ( (unsigned int)v95 < (unsigned int)v94 )
      goto LABEL_148;
    v36 = 0LL;
LABEL_149:
    v96 = *(__int64 **)v36;
    if ( !*(_QWORD *)v36 || (v84 = *v96, (__int64 *)*v96 == v96) )
    {
LABEL_490:
      MilInstrumentationCheckHR_MaybeFailFast(v84, 0LL, 0LL, -2003292412, 0x68Du);
      v93 = v319;
      goto LABEL_139;
    }
    while ( 1 )
    {
      v85 = v84 - 384;
      if ( *(const struct CVisualTree **)(v84 + 32) == v82 )
        break;
      v84 = *(_QWORD *)v84;
      if ( (__int64 *)v84 == v96 )
        goto LABEL_490;
    }
LABEL_124:
    if ( !v85 )
      goto LABEL_490;
    v86 = 0;
    TreeData = 0LL;
    if ( v4 == *((__int64 **)v82 + 8) )
      goto LABEL_309;
    v88 = (_DWORD *)v4[29];
    TreeData = 0LL;
    if ( (*v88 & 0x1000000) != 0 )
    {
      v243 = (unsigned int)v88[1];
      v244 = v88 + 2;
      v245 = 0;
      if ( (_DWORD)v243 )
      {
        while ( *v244 != 8 )
        {
          ++v245;
          ++v244;
          if ( v245 >= (unsigned int)v243 )
            goto LABEL_458;
        }
LABEL_431:
        v246 = (_QWORD **)((char *)v88 + 8LL * v245 - (((_BYTE)v243 + 15) & 7) + v243 + 15);
      }
      else
      {
LABEL_458:
        if ( v245 < (unsigned int)v243 )
          goto LABEL_431;
        v246 = 0LL;
      }
      if ( *v246 )
        v78 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v246 + 184LL))(**v246);
    }
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v82 + 184LL))(v82) )
    {
      v89 = v4 + 42;
      goto LABEL_129;
    }
    v97 = v4[29];
    if ( *(int *)v97 >= 0 )
      goto LABEL_132;
    v98 = *(unsigned int *)(v97 + 4);
    v99 = (_BYTE *)(v97 + 8);
    v100 = 0LL;
    if ( (_DWORD)v98 )
    {
      while ( *v99 != 1 )
      {
        v100 = (unsigned int)(v100 + 1);
        ++v99;
        if ( (unsigned int)v100 >= (unsigned int)v98 )
          goto LABEL_271;
      }
LABEL_157:
      v101 = (_QWORD **)(v97 + v98 + 15 + 8 * v100 - (((_BYTE)v98 + 15) & 7));
      goto LABEL_158;
    }
LABEL_271:
    if ( (unsigned int)v100 < (unsigned int)v98 )
      goto LABEL_157;
    v101 = 0LL;
LABEL_158:
    v102 = *v101;
    if ( !*v101 )
      goto LABEL_132;
    v103 = (_QWORD *)*v102;
    if ( (_QWORD *)*v102 == v102 )
      goto LABEL_132;
    while ( 1 )
    {
      v89 = v103 - 48;
      if ( (const struct CVisualTree *)v103[4] == v82 )
        break;
      v103 = (_QWORD *)*v103;
      if ( v103 == v102 )
        goto LABEL_132;
    }
LABEL_129:
    if ( v89 && v89[35] != *(_QWORD *)(*(_QWORD *)(v89[36] + 16LL) + 496LL) && v78 )
    {
      TreeData = CVisual::FindTreeData(v78, v82);
      v86 = 1;
      goto LABEL_134;
    }
LABEL_132:
    v90 = v4[11];
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v82 + 184LL))(v82) )
    {
      TreeData = (__int64 **)(v90 + 336);
      goto LABEL_134;
    }
    v21 = *(_QWORD *)(v90 + 232);
    if ( *(int *)v21 < 0 )
    {
      v104 = *(unsigned int *)(v21 + 4);
      v105 = (_BYTE *)(v21 + 8);
      v106 = 0LL;
      if ( (_DWORD)v104 )
      {
        while ( *v105 != 1 )
        {
          v106 = (unsigned int)(v106 + 1);
          ++v105;
          if ( (unsigned int)v106 >= (unsigned int)v104 )
            goto LABEL_233;
        }
LABEL_166:
        v36 = v104 + 15 + v21 + 8 * v106 - (((_BYTE)v104 + 15) & 7);
      }
      else
      {
LABEL_233:
        if ( (unsigned int)v106 < (unsigned int)v104 )
          goto LABEL_166;
        v36 = 0LL;
      }
      v107 = *(__int64 **)v36;
      if ( *(_QWORD *)v36 )
      {
        v36 = *v107;
        if ( (__int64 *)*v107 != v107 )
        {
          while ( *(const struct CVisualTree **)(v36 + 32) != v82 )
          {
            v36 = *(_QWORD *)v36;
            if ( (__int64 *)v36 == v107 )
              goto LABEL_134;
          }
          TreeData = (__int64 **)(v36 - 384);
        }
      }
    }
LABEL_134:
    if ( TreeData )
    {
      v91 = TreeData[34];
      goto LABEL_136;
    }
LABEL_309:
    v91 = 0LL;
    if ( g_pComposition )
      v91 = (__int64 *)*((_QWORD *)g_pComposition + 62);
LABEL_136:
    if ( *(_QWORD *)(v85 + 272) >= (unsigned __int64)v91 )
      goto LABEL_137;
    v137 = (const struct CMILMatrix *)(TreeData + 39);
    v305[16] = 0.0;
    v307 = 0;
    v138 = (struct CMILMatrix *)v306;
    if ( !TreeData )
      v137 = 0LL;
    if ( !v4[31] )
      v138 = 0LL;
    CVisual::CalcTransform((CVisual *)v4, v82, v137, &v297, (struct CMILMatrix *)v305, v138);
    if ( v86 || !v137 )
    {
      LOBYTE(v139) = 1;
    }
    else if ( v297 )
    {
      IsEqual = CMILMatrix::IsEqualTo<0>((float *)v137, v305);
      v139 = IsEqual;
      LOBYTE(v139) = !IsEqual;
    }
    else
    {
      LOBYTE(v139) = 0;
    }
    v140 = v306;
    if ( !v4[31] )
      v140 = 0LL;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, float *, _BOOL8, _BYTE *))(*(_QWORD *)v85 + 48LL))(
            v85,
            v305,
            v139,
            v140) )
      goto LABEL_137;
    v36 = v4[29];
    if ( (*(_DWORD *)v36 & 0x800000) == 0 )
      goto LABEL_137;
    v141 = *(unsigned int *)(v36 + 4);
    v142 = (_BYTE *)(v36 + 8);
    v143 = 0;
    if ( (_DWORD)v141 )
    {
      while ( *v142 != 9 )
      {
        ++v143;
        ++v142;
        if ( v143 >= (unsigned int)v141 )
          goto LABEL_445;
      }
    }
    else
    {
LABEL_445:
      if ( v143 >= (unsigned int)v141 )
      {
        v21 = 0LL;
        goto LABEL_229;
      }
    }
    v21 = v141 + 15 + v36 + 8LL * v143 - (((_BYTE)v141 + 15) & 7);
LABEL_229:
    if ( *(_QWORD *)v21 && *((char *)v4 + 101) < 0 )
    {
      v298 = 0LL;
      v265 = (CComposition *)v4[2];
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v298);
      ManipulationManager = CComposition::GetManipulationManager(v265, &v298);
      if ( ManipulationManager >= 0 )
        CManipulationManager::NotifyVisualPropertyChange(v298, (struct CVisual *)v4, (const struct CMILMatrix *)v305);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v298);
    }
LABEL_137:
    if ( !*(_QWORD *)(v85 + 272) )
      ModuleFailFastForHRESULT(2291674884LL, retaddr);
    v76 = *(_OWORD *)(v85 + 312);
    v92 = v313;
    v93 = *(_DWORD *)(v85 + 376);
    v77 = *(_BYTE *)(v85 + 11);
    v315 = v76;
    v319 = v93;
    v75 = *(_OWORD *)(v85 + 328);
    v74 = *(_OWORD *)(v85 + 344);
    v316 = v75;
    v317 = v74;
    v73 = *(_OWORD *)(v85 + 360);
    v318 = v73;
    if ( (_QWORD)v313 )
    {
      v153 = *(_QWORD *)(v85 + 296);
      if ( v153 )
      {
        v154 = *(_OWORD *)(v153 + 16);
        *(_OWORD *)v313 = *(_OWORD *)v153;
        v155 = *(_OWORD *)(v153 + 32);
        *(_OWORD *)(v92 + 16) = v154;
        v156 = *(_OWORD *)(v153 + 48);
        v157 = *(_DWORD *)(v153 + 64);
        *(_OWORD *)(v92 + 32) = v155;
        *(_OWORD *)(v92 + 48) = v156;
        *(_DWORD *)(v92 + 64) = v157;
      }
      else
      {
        *(_OWORD *)v313 = v76;
        *(_OWORD *)(v92 + 16) = v75;
        *(_OWORD *)(v92 + 32) = v74;
        *(_OWORD *)(v92 + 48) = v73;
        *(_DWORD *)(v92 + 64) = v93;
      }
    }
LABEL_139:
    if ( !v296 )
      goto LABEL_140;
    v158 = (CGeometry *)v4[31];
    v314[0] = 0LL;
    BoundsSafe = CGeometry::GetBoundsSafe(v158, (const struct D2D_SIZE_F *)((char *)v4 + 140), v314);
    v160 = BoundsSafe;
    if ( BoundsSafe < 0 )
    {
      v268 = (unsigned int)BoundsSafe;
      v269 = 551LL;
      goto LABEL_500;
    }
    v311 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(v308, v314, &v311);
    v80 = *(_DWORD *)(v72 + 392) == 0;
    v313 = 0LL;
    if ( v80 )
      v313 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    else
      CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Top(
        (int *)(v72 + 392),
        &v313);
    v312 = v311;
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v313, &v312);
    v160 = CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
             v72 + 392,
             &v313);
    if ( (v160 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v161, 0LL, 0LL, v160, 0x31u);
      v268 = v160;
      v269 = 558LL;
LABEL_500:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v269,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)v268);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x365,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)v160);
      return v160;
    }
    v162 = *(_QWORD *)(v72 + 432);
    v163 = 0LL;
    *(_QWORD *)&v311 = 0LL;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v162 + 184LL))(v162) )
    {
      v163 = (__int64)(v4 + 42);
    }
    else
    {
      v190 = (__int64 *)CVisual::GetTreeDataListHead((CVisual *)v4);
      if ( !v190 )
        goto LABEL_269;
      v36 = *v190;
      if ( (__int64 *)*v190 == v190 )
        goto LABEL_269;
      while ( *(_QWORD *)(v36 + 32) != v162 )
      {
        v36 = *(_QWORD *)v36;
        if ( (__int64 *)v36 == v190 )
          goto LABEL_269;
      }
      v163 = v36 - 384;
    }
    *(_QWORD *)&v311 = v163;
LABEL_269:
    *(_BYTE *)(v163 + 9) = 1;
LABEL_140:
    if ( !v77 )
      goto LABEL_141;
    v126 = *(unsigned int *)(v72 + 360);
    v127 = *(unsigned int *)(v72 + 364);
    if ( (_DWORD)v126 == (_DWORD)v127 )
    {
      v183 = 2 * v127;
      if ( (unsigned __int64)(2 * v127) > 0xFFFFFFFF )
      {
        v259 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v127, 0LL, 0LL, -2147024362, 0x64u);
        goto LABEL_496;
      }
      if ( v183 <= 8 )
        v183 = 8;
      v184 = v183;
      if ( v183 == 8LL )
        v185 = 0x1FFFFFFFFFFFFFFFLL;
      else
        v185 = 0xFFFFFFFFFFFFFFFFuLL / v183;
      if ( v185 <= 0x44 )
      {
        v267 = -2147024809;
LABEL_494:
        v259 = v267;
        MilInstrumentationCheckHR_MaybeFailFast(v184, 0LL, 0LL, v267, 0x6Bu);
LABEL_496:
        MilInstrumentationCheckHR_MaybeFailFast(v258, 0LL, 0LL, v259, 0x36u);
        goto LABEL_199;
      }
      ProcessHeap = GetProcessHeap();
      v187 = HeapAlloc(ProcessHeap, 0, 68LL * v183);
      if ( !v187 )
      {
        v267 = -2147024882;
        goto LABEL_494;
      }
      v188 = 68LL * *(unsigned int *)(v72 + 360);
      if ( v188 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v188, 0LL, 0LL, -2147024362, 0x6Du);
        v257 = GetProcessHeap();
        HeapFree(v257, 0, v187);
        v259 = -2147024362;
        goto LABEL_496;
      }
      memcpy_0(v187, *(const void **)(v72 + 376), (unsigned int)v188);
      v189 = *(void **)(v72 + 376);
      if ( v189 )
      {
        v256 = GetProcessHeap();
        HeapFree(v256, 0, v189);
      }
      v126 = *(unsigned int *)(v72 + 360);
      *(_QWORD *)(v72 + 376) = v187;
      *(_DWORD *)(v72 + 364) = v183;
    }
    v128 = 68 * v126;
    v129 = *(_QWORD *)(v72 + 376);
    *(_OWORD *)(v128 + v129) = v76;
    *(_OWORD *)(v128 + v129 + 16) = v75;
    *(_OWORD *)(v128 + v129 + 32) = v74;
    *(_OWORD *)(v128 + v129 + 48) = v73;
    *(_DWORD *)(v128 + v129 + 64) = v93;
    ++*(_DWORD *)(v72 + 360);
    v130 = *(_DWORD *)(v72 + 384);
    if ( v130 <= *(_DWORD *)(v72 + 360) )
      v130 = *(_DWORD *)(v72 + 360);
    *(_DWORD *)(v72 + 384) = v130;
LABEL_199:
    v131 = v311;
    if ( !(_QWORD)v311 )
    {
      v132 = *(_QWORD *)(v72 + 432);
      v131 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v132 + 184LL))(v132) )
      {
        v131 = (__int64)(v4 + 42);
      }
      else
      {
        v21 = v4[29];
        if ( *(int *)v21 < 0 )
        {
          v149 = *(unsigned int *)(v21 + 4);
          v150 = (_BYTE *)(v21 + 8);
          v151 = 0LL;
          if ( (_DWORD)v149 )
          {
            while ( *v150 != 1 )
            {
              v151 = (unsigned int)(v151 + 1);
              ++v150;
              if ( (unsigned int)v151 >= (unsigned int)v149 )
                goto LABEL_312;
            }
LABEL_246:
            v36 = v21 + v149 + 15 + 8 * v151 - (((_BYTE)v149 + 15) & 7);
          }
          else
          {
LABEL_312:
            if ( (unsigned int)v151 < (unsigned int)v149 )
              goto LABEL_246;
            v36 = 0LL;
          }
          v152 = *(__int64 **)v36;
          if ( *(_QWORD *)v36 )
          {
            v36 = *v152;
            if ( (__int64 *)*v152 != v152 )
            {
              while ( *(_QWORD *)(v36 + 32) != v132 )
              {
                v36 = *(_QWORD *)v36;
                if ( (__int64 *)v36 == v152 )
                  goto LABEL_202;
              }
              v131 = v36 - 384;
            }
          }
        }
      }
    }
LABEL_202:
    *(_BYTE *)(v131 + 8) = 1;
LABEL_141:
    Ptr = v310.Ptr;
    v72 += 448LL;
  }
  v40 = 1;
  v16 = v300;
  if ( (v4[12] & 8) != 0 )
    CPreComputeContext::CollectAdditionalDirtyRectsForSubTrees(
      (struct CPreComputeContext::SubTreeContext **)v300,
      (struct CVisual *)v4);
  v38 = v304;
  v34 = v302;
LABEL_58:
  if ( v38 )
  {
    if ( !v40 )
    {
      v36 = v4[29];
      if ( (*(_DWORD *)v36 & 0x800000) == 0 )
        goto LABEL_61;
      v247 = *(unsigned int *)(v36 + 4);
      v248 = (_BYTE *)(v36 + 8);
      v249 = 0;
      if ( (_DWORD)v247 )
      {
        while ( *v248 != 9 )
        {
          ++v249;
          ++v248;
          if ( v249 >= (unsigned int)v247 )
            goto LABEL_466;
        }
LABEL_439:
        v21 = v36 + v247 + 15 + 8LL * v249 - (((_BYTE)v247 + 15) & 7);
      }
      else
      {
LABEL_466:
        if ( v249 < (unsigned int)v247 )
          goto LABEL_439;
        v21 = 0LL;
      }
      if ( *(_QWORD *)v21 && (v250 = *(_QWORD *)(*(_QWORD *)v21 + 104LL)) != 0 && *(_QWORD *)(v250 + 64) )
      {
LABEL_443:
        CVisual::EnsureWorldTransform((CVisual *)v4, (CVisual **)v34, v38);
      }
      else
      {
LABEL_61:
        if ( (*((_BYTE *)v4 + 102) & 0x20) != 0 )
          goto LABEL_443;
      }
    }
    if ( (*((_BYTE *)v4 + 102) & 0x40) != 0
      && (*(__int64 (__fastcall **)(struct CVisualTree *, __int64, __int64))(*(_QWORD *)v34 + 208LL))(v34, v36, v21) )
    {
      IsDisabled = CDirtyRegion::IsDisabled(*(CDirtyRegion **)(v301 - 24));
      (*(void (__fastcall **)(__int64, __int64 *, bool))(*(_QWORD *)v271 + 40LL))(v271, v4, IsDisabled);
    }
    v41 = (_DWORD *)v4[29];
    v21 = 0LL;
    if ( (*v41 & 0x800000) == 0 )
    {
LABEL_64:
      if ( (*((_BYTE *)v4 + 100) & 0x40) != 0 && !*((_BYTE *)v16 + 1936) )
      {
        *((_BYTE *)v16 + 1936) = 1;
        *((_BYTE *)v4 + 100) |= 0x20u;
      }
      goto LABEL_65;
    }
    v165 = (unsigned int)v41[1];
    v166 = v41 + 2;
    v167 = 0LL;
    if ( (_DWORD)v165 )
    {
      while ( *v166 != 9 )
      {
        v167 = (unsigned int)(v167 + 1);
        ++v166;
        if ( (unsigned int)v167 >= (unsigned int)v165 )
          goto LABEL_461;
      }
LABEL_277:
      v168 = (char *)v41 + v165 + 8 * v167 - (((_BYTE)v165 + 15) & 7) + 15;
    }
    else
    {
LABEL_461:
      if ( (unsigned int)v167 < (unsigned int)v165 )
        goto LABEL_277;
      v168 = 0LL;
    }
    if ( *(_QWORD *)v168 )
    {
      v169 = *(_QWORD *)(*(_QWORD *)v168 + 104LL);
      if ( v169 )
        v21 = *(_QWORD *)(v169 + 64);
    }
    if ( !v21 )
      goto LABEL_64;
    v310.Ptr = CVisual::GetInputHandle((CVisual *)v4);
    CWatermarkStack<void *,2,2,10>::Push((char *)v16 + 1464, &v310);
    v170 = *((_BYTE *)v4 + 100) | 0x10;
    *((_BYTE *)v4 + 100) = v170;
    v171 = (v170 & 0x40) != 0;
    if ( v171 != *((_BYTE *)v16 + 1936) )
    {
      *((_BYTE *)v16 + 1936) = v171;
      *((_BYTE *)v4 + 100) |= 0x20u;
    }
  }
LABEL_65:
  if ( (*((_BYTE *)v4 + 103) & 1) != 0 )
  {
    v221 = v4[28];
    if ( (*(_DWORD *)(v221 + 4) & 0x40000) != 0 )
    {
      v222 = CVisual::CalculateWorldRenderingScale((CVisual *)v4);
      if ( v222 > 0.00000011920929 )
      {
        *(float *)&v298 = CVisual::GetWorldRenderingScaleOverride((CVisual *)v4) / v222;
        v223 = CWatermarkStack<float,2,2,10>::Push((char *)v16 + 1400, &v298);
        v224 = v223;
        if ( v223 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3C0,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
            (const char *)(unsigned int)v223);
          return v224;
        }
        *((_BYTE *)v4 + 100) |= 4u;
        v221 = v4[28];
      }
    }
    if ( (*(_DWORD *)(v221 + 4) & 0x20000) != 0 )
    {
      CVisual::GetWorldUpVectorOverride((CVisual *)v4, (struct D2D_VECTOR_3F *)&v313);
      CMILMatrix::Transform3DVector(
        (CMILMatrix *)&v315,
        (struct D2D_VECTOR_3F *)&v310,
        (const struct D2D_VECTOR_3F *)&v313);
      v272 = *((float *)&v310.Ptr + 1);
      v273 = *(float *)&v310.Ptr;
      v274 = o_sqrtf_0((float)(v272 * v272) + (float)(v273 * v273));
      if ( v274 > 0.00000011920929 )
      {
        *(float *)&v301 = v273 / v274;
        *((float *)&v301 + 1) = v272 / v274;
        v275 = CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Push((char *)v16 + 1432, &v301);
        v276 = v275;
        if ( v275 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3D8,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
            (const char *)(unsigned int)v275);
          return v276;
        }
        *((_BYTE *)v4 + 100) |= 8u;
      }
    }
  }
  if ( (*((_BYTE *)v4 + 102) & 0x20) != 0
    && v38
    && *((_QWORD *)v38 + 34) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v38 + 36) + 16LL) + 496LL) )
  {
    v225 = *((_DWORD *)v16 + 358);
    v226 = 0LL;
    if ( v225 )
      v226 = (const struct D2D_VECTOR_2F *)(*((_QWORD *)v16 + 181) + 8LL * (unsigned int)(v225 - 1));
    v227 = *((_DWORD *)v16 + 350);
    v228 = 0LL;
    if ( v227 )
      v228 = (float *)(*((_QWORD *)v16 + 177) + 4LL * (unsigned int)(v227 - 1));
    CVisual::IssueContextUpdateNotification((CVisual *)v4, *v228, v226);
  }
  if ( (*(_DWORD *)v4[29] & 0x200000) != 0 )
  {
    WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v4);
    CWindowBackgroundTreatment::InvalidateExistingBounds(WindowBackgroundTreatmentInternal);
    v206 = v299;
    *((_BYTE *)WindowBackgroundTreatmentInternal + 302) = 1;
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(v206 + 360));
    CWindowBackgroundTreatment::SetWorldTransform(WindowBackgroundTreatmentInternal, TopByReference, 1LL);
    if ( *((_QWORD *)WindowBackgroundTreatmentInternal + 38) )
    {
      v209 = *(_QWORD *)(v208 + 424);
      if ( *(_BYTE *)(v209 + 4424) )
      {
        v210 = &v312;
        v312 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
      else
      {
        v210 = (__int128 *)CDirtyRegion::GetUnoptimizedBounds(v209, v314);
      }
      CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
        (char *)v16 + 1736,
        v210);
      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v34 + 184LL))(v34) )
      {
        v211 = (CVisual *)v4;
        v212 = *(float *)&FLOAT_1_0;
        v213 = v4;
        while ( (*((_BYTE *)v211 + 103) & 2) != 0 && (*((_BYTE *)v211 + 102) & 4) == 0 )
        {
          v214 = *(float *)&FLOAT_1_0;
          if ( (**((_DWORD **)v211 + 29) & 0x400000) != 0 )
          {
            v220 = CVisual::GetEffectInternal(v211);
            if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v220 + 56LL))(v220, 56LL) )
              v214 = *((float *)v220 + 20);
          }
          v215 = (__int64 *)*((_QWORD *)v34 + 8);
          v216 = fminf(1.0, fmaxf(v214, 0.0));
          if ( v211 == (CVisual *)v215 )
          {
            v219 = *(float *)&FLOAT_1_0;
          }
          else
          {
            v217 = *((_QWORD *)v211 + 28);
            if ( (*(_DWORD *)(v217 + 4) & 0x8000000) != 0 )
            {
              v21 = *(unsigned int *)(v217 + 12);
              for ( k = (unsigned int *)(v217 + 12); (*k & 0x7F000000) != 0x5000000; v21 = *k )
                k = (unsigned int *)((char *)k + (v21 & 0xFFFFFF) + 4);
              LODWORD(v298) = k[1];
              v218 = *(float *)&v298;
            }
            else
            {
              v218 = *(float *)&FLOAT_1_0;
            }
            v219 = fminf(1.0, fmaxf(v218, 0.0));
          }
          v212 = v212 * (float)(v216 * v219);
          if ( COERCE_FLOAT(LODWORD(v212) & _xmm) < 0.0000011920929 )
            break;
          if ( v211 == (CVisual *)v215 )
          {
            CPreComputeContext::AddVisualToBVIPreRenderList(v16, (struct CVisual *)v4);
            break;
          }
          if ( !v213
            || (v213 = (__int64 *)v213[11]) == 0LL
            || v211 != (CVisual *)v213 && (v213 = (__int64 *)v213[11], v211 != (CVisual *)v213) )
          {
            v211 = (CVisual *)*((_QWORD *)v211 + 11);
            if ( v211 )
              continue;
          }
          break;
        }
      }
    }
  }
  if ( CPreComputeContext::s_depthSortingEnabled )
    CDepthSortingPreComputeHelper::PreComputePreSubgraph(
      (CPreComputeContext *)((char *)v16 + 1832),
      (struct CVisual *)v4);
  v42 = *(_QWORD *)v16;
  v43 = *((_QWORD *)v16 + 1);
  while ( 2 )
  {
    if ( v42 != v43 )
    {
      v44 = *(const struct CVisualTree **)(v42 + 432);
      if ( v4 == *((__int64 **)v44 + 8) )
        v45 = 0LL;
      else
        v45 = v4[11];
      v46 = (_DWORD *)v4[29];
      v47 = 0;
      if ( (*v46 & 0x20000000) == 0 )
        goto LABEL_75;
      v278 = (unsigned int)v46[1];
      v279 = v46 + 2;
      v280 = 0;
      if ( (_DWORD)v278 )
      {
        while ( *v279 != 3 )
        {
          ++v280;
          ++v279;
          if ( v280 >= (unsigned int)v278 )
            goto LABEL_514;
        }
LABEL_516:
        v21 = (__int64)v46 + 8LL * v280 - (((_BYTE)v278 + 15) & 7) + v278 + 15;
      }
      else
      {
LABEL_514:
        if ( v280 < (unsigned int)v278 )
          goto LABEL_516;
        v21 = 0LL;
      }
      if ( *(_QWORD *)v21 && *(_DWORD *)(*(_QWORD *)v21 + 24LL) )
        CVisual::ReleaseBspPolygonList((CVisual *)v4);
LABEL_75:
      if ( v45 )
      {
        if ( *(_DWORD *)(v45 + 108) == 1 )
        {
          v281 = CBspPreComputeHelper::PushStacksForBspChildVisual(
                   (CBspPreComputeHelper *)v42,
                   v44,
                   (struct CVisual *)v4);
          v47 = v281;
          if ( v281 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v282, 0LL, 0LL, v281, 0x4Bu);
LABEL_532:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x423,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
              (const char *)(unsigned int)v47);
            return (unsigned int)v47;
          }
        }
      }
      v48 = *((_DWORD *)v4 + 27) == 1;
      v49 = v45 && *(_DWORD *)(v45 + 108) == 1;
      if ( (*(__int64 (__fastcall **)(__int64 *, _DWORD *, __int64))(*v4 + 216))(v4, v46, v21) )
        goto LABEL_523;
      v50 = (_DWORD *)v4[29];
      if ( (*v50 & 0x400000) == 0 )
        goto LABEL_82;
      v133 = (unsigned int)v50[1];
      v134 = v50 + 2;
      v135 = 0LL;
      if ( (_DWORD)v133 )
      {
        while ( *v134 != 10 )
        {
          v135 = (unsigned int)(v135 + 1);
          ++v134;
          if ( (unsigned int)v135 >= (unsigned int)v133 )
            goto LABEL_381;
        }
LABEL_205:
        v136 = (_QWORD *)((char *)v50 + 8 * v135 - (((_BYTE)v133 + 15) & 7) + v133 + 15);
      }
      else
      {
LABEL_381:
        if ( (unsigned int)v135 < (unsigned int)v133 )
          goto LABEL_205;
        v136 = 0LL;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v136 + 56LL))(*v136, 59LL) )
LABEL_523:
        v51 = 1;
      else
LABEL_82:
        v51 = 0;
      if ( !v48 )
      {
LABEL_84:
        ++*(_DWORD *)(v42 + 352);
        if ( v47 < 0 )
          goto LABEL_532;
        v42 += 448LL;
        continue;
      }
      if ( v49 )
      {
        if ( !v51 )
          goto LABEL_84;
      }
      else if ( !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v4 + 10)) )
      {
        goto LABEL_84;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McGenEventWrite_EventWriteTransfer(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_P3D_BUILDING_BSPTREE_Start,
          v21,
          1u,
          v314);
      v47 = CBspPreComputeHelper::PushStacksForBspRootVisual((CBspPreComputeHelper *)v42, v44, (struct CVisual *)v4);
      if ( v47 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v283, 0LL, 0LL, v47, 0x51u);
        goto LABEL_532;
      }
      goto LABEL_84;
    }
    break;
  }
  if ( (v4[12] & 1) == 0 )
    goto LABEL_87;
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64))(*v4 + 56))(v4, 165LL, v21) )
  {
    v284 = CSceneVisual::Get3DContentBounds(v4, (char *)v4 + 172);
    v285 = v284;
    if ( v284 >= 0 )
      goto LABEL_87;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42D,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
      (const char *)(unsigned int)v284);
    return v285;
  }
  else
  {
    v122 = *v4;
    v310 = 0LL;
    v123 = (*(__int64 (__fastcall **)(__int64 *, struct _EVENT_DATA_DESCRIPTOR *))(v122 + 224))(v4, &v310);
    v124 = v123;
    if ( v123 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x437,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
        (const char *)(unsigned int)v123);
      return v124;
    }
    else
    {
      if ( (*(_DWORD *)v4[29] & 0x20000) != 0 )
      {
        ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers(v4);
        if ( *ProjectedShadowReceivers != ProjectedShadowReceivers[1] )
        {
          v287 = *((_DWORD *)v4 + 36);
          DWORD2(v312) = *((_DWORD *)v4 + 35);
          HIDWORD(v312) = v287;
          *(_QWORD *)&v312 = 0LL;
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v310, &v312);
        }
      }
      v125 = v310;
      *(struct _EVENT_DATA_DESCRIPTOR *)((char *)v4 + 172) = v310;
      *(__int64 *)((char *)v4 + 188) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      v314[0] = v125;
LABEL_87:
      v52 = v4[32];
      if ( v52
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v52 + 56LL))(v52, 179LL, v21) )
      {
        v288 = *(_QWORD *)v300;
        v289 = *((_QWORD *)v300 + 1);
        while ( v288 != v289 )
        {
          v314[0] = 0LL;
          CBaseClipStack::Top((unsigned int *)(v288 + 392), v314);
          v290 = CVisual::FindTreeData((CVisual *)v4, *(const struct CVisualTree **)(v288 + 432));
          CTreeData::SetSuperWetInkClip(v290, v314);
          v288 += 448LL;
        }
      }
      if ( dword_1803D0F60
        && tlgKeywordOn((__int64)&dword_1803D0F60, 0LL)
        && *v303 == (_BYTE)v291
        && (*((_DWORD *)v4 + 66) > v291 || *((_DWORD *)v4 + 67) > v291) )
      {
        DwmDbg::DbgString::DbgString((char **)&v310, &byte_18032C47F);
        v292 = CVisualTreePath::CVisualTreePath((CVisualTreePath *)&v315, v302);
        v293 = DwmDbg::DbgString::DbgString((char **)&v313, "PreCompute-BailWithBackdropsStillInSubtree");
        DwmDbg::Backdrops::LogTreeWalkEtwEvent(v293, v4, v302, v292);
        v294 = (_OWORD *)v315;
        v295 = (__int64)(*((_QWORD *)&v315 + 1) - v315) >> 4;
        if ( v295 )
          *((_QWORD *)&v315 + 1) += -16 * v295;
        *(_QWORD *)&v315 = 0LL;
        if ( v294 == (__int128 *)((char *)&v316 + 8) )
          v294 = 0LL;
        DefaultHeap::Free(v294);
      }
      return 0LL;
    }
  }
}
