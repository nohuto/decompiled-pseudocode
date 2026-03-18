/*
 * XREFs of ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0108094
 * Callers:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C0090504 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GreHintSpriteShape @ 0x1C0097240 (GreHintSpriteShape.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00C1478 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreSfmOpenCompositorRef @ 0x1C00C3B2C (GreSfmOpenCompositorRef.c)
 *     GreSfmCloseCompositorRef @ 0x1C00C3CD4 (GreSfmCloseCompositorRef.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00C57E0 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00C607C (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0108060 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     GrepSfmRemoveSurfaces @ 0x1C012A350 (GrepSfmRemoveSurfaces.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C026E760 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(SFMLOGICALSURFACEREF *this, HLSURF a2)
{
  HLSURF v3; // rcx

  if ( a2 )
  {
    v3 = a2;
    LOBYTE(a2) = 18;
    *(_QWORD *)this = HmgLock(v3, a2);
  }
}
