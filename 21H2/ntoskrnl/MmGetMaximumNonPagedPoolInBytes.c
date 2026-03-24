/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1402D3C7C
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1406DF408 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x14094C6B4 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140C4EF30 << 12;
}
