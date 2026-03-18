/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x1404EC700
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x1408F2170 (PpmIdleUpdateHvStates.c)
 *     PpmPerfRegisterHvCap @ 0x1408F2240 (PpmPerfRegisterHvCap.c)
 *     PpmPerfRegisterHvStates @ 0x1408F23C0 (PpmPerfRegisterHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x1404ED580 (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1)
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId(a1)) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
