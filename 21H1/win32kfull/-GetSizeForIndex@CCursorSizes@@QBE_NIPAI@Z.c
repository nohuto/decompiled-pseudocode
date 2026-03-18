/*
 * XREFs of ?GetSizeForIndex@CCursorSizes@@QBE_NIPAI@Z @ 0xD91CA
 * Callers:
 *     ?xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z @ 0xD9146 (-xxxEnsureDpiCursors@@YGXPAUtagCURSOR@@PAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QBEJXZ @ 0x98B6C (-AcquireLockShared@CPushLock@@QBEJXZ.c)
 *     ?ReleaseLock@CPushLock@@QBEXXZ @ 0x9ACAE (-ReleaseLock@CPushLock@@QBEXXZ.c)
 */

bool __thiscall CCursorSizes::GetSizeForIndex(CCursorSizes *this, unsigned int a2, unsigned int *a3)
{
  CCursorSizes *v3; // edi
  unsigned int v4; // ecx
  bool v5; // bl

  v3 = gpCursorSizes;
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  v4 = 0;
  if ( *((_DWORD *)v3 + 2 * a2 + 6) )
    v4 = *((_DWORD *)v3 + 2 * a2 + 7);
  v5 = v4 != 0;
  *a3 = v4;
  CPushLock::ReleaseLock((CCursorSizes *)((char *)v3 + 64));
  return v5;
}
