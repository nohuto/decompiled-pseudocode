/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C007E550
 * Callers:
 *     PortTraceInitTracing @ 0x1C005A874 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitDpc @ 0x1C005A5D8 (PortpErrorInitDpc.c)
 *     PortpErrorInitRecords @ 0x1C007E574 (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(char *DeferredContext)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(DeferredContext);
}
