/*
 * XREFs of _RtlpHpLfhSubsegmentComputeCommitUnit@8 @ 0x4B376ED2
 * Callers:
 *     _RtlpHpLfhSubsegmentCreate@12 @ 0x4B376F41 (_RtlpHpLfhSubsegmentCreate@12.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RtlpHpLfhSubsegmentComputeCommitUnit(unsigned int a1, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx

  if ( (RtlpHpAppCompatFlags & 4) != 0 )
    return a1;
  v3 = 2 * a2;
  if ( ((v3 - 1) & v3) != 0 )
  {
    _BitScanReverse(&v4, v3);
    v3 = 1 << (v4 + 1);
  }
  if ( v3 <= 0x1000 )
    v3 = 4096;
  if ( v3 >= a1 )
    return a1;
  return v3;
}
