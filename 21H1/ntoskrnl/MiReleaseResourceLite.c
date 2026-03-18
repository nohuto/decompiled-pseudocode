/*
 * XREFs of MiReleaseResourceLite @ 0x14036F1C0
 * Callers:
 *     MiProcessLoaderEntry @ 0x14036EFD4 (MiProcessLoaderEntry.c)
 *     MiRememberUnloadedDriver @ 0x1407484D4 (MiRememberUnloadedDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall MiReleaseResourceLite(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(a1, v2, v3, v4);
}
