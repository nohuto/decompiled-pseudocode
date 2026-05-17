/*
 * XREFs of __aullshr @ 0x4B2F6840
 * Callers:
 *     _RtlpVerGetConditionMask@12 @ 0x4B2AE80E (_RtlpVerGetConditionMask@12.c)
 *     _RtlSwitchedVVI@16 @ 0x4B2B0060 (_RtlSwitchedVVI@16.c)
 *     _RtlQueryPerformanceCounter@4 @ 0x4B2DBC20 (_RtlQueryPerformanceCounter@4.c)
 *     _RtlFindLeastSignificantBit@8 @ 0x4B34EC70 (_RtlFindLeastSignificantBit@8.c)
 *     _RtlFindMostSignificantBit@8 @ 0x4B34ED50 (_RtlFindMostSignificantBit@8.c)
 *     _RtlLargeIntegerToChar@16 @ 0x4B350590 (_RtlLargeIntegerToChar@16.c)
 *     _RtlpHpLfhSubsegmentFreeBlock@16 @ 0x4B377416 (_RtlpHpLfhSubsegmentFreeBlock@16.c)
 *     _RtlpHpLfhSubsegmentSizeBlock@16 @ 0x4B377A83 (_RtlpHpLfhSubsegmentSizeBlock@16.c)
 *     _RtlpHpLfhSubsegmentWalk@28 @ 0x4B377B9C (_RtlpHpLfhSubsegmentWalk@28.c)
 *     _RtlpHpVsChunkComputeCost@16 @ 0x4B37E9EC (_RtlpHpVsChunkComputeCost@16.c)
 *     _RtlpHpVsChunkSplit@24 @ 0x4B37EE0F (_RtlpHpVsChunkSplit@24.c)
 *     _RtlpHpVsSubsegmentInitialize@16 @ 0x4B37FED6 (_RtlpHpVsSubsegmentInitialize@16.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __usercall _aullshr@<edx:eax>(unsigned __int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  if ( a2 >= 0x40u )
    return 0LL;
  else
    return a1 >> a2;
}
