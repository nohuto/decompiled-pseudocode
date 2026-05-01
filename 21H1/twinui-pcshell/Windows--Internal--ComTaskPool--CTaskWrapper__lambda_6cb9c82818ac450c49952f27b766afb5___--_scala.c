/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6cb9c82818ac450c49952f27b766afb5___::_scalar_deleting_destructor_ @ 0x1800A2370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_6cb9c82818ac450c49952f27b766afb5_::__lambda_6cb9c82818ac450c49952f27b766afb5_ @ 0x1800A0DA4 (_lambda_6cb9c82818ac450c49952f27b766afb5_--__lambda_6cb9c82818ac450c49952f27b766afb5_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6cb9c82818ac450c49952f27b766afb5___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_6cb9c82818ac450c49952f27b766afb5_::__lambda_6cb9c82818ac450c49952f27b766afb5_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x180);
  return a1;
}
