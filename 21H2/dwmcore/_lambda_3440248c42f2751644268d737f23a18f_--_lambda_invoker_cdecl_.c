/*
 * XREFs of _lambda_3440248c42f2751644268d737f23a18f_::_lambda_invoker_cdecl_ @ 0x1801AF4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GDeferredDebugInfo@CAnimationLoggingManager@@QEAAPEAXI@Z @ 0x1800EFF98 (--_GDeferredDebugInfo@CAnimationLoggingManager@@QEAAPEAXI@Z.c)
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x1801B0344 (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 */

__int64 __fastcall lambda_3440248c42f2751644268d737f23a18f_::_lambda_invoker_cdecl_(
        CAnimationLoggingManager::DeferredDebugInfo *this)
{
  CAnimationLoggingManager::DeferredSendDebugStart(
    *(CAnimationLoggingManager **)this,
    *((_DWORD *)this + 2),
    *((_QWORD *)this + 2),
    *((_DWORD *)this + 6));
  CAnimationLoggingManager::DeferredDebugInfo::`scalar deleting destructor'(this);
  return 0LL;
}
