/*
 * XREFs of ?ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z @ 0x1C006656C
 * Callers:
 *     NtFlipObjectConsumerAcquirePresent @ 0x1C0066F30 (NtFlipObjectConsumerAcquirePresent.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0004688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ConsumerAcquirePresent@CFlipManager@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z @ 0x1C0068D10 (-ConsumerAcquirePresent@CFlipManager@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerAcquirePresent(
        FlipManagerObject *this,
        unsigned int a2,
        unsigned int a3,
        void **a4,
        struct CFlipPropertySet **a5)
{
  int v9; // ebx

  v9 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v9 >= 0 )
  {
    v9 = CFlipManager::ConsumerAcquirePresent((FlipManagerObject *)((char *)this + 32), a2, a3, a4, a5);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v9;
}
