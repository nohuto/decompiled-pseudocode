/*
 * XREFs of ?HandleRequestCursorSizesRequest@CCursorSizes@@QBEXPAUtagCURSORSIZEINFO@@@Z @ 0xA77E0
 * Callers:
 *     _NtUserGetRequiredCursorSizes@8 @ 0xA7772 (_NtUserGetRequiredCursorSizes@8.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QBEJXZ @ 0x98B6C (-AcquireLockShared@CPushLock@@QBEJXZ.c)
 *     ?ReleaseLock@CPushLock@@QBEXXZ @ 0x9ACAE (-ReleaseLock@CPushLock@@QBEXXZ.c)
 */

void __thiscall CCursorSizes::HandleRequestCursorSizesRequest(CCursorSizes *this, struct tagCURSORSIZEINFO *a2)
{
  CCursorSizes *v2; // ebx

  v2 = gpCursorSizes;
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  qmemcpy(a2, (char *)v2 + 24, 0x28u);
  CPushLock::ReleaseLock((CCursorSizes *)((char *)v2 + 64));
}
