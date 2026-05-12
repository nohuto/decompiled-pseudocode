/*
 * XREFs of RaidIsDmaInitialized @ 0x1C007A13C
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C002BA58 (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x1C0031540 (RaidInitializePerfOpts.c)
 *     StorPortGetUncachedExtension @ 0x1C00393E0 (StorPortGetUncachedExtension.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
