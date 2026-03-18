/*
 * XREFs of _SFMLOGICALSURFACEREF_vDestructor@4 @ 0x2443A
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z @ 0x1EF6E (-hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z.c)
 *     _GreSfmCloseCompositorRef@8 @ 0x21E0A (_GreSfmCloseCompositorRef@8.c)
 *     ??1SFMLOGICALSURFACEREF@@QAE@XZ @ 0x21F36 (--1SFMLOGICALSURFACEREF@@QAE@XZ.c)
 *     _GreSfmOpenCompositorRef@8 @ 0x2212A (_GreSfmOpenCompositorRef@8.c)
 *     _SFMLOGICALSURFACEREF_vDestructorWrap@4 @ 0x234F6 (_SFMLOGICALSURFACEREF_vDestructorWrap@4.c)
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     _GreSfmRegisterLogicalSurfaceForSignaling@8 @ 0xAB694 (_GreSfmRegisterLogicalSurfaceForSignaling@8.c)
 *     _GreAddLogicalSurfaceToDirtyQueue@16 @ 0xC6A7E (_GreAddLogicalSurfaceToDirtyQueue@16.c)
 *     ?bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@@Z @ 0xD05AE (-bSpDwmUpdateCursor@@YGHPAUHSPRITE__@@PAU_SURFOBJ@@1PAU_XLATEOBJ@@PAU_RECTL@@PAU_BLENDFUNCTION@@.c)
 *     _GrepSfmRemoveSurfaces@0 @ 0xD3F28 (_GrepSfmRemoveSurfaces@0.c)
 *     _CheckAndProcessSurfaceComplete@4 @ 0x1CDD54 (_CheckAndProcessSurfaceComplete@4.c)
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QAEJPAUHDEV__@@PAUSfmState@@@Z @ 0x21CFA (-StopSfmStateTracking@SFMLOGICALSURFACE@@QAEJPAUHDEV__@@PAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x24476 (-bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 */

int __thiscall SFMLOGICALSURFACEREF_vDestructor(int *this)
{
  int result; // eax
  SFMLOGICALSURFACE *v3; // edi
  int v4; // eax

  result = *this;
  if ( *this )
  {
    _InterlockedDecrement((volatile signed __int32 *)(result + 8));
    if ( this[1] == 1 )
    {
      v3 = (SFMLOGICALSURFACE *)*this;
      v4 = *(_DWORD *)(*this + 156);
      if ( (v4 & 0x80u) != 0 && (v4 & 8) != 0 && (v4 & 0x10) != 0 )
      {
        *(_DWORD *)(*this + 156) = v4 & 0xFFFFFFEF;
        SFMLOGICALSURFACE::StopSfmStateTracking((SFMLOGICALSURFACE *)*this, 0, gpSfmState);
        v3 = (SFMLOGICALSURFACE *)*this;
      }
      return bhLSurfDestroyLogicalSurfaceObject(v3, 1, 0);
    }
  }
  return result;
}
