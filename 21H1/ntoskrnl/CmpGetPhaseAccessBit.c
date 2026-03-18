/*
 * XREFs of CmpGetPhaseAccessBit @ 0x14086A020
 * Callers:
 *     CmpCreateTombstone @ 0x1404E7DBC (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

char CmpGetPhaseAccessBit()
{
  return CmpAccessBitForPhase;
}
