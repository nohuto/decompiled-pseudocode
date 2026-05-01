/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a95d3552be03f68d729c728809b4115___::_scalar_deleting_destructor_ @ 0x1800B2030
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_1a95d3552be03f68d729c728809b4115_::__lambda_1a95d3552be03f68d729c728809b4115_ @ 0x1800B0A4C (_lambda_1a95d3552be03f68d729c728809b4115_--__lambda_1a95d3552be03f68d729c728809b4115_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1a95d3552be03f68d729c728809b4115___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_1a95d3552be03f68d729c728809b4115_::__lambda_1a95d3552be03f68d729c728809b4115_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x180);
  return a1;
}
