/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x14099781C
 * Callers:
 *     PopWriteHiberImage @ 0x140996C74 (PopWriteHiberImage.c)
 *     ConsumerGetBuffer @ 0x14099714C (ConsumerGetBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x1409976AC (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140997778 (ProducerGetBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140997874 (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x1409979AC (ConsumerPeekAndConsumeBuffer.c)
 *     PopRequestRead @ 0x1409B4954 (PopRequestRead.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     KdCheckForDebugBreak @ 0x140383898 (KdCheckForDebugBreak.c)
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
