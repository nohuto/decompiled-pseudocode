/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a___::_scalar_deleting_destructor_ @ 0x180073E70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_87f555b56693a8b4c492a05e321e535a_::__lambda_87f555b56693a8b4c492a05e321e535a_ @ 0x180073530 (_lambda_87f555b56693a8b4c492a05e321e535a_--__lambda_87f555b56693a8b4c492a05e321e535a_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_87f555b56693a8b4c492a05e321e535a_::__lambda_87f555b56693a8b4c492a05e321e535a_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
