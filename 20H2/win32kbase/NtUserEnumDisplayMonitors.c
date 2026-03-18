/*
 * XREFs of NtUserEnumDisplayMonitors @ 0x1C002F1C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxEnumDisplayMonitors @ 0x1C002F2E0 (xxxEnumDisplayMonitors.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
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
