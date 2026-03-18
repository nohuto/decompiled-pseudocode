/*
 * XREFs of ?PresentCancel@FlipManagerObject@@QEAAJAEA_K@Z @ 0x1C0066948
 * Callers:
 *     NtFlipObjectPresentCancel @ 0x1C0067950 (NtFlipObjectPresentCancel.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0004688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?PresentCancel@CFlipManager@@QEAAJAEA_K@Z @ 0x1C0069A10 (-PresentCancel@CFlipManager@@QEAAJAEA_K@Z.c)
 */

__int64 __fastcall FlipManagerObject::PresentCancel(FlipManagerObject *this, unsigned __int64 *a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    v4 = CFlipManager::PresentCancel((FlipManagerObject *)((char *)this + 32), a2);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v4;
}
