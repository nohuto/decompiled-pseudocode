/*
 * XREFs of MiReleaseResourceLite @ 0x14036FDF0
 * Callers:
 *     MiProcessLoaderEntry @ 0x14036FC04 (MiProcessLoaderEntry.c)
 *     MiRememberUnloadedDriver @ 0x14074A054 (MiRememberUnloadedDriver.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *__fastcall MiReleaseResourceLite(__int64 a1)
{
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(a1);
}
