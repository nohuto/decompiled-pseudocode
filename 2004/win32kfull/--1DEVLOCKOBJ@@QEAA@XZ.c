/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0075A3C
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0016F7C (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C002A7E0 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C004FDAC (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     GreSetDeviceGammaRamp @ 0x1C00525A8 (GreSetDeviceGammaRamp.c)
 *     GreGetDeviceGammaRamp @ 0x1C00534B8 (GreGetDeviceGammaRamp.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C007AD40 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0086DC0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00FD250 (vAccNotifyDeleteSurfaceWrap.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0114D58 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     NtGdiFastPolyPolyline @ 0x1C0136400 (NtGdiFastPolyPolyline.c)
 *     NtGdiSetPixel @ 0x1C0148A80 (NtGdiSetPixel.c)
 *     GreExtSelectClipRgnInternal @ 0x1C015AE98 (GreExtSelectClipRgnInternal.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026E9CC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DEVLOCKOBJ::vDestructor(this);
  if ( *((_QWORD *)this + 4) )
    DLODCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
}
