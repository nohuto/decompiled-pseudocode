/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f903727e28235e985aa4aa4647c4ffc___::_scalar_deleting_destructor_ @ 0x18023C580
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_6f903727e28235e985aa4aa4647c4ffc_::__lambda_6f903727e28235e985aa4aa4647c4ffc_ @ 0x18023BFE4 (_lambda_6f903727e28235e985aa4aa4647c4ffc_--__lambda_6f903727e28235e985aa4aa4647c4ffc_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f903727e28235e985aa4aa4647c4ffc___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_6f903727e28235e985aa4aa4647c4ffc_::__lambda_6f903727e28235e985aa4aa4647c4ffc_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x190);
  return a1;
}
