/*
 * XREFs of _EtwpWaitForBufferReferenceCount@4 @ 0x4B2EDFCF
 * Callers:
 *     _EtwpFlushActiveBuffers@8 @ 0x4B2EDD0E (_EtwpFlushActiveBuffers@8.c)
 *     _EtwpBufferingModeFlush@4 @ 0x4B38140A (_EtwpBufferingModeFlush@4.c)
 * Callees:
 *     _ZwDelayExecution@8 @ 0x4B2F2CC0 (_ZwDelayExecution@8.c)
 */

int __thiscall EtwpWaitForBufferReferenceCount(_DWORD *this)
{
  int result; // eax
  LARGE_INTEGER DelayInterval; // [esp+4h] [ebp-8h] BYREF

  DelayInterval.QuadPart = -2500000LL;
  while ( 1 )
  {
    result = this[3];
    if ( !result )
      break;
    ZwDelayExecution(0, &DelayInterval);
  }
  return result;
}
