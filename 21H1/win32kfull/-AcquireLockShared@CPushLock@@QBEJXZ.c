/*
 * XREFs of ?AcquireLockShared@CPushLock@@QBEJXZ @ 0x98B6C
 * Callers:
 *     ?FixupCursorForMonitor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x748E2 (-FixupCursorForMonitor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QBEII@Z @ 0x752E8 (-GetSizeForDpi@CCursorSizes@@QBEII@Z.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z @ 0x7B9CE (-UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QBEXPAUtagCURSORSIZEINFO@@@Z @ 0xA77E0 (-HandleRequestCursorSizesRequest@CCursorSizes@@QBEXPAUtagCURSORSIZEINFO@@@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QBEIXZ @ 0xB170E (-GetCurrentCursorSize@CCursorSizes@@QBEIXZ.c)
 *     ?GetSizeForIndex@CCursorSizes@@QBE_NIPAI@Z @ 0xD91CA (-GetSizeForIndex@CCursorSizes@@QBE_NIPAI@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QBEXXZ @ 0x9ACAE (-ReleaseLock@CPushLock@@QBEXXZ.c)
 */

int __thiscall CPushLock::AcquireLockShared(CPushLock *this)
{
  int v2; // edi

  v2 = 0;
  if ( !(**(unsigned __int8 (__thiscall ***)(CPushLock *))this)(this) )
    return -1073741816;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 4, 0);
  if ( !(**(unsigned __int8 (__thiscall ***)(CPushLock *))this)(this) )
  {
    CPushLock::ReleaseLock(this);
    return -1073741816;
  }
  return v2;
}
