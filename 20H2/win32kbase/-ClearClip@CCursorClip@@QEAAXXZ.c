/*
 * XREFs of ?ClearClip@CCursorClip@@QEAAXXZ @ 0x1C002F100
 * Callers:
 *     NtUserLockCursor @ 0x1C00A73F0 (NtUserLockCursor.c)
 *     NtUserClipCursor @ 0x1C00C5610 (NtUserClipCursor.c)
 * Callees:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C000AF64 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00614C8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00997E0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CCursorClip::ClearClip(CCursorClip *this)
{
  __int64 v2; // rcx
  struct tagRECT v3; // [rsp+20h] [rbp-18h] BYREF

  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  v2 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( !v2 )
    v2 = *((_QWORD *)this + 3) - *((_QWORD *)this + 1);
  if ( v2 )
  {
    v3 = *(struct tagRECT *)this;
    CCursorClip::UpdateClipRect((struct tagRECT *)this, &v3);
  }
  CPushLock::ReleaseLock((CCursorClip *)((char *)this + 32));
}
