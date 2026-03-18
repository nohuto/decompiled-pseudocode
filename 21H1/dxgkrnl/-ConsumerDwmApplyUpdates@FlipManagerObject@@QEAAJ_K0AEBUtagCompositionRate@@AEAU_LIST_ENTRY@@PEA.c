/*
 * XREFs of ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0068274
 * Callers:
 *     ?FlipManagerApplyDwmConsumerUpdates@@YAJ_KAEBUtagCompositionRate@@PEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C00683E4 (-FlipManagerApplyDwmConsumerUpdates@@YAJ_KAEBUtagCompositionRate@@PEAUFlipManagerTokenObject@@AE.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0004688 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0068F1C (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEBUtagCompositionRate@@AEAU_LIST_ENTRY@@PEAW4Fli.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerDwmApplyUpdates(
        FlipManagerObject *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        const struct tagCompositionRate *a4,
        struct _LIST_ENTRY *a5,
        enum FlipPresentProcessResult *a6)
{
  int v10; // ebx

  v10 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v10 >= 0 )
  {
    v10 = CFlipManager::ConsumerDwmApplyUpdates((FlipManagerObject *)((char *)this + 32), a2, a3, a4, a5, a6);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v10;
}
