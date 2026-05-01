/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_77ff76289f7bbfebb9a2250fa767bd8c___::_scalar_deleting_destructor_ @ 0x1800A23C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_77ff76289f7bbfebb9a2250fa767bd8c_::__lambda_77ff76289f7bbfebb9a2250fa767bd8c_ @ 0x1800A0DCC (_lambda_77ff76289f7bbfebb9a2250fa767bd8c_--__lambda_77ff76289f7bbfebb9a2250fa767bd8c_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_77ff76289f7bbfebb9a2250fa767bd8c___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_77ff76289f7bbfebb9a2250fa767bd8c_::__lambda_77ff76289f7bbfebb9a2250fa767bd8c_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
