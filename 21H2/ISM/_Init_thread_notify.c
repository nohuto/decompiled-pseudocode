/*
 * XREFs of _Init_thread_notify @ 0x18003C6E0
 * Callers:
 *     _Init_thread_abort @ 0x18003C5D0 (_Init_thread_abort.c)
 *     _Init_thread_footer @ 0x18003C608 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_180209138 ^ _security_cookie, _security_cookie & 0x3F))(&unk_180209120);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
