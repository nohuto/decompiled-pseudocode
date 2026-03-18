/*
 * XREFs of EtwpRotateCompressionTarget @ 0x1405ABDC4
 * Callers:
 *     EtwpCompressBuffer @ 0x1405AAD04 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x1405ABE30 (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x140266AA8 (EtwpGetLoggerTimeStamp.c)
 *     EtwpDequeueFreeBuffer @ 0x1402672C4 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14026747C (EtwpEnqueueAvailableBuffer.c)
 */

unsigned int *__fastcall EtwpRotateCompressionTarget(__int64 a1)
{
  unsigned int *v1; // rdi
  unsigned int *result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1136) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1136) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1136), 5u);
  }
  result = (unsigned int *)*(unsigned int *)(a1 + 1152);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1);
    v1 = result;
  }
  *(_QWORD *)(a1 + 1136) = v1;
  return result;
}
