/*
 * XREFs of ACPIEcGpioDpcRoutine @ 0x1C0053330
 * Callers:
 *     <none>
 * Callees:
 *     AcpiEcCommonDpcHandler @ 0x1C00535C4 (AcpiEcCommonDpcHandler.c)
 *     ACPIEcUnmaskInterrupt @ 0x1C0053670 (ACPIEcUnmaskInterrupt.c)
 */

void __fastcall ACPIEcGpioDpcRoutine(
        struct _KDPC *Dpc,
        _BYTE *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  AcpiEcCommonDpcHandler(DeferredContext);
  if ( (DeferredContext[882] & 1) == 0 )
    ACPIEcUnmaskInterrupt(DeferredContext);
}
