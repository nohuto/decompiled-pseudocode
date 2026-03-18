/*
 * XREFs of ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C019DA60
 * Callers:
 *     NtUserClipCursor @ 0x1C00C5610 (NtUserClipCursor.c)
 * Callees:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C000AF64 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00614C8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00997E0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CCursorClip::SetClip(struct tagRECT *this, struct tagRECT *a2)
{
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF

  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
  v4 = *a2;
  CCursorClip::UpdateClipRect(this, &v4);
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
}
