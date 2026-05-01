/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9ab68852e2b72d35890b3d375991eaf9___::_scalar_deleting_destructor_ @ 0x1800B2210
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_9ab68852e2b72d35890b3d375991eaf9_::__lambda_9ab68852e2b72d35890b3d375991eaf9_ @ 0x1800B0B34 (_lambda_9ab68852e2b72d35890b3d375991eaf9_--__lambda_9ab68852e2b72d35890b3d375991eaf9_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9ab68852e2b72d35890b3d375991eaf9___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_9ab68852e2b72d35890b3d375991eaf9_::__lambda_9ab68852e2b72d35890b3d375991eaf9_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x168);
  return a1;
}
