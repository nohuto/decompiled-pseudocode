/*
 * XREFs of ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x180199EF0
 * Callers:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x1801FFC78 (--1CCompositionLight@@UEAA@XZ.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x18020CE38 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 *     ??1CSceneMesh@@MEAA@XZ @ 0x18023BB04 (--1CSceneMesh@@MEAA@XZ.c)
 *     ??1CSceneMaterial@@MEAA@XZ @ 0x18023CFE0 (--1CSceneMaterial@@MEAA@XZ.c)
 *     ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x18023E6E8 (--1CSceneSurfaceMaterialInput@@MEAA@XZ.c)
 *     ?DetachFromChannel@CSpatialRemarshaler@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18023EFE0 (-DetachFromChannel@CSpatialRemarshaler@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ??1CSceneWorld@@MEAA@XZ @ 0x180252D2C (--1CSceneWorld@@MEAA@XZ.c)
 * Callees:
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1800799E8 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSceneResourceManager::UnregisterSceneListener(
        CSceneResourceManager *this,
        struct ISceneNotificationListener *a2)
{
  struct ISceneNotificationListener **i; // rbx
  struct ISpectreRenderer *SpectreRenderer; // rdx
  __int64 v5; // r8

  for ( i = (struct ISceneNotificationListener **)*((_QWORD *)this + 5);
        i != *((struct ISceneNotificationListener ***)this + 6);
        ++i )
  {
    if ( *i == a2 )
    {
      SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
      if ( SpectreRenderer )
        (*(void (__fastcall **)(__int64, struct ISpectreRenderer *))(*(_QWORD *)v5 + 8LL))(v5, SpectreRenderer);
      memmove_0(i, i + 1, *((_QWORD *)this + 6) - (_QWORD)(i + 1));
      *((_QWORD *)this + 6) -= 8LL;
      return;
    }
  }
}
