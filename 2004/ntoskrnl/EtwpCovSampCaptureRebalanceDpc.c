/*
 * XREFs of EtwpCovSampCaptureRebalanceDpc @ 0x1405A9BD0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

void __fastcall EtwpCovSampCaptureRebalanceDpc(
        struct _KDPC *Dpc,
        struct _KEVENT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  DeferredContext[29].Header.SignalState = MEMORY[0xFFFFF78000000320];
  KeSetEvent(DeferredContext + 28, 0, 0);
}
