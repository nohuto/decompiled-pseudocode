/*
 * XREFs of HalpInterruptIsHvLineBasedIntRemappingSupported @ 0x14036B160
 * Callers:
 *     HalpInterruptUnmap @ 0x14074E468 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvLineBasedIntRemappingSupported()
{
  return qword_140C4A228 != 0;
}
