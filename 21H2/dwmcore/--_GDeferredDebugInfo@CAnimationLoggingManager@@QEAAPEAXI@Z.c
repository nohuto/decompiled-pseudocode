/*
 * XREFs of ??_GDeferredDebugInfo@CAnimationLoggingManager@@QEAAPEAXI@Z @ 0x1800EFF98
 * Callers:
 *     _lambda_3440248c42f2751644268d737f23a18f_::_lambda_invoker_cdecl_ @ 0x1801AF4A0 (_lambda_3440248c42f2751644268d737f23a18f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

CAnimationLoggingManager::DeferredDebugInfo *__fastcall CAnimationLoggingManager::DeferredDebugInfo::`scalar deleting destructor'(
        CAnimationLoggingManager::DeferredDebugInfo *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  operator delete(this);
  return this;
}
