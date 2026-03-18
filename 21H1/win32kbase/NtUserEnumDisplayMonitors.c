/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C00A6580
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     xxxEnumDisplayMonitors @ 0x1C00A6620 (xxxEnumDisplayMonitors.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserEnumDisplayMonitors(HDC a1)
{
  __int64 v2; // rcx
  int v3; // edi

  EnterCrit(0LL, 1);
  v3 = 0;
  if ( gbVideoInitialized )
    v3 = xxxEnumDisplayMonitors(a1, 0);
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
