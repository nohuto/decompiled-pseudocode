/*
 * XREFs of ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C0061F18
 * Callers:
 *     ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C0014350 (-ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z.c)
 *     ?CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z @ 0x1C0061B20 (-CompleteFlipManagerToken@CTokenManager@@IEAAJPEAXPEA_N@Z.c)
 *     ?PostFlipManagerProcessSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentProcessResult@@@Z @ 0x1C0062008 (-PostFlipManagerProcessSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentPr.c)
 *     ?FlipManagerApplyDwmConsumerUpdates@@YAJ_KAEBUtagCompositionRate@@PEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C00683E4 (-FlipManagerApplyDwmConsumerUpdates@@YAJ_KAEBUtagCompositionRate@@PEAUFlipManagerTokenObject@@AE.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0004618 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0004704 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
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
