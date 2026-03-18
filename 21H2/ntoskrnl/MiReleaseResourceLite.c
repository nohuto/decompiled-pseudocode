/*
 * XREFs of MiReleaseResourceLite @ 0x1402D8E00
 * Callers:
 *     MiProcessLoaderEntry @ 0x1402D8C20 (MiProcessLoaderEntry.c)
 *     MmEnumerateSystemImages @ 0x140814DC0 (MmEnumerateSystemImages.c)
 *     MiRememberUnloadedDriver @ 0x14081BBF8 (MiRememberUnloadedDriver.c)
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall MiReleaseResourceLite(__int64 a1)
{
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(a1);
}
