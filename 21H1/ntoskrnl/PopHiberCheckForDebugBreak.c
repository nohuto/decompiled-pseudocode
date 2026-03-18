/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x140990A5C
 * Callers:
 *     PopDecompressHiberBlocks @ 0x14098D8EC (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x14098DA24 (ConsumerPeekAndConsumeBuffer.c)
 *     PopWriteHiberImage @ 0x14098FEB4 (PopWriteHiberImage.c)
 *     ConsumerGetBuffer @ 0x14099038C (ConsumerGetBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x1409908EC (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x1409909B8 (ProducerGetBuffer.c)
 *     PopRequestRead @ 0x1409ADB84 (PopRequestRead.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     KdCheckForDebugBreak @ 0x140381378 (KdCheckForDebugBreak.c)
 */

LARGE_INTEGER PopHiberCheckForDebugBreak()
{
  LARGE_INTEGER result; // rax

  result.QuadPart = (LONGLONG)KeGetCurrentPrcb();
  if ( !*(_DWORD *)(result.QuadPart + 36) )
  {
    result.QuadPart = (unsigned int)(PopDebugCount + 1);
    PopDebugCount = result.LowPart;
    if ( (result.LowPart & 0x3F) == 0 )
    {
      KdCheckForDebugBreak();
      return KeQueryPerformanceCounter(0LL);
    }
  }
  return result;
}
