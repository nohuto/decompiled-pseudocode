/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_da08d54169002be5ece525bde89b0b7d___::_scalar_deleting_destructor_ @ 0x1800B0560
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_da08d54169002be5ece525bde89b0b7d_::__lambda_da08d54169002be5ece525bde89b0b7d_ @ 0x1800AEE8C (_lambda_da08d54169002be5ece525bde89b0b7d_--__lambda_da08d54169002be5ece525bde89b0b7d_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_da08d54169002be5ece525bde89b0b7d___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_da08d54169002be5ece525bde89b0b7d_::__lambda_da08d54169002be5ece525bde89b0b7d_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x158);
  return a1;
}
