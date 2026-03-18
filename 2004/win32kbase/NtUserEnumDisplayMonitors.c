/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C0010EF0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnumDisplayMonitors @ 0x1C0010F90 (xxxEnumDisplayMonitors.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(HDC a1)
{
  __int64 v2; // rcx
  int v3; // edi

  EnterCrit(0LL, 1LL);
  v3 = 0;
  if ( gbVideoInitialized )
    v3 = xxxEnumDisplayMonitors(a1, 0);
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
