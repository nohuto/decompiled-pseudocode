/*
 * XREFs of EtwpWaitForBufferReferenceCount @ 0x180055638
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1800551E4 (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1801108B0 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ZwDelayExecution @ 0x18009D490 (ZwDelayExecution.c)
 */

__int64 __fastcall EtwpWaitForBufferReferenceCount(__int64 a1)
{
  __int64 result; // rax
  LARGE_INTEGER DelayInterval; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 12);
  DelayInterval.QuadPart = -2500000LL;
  while ( (_DWORD)result )
  {
    ZwDelayExecution(0, &DelayInterval);
    result = *(unsigned int *)(a1 + 12);
  }
  return result;
}
