/*
 * XREFs of ?AcquireLockExclusive@CPushLock@@QAEJXZ @ 0x98B28
 * Callers:
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z @ 0x7B9CE (-UpdateGlobalCursorSize@CCursorSizes@@QAEXPBUtagPOINT@@_N@Z.c)
 *     ?RefreshSizes@CCursorSizes@@QAEXXZ @ 0xA27AC (-RefreshSizes@CCursorSizes@@QAEXXZ.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QBEXXZ @ 0x9ACAE (-ReleaseLock@CPushLock@@QBEXXZ.c)
 */

int __thiscall CPushLock::AcquireLockExclusive(CPushLock *this)
{
  int v2; // edi

  v2 = 0;
  if ( !(**(unsigned __int8 (__thiscall ***)(CPushLock *))this)(this) )
    return -1073741816;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 4, 0);
  *((_DWORD *)this + 2) = KeGetCurrentThread();
  if ( !(**(unsigned __int8 (__thiscall ***)(CPushLock *))this)(this) )
  {
    CPushLock::ReleaseLock(this);
    return -1073741816;
  }
  return v2;
}
