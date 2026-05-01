/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4cbe742715b394437ec6208d218cee82___::_scalar_deleting_destructor_ @ 0x1800B20D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_4cbe742715b394437ec6208d218cee82_::__lambda_4cbe742715b394437ec6208d218cee82_ @ 0x1800B0AA8 (_lambda_4cbe742715b394437ec6208d218cee82_--__lambda_4cbe742715b394437ec6208d218cee82_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4cbe742715b394437ec6208d218cee82___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_4cbe742715b394437ec6208d218cee82_::__lambda_4cbe742715b394437ec6208d218cee82_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
