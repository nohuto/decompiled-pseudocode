/*
 * XREFs of ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C0067680
 * Callers:
 *     NtFlipObjectAddPoolBuffer @ 0x1C0067F30 (NtFlipObjectAddPoolBuffer.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0010BD4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C0069D84 (-AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::AddPoolBuffer(
        FlipManagerObject *this,
        unsigned __int64 a2,
        void *a3,
        const struct _LUID *a4,
        struct CFlipPropertySet *a5)
{
  int v9; // ebx

  v9 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v9 >= 0 )
  {
    v9 = CFlipManager::AddPoolBuffer((FlipManagerObject *)((char *)this + 32), a2, a3, a4, a5);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v9;
}
