/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x140639A4C
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x140638A20 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x14093D358 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 12); (_DWORD)result; result = *(unsigned int *)(a1 + 12) )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&EtwpShortTime);
  return result;
}
