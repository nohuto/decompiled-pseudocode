/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x140667B14
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x14066A038 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x14093F9B8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 12); (_DWORD)result; result = *(unsigned int *)(a1 + 12) )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&EtwpShortTime);
  return result;
}
