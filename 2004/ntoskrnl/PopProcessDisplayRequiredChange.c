/*
 * XREFs of PopProcessDisplayRequiredChange @ 0x14064DDB0
 * Callers:
 *     PoClearPowerRequestInternal @ 0x140275FBC (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x140276180 (PoSetPowerRequestInternal.c)
 *     PopPowerRequestCleanUp @ 0x1402767F4 (PopPowerRequestCleanUp.c)
 *     PopProcessPowerRequestOverrideQueryResponse @ 0x140276C34 (PopProcessPowerRequestOverrideQueryResponse.c)
 * Callees:
 *     PoEnergyContextUpdateComponentPower @ 0x140659C94 (PoEnergyContextUpdateComponentPower.c)
 */

__int64 __fastcall PopProcessDisplayRequiredChange(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
    return PoEnergyContextUpdateComponentPower(a1, 12LL, a2);
  return result;
}
