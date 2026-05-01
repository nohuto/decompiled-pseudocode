/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e446c7c5fc519c205d2c977b283b134b___::_scalar_deleting_destructor_ @ 0x1800A24B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_e446c7c5fc519c205d2c977b283b134b_::__lambda_e446c7c5fc519c205d2c977b283b134b_ @ 0x1800A0E50 (_lambda_e446c7c5fc519c205d2c977b283b134b_--__lambda_e446c7c5fc519c205d2c977b283b134b_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e446c7c5fc519c205d2c977b283b134b___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_e446c7c5fc519c205d2c977b283b134b_::__lambda_e446c7c5fc519c205d2c977b283b134b_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
