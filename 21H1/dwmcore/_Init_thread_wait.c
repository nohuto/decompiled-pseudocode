/*
 * XREFs of _Init_thread_wait @ 0x1800E1E40
 * Callers:
 *     _Init_thread_header @ 0x1800E1D78 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_180348E58);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_180348E58);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_180348E90 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_180348E80,
      &stru_180348E58,
      dwMilliseconds);
  }
}
