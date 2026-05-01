/*
 * XREFs of _Init_thread_notify @ 0x18008E660
 * Callers:
 *     _Init_thread_abort @ 0x18008E550 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18008E588 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_1805CC2F8 ^ _security_cookie, _security_cookie & 0x3F))(&unk_1805CC2E0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
