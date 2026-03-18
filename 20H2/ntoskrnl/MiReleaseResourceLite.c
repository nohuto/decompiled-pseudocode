/*
 * XREFs of MiReleaseResourceLite @ 0x140371D40
 * Callers:
 *     MiProcessLoaderEntry @ 0x140371B54 (MiProcessLoaderEntry.c)
 *     MiRememberUnloadedDriver @ 0x140758C34 (MiRememberUnloadedDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall MiReleaseResourceLite(__int64 a1)
{
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(a1);
}
