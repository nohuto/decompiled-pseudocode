/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e127833a80797c5d08a14d2b9986789f___::_scalar_deleting_destructor_ @ 0x1800B0600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_e127833a80797c5d08a14d2b9986789f_::__lambda_e127833a80797c5d08a14d2b9986789f_ @ 0x1800AEEDC (_lambda_e127833a80797c5d08a14d2b9986789f_--__lambda_e127833a80797c5d08a14d2b9986789f_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e127833a80797c5d08a14d2b9986789f___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_e127833a80797c5d08a14d2b9986789f_::__lambda_e127833a80797c5d08a14d2b9986789f_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
