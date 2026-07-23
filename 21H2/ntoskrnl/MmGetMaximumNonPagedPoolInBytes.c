/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x140251EEC
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1406B66E8 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x14094C884 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140C4EF70 << 12;
}
