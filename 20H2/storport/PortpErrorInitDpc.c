/*
 * XREFs of PortpErrorInitDpc @ 0x1C005A5D8
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1C007E550 (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall PortpErrorInitDpc(char *DeferredContext)
{
  KeInitializeDpc((PRKDPC)(DeferredContext + 88), (PKDEFERRED_ROUTINE)PortpErrorDrainListDpc, DeferredContext);
}
