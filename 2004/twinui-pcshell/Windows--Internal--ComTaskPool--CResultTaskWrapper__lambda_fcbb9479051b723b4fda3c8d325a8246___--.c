/*
 * XREFs of Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fcbb9479051b723b4fda3c8d325a8246___::_scalar_deleting_destructor_ @ 0x18006C820
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_fcbb9479051b723b4fda3c8d325a8246___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
