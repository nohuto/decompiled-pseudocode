/*
 * XREFs of _Init_thread_notify @ 0x18008DD60
 * Callers:
 *     _Init_thread_abort @ 0x18008DC50 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18008DC88 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18059F108 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18059F0F0);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
