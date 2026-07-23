/*
 * XREFs of PoPowerOffMonitor @ 0x140382A14
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x140672828 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x140672878 (PopDispatchStateCallout.c)
 *     PoUnblockConsoleSwitch @ 0x14077431C (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140774344 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x140774364 (PoStartPowerStateTasks.c)
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
