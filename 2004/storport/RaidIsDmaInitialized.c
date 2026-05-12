/*
 * XREFs of RaidIsDmaInitialized @ 0x1C0078C34
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C002AC04 (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x1C00306D0 (RaidInitializePerfOpts.c)
 *     StorPortGetUncachedExtension @ 0x1C0038570 (StorPortGetUncachedExtension.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
