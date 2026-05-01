/*
 * XREFs of _anonymous_namespace_::GetCurTime @ 0x18021FE54
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x180136EDC (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180220A70 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

BOOL __fastcall anonymous_namespace_::GetCurTime(LPFILETIME lpFileTime)
{
  struct _SYSTEMTIME SystemTime; // [rsp+20h] [rbp-28h] BYREF

  GetSystemTime(&SystemTime);
  return SystemTimeToFileTime(&SystemTime, lpFileTime);
}
