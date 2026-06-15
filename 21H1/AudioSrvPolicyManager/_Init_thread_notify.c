/*
 * XREFs of _Init_thread_notify @ 0x18003F9B8
 * Callers:
 *     _Init_thread_footer @ 0x18003F8E0 (_Init_thread_footer.c)
 * Callees:
 *     <none>
 */

int Init_thread_notify()
{
  if ( !hHandle )
    return ((__int64 (__fastcall *)(void *))__ROR8__(qword_180055E18 ^ _security_cookie, _security_cookie & 0x3F))(&unk_180055E00);
  SetEvent(hHandle);
  return ResetEvent(hHandle);
}
