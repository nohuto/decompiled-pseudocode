/*
 * XREFs of MiReleaseResourceLite @ 0x14037253C
 * Callers:
 *     MiProcessLoaderEntry @ 0x140372360 (MiProcessLoaderEntry.c)
 *     MiRememberUnloadedDriver @ 0x14075FAF4 (MiRememberUnloadedDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall MiReleaseResourceLite(__int64 a1)
{
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(a1);
}
