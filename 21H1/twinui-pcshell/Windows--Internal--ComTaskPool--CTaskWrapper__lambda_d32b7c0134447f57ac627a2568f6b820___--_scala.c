/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820___::_scalar_deleting_destructor_ @ 0x1800A9B70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_d32b7c0134447f57ac627a2568f6b820_::__lambda_d32b7c0134447f57ac627a2568f6b820_ @ 0x1800A9A34 (_lambda_d32b7c0134447f57ac627a2568f6b820_--__lambda_d32b7c0134447f57ac627a2568f6b820_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d32b7c0134447f57ac627a2568f6b820___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_d32b7c0134447f57ac627a2568f6b820_::__lambda_d32b7c0134447f57ac627a2568f6b820_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
