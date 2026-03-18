/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x1405F22E4
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1405F2E4C (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1409388E8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax

  for ( result = *(unsigned int *)(a1 + 12); (_DWORD)result; result = *(unsigned int *)(a1 + 12) )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&EtwpShortTime);
  return result;
}
