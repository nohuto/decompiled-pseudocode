/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x1406FFCA8
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x14066B214 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x140939B88 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 12); (_DWORD)result; result = *(unsigned int *)(a1 + 12) )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&EtwpShortTime);
  return result;
}
