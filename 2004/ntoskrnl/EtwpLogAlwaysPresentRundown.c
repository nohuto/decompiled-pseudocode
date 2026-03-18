/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x1407802C0
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x14077F430 (EtwpUpdateGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x14093A5DC (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14029B0C0 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpLogAlwaysPresentRundown(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, a2, 0, 0xF3Au, 0x401802u);
  EtwpLogKernelEvent(0LL, a1, a2, 0, 8u, 0x401802u);
}
