/*
 * XREFs of MiReleaseResourceLite @ 0x14037208C
 * Callers:
 *     MiProcessLoaderEntry @ 0x140371EB0 (MiProcessLoaderEntry.c)
 *     MiRememberUnloadedDriver @ 0x14075FCB4 (MiRememberUnloadedDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall MiReleaseResourceLite(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(a1, v2, v3, v4);
}
