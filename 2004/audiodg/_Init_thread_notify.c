/*
 * XREFs of _Init_thread_notify @ 0x14001E5B8
 * Callers:
 *     _Init_thread_footer @ 0x14001E4E0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hEvent )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_140084DB8 ^ _security_cookie, _security_cookie & 0x3F))(&unk_140084DA0);
  SetEvent(hEvent);
  return ResetEvent(hEvent);
}
