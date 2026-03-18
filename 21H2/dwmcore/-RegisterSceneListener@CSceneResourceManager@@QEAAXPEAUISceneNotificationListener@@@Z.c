/*
 * XREFs of ?RegisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x180199DFC
 * Callers:
 *     ?UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z @ 0x180200D5C (-UpdateSceneLightInfo@CCompositionLight@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETCREATIONPARAMS@@@Z @ 0x18020D314 (-ProcessSetCreationParams@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMP.c)
 *     ??0CSceneMesh@@QEAA@PEAVCComposition@@@Z @ 0x18023B9FC (--0CSceneMesh@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSceneMaterial@@QEAA@PEAVCComposition@@@Z @ 0x18023CF50 (--0CSceneMaterial@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CSceneSurfaceMaterialInput@@QEAA@PEAVCComposition@@@Z @ 0x18023E67C (--0CSceneSurfaceMaterialInput@@QEAA@PEAVCComposition@@@Z.c)
 *     ?OnChannelAttached@CSpatialRemarshaler@@MEAAJXZ @ 0x18023F030 (-OnChannelAttached@CSpatialRemarshaler@@MEAAJXZ.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x180252AE8 (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 * Callees:
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1800799E8 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBQEAUISceneNotificationListener@@@?$vector@PEAUISceneNotificationListener@@V?$allocator@PEAUISceneNotificationListener@@@std@@@std@@QEAAPEAPEAUISceneNotificationListener@@QEAPEAU2@AEBQEAU2@@Z @ 0x180199100 (--$_Emplace_reallocate@AEBQEAUISceneNotificationListener@@@-$vector@PEAUISceneNotificationListen.c)
 */

void __fastcall CSceneResourceManager::RegisterSceneListener(
        CSceneResourceManager *this,
        struct ISceneNotificationListener *a2)
{
  const void **v4; // rcx
  _BYTE *v5; // rdx
  struct ISpectreRenderer *SpectreRenderer; // rdx
  void (__fastcall ***v7)(_QWORD, struct ISpectreRenderer *); // r8
  struct ISceneNotificationListener *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  v4 = (const void **)((char *)this + 40);
  v5 = (_BYTE *)*((_QWORD *)this + 6);
  if ( v5 == *((_BYTE **)this + 7) )
  {
    std::vector<ISceneNotificationListener *>::_Emplace_reallocate<ISceneNotificationListener * const &>(v4, v5, &v8);
  }
  else
  {
    *(_QWORD *)v5 = a2;
    v4[1] = (char *)v4[1] + 8;
  }
  SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
  if ( SpectreRenderer )
    (**v7)(v7, SpectreRenderer);
}
