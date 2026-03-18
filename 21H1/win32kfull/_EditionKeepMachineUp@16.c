/*
 * XREFs of _EditionKeepMachineUp@16 @ 0xAF03A
 * Callers:
 *     <none>
 * Callees:
 *     ?KeepMachineUp@@YGXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0xAF0BC (-KeepMachineUp@@YGXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?MapInputToMonitorOnReason@@YG?AW4POWER_MONITOR_REQUEST_REASON@@W4_LINP_SOURCE@@@Z @ 0xAF150 (-MapInputToMonitorOnReason@@YG-AW4POWER_MONITOR_REQUEST_REASON@@W4_LINP_SOURCE@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall EditionKeepMachineUp(int a1, int a2, int a3, char a4)
{
  enum POWER_MONITOR_REQUEST_REASON v5; // [esp+0h] [ebp-10h]
  _DWORD v6[2]; // [esp+8h] [ebp-8h] BYREF

  if ( (!_gbBlockSendInputResets || (a4 & 8) == 0) && ((*_gpsi & 0x4000) == 0 || (a4 & 2) != 0) )
  {
    MapInputToMonitorOnReason(a2);
    KeepMachineUp(v5);
  }
  if ( _gPowerAdaptiveState && ((*_gpsi & 0x4000) == 0 || (a4 & 2) != 0) )
  {
    v6[1] = 0;
    _gPowerAdaptiveState = 0;
    v6[0] = 8;
    QueuePowerRequest(v6, 0);
  }
  return 1;
}
