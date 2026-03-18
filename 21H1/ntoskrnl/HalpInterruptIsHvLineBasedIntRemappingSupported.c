/*
 * XREFs of HalpInterruptIsHvLineBasedIntRemappingSupported @ 0x14036A7A0
 * Callers:
 *     HalpInterruptUnmap @ 0x14074A048 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvLineBasedIntRemappingSupported()
{
  return qword_140C4A388 != 0;
}
