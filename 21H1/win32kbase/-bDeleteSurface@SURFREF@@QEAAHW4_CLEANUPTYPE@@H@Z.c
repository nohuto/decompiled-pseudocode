/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CE7FC
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C006C610 (NtGdiDeleteObjectApp.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C009ABE0 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     bDeleteSurface @ 0x1C009AEA0 (bDeleteSurface.c)
 *     bMigrateSurfaceForConversion @ 0x1C009B480 (bMigrateSurfaceForConversion.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00A9D48 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0170 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0248 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C01485D0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C014C4C0 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2860 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall SURFREF::bDeleteSurface(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*a1, a2, 0);
  if ( (_DWORD)result )
    *a1 = 0LL;
  return result;
}
