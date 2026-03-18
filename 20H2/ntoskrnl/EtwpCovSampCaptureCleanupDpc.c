/*
 * XREFs of EtwpCovSampCaptureCleanupDpc @ 0x1405ACF10
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureCleanupLookasides @ 0x1405ACF28 (EtwpCovSampCaptureCleanupLookasides.c)
 */

void __fastcall EtwpCovSampCaptureCleanupDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  EtwpCovSampCaptureCleanupLookasides(DeferredContext);
}
