/*
 * XREFs of HalpInterruptIsHvLineBasedIntRemappingSupported @ 0x14036D770
 * Callers:
 *     HalpInterruptUnmap @ 0x140761838 (HalpInterruptUnmap.c)
 * Callees:
 *     <none>
 */

bool HalpInterruptIsHvLineBasedIntRemappingSupported()
{
  return qword_140C4A1A8 != 0;
}
