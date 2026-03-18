/*
 * XREFs of NVMePowerSetFState @ 0x1C000EEE8
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeGetPowerState @ 0x1C000D518 (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x1C000F2A4 (NVMePowerStateGetMaxPower.c)
 *     NVMeSetFStateIdleTimer @ 0x1C000F498 (NVMeSetFStateIdleTimer.c)
 *     NVMeUpdateResumeLatencyTolerance @ 0x1C000F7B4 (NVMeUpdateResumeLatencyTolerance.c)
 *     NVMeSetPowerState @ 0x1C001AD64 (NVMeSetPowerState.c)
 */

void __fastcall NVMePowerSetFState(_BYTE *a1, _DWORD *a2)
{
  char v4; // al
  unsigned __int8 v5; // di
  unsigned __int8 v6; // dl
  __int64 v7; // rcx
  __int64 PowerState; // rax
  int MaxPower; // eax
  int v10; // r10d
  int v11; // eax

  if ( a2[1] >= 0x18u && *a2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: F-State Callback for F%u\n", a2[5]);
    v4 = *((_BYTE *)a2 + 20);
    a1[1658] = v4;
    if ( a2[5] )
      v5 = v4 + a1[1653];
    else
      v5 = a1[1655];
    if ( v5 <= 0x1Fu )
    {
      NVMeGetPowerState((__int64)a1, v5);
      PowerState = NVMeGetPowerState(v7, v6);
      MaxPower = NVMePowerStateGetMaxPower(PowerState);
      StorPortDebugPrint(
        3LL,
        "StorNVMe - POWER: Transitioning to NVME PS%u - MaxP: %uuW, Latency: %uus\n",
        v5,
        MaxPower,
        v10);
      NVMeSetPowerState((int)a1);
      v11 = (unsigned __int8)a1[1658];
      a1[1652] = v5;
      if ( (_BYTE)v11 && v11 < (unsigned __int8)a1[1657] - 1 )
      {
        if ( (unsigned __int8)NVMeUpdateResumeLatencyTolerance(a1) )
          NVMeSetFStateIdleTimer(a1);
      }
    }
    else
    {
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Invalid power state index %u\n", v5);
    }
  }
}
