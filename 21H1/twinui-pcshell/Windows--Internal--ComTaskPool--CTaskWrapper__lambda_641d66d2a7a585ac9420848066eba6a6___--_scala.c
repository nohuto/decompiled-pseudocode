/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6___::_scalar_deleting_destructor_ @ 0x180092C70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_641d66d2a7a585ac9420848066eba6a6_::__lambda_641d66d2a7a585ac9420848066eba6a6_ @ 0x180092788 (_lambda_641d66d2a7a585ac9420848066eba6a6_--__lambda_641d66d2a7a585ac9420848066eba6a6_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_641d66d2a7a585ac9420848066eba6a6___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_641d66d2a7a585ac9420848066eba6a6_::__lambda_641d66d2a7a585ac9420848066eba6a6_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
