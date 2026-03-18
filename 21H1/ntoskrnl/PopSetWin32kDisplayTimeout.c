/*
 * XREFs of PopSetWin32kDisplayTimeout @ 0x1408F0BC4
 * Callers:
 *     PopReleaseAdaptiveLock @ 0x1406FE6C4 (PopReleaseAdaptiveLock.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PopSetPowerSettingValueAcDc @ 0x14070E5A8 (PopSetPowerSettingValueAcDc.c)
 *     PopSendSessionInfo @ 0x1408F0DB0 (PopSendSessionInfo.c)
 */

__int64 __fastcall PopSetWin32kDisplayTimeout(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+20h] [rbp-38h] BYREF
  GUID v5; // [rsp+28h] [rbp-30h] BYREF
  int v6; // [rsp+38h] [rbp-20h]

  v6 = a2;
  v5 = GUID_CONSOLE_VIDEO_TIMEOUT;
  ((void (__fastcall *)(__int64, __int64, __int64, GUID *, _DWORD))PopSendSessionInfo)(a1, a2, a3, &v5, a2);
  return PopSetPowerSettingValueAcDc(&GUID_CONSOLE_VIDEO_TIMEOUT, 4LL, &v4);
}
