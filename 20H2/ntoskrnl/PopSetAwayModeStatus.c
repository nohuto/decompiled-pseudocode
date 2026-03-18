/*
 * XREFs of PopSetAwayModeStatus @ 0x1408E9F54
 * Callers:
 *     PopSetSystemAwayMode @ 0x1408E9FD0 (PopSetSystemAwayMode.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407200D8 (PopSetPowerSettingValueAcDc.c)
 *     PopBroadcastSessionInfo @ 0x1407C5B80 (PopBroadcastSessionInfo.c)
 */

__int64 __fastcall PopSetAwayModeStatus(char a1)
{
  __int64 result; // rax
  BOOL v3; // [rsp+20h] [rbp-38h] BYREF
  GUID v4; // [rsp+28h] [rbp-30h] BYREF
  BOOL v5; // [rsp+38h] [rbp-20h]

  v3 = a1 != 0;
  v5 = v3;
  v4 = GUID_SYSTEM_AWAYMODE;
  PopBroadcastSessionInfo(0, 20, (__int64)&v4);
  result = PopSetPowerSettingValueAcDc(&GUID_SYSTEM_AWAYMODE, 4u, &v3);
  byte_140C23D51 = a1;
  return result;
}
