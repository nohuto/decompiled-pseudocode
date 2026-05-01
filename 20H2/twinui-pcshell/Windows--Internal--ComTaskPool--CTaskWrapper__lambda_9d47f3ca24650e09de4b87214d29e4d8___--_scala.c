/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d47f3ca24650e09de4b87214d29e4d8___::_scalar_deleting_destructor_ @ 0x1800149F0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_9d47f3ca24650e09de4b87214d29e4d8_::__lambda_9d47f3ca24650e09de4b87214d29e4d8_ @ 0x180015D10 (_lambda_9d47f3ca24650e09de4b87214d29e4d8_--__lambda_9d47f3ca24650e09de4b87214d29e4d8_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d47f3ca24650e09de4b87214d29e4d8___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_9d47f3ca24650e09de4b87214d29e4d8_::__lambda_9d47f3ca24650e09de4b87214d29e4d8_(a1 + 4);
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x170);
  return a1;
}
