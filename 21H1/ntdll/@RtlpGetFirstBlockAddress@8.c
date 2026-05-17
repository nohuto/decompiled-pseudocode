/*
 * XREFs of @RtlpGetFirstBlockAddress@8 @ 0x4B370C0F
 * Callers:
 *     @RtlpSubSegmentDebugInitialize@28 @ 0x4B370CFD (@RtlpSubSegmentDebugInitialize@28.c)
 *     _RtlpWalkLFHBlock@12 @ 0x4B371E16 (_RtlpWalkLFHBlock@12.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall RtlpGetFirstBlockAddress(unsigned __int16 *a1, int a2)
{
  unsigned __int16 v2; // ax

  v2 = a1[11];
  if ( (v2 & 1) != 0 )
    return ((a2 + 4095) & 0xFFFFF000) + ((8 * a1[10] + 4088) & 0xFFFFF000) - 8 * a1[10];
  if ( (v2 & 2) != 0 )
    return ((a2 + 4095) & 0xFFFFF000) + 4096;
  return a2
       + ((unsigned __int16)a2 ^ (unsigned __int16)RtlpLFHKey ^ *(unsigned __int16 *)(a2 + 16) ^ *(unsigned __int16 *)(**(_DWORD **)a1 + 12));
}
