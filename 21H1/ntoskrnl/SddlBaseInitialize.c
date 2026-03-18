/*
 * XREFs of SddlBaseInitialize @ 0x1403BF6C4
 * Callers:
 *     SepInitializationPhase1 @ 0x1407A6578 (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x1407A67F0 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
