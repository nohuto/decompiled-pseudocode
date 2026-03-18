/*
 * XREFs of ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x18016864C
 * Callers:
 *     ??0CScenePbrMaterial@@QEAA@PEAVCComposition@@@Z @ 0x18016AD58 (--0CScenePbrMaterial@@QEAA@PEAVCComposition@@@Z.c)
 *     ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x1801B9DF0 (-ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 *     ??0CSceneMesh@@QEAA@PEAVCComposition@@@Z @ 0x1801E7DD4 (--0CSceneMesh@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSceneSurfaceMaterialInput@@QEAA@PEAVCComposition@@@Z @ 0x1801EB228 (--0CSceneSurfaceMaterialInput@@QEAA@PEAVCComposition@@@Z.c)
 *     ?OnChannelAttached@CSpatialRemarshaler@@MEAAJXZ @ 0x1801EBF60 (-OnChannelAttached@CSpatialRemarshaler@@MEAAJXZ.c)
 *     ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x1801F3EA0 (-UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x180208680 (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@PEBVCVisual@@@?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@QEAAPEAPEBVCVisual@@QEAPEBV2@$$QEAPEBV2@@Z @ 0x180164308 (--$_Emplace_reallocate@PEBVCVisual@@@-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@std@@@std@.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x180168620 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 */

void __fastcall CSceneResourceManager::RegisterSceneListener(
        CSceneResourceManager *this,
        struct ISceneNotificationListener *a2)
{
  _QWORD *v4; // rdx
  __int64 *v5; // rcx
  struct ISpectreRenderer *SpectreRenderer; // rdx
  void (__fastcall ***v7)(_QWORD, struct ISpectreRenderer *); // r8
  struct ISceneNotificationListener *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v4 = (_QWORD *)*((_QWORD *)this + 6);
  v5 = (__int64 *)((char *)this + 40);
  if ( (_QWORD *)v5[2] == v4 )
  {
    std::vector<CVisual const *>::_Emplace_reallocate<CVisual const *>(v5, v4, &v8);
  }
  else
  {
    *v4 = a2;
    v5[1] += 8LL;
  }
  SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
  if ( SpectreRenderer )
    (**v7)(v7, SpectreRenderer);
}
