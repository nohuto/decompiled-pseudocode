/*
 * XREFs of NVMePowerStateGetMaxPower @ 0x1C000F324
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C000E678 (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1C000E86C (NVMePowerInitialize.c)
 *     NVMePowerSetFState @ 0x1C000EF68 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C000F090 (NVMePowerSetPerfState.c)
 *     NVMeValidatePowerStates @ 0x1C000F8D0 (NVMeValidatePowerStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMePowerStateGetMaxPower(unsigned __int16 *a1)
{
  if ( a1 )
    return *a1 * ((*((_BYTE *)a1 + 3) & 1) != 0 ? 100 : 10000);
  else
    return 0xFFFFFFFFLL;
}
