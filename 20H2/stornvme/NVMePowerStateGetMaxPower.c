/*
 * XREFs of NVMePowerStateGetMaxPower @ 0x1C000F2A4
 * Callers:
 *     NVMeMaxOperationalPower @ 0x1C000E5F8 (NVMeMaxOperationalPower.c)
 *     NVMePowerInitialize @ 0x1C000E7EC (NVMePowerInitialize.c)
 *     NVMePowerSetFState @ 0x1C000EEE8 (NVMePowerSetFState.c)
 *     NVMePowerSetPerfState @ 0x1C000F010 (NVMePowerSetPerfState.c)
 *     NVMeValidatePowerStates @ 0x1C000F850 (NVMeValidatePowerStates.c)
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
