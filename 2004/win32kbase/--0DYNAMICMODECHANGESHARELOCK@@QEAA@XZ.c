/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0082170
 * Callers:
 *     GreGetDeviceCaps @ 0x1C00138C0 (GreGetDeviceCaps.c)
 *     GreCreatePatternBrushInternal @ 0x1C00144D0 (GreCreatePatternBrushInternal.c)
 *     GreSuspendDirectDraw @ 0x1C004F950 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C004FAD8 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C007F4C0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00844C0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00A67B0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C00BD400 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00C0784 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00CFF50 (hbmSelectBitmapInternal.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0B70 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0144370 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C0145E20 (NtGdiGetDeviceCapsAll.c)
 *     GreSetMagicColors @ 0x1C014D18C (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0024CC0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this,
        __int64 a2,
        int a3)
{
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, a3);
  return this;
}
