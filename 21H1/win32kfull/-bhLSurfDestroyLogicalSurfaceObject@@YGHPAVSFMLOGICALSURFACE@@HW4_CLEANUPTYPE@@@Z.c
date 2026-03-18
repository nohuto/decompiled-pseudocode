/*
 * XREFs of ?bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x24476
 * Callers:
 *     ?hlsurfCreateLogicalSurfaceObject@@YGPAUHLSURF__@@QAUHDEV__@@KPAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1F124 (-hlsurfCreateLogicalSurfaceObject@@YGPAUHLSURF__@@QAUHDEV__@@KPAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     _GreSfmCloseCompositorRef@8 @ 0x21E0A (_GreSfmCloseCompositorRef@8.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z @ 0x22222 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SGPAUHLSURF__@@PAUHDEV__@@PAV1@HHH@Z.c)
 *     _SFMLOGICALSURFACEREF_vDestructor@4 @ 0x2443A (_SFMLOGICALSURFACEREF_vDestructor@4.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z @ 0xA3F2E (-vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z.c)
 *     _GrepSfmRemoveSurfaces@0 @ 0xD3F28 (_GrepSfmRemoveSurfaces@0.c)
 *     _CleanupHLSURF@4 @ 0xD4BFA (_CleanupHLSURF@4.c)
 * Callees:
 *     ?DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x24A46 (-DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 */

int __fastcall bhLSurfDestroyLogicalSurfaceObject(int *a1, int a2, int a3)
{
  int *v3; // edi
  int v4; // esi
  int v5; // ebx

  v3 = a1;
  v4 = 0;
  v5 = *a1;
  if ( *a1 )
    v3 = (int *)HmgRemoveObject(v5, 0, 0, 1, 18, 0);
  if ( v3 )
  {
    SFMLOGICALSURFACE::DeInitialize(v3, v5, a3);
    FreeObject(v3, 18);
    if ( a2 )
      EtwLogicalSurfDestroyEvent(v5, v5 >> 31, 0);
    return 1;
  }
  return v4;
}
