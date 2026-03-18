/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1402624B8
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1406EFA84 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x1409F8DD8 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140C534B0 << 12;
}
