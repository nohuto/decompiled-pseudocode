/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c2570cc1d800aee28388d46c0371330___::_scalar_deleting_destructor_ @ 0x1800B0470
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_3c2570cc1d800aee28388d46c0371330_::__lambda_3c2570cc1d800aee28388d46c0371330_ @ 0x1800AEE2C (_lambda_3c2570cc1d800aee28388d46c0371330_--__lambda_3c2570cc1d800aee28388d46c0371330_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c2570cc1d800aee28388d46c0371330___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_3c2570cc1d800aee28388d46c0371330_::__lambda_3c2570cc1d800aee28388d46c0371330_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
