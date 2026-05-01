/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5096affdfa8dd9dd59ff190700218634___::_scalar_deleting_destructor_ @ 0x1800B04C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_5096affdfa8dd9dd59ff190700218634_::__lambda_5096affdfa8dd9dd59ff190700218634_ @ 0x1800AEE54 (_lambda_5096affdfa8dd9dd59ff190700218634_--__lambda_5096affdfa8dd9dd59ff190700218634_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5096affdfa8dd9dd59ff190700218634___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_5096affdfa8dd9dd59ff190700218634_::__lambda_5096affdfa8dd9dd59ff190700218634_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
