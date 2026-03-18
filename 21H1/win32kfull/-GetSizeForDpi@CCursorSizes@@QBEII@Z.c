/*
 * XREFs of ?GetSizeForDpi@CCursorSizes@@QBEII@Z @ 0x752E8
 * Callers:
 *     ?GetVirtualizedDpiCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x7528E (-GetVirtualizedDpiCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QBEJXZ @ 0x98B6C (-AcquireLockShared@CPushLock@@QBEJXZ.c)
 *     ?ReleaseLock@CPushLock@@QBEXXZ @ 0x9ACAE (-ReleaseLock@CPushLock@@QBEXXZ.c)
 *     _GetCursorSizesIndexFromDpi@4 @ 0xA296A (_GetCursorSizesIndexFromDpi@4.c)
 */

int __thiscall CCursorSizes::GetSizeForDpi(CCursorSizes *this, unsigned int a2)
{
  CCursorSizes *v2; // edi
  CPushLock *v3; // esi
  int v4; // edi

  v2 = gpCursorSizes;
  v3 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  v4 = *((_DWORD *)v2 + 2 * GetCursorSizesIndexFromDpi(a2) + 7);
  CPushLock::ReleaseLock(v3);
  return v4;
}
