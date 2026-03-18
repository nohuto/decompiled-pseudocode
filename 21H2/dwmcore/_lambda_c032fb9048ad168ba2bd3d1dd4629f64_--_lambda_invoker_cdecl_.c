/*
 * XREFs of _lambda_c032fb9048ad168ba2bd3d1dd4629f64_::_lambda_invoker_cdecl_ @ 0x1801FB200
 * Callers:
 *     <none>
 * Callees:
 *     ??_GDeferredDebugInfo@CAnimationLoggingManager@@QEAAPEAXI@Z @ 0x180103D5C (--_GDeferredDebugInfo@CAnimationLoggingManager@@QEAAPEAXI@Z.c)
 *     ?DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z @ 0x1801FC1EC (-DeferredSendDebugStart@CAnimationLoggingManager@@AEAAXI_KI@Z.c)
 */

__int64 __fastcall lambda_c032fb9048ad168ba2bd3d1dd4629f64_::_lambda_invoker_cdecl_(
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
