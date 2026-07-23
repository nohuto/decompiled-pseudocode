/*
 * XREFs of NtSetSystemPowerState @ 0x1409947A0
 * Callers:
 *     NtShutdownSystem @ 0x1405ACC40 (NtShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
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
