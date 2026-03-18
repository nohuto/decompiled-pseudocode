/*
 * XREFs of HalpInterruptIsHvLineBasedIntRemappingSupported @ 0x140509178
 * Callers:
 *     HalpInterruptUnmap @ 0x140908918 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvLineBasedIntRemappingSupported()
{
  return qword_140C4C4A8 != 0;
}
