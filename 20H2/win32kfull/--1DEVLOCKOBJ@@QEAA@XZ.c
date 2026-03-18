/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A111C
 * Callers:
 *     GreSetDeviceGammaRamp @ 0x1C0029BA8 (GreSetDeviceGammaRamp.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00857AC (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C008BF8C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C009D960 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C00A6200 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C00C4DFC (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00F8310 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreGetDeviceGammaRamp @ 0x1C0115164 (GreGetDeviceGammaRamp.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0115DB8 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     NtGdiFastPolyPolyline @ 0x1C0138350 (NtGdiFastPolyPolyline.c)
 *     NtGdiSetPixel @ 0x1C014B070 (NtGdiSetPixel.c)
 *     NtGdiOffsetClipRgn @ 0x1C014BFA0 (NtGdiOffsetClipRgn.c)
 *     GreExtSelectClipRgnInternal @ 0x1C015E358 (GreExtSelectClipRgnInternal.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026D3AC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DEVLOCKOBJ::vDestructor(this);
  if ( *((_QWORD *)this + 4) )
    DLODCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
}
