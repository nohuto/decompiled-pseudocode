/*
 * XREFs of _anonymous_namespace_::GetCurTime @ 0x1801FCCB4
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1801128EC (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801FD8EC (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

BOOL __fastcall anonymous_namespace_::GetCurTime(LPFILETIME lpFileTime)
{
  struct _SYSTEMTIME SystemTime; // [rsp+20h] [rbp-28h] BYREF

  GetSystemTime(&SystemTime);
  return SystemTimeToFileTime(&SystemTime, lpFileTime);
}
