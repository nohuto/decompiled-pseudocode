/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9f8c9b30a255187f7fdba174b5588192___::_scalar_deleting_destructor_ @ 0x1800B2260
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_9f8c9b30a255187f7fdba174b5588192_::__lambda_9f8c9b30a255187f7fdba174b5588192_ @ 0x1800B0B5C (_lambda_9f8c9b30a255187f7fdba174b5588192_--__lambda_9f8c9b30a255187f7fdba174b5588192_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9f8c9b30a255187f7fdba174b5588192___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_9f8c9b30a255187f7fdba174b5588192_::__lambda_9f8c9b30a255187f7fdba174b5588192_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
