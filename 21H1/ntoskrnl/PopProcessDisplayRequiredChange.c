/*
 * XREFs of PopProcessDisplayRequiredChange @ 0x140700944
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x14033CD34 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x14033CE74 (PopPowerRequestCleanUp.c)
 *     PoClearPowerRequestInternal @ 0x14033D2AC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x14033D470 (PoSetPowerRequestInternal.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x14065D1C8 (PoEnergyContextUpdateComponentPower.c)
 */

void __fastcall PopProcessDisplayRequiredChange(_QWORD *a1, int a2)
{
  if ( a2 )
    PoEnergyContextUpdateComponentPower(a1, 12, a2);
}
