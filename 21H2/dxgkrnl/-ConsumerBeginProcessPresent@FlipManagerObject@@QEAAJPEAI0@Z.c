/*
 * XREFs of ?ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z @ 0x1C0079C98
 * Callers:
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x1C007A830 (NtFlipObjectConsumerBeginProcessPresent.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0007EB4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C007C744 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerBeginProcessPresent(
        FlipManagerObject *this,
        unsigned int *a2,
        unsigned int *a3)
{
  int v6; // ebx

  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v6 >= 0 )
  {
    v6 = CFlipManager::ConsumerBeginProcessPresent((FlipManagerObject *)((char *)this + 32), a2, a3);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v6;
}
