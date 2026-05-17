/*
 * XREFs of _RtlpLfhIncrementDataSlot@0 @ 0x4B3079D9
 * Callers:
 *     @RtlpSubSegmentInitialize@24 @ 0x4B2C37B0 (@RtlpSubSegmentInitialize@24.c)
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpLocalInfoAllocFromCache@8 @ 0x4B37109C (_RtlpLocalInfoAllocFromCache@8.c)
 *     _RtlpHpLfhSubsegmentAllocateBlock@16 @ 0x4B376D27 (_RtlpHpLfhSubsegmentAllocateBlock@16.c)
 * Callees:
 *     _RtlpHeapGenerateRandomValue32@0 @ 0x4B2B22F0 (_RtlpHeapGenerateRandomValue32@0.c)
 */

__int16 __stdcall RtlpLfhIncrementDataSlot()
{
  struct _TEB *v0; // esi
  unsigned __int16 HeapData_high; // dx
  __int16 v2; // di
  __int16 RandomValue32; // ax
  __int16 v4; // dx
  __int16 result; // ax

  v0 = NtCurrentTeb();
  HeapData_high = HIWORD(v0->HeapData);
  v2 = (unsigned __int8)HeapData_high;
  if ( (unsigned __int8)HeapData_high == HIBYTE(HeapData_high) )
  {
    RandomValue32 = RtlpHeapGenerateRandomValue32();
    v4 = (RandomValue32 << 8) | (unsigned __int8)(RandomValue32 + 1);
  }
  else
  {
    v4 = (unsigned __int8)(HeapData_high ^ (HeapData_high + 1)) ^ HeapData_high;
  }
  result = v2;
  HIWORD(v0->HeapData) = v4;
  return result;
}
