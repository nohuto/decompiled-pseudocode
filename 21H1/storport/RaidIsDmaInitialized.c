/*
 * XREFs of RaidIsDmaInitialized @ 0x1C0078D10
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C002A664 (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x1C0030120 (RaidInitializePerfOpts.c)
 *     StorPortGetUncachedExtension @ 0x1C0037FF0 (StorPortGetUncachedExtension.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
