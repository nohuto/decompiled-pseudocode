/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x1404F20E0
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x1408F69B0 (PpmIdleUpdateHvStates.c)
 *     PpmPerfRegisterHvCap @ 0x1408F6A80 (PpmPerfRegisterHvCap.c)
 *     PpmPerfRegisterHvStates @ 0x1408F6C00 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x1404F2F5C (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1)
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId(a1)) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
