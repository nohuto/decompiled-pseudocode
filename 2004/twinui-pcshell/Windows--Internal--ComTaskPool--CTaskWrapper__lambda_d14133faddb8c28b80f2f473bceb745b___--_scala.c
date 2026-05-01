/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d14133faddb8c28b80f2f473bceb745b___::_scalar_deleting_destructor_ @ 0x180089110
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_d14133faddb8c28b80f2f473bceb745b_::__lambda_d14133faddb8c28b80f2f473bceb745b_ @ 0x1800148D4 (_lambda_d14133faddb8c28b80f2f473bceb745b_--__lambda_d14133faddb8c28b80f2f473bceb745b_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d14133faddb8c28b80f2f473bceb745b___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_d14133faddb8c28b80f2f473bceb745b_::__lambda_d14133faddb8c28b80f2f473bceb745b_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
