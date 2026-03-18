/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x140780CA0
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x14077FE0C (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x14093933C (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402085B0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpLogAlwaysPresentRundown(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, a2, 0, 0xF3Au, 0x401802u);
  EtwpLogKernelEvent(0LL, a1, a2, 0, 8u, 0x401802u);
}
