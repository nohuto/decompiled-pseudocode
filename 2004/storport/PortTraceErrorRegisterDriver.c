/*
 * XREFs of PortTraceErrorRegisterDriver @ 0x1C007D050
 * Callers:
 *     PortTraceInitTracing @ 0x1C00599B4 (PortTraceInitTracing.c)
 * Callees:
 *     PortpErrorInitDpc @ 0x1C0059718 (PortpErrorInitDpc.c)
 *     PortpErrorInitRecords @ 0x1C007D074 (PortpErrorInitRecords.c)
 */

void __fastcall PortTraceErrorRegisterDriver(char *DeferredContext)
{
  PortpErrorInitRecords();
  PortpErrorInitDpc(DeferredContext);
}
