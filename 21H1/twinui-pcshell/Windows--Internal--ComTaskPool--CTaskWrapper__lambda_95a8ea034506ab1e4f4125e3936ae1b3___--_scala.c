/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_95a8ea034506ab1e4f4125e3936ae1b3___::_scalar_deleting_destructor_ @ 0x1800A2410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_95a8ea034506ab1e4f4125e3936ae1b3_::__lambda_95a8ea034506ab1e4f4125e3936ae1b3_ @ 0x1800A0E00 (_lambda_95a8ea034506ab1e4f4125e3936ae1b3_--__lambda_95a8ea034506ab1e4f4125e3936ae1b3_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_95a8ea034506ab1e4f4125e3936ae1b3___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_95a8ea034506ab1e4f4125e3936ae1b3_::__lambda_95a8ea034506ab1e4f4125e3936ae1b3_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
