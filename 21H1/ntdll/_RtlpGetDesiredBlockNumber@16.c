/*
 * XREFs of _RtlpGetDesiredBlockNumber@16 @ 0x4B379B03
 * Callers:
 *     _RtlpHpLfhBucketComputeNewSubsegmentBlockCount@8 @ 0x4B3760A1 (_RtlpHpLfhBucketComputeNewSubsegmentBlockCount@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpGetDesiredBlockNumber(int a1, unsigned int a2, unsigned int a3, int a4)
{
  if ( !a1 || a4 )
    return (a3 >> ((a4 != 0) + 3)) / a2;
  else
    return a3;
}
