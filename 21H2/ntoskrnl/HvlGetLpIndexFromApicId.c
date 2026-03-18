/*
 * XREFs of HvlGetLpIndexFromApicId @ 0x140543A10
 * Callers:
 *     PpmIdleUpdateHvStates @ 0x14099E040 (PpmIdleUpdateHvStates.c)
 * Callees:
 *     HvlpGetLpcbByApicId @ 0x140544640 (HvlpGetLpcbByApicId.c)
 */

__int64 __fastcall HvlGetLpIndexFromApicId(__int64 a1)
{
  __int64 LpcbByApicId; // rax

  if ( (HvlpFlags & 2) != 0 && (LpcbByApicId = HvlpGetLpcbByApicId(a1)) != 0 )
    return *(unsigned int *)(LpcbByApicId + 4);
  else
    return 0xFFFFFFFFLL;
}
