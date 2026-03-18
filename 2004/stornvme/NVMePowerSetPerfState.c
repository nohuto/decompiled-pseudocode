/*
 * XREFs of NVMePowerSetPerfState @ 0x1C000F090
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeGetPowerState @ 0x1C000D598 (NVMeGetPowerState.c)
 *     NVMePerfStateTransition @ 0x1C000E780 (NVMePerfStateTransition.c)
 *     NVMePowerStateGetMaxPower @ 0x1C000F324 (NVMePowerStateGetMaxPower.c)
 *     NVMeSetPowerState @ 0x1C001AE34 (NVMeSetPowerState.c)
 */

__int64 __fastcall NVMePowerSetPerfState(__int64 a1, __int64 a2)
{
  int v4; // edi
  const char *v5; // r9
  unsigned __int8 v6; // dl
  __int64 v7; // rcx
  __int64 PowerState; // rax
  int MaxPower; // eax
  int v10; // r10d
  __int64 result; // rax

  if ( *(_DWORD *)(a2 + 4) >= 0x18u && *(_DWORD *)a2 )
  {
    v4 = *(unsigned __int8 *)(a2 + 16);
    v5 = "Succeeded";
    if ( !*(_BYTE *)(a2 + 12) )
      v5 = "Failed";
    StorPortDebugPrint(3LL, "StorNVMe - POWER: P-State Callback for P%u, PEP %s\n", v4, v5);
    if ( *(_BYTE *)(a2 + 12) )
    {
      if ( (unsigned __int8)v4 <= *(_BYTE *)(a1 + 1653) )
      {
        if ( (unsigned __int8)v4 <= 0x1Fu )
        {
          NVMeGetPowerState(a1, v4);
          PowerState = NVMeGetPowerState(v7, v6);
          MaxPower = NVMePowerStateGetMaxPower(PowerState);
          StorPortDebugPrint(
            3LL,
            "StorNVMe - POWER: Transitioning to NVME PS%u - MaxP: %uuW, Latency: %uus\n",
            v4,
            MaxPower,
            v10);
          NVMeSetPowerState(a1);
          *(_BYTE *)(a1 + 1655) = v4;
          *(_BYTE *)(a1 + 1652) = v4;
        }
        else
        {
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Power state index %u is invalid\n", v4);
        }
      }
      else
      {
        StorPortDebugPrint(
          3LL,
          "StorNVMe - POWER: PS%u is greater than deepest operational power state PS%u\n",
          v4,
          *(unsigned __int8 *)(a1 + 1653));
      }
    }
  }
  result = *(unsigned int *)(a1 + 1648);
  if ( (result & 0x80u) == 0LL
    || (*(_DWORD *)(a1 + 1648) = result & 0xFFFFFF7F, result = NVMePerfStateTransition(a1), !(_BYTE)result) )
  {
    *(_DWORD *)(a1 + 1696) &= ~1u;
  }
  return result;
}
