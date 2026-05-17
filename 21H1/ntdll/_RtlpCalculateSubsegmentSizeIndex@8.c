/*
 * XREFs of _RtlpCalculateSubsegmentSizeIndex@8 @ 0x4B379AE0
 * Callers:
 *     _RtlpHpLfhSubsegmentCreate@12 @ 0x4B376F41 (_RtlpHpLfhSubsegmentCreate@12.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RtlpCalculateSubsegmentSizeIndex(unsigned int a1)
{
  unsigned int v1; // eax
  unsigned int result; // eax

  if ( a1 >= 0x78000 )
    a1 = 491520;
  _BitScanReverse(&v1, a1 - 1);
  result = v1 + 1;
  if ( result <= 7 )
    result = 7;
  if ( result >= 0x12 )
    return 18;
  return result;
}
