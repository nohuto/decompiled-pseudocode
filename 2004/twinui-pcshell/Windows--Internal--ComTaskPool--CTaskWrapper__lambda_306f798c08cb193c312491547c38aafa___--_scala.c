/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_306f798c08cb193c312491547c38aafa___::_scalar_deleting_destructor_ @ 0x1800B0420
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_306f798c08cb193c312491547c38aafa_::__lambda_306f798c08cb193c312491547c38aafa_ @ 0x1800AEE04 (_lambda_306f798c08cb193c312491547c38aafa_--__lambda_306f798c08cb193c312491547c38aafa_.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_306f798c08cb193c312491547c38aafa___::_scalar_deleting_destructor_(
        _DWORD *a1,
        char a2)
{
  lambda_306f798c08cb193c312491547c38aafa_::__lambda_306f798c08cb193c312491547c38aafa_((__int64)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x160);
  return a1;
}
