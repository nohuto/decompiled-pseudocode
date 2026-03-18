/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1402FFD3C
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1406CAF94 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x140949124 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140C4ED30 << 12;
}
