/*
 * XREFs of PoPowerOffMonitor @ 0x140382220
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x1407205B8 (PopDispatchStateCallout.c)
 *     PoBlockConsoleSwitch @ 0x1407211BC (PoBlockConsoleSwitch.c)
 *     PoUnblockConsoleSwitch @ 0x14077028C (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1407702B4 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x1407702D4 (PoStartPowerStateTasks.c)
 */

__int64 PoPowerOffMonitor()
{
  unsigned int v0; // ebx
  unsigned int v2; // [rsp+20h] [rbp-30h] BYREF
  __int128 v3; // [rsp+28h] [rbp-28h] BYREF
  __int64 v4; // [rsp+38h] [rbp-18h]

  v3 = 0LL;
  DWORD2(v3) = 1;
  v4 = 0LL;
  v2 = PoBlockConsoleSwitch(&v3);
  PoStartPowerStateTasks(&v3);
  LODWORD(v4) = 12;
  v0 = PopDispatchStateCallout(&v3, &v2);
  PoEndPowerStateTasks(&v3);
  PoUnblockConsoleSwitch(&v3, v2);
  return v0;
}
