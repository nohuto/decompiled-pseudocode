/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C007CFA8
 * Callers:
 *     PortTraceInitTracing @ 0x1C0059204 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitDpc @ 0x1C0058F68 (PortpErrorInitDpc.c)
 *     PortpErrorInitRecords @ 0x1C007CFCC (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(char *DeferredContext)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(DeferredContext);
}
