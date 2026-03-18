/*
 * XREFs of EtwpRotateCompressionTargetIfNeeded @ 0x1405A7BE0
 * Callers:
 *     EtwpCompressBuffer @ 0x1405A6AB0 (EtwpCompressBuffer.c)
 *     EtwpCompressPendingBuffers @ 0x1405A6E38 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpRotateCompressionTarget @ 0x1405A7B74 (EtwpRotateCompressionTarget.c)
 */

unsigned int *__fastcall EtwpRotateCompressionTargetIfNeeded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int *result; // rax

  v4 = *(_QWORD *)(a1 + 1168);
  if ( !v4 )
    return EtwpRotateCompressionTarget(a1, a2, a3, a4);
  result = (unsigned int *)*(unsigned int *)(v4 + 8);
  a2 = (unsigned int)(*(_DWORD *)(a1 + 4) - (_DWORD)result);
  if ( (unsigned int)a2 <= 0x148 )
    return EtwpRotateCompressionTarget(a1, a2, a3, a4);
  return result;
}
