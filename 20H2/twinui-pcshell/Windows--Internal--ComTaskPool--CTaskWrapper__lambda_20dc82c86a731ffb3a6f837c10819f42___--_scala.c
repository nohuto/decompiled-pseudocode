/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20dc82c86a731ffb3a6f837c10819f42___::_scalar_deleting_destructor_ @ 0x1800B2080
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_20dc82c86a731ffb3a6f837c10819f42_::__lambda_20dc82c86a731ffb3a6f837c10819f42_ @ 0x1800B0A74 (_lambda_20dc82c86a731ffb3a6f837c10819f42_--__lambda_20dc82c86a731ffb3a6f837c10819f42_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20dc82c86a731ffb3a6f837c10819f42___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  lambda_20dc82c86a731ffb3a6f837c10819f42_::__lambda_20dc82c86a731ffb3a6f837c10819f42_(a1 + 2);
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
