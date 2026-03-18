/*
 * XREFs of ?GetCurrentCursorSize@CCursorSizes@@QBEIXZ @ 0xB170E
 * Callers:
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QBEJXZ @ 0x98B6C (-AcquireLockShared@CPushLock@@QBEJXZ.c)
 *     ?ReleaseLock@CPushLock@@QBEXXZ @ 0x9ACAE (-ReleaseLock@CPushLock@@QBEXXZ.c)
 */

int __thiscall CCursorSizes::GetCurrentCursorSize(CCursorSizes *this)
{
  CCursorSizes *v1; // edi
  CPushLock *v2; // esi
  int v3; // edi

  v1 = gpCursorSizes;
  v2 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  v3 = *(_DWORD *)v1;
  CPushLock::ReleaseLock(v2);
  return v3;
}
