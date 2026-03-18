/*
 * XREFs of ?EnableSpeedBump@CCursorClip@@QEAAX_N@Z @ 0x1C019FC80
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0033A90 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C009D788 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CCursorClip::EnableSpeedBump(CCursorClip *this, char a2)
{
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  *((_BYTE *)this + 93) = a2;
  CPushLock::ReleaseLock((CCursorClip *)((char *)this + 32));
}
