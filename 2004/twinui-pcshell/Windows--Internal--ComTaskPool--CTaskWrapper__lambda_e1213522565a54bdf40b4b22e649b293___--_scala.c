/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e1213522565a54bdf40b4b22e649b293___::_scalar_deleting_destructor_ @ 0x1800B05B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_e1213522565a54bdf40b4b22e649b293_::__lambda_e1213522565a54bdf40b4b22e649b293_ @ 0x1800AEEB4 (_lambda_e1213522565a54bdf40b4b22e649b293_--__lambda_e1213522565a54bdf40b4b22e649b293_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e1213522565a54bdf40b4b22e649b293___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_e1213522565a54bdf40b4b22e649b293_::__lambda_e1213522565a54bdf40b4b22e649b293_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
