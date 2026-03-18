/*
 * XREFs of PopHiberCheckForDebugBreak @ 0x1409917AC
 * Callers:
 *     PopWriteHiberImage @ 0x140990C04 (PopWriteHiberImage.c)
 *     ConsumerGetBuffer @ 0x1409910DC (ConsumerGetBuffer.c)
 *     ProducerConsumerBufferComplete @ 0x14099163C (ProducerConsumerBufferComplete.c)
 *     ProducerGetBuffer @ 0x140991708 (ProducerGetBuffer.c)
 *     PopDecompressHiberBlocks @ 0x140991804 (PopDecompressHiberBlocks.c)
 *     ConsumerPeekAndConsumeBuffer @ 0x14099193C (ConsumerPeekAndConsumeBuffer.c)
 *     PopRequestRead @ 0x1409AE9E4 (PopRequestRead.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     KdCheckForDebugBreak @ 0x140381BB8 (KdCheckForDebugBreak.c)
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
