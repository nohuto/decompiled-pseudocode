/*
 * XREFs of PopProcessDisplayRequiredChange @ 0x14071CFF4
 * Callers:
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140361DE0 (PopProcessPowerRequestOverrideQueryResponse.c)
 *     PopPowerRequestCleanUp @ 0x140361F40 (PopPowerRequestCleanUp.c)
 *     PoClearPowerRequestInternal @ 0x14036237C (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140362540 (PoSetPowerRequestInternal.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x14062E7B4 (PoEnergyContextUpdateComponentPower.c)
 */

void __fastcall PopProcessDisplayRequiredChange(__int64 a1, int a2)
{
  if ( a2 )
    PoEnergyContextUpdateComponentPower(a1, 12, a2);
}
