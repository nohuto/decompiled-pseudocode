/*
 * XREFs of ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0062F98
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C00130B0 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z @ 0x1C0062BA0 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z.c)
 *     ?PostFlipManagerProcessSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentProcessResult@@@Z @ 0x1C0063088 (-PostFlipManagerProcessSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentPr.c)
 *     ?FlipManagerApplyDwmConsumerUpdates@@YAJ_KAEBUtagCompositionRate@@PEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0069574 (-FlipManagerApplyDwmConsumerUpdates@@YAJ_KAEBUtagCompositionRate@@PEAUFlipManagerTokenObject@@AE.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000EDCC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0010C50 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall FlipManagerTokenObject::GetPresentId(FlipManagerTokenObject *this, unsigned __int64 *a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockShared((FlipManagerTokenObject *)((char *)this + 72));
  if ( v4 >= 0 )
  {
    *a2 = *((_QWORD *)this + 16);
    CPushLock::ReleaseLock((FlipManagerTokenObject *)((char *)this + 72));
  }
  return (unsigned int)v4;
}
