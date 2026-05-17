/*
 * XREFs of _RtlpGetBucketIndex@8 @ 0x4B35B542
 * Callers:
 *     _RtlpPopulateContext@12 @ 0x4B35B59E (_RtlpPopulateContext@12.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RtlpGetBucketIndex(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int result; // eax

  v3 = (69069 * (a2 >> a1[1]) + 1) & 0xFFFF0000 | ((1103515245 * (a2 >> a1[1]) + 12345) >> 16);
  result = v3 & a1[4];
  if ( result < a1[3] )
    return v3 & ((2 * a1[4]) | 1);
  return result;
}
