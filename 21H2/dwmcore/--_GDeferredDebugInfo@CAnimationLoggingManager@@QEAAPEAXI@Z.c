/*
 * XREFs of ??_GDeferredDebugInfo@CAnimationLoggingManager@@QEAAPEAXI@Z @ 0x180103D5C
 * Callers:
 *     _lambda_c032fb9048ad168ba2bd3d1dd4629f64_::_lambda_invoker_cdecl_ @ 0x1801FB200 (_lambda_c032fb9048ad168ba2bd3d1dd4629f64_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CAnimationLoggingManager::DeferredDebugInfo *__fastcall CAnimationLoggingManager::DeferredDebugInfo::`scalar deleting destructor'(
        CAnimationLoggingManager::DeferredDebugInfo *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this);
  operator delete(this);
  return this;
}
