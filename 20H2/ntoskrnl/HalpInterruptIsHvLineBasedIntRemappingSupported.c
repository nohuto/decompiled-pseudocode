/*
 * XREFs of HalpInterruptIsHvLineBasedIntRemappingSupported @ 0x14036D140
 * Callers:
 *     HalpInterruptUnmap @ 0x14075D048 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvLineBasedIntRemappingSupported()
{
  return qword_140C4A288 != 0;
}
