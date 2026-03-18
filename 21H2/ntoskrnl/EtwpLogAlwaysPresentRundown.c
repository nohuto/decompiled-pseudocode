/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x140814C04
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x1403AAEF4 (EtwpUpdateSelectedGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x1409EA2D4 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402AB170 (EtwpLogKernelEvent.c)
 */

void __fastcall EtwpLogAlwaysPresentRundown(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, a2, 0, 0xF3Au, 0x401802u);
  EtwpLogKernelEvent(0LL, a1, a2, 0, 8u, 0x401802u);
}
