/*
 * XREFs of SddlBaseInitialize @ 0x1403BBD8C
 * Callers:
 *     SepInitializationPhase1 @ 0x1407A88DC (SepInitializationPhase1.c)
 * Callees:
 *     InitializeSidLookupTable @ 0x1407A8B54 (InitializeSidLookupTable.c)
 */

__int64 SddlBaseInitialize()
{
  return InitializeSidLookupTable();
}
