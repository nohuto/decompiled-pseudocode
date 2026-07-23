/*
 * XREFs of _InitSecurityCookie@0 @ 0x4B331309
 * Callers:
 *     _LdrpInitialize@8 @ 0x4B2E62EF (_LdrpInitialize@8.c)
 * Callees:
 *     _LdrInitSecurityCookie@20 @ 0x4B2B9EDA (_LdrInitSecurityCookie@20.c)
 *     _LdrpGenRandom@0 @ 0x4B2D085D (_LdrpGenRandom@0.c)
 *     _ZwDelayExecution@8 @ 0x4B2F2CC0 (_ZwDelayExecution@8.c)
 */

signed __int32 *__stdcall InitSecurityCookie()
{
  signed __int32 *result; // eax
  int v1; // eax
  LARGE_INTEGER DelayInterval; // [esp+0h] [ebp-Ch] BYREF
  signed __int32 v3; // [esp+8h] [ebp-4h] BYREF

  result = (signed __int32 *)_InterlockedIncrement(&SecurityCookieInitCount);
  if ( result == (signed __int32 *)1 )
  {
    v1 = LdrpGenRandom();
    LdrInitSecurityCookie(0, (unsigned int *)&__security_cookie, dword_4B3A92E0 ^ v1, 0);
    result = &v3;
    _InterlockedOr(&v3, 0);
    SecurityCookieInitialized = 1;
  }
  else
  {
    DelayInterval.QuadPart = -300000LL;
    while ( !SecurityCookieInitialized )
      result = (signed __int32 *)ZwDelayExecution(0, &DelayInterval);
  }
  return result;
}
