/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2a6490a8cf13452a213c8a59fbbd282a___::_scalar_deleting_destructor_ @ 0x1800A2230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_2a6490a8cf13452a213c8a59fbbd282a_::__lambda_2a6490a8cf13452a213c8a59fbbd282a_ @ 0x1800A0D2C (_lambda_2a6490a8cf13452a213c8a59fbbd282a_--__lambda_2a6490a8cf13452a213c8a59fbbd282a_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2a6490a8cf13452a213c8a59fbbd282a___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_2a6490a8cf13452a213c8a59fbbd282a_::__lambda_2a6490a8cf13452a213c8a59fbbd282a_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
