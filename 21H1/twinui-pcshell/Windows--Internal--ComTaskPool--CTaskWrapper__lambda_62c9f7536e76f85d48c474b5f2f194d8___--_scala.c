/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_62c9f7536e76f85d48c474b5f2f194d8___::_scalar_deleting_destructor_ @ 0x1800A22D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_62c9f7536e76f85d48c474b5f2f194d8_::__lambda_62c9f7536e76f85d48c474b5f2f194d8_ @ 0x1800A0D6C (_lambda_62c9f7536e76f85d48c474b5f2f194d8_--__lambda_62c9f7536e76f85d48c474b5f2f194d8_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_62c9f7536e76f85d48c474b5f2f194d8___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_62c9f7536e76f85d48c474b5f2f194d8_::__lambda_62c9f7536e76f85d48c474b5f2f194d8_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
