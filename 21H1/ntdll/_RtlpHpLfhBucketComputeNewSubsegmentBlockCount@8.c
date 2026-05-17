/*
 * XREFs of _RtlpHpLfhBucketComputeNewSubsegmentBlockCount@8 @ 0x4B3760A1
 * Callers:
 *     _RtlpHpLfhSubsegmentCreate@12 @ 0x4B376F41 (_RtlpHpLfhSubsegmentCreate@12.c)
 * Callees:
 *     _RtlpGetDesiredBlockNumber@16 @ 0x4B379B03 (_RtlpGetDesiredBlockNumber@16.c)
 *     _RtlpGetSubSegmentBlockCount@16 @ 0x4B379B33 (_RtlpGetSubSegmentBlockCount@16.c)
 */

int __thiscall RtlpHpLfhBucketComputeNewSubsegmentBlockCount(int this)
{
  unsigned int v2; // ebx

  v2 = *(unsigned __int8 *)(this + 2);
  RtlpGetDesiredBlockNumber(*(_DWORD *)(this + 28), 0);
  return RtlpGetSubSegmentBlockCount(v2 > 1, *(_DWORD *)(this + 32) != 0);
}
