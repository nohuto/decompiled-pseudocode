/*
 * XREFs of _Init_thread_wait @ 0x14001E610
 * Callers:
 *     _Init_thread_header @ 0x14001E548 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hEvent )
  {
    LeaveCriticalSection(&stru_140084D78);
    WaitForSingleObjectEx(hEvent, dwMilliseconds, 0);
    EnterCriticalSection(&stru_140084D78);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_140084DB0 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_140084DA0,
      &stru_140084D78,
      dwMilliseconds);
  }
}
