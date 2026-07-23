/*
 * XREFs of NtSetSystemPowerState @ 0x14099A130
 * Callers:
 *     NtShutdownSystem @ 0x1405B2AF0 (NtShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 */

NTSTATUS __cdecl NtSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE LightestSystemState, ULONG Flags)
{
  _DWORD v7[100]; // [rsp+20h] [rbp-1B8h] BYREF

  memset(&v7[3], 0, 0x17CuLL);
  v7[0] = SystemAction;
  v7[1] = LightestSystemState;
  v7[2] = Flags;
  return PopTransitionSystemPowerStateEx((__int64)v7);
}
