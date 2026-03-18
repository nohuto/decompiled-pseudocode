/*
 * XREFs of EtwpCovSampCaptureCleanupDpc @ 0x1405A93B0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1405A93C8 (EtwpCovSampCaptureCleanupLookasides.c)
 */

void __fastcall EtwpCovSampCaptureCleanupDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  EtwpCovSampCaptureCleanupLookasides(DeferredContext);
}
