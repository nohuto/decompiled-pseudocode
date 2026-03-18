/*
 * XREFs of _Init_thread_wait @ 0x140003900
 * Callers:
 *     _Init_thread_header @ 0x140003838 (_Init_thread_header.c)
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
                                                                            qword_140015910 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_140015900,
      &CriticalSection,
      dwMilliseconds);
  }
}
