/*
 * XREFs of ReadAMDMsr @ 0x1403FE6B0
 * Callers:
 *     KiDisableCacheErrataSource @ 0x14051CD64 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
