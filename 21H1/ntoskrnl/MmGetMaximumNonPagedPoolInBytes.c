/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1402DE578
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x14067AC08 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x140947D84 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140C4EE70 << 12;
}
