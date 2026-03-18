/*
 * XREFs of ?EnableSpeedBump@CCursorClip@@QEAAX_N@Z @ 0x1C01A59E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00B5BD0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00B8618 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CCursorClip::EnableSpeedBump(CCursorClip *this, char a2)
{
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  *((_BYTE *)this + 93) = a2;
  CPushLock::ReleaseLock((CCursorClip *)((char *)this + 32));
}
