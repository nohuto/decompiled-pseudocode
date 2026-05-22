/*
 * XREFs of _Init_thread_wait @ 0x18003C9F8
 * Callers:
 *     _Init_thread_header @ 0x18003C930 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&CriticalSection);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&CriticalSection);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_180208130 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_180208120,
      &CriticalSection,
      dwMilliseconds);
  }
}
