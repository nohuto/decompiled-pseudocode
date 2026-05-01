/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f30574fd153fefe3a19e136921a472ba___::_scalar_deleting_destructor_ @ 0x1800B22B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_f30574fd153fefe3a19e136921a472ba_::__lambda_f30574fd153fefe3a19e136921a472ba_ @ 0x1800B0B84 (_lambda_f30574fd153fefe3a19e136921a472ba_--__lambda_f30574fd153fefe3a19e136921a472ba_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f30574fd153fefe3a19e136921a472ba___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_f30574fd153fefe3a19e136921a472ba_::__lambda_f30574fd153fefe3a19e136921a472ba_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
