/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x1404F05C0
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x1408F9070 (PpmIdleUpdateHvStates.c)
 *     PpmPerfRegisterHvCap @ 0x1408F9140 (PpmPerfRegisterHvCap.c)
 *     PpmPerfRegisterHvStates @ 0x1408F92C0 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x1404F143C (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1)
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId(a1)) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
