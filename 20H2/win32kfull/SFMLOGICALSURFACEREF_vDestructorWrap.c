/*
 * XREFs of SFMLOGICALSURFACEREF_vDestructorWrap @ 0x1C00971F0
 * Callers:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0090504 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GreHintSpriteShape @ 0x1C0097240 (GreHintSpriteShape.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00C1478 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1C00C3B2C (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C00C3CD4 (GreSfmCloseCompositorRef.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C57E0 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00C607C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0107E74 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     GrepSfmRemoveSurfaces @ 0x1C012A350 (GrepSfmRemoveSurfaces.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C026E760 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C00C3C58 (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C00C49E4 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 */

SFMLOGICALSURFACE *__fastcall SFMLOGICALSURFACEREF_vDestructorWrap(__int64 a1)
{
  SFMLOGICALSURFACE *result; // rax
  SFMLOGICALSURFACE *v3; // rcx
  SFMLOGICALSURFACE *v4; // r9
  int v5; // eax

  result = *(SFMLOGICALSURFACE **)a1;
  if ( *(_QWORD *)a1 )
  {
    _InterlockedDecrement((volatile signed __int32 *)result + 3);
    if ( *(_DWORD *)(a1 + 8) == 1 )
    {
      v3 = *(SFMLOGICALSURFACE **)a1;
      v4 = v3;
      v5 = *((_DWORD *)v3 + 61);
      if ( (v5 & 0x80u) != 0 && (v5 & 8) != 0 && (v5 & 0x10) != 0 )
      {
        *((_DWORD *)v3 + 61) = v5 & 0xFFFFFFEF;
        SFMLOGICALSURFACE::StopSfmStateTracking(*(SFMLOGICALSURFACE **)a1, 0LL, gpSfmState);
        v4 = *(SFMLOGICALSURFACE **)a1;
      }
      return (SFMLOGICALSURFACE *)bhLSurfDestroyLogicalSurfaceObject(v4, 1LL);
    }
  }
  return result;
}
