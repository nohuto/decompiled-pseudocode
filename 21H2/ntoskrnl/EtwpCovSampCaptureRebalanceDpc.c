/*
 * XREFs of EtwpCovSampCaptureRebalanceDpc @ 0x1405AF130
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
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
