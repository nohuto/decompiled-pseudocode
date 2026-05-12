/*
 * XREFs of PortpErrorInitDpc @ 0x1C0058F68
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1C007CFA8 (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitDpc(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 88), (PKDEFERRED_ROUTINE)PortpErrorDrainListDpc, DeferredContext);
}
