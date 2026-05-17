/*
 * XREFs of _RtlpHpVsCalculateChunkRequiredSize@8 @ 0x4B37E7E3
 * Callers:
 *     _RtlpHpVsContextAllocateInternal@24 @ 0x4B37F180 (_RtlpHpVsContextAllocateInternal@24.c)
 *     _RtlpHpVsContextGrowInPlace@20 @ 0x4B37F6C2 (_RtlpHpVsContextGrowInPlace@20.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RtlpHpVsCalculateChunkRequiredSize(int a1, int *a2)
{
  int v2; // eax

  v2 = *a2;
  if ( a1 != *a2 )
  {
    v2 += 2;
    *a2 = v2;
  }
  return ((unsigned int)(v2 + 7) >> 3) + 1;
}
