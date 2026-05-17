/*
 * XREFs of _RtlpGetSubSegmentBlockCount@16 @ 0x4B379B33
 * Callers:
 *     _RtlpHpLfhBucketComputeNewSubsegmentBlockCount@8 @ 0x4B3760A1 (_RtlpHpLfhBucketComputeNewSubsegmentBlockCount@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpGetSubSegmentBlockCount(unsigned int a1, unsigned int a2, char a3, int a4)
{
  char v4; // al

  v4 = a3;
  if ( a1 < 0x100 )
    v4 = a3 - 1;
  if ( a4 )
    --v4;
  if ( a2 < 1 << (3 - v4) )
    a2 = 1 << (3 - v4);
  if ( a2 < 4 )
    a2 = 4;
  if ( a2 > 0x400 )
    return 1024;
  return a2;
}
