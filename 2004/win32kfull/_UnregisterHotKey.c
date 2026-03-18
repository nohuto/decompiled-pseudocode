/*
 * XREFs of _UnregisterHotKey @ 0x1C003D200
 * Callers:
 *     NtUserUnregisterHotKey @ 0x1C003D170 (NtUserUnregisterHotKey.c)
 *     ?_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z @ 0x1C00BF690 (-_RegisterWindowArrangementCallout@@YA_JPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x1C003D390 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall UnregisterHotKey(__int64 a1, unsigned int a2)
{
  if ( (unsigned __int8)HKRemoveMatchingHotkeys(gptiCurrent, a1, a2, 3LL) )
  {
    qword_1C033AAA0 = 0LL;
    return 1LL;
  }
  else
  {
    UserSetLastError(1419LL);
    return 0LL;
  }
}
