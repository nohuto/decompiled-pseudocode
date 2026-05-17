/*
 * XREFs of _RtlpHpExtrasReportBusyBlock@8 @ 0x4B37844B
 * Callers:
 *     _RtlpHpLargeAllocReport@12 @ 0x4B37A12B (_RtlpHpLargeAllocReport@12.c)
 *     _RtlpHpSegReportBusyBlock@20 @ 0x4B37D486 (_RtlpHpSegReportBusyBlock@20.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlpHpExtrasReportBusyBlock(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  int v4; // eax
  __int16 result; // ax
  signed __int32 v6; // [esp+4h] [ebp-4h] BYREF

  _InterlockedOr(&v6, 0);
  v2 = *(_DWORD *)a2 + *(_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(a1 + 12) & 0x10000000) != 0 )
    v2 += 8;
  v3 = (v2 + 7) & 0xFFFFFFF8;
  v4 = *(_DWORD *)(v3 + 4);
  *(_WORD *)(a2 + 10) |= 0x10u;
  *(_DWORD *)(a2 + 12) = v4;
  *(_WORD *)(a2 + 10) |= *(_BYTE *)(v3 + 2) >> 4 << 8;
  result = *(_WORD *)v3;
  *(_WORD *)(a2 + 16) = *(_WORD *)v3;
  return result;
}
