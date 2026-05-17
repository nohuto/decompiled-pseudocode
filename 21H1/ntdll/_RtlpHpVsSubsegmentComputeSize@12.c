/*
 * XREFs of _RtlpHpVsSubsegmentComputeSize@12 @ 0x4B37FD68
 * Callers:
 *     _RtlpHpVsSubsegmentCreate@12 @ 0x4B37FDB3 (_RtlpHpVsSubsegmentCreate@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpVsSubsegmentComputeSize(int a1, int a2, unsigned int *a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // ecx

  v3 = (a2 + 4135) & 0xFFFFF000;
  v4 = 2 * a2 + 40;
  *a3 = v3;
  if ( ((v4 - 1) & v4) != 0 )
  {
    _BitScanReverse(&v5, v4);
    v4 = 1 << (v5 + 1);
  }
  if ( v4 <= 0x10000 )
    v4 = 0x10000;
  if ( v4 >= 0x40000 )
    return 0x40000;
  return v4;
}
