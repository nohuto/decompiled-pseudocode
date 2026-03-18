/*
 * XREFs of ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x1C019FE00
 * Callers:
 *     NtUserClipCursor @ 0x1C00C63A0 (NtUserClipCursor.c)
 * Callees:
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C00126F4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0033A90 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C009D788 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CCursorClip::SetClip(struct tagRECT *this, struct tagRECT *a2)
{
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF

  CPushLock::AcquireLockExclusive((CPushLock *)&this[2]);
  v4 = *a2;
  CCursorClip::UpdateClipRect(this, &v4);
  CPushLock::ReleaseLock((CPushLock *)&this[2]);
}
