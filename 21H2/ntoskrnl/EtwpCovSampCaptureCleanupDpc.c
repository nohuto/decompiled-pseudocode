/*
 * XREFs of EtwpCovSampCaptureCleanupDpc @ 0x140635DA0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureCleanupLookasides @ 0x140635DB8 (EtwpCovSampCaptureCleanupLookasides.c)
 */

void __fastcall EtwpCovSampCaptureCleanupDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  EtwpCovSampCaptureCleanupLookasides(DeferredContext);
}
