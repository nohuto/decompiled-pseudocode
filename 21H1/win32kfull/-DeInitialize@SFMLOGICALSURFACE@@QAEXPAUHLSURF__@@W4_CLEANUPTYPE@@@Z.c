/*
 * XREFs of ?DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x24A46
 * Callers:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x24476 (-bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 * Callees:
 *     ?CleanupShape@SFMLOGICALSURFACE@@QAEXPAVSURFACE@@@Z @ 0x205FE (-CleanupShape@SFMLOGICALSURFACE@@QAEXPAVSURFACE@@@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z @ 0x22FA6 (-SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z.c)
 *     ?SpNotifyLSurface@@YGJPAUHDEV__@@PAUHLSURF__@@HKPAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x230F2 (-SpNotifyLSurface@@YGJPAUHDEV__@@PAUHLSURF__@@HKPAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?CleanupRegions@SFMLOGICALSURFACE@@QAEXXZ @ 0x24AAC (-CleanupRegions@SFMLOGICALSURFACE@@QAEXXZ.c)
 *     ?OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QAEPAVSURFACE@@PAUHLSURF__@@H@Z @ 0x24B50 (-OwnsSurfaceCleanup@SFMLOGICALSURFACE@@QAEPAVSURFACE@@PAUHLSURF__@@H@Z.c)
 */

void __thiscall SFMLOGICALSURFACE::DeInitialize(HDEV *this, int a2, int a3)
{
  HLSURF v4; // ecx
  HSURF *v5; // edi
  int v6; // ecx
  unsigned int v7; // [esp+0h] [ebp-10h]
  struct _CD_HLSURF_CREATIONCONTEXT *v8; // [esp+4h] [ebp-Ch]

  SfmTokenArray::DeInitialize((SfmTokenArray *)(this + 34));
  if ( a3 == 2 )
    this[4] = 0;
  *this = (HDEV)a2;
  v5 = (HSURF *)SFMLOGICALSURFACE::OwnsSurfaceCleanup((SFMLOGICALSURFACE *)this, v4, (int)v4);
  if ( v5 )
  {
    SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)this, this[4], 0);
    SFMLOGICALSURFACE::CleanupShape((SFMLOGICALSURFACE *)this, v5);
  }
  v6 = (int)this[4];
  if ( v6 )
  {
    SpNotifyLSurface(a2, v6, 0, 0, 0, v7, v8);
    this[4] = 0;
  }
  SFMLOGICALSURFACE::CleanupRegions((SFMLOGICALSURFACE *)this);
}
