/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007B850
 * Callers:
 *     GdiUnmapGDIW32PIDLockedBitmaps @ 0x1C000B490 (GdiUnmapGDIW32PIDLockedBitmaps.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0079500 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C007D510 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreCreatePatternBrushInternal @ 0x1C00A90C0 (GreCreatePatternBrushInternal.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00A9D48 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 *     GreGetDeviceCaps @ 0x1C00AA530 (GreGetDeviceCaps.c)
 *     GreSuspendDirectDraw @ 0x1C00B2010 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C00B2198 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00B4E88 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00CF550 (hbmSelectBitmapInternal.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0248 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C014A6C0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C014C170 (NtGdiGetDeviceCapsAll.c)
 *     GreSetMagicColors @ 0x1C01534DC (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0016870 (EtwTraceGreLockAcquireSemaphoreShared.c)
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
