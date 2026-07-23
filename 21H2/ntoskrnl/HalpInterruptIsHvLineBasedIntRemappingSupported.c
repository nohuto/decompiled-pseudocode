/*
 * XREFs of HalpInterruptIsHvLineBasedIntRemappingSupported @ 0x14036D920
 * Callers:
 *     HalpInterruptUnmap @ 0x1407619F8 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvLineBasedIntRemappingSupported()
{
  return qword_140C4A1E8 != 0;
}
