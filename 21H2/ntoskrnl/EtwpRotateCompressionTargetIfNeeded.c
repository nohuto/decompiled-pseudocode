/*
 * XREFs of EtwpRotateCompressionTargetIfNeeded @ 0x14063566C
 * Callers:
 *     EtwpCompressBuffer @ 0x14063499C (EtwpCompressBuffer.c)
 *     EtwpCompressPendingBuffers @ 0x140634D24 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpRotateCompressionTarget @ 0x140635600 (EtwpRotateCompressionTarget.c)
 */

unsigned int *__fastcall EtwpRotateCompressionTargetIfNeeded(__int64 a1)
{
  __int64 v1; // rax
  unsigned int *result; // rax

  v1 = *(_QWORD *)(a1 + 1152);
  if ( !v1 )
    return EtwpRotateCompressionTarget(a1);
  result = (unsigned int *)*(unsigned int *)(v1 + 8);
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - (_DWORD)result) <= 0x148 )
    return EtwpRotateCompressionTarget(a1);
  return result;
}
