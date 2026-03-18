/*
 * XREFs of ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x1801687E8
 * Callers:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x180036584 (--1CCompositionLight@@UEAA@XZ.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x1801B9940 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 *     ??1CSceneMesh@@MEAA@XZ @ 0x1801E7ED4 (--1CSceneMesh@@MEAA@XZ.c)
 *     ??1CSceneMaterial@@MEAA@XZ @ 0x1801E9934 (--1CSceneMaterial@@MEAA@XZ.c)
 *     ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x1801EB294 (--1CSceneSurfaceMaterialInput@@MEAA@XZ.c)
 *     ?DetachFromChannel@CSpatialRemarshaler@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801EBF10 (-DetachFromChannel@CSpatialRemarshaler@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ??1CSceneWorld@@MEAA@XZ @ 0x18020887C (--1CSceneWorld@@MEAA@XZ.c)
 * Callees:
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x180168620 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 */

void __fastcall CSceneResourceManager::UnregisterSceneListener(
        CSceneResourceManager *this,
        struct ISceneNotificationListener *a2)
{
  struct ISceneNotificationListener **i; // rbx
  __int64 v4; // rdx
  struct ISpectreRenderer *SpectreRenderer; // rcx
  __int64 v6; // r8

  for ( i = (struct ISceneNotificationListener **)*((_QWORD *)this + 5);
        i != *((struct ISceneNotificationListener ***)this + 6) && *i != a2;
        ++i )
  {
    ;
  }
  if ( i != *((struct ISceneNotificationListener ***)this + 6) )
  {
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
    if ( SpectreRenderer )
      (*(void (__fastcall **)(__int64, struct ISpectreRenderer *))(*(_QWORD *)v4 + 8LL))(v6, SpectreRenderer);
    memmove_0(i, i + 1, *((_QWORD *)this + 6) - (_QWORD)(i + 1));
    *((_QWORD *)this + 6) -= 8LL;
  }
}
