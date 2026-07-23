/*
 * XREFs of _RtlpHpSegReAlloc@16 @ 0x4B37D316
 * Callers:
 *     _RtlpHpReAllocateHeap@24 @ 0x4B37955B (_RtlpHpReAllocateHeap@24.c)
 * Callees:
 *     _RtlpHpExtrasMove@20 @ 0x4B378400 (_RtlpHpExtrasMove@20.c)
 *     _RtlpHpExtrasSetPresent@12 @ 0x4B378497 (_RtlpHpExtrasSetPresent@12.c)
 *     _RtlpHpReallocMove@16 @ 0x4B37981A (_RtlpHpReallocMove@16.c)
 *     _RtlpHpSegDescriptorValidate@8 @ 0x4B37B82D (_RtlpHpSegDescriptorValidate@8.c)
 *     _RtlpHpSegPageRangeCommit@24 @ 0x4B37CC3B (_RtlpHpSegPageRangeCommit@24.c)
 *     _RtlpHpSegPageRangeShrink@16 @ 0x4B37D0E7 (_RtlpHpSegPageRangeShrink@16.c)
 *     _RtlpHpVsContextGrowInPlace@20 @ 0x4B37F6C2 (_RtlpHpVsContextGrowInPlace@20.c)
 */

int __fastcall RtlpHpSegReAlloc(int a1, int a2, void *a3, int *a4)
{
  int v4; // esi
  int v5; // ebx
  int v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned __int8 v10; // cl
  unsigned int v11; // ecx
  unsigned int v13; // [esp+10h] [ebp-10h]
  unsigned int v14; // [esp+14h] [ebp-Ch]

  v4 = a1;
  v5 = RtlpHpSegDescriptorValidate(a1, (int)a3);
  if ( !v5 )
    return -1;
  v7 = a4[4];
  v8 = (v7 + 4095) >> 12;
  v14 = v8;
  if ( v8 << 12 < v7 )
    return 0;
  v9 = ((1 << *(_BYTE *)(v4 + 5)) + v8 - 1) >> *(_BYTE *)(v4 + 5);
  v10 = *(_BYTE *)(v5 + 12) & 0xC;
  v13 = v9;
  if ( v10 < 8u && v9 <= *(unsigned __int8 *)(v5 + 15) )
  {
    v6 = 0;
    v11 = (unsigned __int16)~(*(_DWORD *)(v5 + 12) >> 8);
    if ( v14 <= v11 || RtlpHpSegPageRangeCommit(a1, v5, v11, v14 - v11, 0, 0) >= 0 )
    {
      if ( a4[2] )
        RtlpHpExtrasMove((int)a3, *a4, (int)a3, a4[3], a2);
      if ( v13 < *(unsigned __int8 *)(v5 + 15) )
        RtlpHpSegPageRangeShrink(a1, v5, v13, a2);
      *(_DWORD *)(v5 + 4) = (v13 << *(_BYTE *)(a1 + 4)) - a4[3];
      return (int)a3;
    }
    return v6;
  }
  if ( v10 != 12 || a4[3] <= (unsigned int)*a4 || (unsigned int)a4[4] > 0x20000 )
  {
LABEL_21:
    if ( (a2 & 0x2000000) == 0 )
      return (int)RtlpHpReallocMove(*(unsigned __int16 **)(v4 + 36), a3, a4, a2);
    return 0;
  }
  v6 = RtlpHpVsContextGrowInPlace(a3, a4, a2);
  if ( !v6 )
  {
    v4 = a1;
    goto LABEL_21;
  }
  if ( a4[2] )
  {
    RtlpHpExtrasMove((int)a3, *a4, (int)a3, a4[3], a2);
    RtlpHpExtrasSetPresent(*(_DWORD *)(a1 + 36), v6, a2);
  }
  return v6;
}
