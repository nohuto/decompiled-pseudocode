/*
 * XREFs of _Init_thread_wait @ 0x18003FA10
 * Callers:
 *     _Init_thread_header @ 0x18003F948 (_Init_thread_header.c)
 * Callees:
 *     <none>
 */

void __fastcall Init_thread_wait(DWORD dwMilliseconds)
{
  if ( hHandle )
  {
    LeaveCriticalSection(&stru_180055DD8);
    WaitForSingleObjectEx(hHandle, dwMilliseconds, 0);
    EnterCriticalSection(&stru_180055DD8);
  }
  else
  {
    ((void (__fastcall *)(void *, struct _RTL_CRITICAL_SECTION *, _QWORD))__ROR8__(
                                                                            qword_180055E10 ^ _security_cookie,
                                                                            _security_cookie & 0x3F))(
      &unk_180055E00,
      &stru_180055DD8,
      dwMilliseconds);
  }
}
