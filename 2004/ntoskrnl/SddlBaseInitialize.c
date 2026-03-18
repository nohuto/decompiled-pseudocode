/*
 * XREFs of SddlBaseInitialize @ 0x1403B990C
 * Callers:
 *     SepInitializationPhase1 @ 0x1407995AC (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x140799824 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
