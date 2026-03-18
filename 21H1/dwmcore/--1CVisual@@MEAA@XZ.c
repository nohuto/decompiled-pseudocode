/*
 * XREFs of ??1CVisual@@MEAA@XZ @ 0x18007DE6C
 * Callers:
 *     ??1CWindowNode@@MEAA@XZ @ 0x180093F04 (--1CWindowNode@@MEAA@XZ.c)
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x1800A9FC4 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ??_GCRedirectVisual@@UEAAPEAXI@Z @ 0x1800C3EF0 (--_GCRedirectVisual@@UEAAPEAXI@Z.c)
 *     ??1CLayerVisual@@UEAA@XZ @ 0x1800CA324 (--1CLayerVisual@@UEAA@XZ.c)
 *     ??_GCShapeVisual@@UEAAPEAXI@Z @ 0x1801722C0 (--_GCShapeVisual@@UEAAPEAXI@Z.c)
 *     ??_GCCursorVisual@@UEAAPEAXI@Z @ 0x1801C27B0 (--_GCCursorVisual@@UEAAPEAXI@Z.c)
 *     ??1?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAA@XZ @ 0x1801E227C (--1-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@MEAA@XZ.c)
 *     ??1?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ @ 0x1801EFE68 (--1-$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@MEAA@XZ.c)
 *     ??1?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ @ 0x1801F4B3C (--1-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@MEAA@XZ.c)
 * Callees:
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180003D58 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ @ 0x180005770 (-GetCachedWindowBackgroundTreatment@CVisual@@QEBAPEAVCCachedWindowBackgroundTreatment@@XZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x180005DE4 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x180005E44 (-clear@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x18000A64C (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18000AD40 (-DiscardCachesForCaster@CProjectedShadowScene@@QEAAXPEAVCProjectedShadowCaster@@@Z.c)
 *     ?ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z @ 0x180025718 (-ReleaseVisualTreeData@CVisual@@QEAAXPEAVCVisualTreeData@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180045CF8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x18007CD4C (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ @ 0x18007CDAC (-RemoveDirtyRegionVisualizationData@CVisual@@AEAAXXZ.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18007CDE0 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?RemoveAllLights@CVisual@@AEAAXXZ @ 0x18007D134 (-RemoveAllLights@CVisual@@AEAAXXZ.c)
 *     ?GetColorTransform@CVisual@@QEBAPEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BI@@@XZ @ 0x18007D214 (-GetColorTransform@CVisual@@QEBAPEAV-$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFO.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18007D234 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z @ 0x18007D294 (-ManageTransformParentChildList@CVisual@@AEAAXPEAUTransformParentData@@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18007D478 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18007D4D8 (-RemoveProjectedShadowCasterVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18007D5D0 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x18007D7B0 (-DeleteDepthSortedList@CVisual@@AEAAXXZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18007D7F8 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedDirtyRect@@XZ @ 0x18007DBD0 (-GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedDirtyRect@@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x18007DC30 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18007DC74 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4R.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x18007E69C (--1CTreeData@@UEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z @ 0x1800B3EF4 (--$ReleaseInterface@VCResource@@@@YAXAEAPEAVCResource@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800B3F24 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BCC1C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800C1478 (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     ??$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z @ 0x1800D1038 (--$SAFE_DELETE@UTransformParentData@@@@YAXAEAPEAUTransformParentData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ @ 0x1801E86E0 (-OnDestroyingReceivingVisual@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CVisual::~CVisual(CVisual *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct CResource *ColorTransform; // rax
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  struct TransformParentData *v8; // rdi
  struct CResource *EffectInternal; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rdi
  _DWORD *v11; // r10
  struct CTreeData *UnusedTreeData; // rax
  struct CMergedDirtyRect *AdditionalDirtyRects; // rax
  __int64 v14; // r8
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *v18; // rcx
  _DWORD *v19; // r10
  __int64 v20; // rcx
  unsigned int Slot; // eax
  __int64 v22; // r10
  struct CCachedWindowBackgroundTreatment *CachedWindowBackgroundTreatment; // rax
  unsigned int *v24; // r10
  unsigned int v25; // r11d
  unsigned int v26; // eax
  __int64 v27; // r10
  _DWORD *v28; // r10
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // r10
  struct TransformParentData *ProjectedShadowCasters; // rdi
  unsigned int *v33; // r10
  unsigned int v34; // r11d
  CProjectedShadowCaster **v35; // r12
  CProjectedShadowCaster **v36; // rsi
  CProjectedShadowCaster *v37; // r13
  _QWORD *v38; // rcx
  CProjectedShadowScene **v39; // r14
  __int64 v40; // r15
  unsigned __int64 v41; // rbp
  unsigned int v42; // eax
  __int64 v43; // r10
  CProjectedShadowReceiver ***ProjectedShadowReceivers; // rdi
  _DWORD *v45; // r10
  __int64 v46; // rbp
  CProjectedShadowReceiver **v47; // r14
  unsigned __int64 v48; // rsi
  unsigned int v49; // eax
  __int64 v50; // r10
  struct TransformParentData *WindowBackgroundTreatmentInternal; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &CVisual::`vftable';
  CVisual::ReleaseBspPolygonList(this);
  CVisual::RemoveDirtyRegionVisualizationData(this, v2, v3);
  CVisual::RemoveAllChildren((CComposition **)this);
  CVisual::RemoveAllLights(this);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 31));
  *((_QWORD *)this + 31) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 29));
  *((_QWORD *)this + 29) = 0LL;
  ColorTransform = (struct CResource *)CVisual::GetColorTransform((__int64)this);
  CResource::UnRegisterNotifierInternal(this, ColorTransform);
  TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
  WindowBackgroundTreatmentInternal = TransformParentDataInternal;
  v8 = TransformParentDataInternal;
  if ( TransformParentDataInternal )
  {
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)TransformParentDataInternal);
    *(_QWORD *)v8 = 0LL;
    SAFE_DELETE<TransformParentData>(&WindowBackgroundTreatmentInternal);
    v19 = (_DWORD *)*((_QWORD *)this + 28);
    if ( (*v19 & 0x1000000) != 0 )
    {
      v20 = *((_QWORD *)this + 28);
      *v19 &= ~0x1000000u;
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v20, 8LL);
      if ( Slot < *(_DWORD *)(v22 + 4) )
        *(_BYTE *)(Slot + v22 + 8) = 0;
    }
  }
  CVisual::ManageTransformParentChildList(this, WindowBackgroundTreatmentInternal, v6, v7);
  EffectInternal = CVisual::GetEffectInternal(this);
  CResource::UnRegisterNotifierInternal(this, EffectInternal);
  CComposition::RemoveProjectedShadowCasterVisual(*((CComposition **)this + 2), this);
  if ( (**((_DWORD **)this + 28) & 0x200000) != 0 )
  {
    WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(this);
    ReleaseInterface<CResource>(&WindowBackgroundTreatmentInternal);
    v28 = (_DWORD *)*((_QWORD *)this + 28);
    if ( (*v28 & 0x200000) != 0 )
    {
      v29 = *((_QWORD *)this + 28);
      *v28 &= ~0x200000u;
      v30 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v29, 11LL);
      if ( v30 < *(_DWORD *)(v31 + 4) )
        *(_BYTE *)(v30 + v31 + 8) = 0;
    }
  }
  if ( (**((_DWORD **)this + 28) & 0x100000) != 0 )
  {
    CachedWindowBackgroundTreatment = CVisual::GetCachedWindowBackgroundTreatment(this);
    if ( CachedWindowBackgroundTreatment )
    {
      (*(void (__fastcall **)(struct CCachedWindowBackgroundTreatment *))(*(_QWORD *)CachedWindowBackgroundTreatment
                                                                        + 8LL))(CachedWindowBackgroundTreatment);
      v24 = (unsigned int *)*((_QWORD *)this + 28);
      v25 = *v24;
    }
    if ( (v25 & 0x100000) != 0 )
    {
      *v24 = v25 & 0xFFEFFFFF;
      v26 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v24, 12LL);
      if ( v26 < *(_DWORD *)(v27 + 4) )
        *(_BYTE *)(v26 + v27 + 8) = 0;
    }
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 30));
  *((_QWORD *)this + 30) = 0LL;
  CVisual::ClearInteraction(this);
  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  if ( TreeDataListHead )
  {
    while ( TreeDataListHead->Flink != TreeDataListHead )
      CVisual::ReleaseVisualTreeData(
        (CVisual *)TreeDataListHead->Flink[-17].Blink,
        (struct CVisualTreeData *)&TreeDataListHead->Flink[-18]);
    operator delete(TreeDataListHead);
  }
  CVisual::DeleteDepthSortedList(this);
  v11 = (_DWORD *)*((_QWORD *)this + 28);
  if ( (*v11 & 0x40000) != 0 )
  {
    ProjectedShadowCasters = (struct TransformParentData *)CVisual::GetProjectedShadowCasters((__int64)this);
    WindowBackgroundTreatmentInternal = ProjectedShadowCasters;
    v35 = (CProjectedShadowCaster **)*((_QWORD *)ProjectedShadowCasters + 1);
    v36 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
    if ( *(CProjectedShadowCaster ***)ProjectedShadowCasters != v35 )
    {
      do
      {
        v37 = *v36;
        v38 = (_QWORD *)((char *)*v36 + 72);
        *((_QWORD *)*v36 + 7) = 0LL;
        std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::clear(v38);
        CProjectedShadowCaster::InvalidateMaskContent(v37);
        v39 = (CProjectedShadowScene **)*((_QWORD *)v37 + 11);
        v40 = 0LL;
        v41 = (unsigned __int64)(*((_QWORD *)v37 + 12) - (_QWORD)v39 + 7LL) >> 3;
        if ( (unsigned __int64)v39 > *((_QWORD *)v37 + 12) )
          v41 = 0LL;
        if ( v41 )
        {
          do
          {
            CProjectedShadowScene::DiscardCachesForCaster(*v39, v37);
            ++v40;
            ++v39;
          }
          while ( v40 != v41 );
        }
        ++v36;
      }
      while ( v36 != v35 );
      v33 = (unsigned int *)*((_QWORD *)this + 28);
      ProjectedShadowCasters = WindowBackgroundTreatmentInternal;
      v34 = *v33;
    }
    if ( (v34 & 0x40000) != 0 )
    {
      *v33 = v34 & 0xFFFBFFFF;
      v42 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v33, 14LL);
      if ( v42 < *(_DWORD *)(v43 + 4) )
        *(_BYTE *)(v42 + v43 + 8) = 0;
    }
    if ( *(_QWORD *)ProjectedShadowCasters )
    {
      std::_Deallocate<16,0>(
        *(_QWORD *)ProjectedShadowCasters,
        (*((_QWORD *)ProjectedShadowCasters + 2) - *(_QWORD *)ProjectedShadowCasters) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)ProjectedShadowCasters = 0LL;
      *((_QWORD *)ProjectedShadowCasters + 1) = 0LL;
      *((_QWORD *)ProjectedShadowCasters + 2) = 0LL;
    }
    operator delete(ProjectedShadowCasters);
    v11 = (_DWORD *)*((_QWORD *)this + 28);
  }
  if ( (*v11 & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = (CProjectedShadowReceiver ***)CVisual::GetProjectedShadowReceivers((__int64)this);
    v46 = 0LL;
    v47 = *ProjectedShadowReceivers;
    v48 = (unsigned __int64)((char *)ProjectedShadowReceivers[1] - (char *)*ProjectedShadowReceivers + 7) >> 3;
    if ( *ProjectedShadowReceivers > ProjectedShadowReceivers[1] )
      v48 = 0LL;
    if ( v48 )
    {
      do
      {
        CProjectedShadowReceiver::OnDestroyingReceivingVisual(*v47);
        ++v46;
        ++v47;
      }
      while ( v46 != v48 );
      v45 = (_DWORD *)*((_QWORD *)this + 28);
    }
    if ( (*v45 & 0x20000) != 0 )
    {
      *v45 &= ~0x20000u;
      v49 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v45, 15LL);
      if ( v49 < *(_DWORD *)(v50 + 4) )
        *(_BYTE *)(v49 + v50 + 8) = 0;
    }
    if ( *ProjectedShadowReceivers )
    {
      std::_Deallocate<16,0>(
        *ProjectedShadowReceivers,
        ((char *)ProjectedShadowReceivers[2] - (char *)*ProjectedShadowReceivers) & 0xFFFFFFFFFFFFFFF8uLL);
      *ProjectedShadowReceivers = 0LL;
      ProjectedShadowReceivers[1] = 0LL;
      ProjectedShadowReceivers[2] = 0LL;
    }
    operator delete(ProjectedShadowReceivers);
  }
  UnusedTreeData = CVisual::GetUnusedTreeData(this);
  if ( UnusedTreeData )
    (**(void (__fastcall ***)(struct CTreeData *, __int64))UnusedTreeData)(UnusedTreeData, 1LL);
  AdditionalDirtyRects = CVisual::GetAdditionalDirtyRects(this);
  if ( AdditionalDirtyRects )
    (**(void (__fastcall ***)(struct CMergedDirtyRect *, __int64))AdditionalDirtyRects)(AdditionalDirtyRects, 1LL);
  v15 = *((_BYTE *)this + 93);
  if ( (v15 & 8) != 0 )
  {
    --*(_DWORD *)(*((_QWORD *)this + 2) + 1072LL);
    v15 = *((_BYTE *)this + 93);
  }
  if ( (v15 & 0x40) != 0 )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 1076LL);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl,
    0,
    v14);
  *((_BYTE *)this + 336) = 0;
  *((_QWORD *)this + 40) = &CDesktopTreeData::`vftable';
  CTreeData::~CTreeData((CVisual *)((char *)this + 320));
  v16 = *((_QWORD *)this + 37);
  if ( v16 )
  {
    std::_Deallocate<16,0>(v16, (*((_QWORD *)this + 39) - v16) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 37) = 0LL;
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
  }
  v17 = *((_QWORD *)this + 34);
  if ( v17 )
  {
    std::_Deallocate<16,0>(v17, (*((_QWORD *)this + 36) - v17) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 34) = 0LL;
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
  }
  v18 = (void *)*((_QWORD *)this + 28);
  if ( v18 != &CSparseAlignedStorage<8,8>::k_defaultEmptyAllocatedStorage )
    operator delete(v18);
  CSparseStorage::~CSparseStorage((void **)this + 27);
  CPtrArrayBase::Clear((CVisual *)((char *)this + 72));
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
