/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e6c0e67d25ef7981bec7826e7d1a764___::_scalar_deleting_destructor_ @ 0x180093180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_b97f6338922ac33e763b003ae07478e0_::__lambda_b97f6338922ac33e763b003ae07478e0_ @ 0x180092C80 (_lambda_b97f6338922ac33e763b003ae07478e0_--__lambda_b97f6338922ac33e763b003ae07478e0_.c)
 */

__int64 *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2e6c0e67d25ef7981bec7826e7d1a764___::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  lambda_b97f6338922ac33e763b003ae07478e0_::__lambda_b97f6338922ac33e763b003ae07478e0_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
