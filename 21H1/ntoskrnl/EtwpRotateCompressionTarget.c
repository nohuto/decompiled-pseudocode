/*
 * XREFs of EtwpRotateCompressionTarget @ 0x1405A7B74
 * Callers:
 *     EtwpCompressBuffer @ 0x1405A6AB0 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x1405A7BE0 (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x140240C58 (EtwpGetLoggerTimeStamp.c)
 *     EtwpDequeueFreeBuffer @ 0x140241460 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14024161C (EtwpEnqueueAvailableBuffer.c)
 */

unsigned int *__fastcall EtwpRotateCompressionTarget(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rdi
  unsigned int *result; // rax

  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 1168) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1168) + 16LL) = EtwpGetLoggerTimeStamp(a1, a2, a3, a4);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1168), 5u);
  }
  result = (unsigned int *)*(unsigned int *)(a1 + 1184);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1);
    v4 = result;
  }
  *(_QWORD *)(a1 + 1168) = v4;
  return result;
}
