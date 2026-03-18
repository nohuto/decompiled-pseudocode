/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C010347C
 * Callers:
 *     ?RefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0027F24 (-RefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C002B30C (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z @ 0x1C0079FA0 (-GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00C0A48 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00CCFE4 (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00CD0D0 (zzzUpdateCursorImage.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C011130C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C0113B54 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 2) )
  {
    *((_QWORD *)this + 2) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 8, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx((char *)this + 8, 0LL);
  }
  KeLeaveCriticalRegion();
}
