/*
 * XREFs of _THREAD_CODEPAGE@0 @ 0x192B9B
 * Callers:
 *     _RtlWCSMessageWParamCharToMB@8 @ 0xC5322 (_RtlWCSMessageWParamCharToMB@8.c)
 *     _SfnIMECONTROL@32 @ 0x18B448 (_SfnIMECONTROL@32.c)
 *     _RtlMBMessageWParamCharToWCS@8 @ 0x1B72F5 (_RtlMBMessageWParamCharToWCS@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall THREAD_CODEPAGE()
{
  PKTHREAD CurrentThread; // eax

  CurrentThread = KeGetCurrentThread();
  return *(unsigned __int16 *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 104);
}
