/*
 * XREFs of EtwpRotateCompressionTarget @ 0x140635600
 * Callers:
 *     EtwpCompressBuffer @ 0x14063499C (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x14063566C (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpDequeueFreeBuffer @ 0x1402E18F8 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402E1AB0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x1402E1D0C (EtwpGetLoggerTimeStamp.c)
 */

unsigned int *__fastcall EtwpRotateCompressionTarget(__int64 a1)
{
  unsigned int *v1; // rdi
  unsigned int *result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1152) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1152) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1152), 5u);
  }
  result = (unsigned int *)*(unsigned int *)(a1 + 1168);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1);
    v1 = result;
  }
  *(_QWORD *)(a1 + 1152) = v1;
  return result;
}
