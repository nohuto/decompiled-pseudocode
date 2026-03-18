/*
 * XREFs of ReadAMDMsr @ 0x1403FD420
 * Callers:
 *     KiDisableCacheErrataSource @ 0x14051C714 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
