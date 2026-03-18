/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x14036046C
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x140714EAC (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x14094EEE4 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140C4EDB0 << 12;
}
