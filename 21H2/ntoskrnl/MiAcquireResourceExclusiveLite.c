/*
 * XREFs of MiAcquireResourceExclusiveLite @ 0x140581D30
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall MiAcquireResourceExclusiveLite(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  return 1;
}
