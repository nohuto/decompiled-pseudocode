/*
 * XREFs of _Init_thread_notify @ 0x18008E1C0
 * Callers:
 *     _Init_thread_abort @ 0x18008E0B0 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18008E0E8 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_1805CB338 ^ _security_cookie, _security_cookie & 0x3F))(&unk_1805CB320);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
