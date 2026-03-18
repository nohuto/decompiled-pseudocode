/*
 * XREFs of IoDiscardDeferredLiveDumpData @ 0x14093A908
 * Callers:
 *     DbgkpWerCleanupContext @ 0x14080B79C (DbgkpWerCleanupContext.c)
 * Callees:
 *     IopLiveDumpTraceInterfaceEnd @ 0x14055B654 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x14055B7B0 (IopLiveDumpTraceInterfaceStart.c)
 *     IopLiveDumpReleaseResources @ 0x14093CFC8 (IopLiveDumpReleaseResources.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoDiscardDeferredLiveDumpData(PVOID P)
{
  IopLiveDumpTraceInterfaceStart();
  IopLiveDumpTraceInterfaceEnd((__int64)P, 2LL, 0);
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag(P, 0x706D644Cu);
  return 0LL;
}
