/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CEC10
 * Callers:
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C001A520 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     bDeleteSurface @ 0x1C001A650 (bDeleteSurface.c)
 *     bMigrateSurfaceForConversion @ 0x1C001AC00 (bMigrateSurfaceForConversion.c)
 *     NtGdiDeleteObjectApp @ 0x1C003A900 (NtGdiDeleteObjectApp.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0092554 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00CFCA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0810 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013FDB0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0143CD0 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2190 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 */

__int64 __fastcall SURFREF::bDeleteSurface(SURFACE **a1, int a2)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*a1, a2, 0);
  if ( (_DWORD)result )
    *a1 = 0LL;
  return result;
}
