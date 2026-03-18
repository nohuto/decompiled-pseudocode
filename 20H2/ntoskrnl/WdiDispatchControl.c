/*
 * XREFs of WdiDispatchControl @ 0x140785500
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 * Callees:
 *     EtwGetProviderIdFromHandle @ 0x14039F3E8 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x14078578C (WdipStartEndScenario.c)
 */

__int64 __fastcall WdiDispatchControl(unsigned int *a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  result = EtwGetProviderIdFromHandle((ULONG_PTR *)*a1, 1, &v3);
  if ( (int)result >= 0 )
    return WdipStartEndScenario(&v3, a1 + 6, a1 + 2, a1[10]);
  return result;
}
