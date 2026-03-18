/*
 * XREFs of ?ReleaseLock@CPushLock@@QBEXXZ @ 0x9ACAE
 * Callers:
 *     ?FixupCursorForMonitor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x748E2 (-FixupCursorForMonitor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QBEII@Z @ 0x752E8 (-GetSizeForDpi@CCursorSizes@@QBEII@Z.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z @ 0x7B9CE (-UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QAEJXZ @ 0x98B28 (-AcquireLockExclusive@CPushLock@@QAEJXZ.c)
 *     ?AcquireLockShared@CPushLock@@QBEJXZ @ 0x98B6C (-AcquireLockShared@CPushLock@@QBEJXZ.c)
 *     ?RefreshSizes@CCursorSizes@@QAEXXZ @ 0xA27AC (-RefreshSizes@CCursorSizes@@QAEXXZ.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QBEXPAUtagCURSORSIZEINFO@@@Z @ 0xA77E0 (-HandleRequestCursorSizesRequest@CCursorSizes@@QBEXPAUtagCURSORSIZEINFO@@@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QBEIXZ @ 0xB170E (-GetCurrentCursorSize@CCursorSizes@@QBEIXZ.c)
 *     ?GetSizeForIndex@CCursorSizes@@QBE_NIPAI@Z @ 0xD91CA (-GetSizeForIndex@CCursorSizes@@QBE_NIPAI@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall CPushLock::ReleaseLock(CPushLock *this)
{
  PKTHREAD CurrentThread; // eax
  char *v3; // ecx

  CurrentThread = KeGetCurrentThread();
  v3 = (char *)this + 4;
  if ( CurrentThread == *((PKTHREAD *)this + 2) )
  {
    *((_DWORD *)this + 2) = 0;
    ExReleasePushLockExclusiveEx(v3, 0);
  }
  else
  {
    ExReleasePushLockSharedEx(v3, 0);
  }
  KeLeaveCriticalRegion();
}
