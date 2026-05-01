/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3023bff037d4845f3b692fb8992a92bb___::_scalar_deleting_destructor_ @ 0x1801B9030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_3023bff037d4845f3b692fb8992a92bb_::__lambda_3023bff037d4845f3b692fb8992a92bb_ @ 0x1801B89A0 (_lambda_3023bff037d4845f3b692fb8992a92bb_--__lambda_3023bff037d4845f3b692fb8992a92bb_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3023bff037d4845f3b692fb8992a92bb___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_3023bff037d4845f3b692fb8992a92bb_::__lambda_3023bff037d4845f3b692fb8992a92bb_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
