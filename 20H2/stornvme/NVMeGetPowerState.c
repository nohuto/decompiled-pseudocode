/*
 * XREFs of NVMeGetPowerState @ 0x1C000D518
 * Callers:
 *     NVMeLogTelemetryControllerInfo @ 0x1C000E028 (NVMeLogTelemetryControllerInfo.c)
 *     NVMeMaxOperationalPower @ 0x1C000E5F8 (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1C000E7EC (NVMePowerInitialize.c)
 *     NVMePowerSetFState @ 0x1C000EEE8 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C000F010 (NVMePowerSetPerfState.c)
 *     NVMeValidatePowerStates @ 0x1C000F850 (NVMeValidatePowerStates.c)
 *     NVMeSetPowerState @ 0x1C001AD64 (NVMeSetPowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeGetPowerState(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 1608);
  if ( a2 > 0x1Fu || a2 > *(_BYTE *)(v2 + 263) )
    return 0LL;
  else
    return v2 + 32 * (a2 + 64LL);
}
