/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x1404ECD50
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x1408F3460 (PpmIdleUpdateHvStates.c)
 *     PpmPerfRegisterHvCap @ 0x1408F3530 (PpmPerfRegisterHvCap.c)
 *     PpmPerfRegisterHvStates @ 0x1408F36B0 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x1404EDBD0 (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1)
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId(a1)) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
