/*
 * XREFs of _Init_thread_notify @ 0x180044E78
 * Callers:
 *     _Init_thread_footer @ 0x180044DA0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hObject )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_18005AAC8 ^ _security_cookie, _security_cookie & 0x3F))(&unk_18005AAB0);
  SetEvent(hObject);
  return ResetEvent(hObject);
}
