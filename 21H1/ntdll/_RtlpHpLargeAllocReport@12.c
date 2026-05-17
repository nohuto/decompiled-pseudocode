/*
 * XREFs of _RtlpHpLargeAllocReport@12 @ 0x4B37A12B
 * Callers:
 *     _RtlpHpLargeWalkHeap@8 @ 0x4B37A78A (_RtlpHpLargeWalkHeap@8.c)
 * Callees:
 *     _RtlpHpExtrasReportBusyBlock@8 @ 0x4B37844B (_RtlpHpExtrasReportBusyBlock@8.c)
 */

__int16 __fastcall RtlpHpLargeAllocReport(int a1, int a2, int a3)
{
  unsigned int v3; // esi
  int v4; // eax

  *(_DWORD *)a3 = *(_DWORD *)(a2 + 12) & 0xFFFF0000;
  v3 = (*(_DWORD *)(a2 + 16) & 0xFFFFF000) - *(unsigned __int16 *)(a2 + 12);
  *(_BYTE *)(a3 + 9) = 64;
  *(_DWORD *)(a3 + 4) = v3;
  *(_WORD *)(a3 + 10) = 16385;
  *(_BYTE *)(a3 + 8) = *(_BYTE *)(a2 + 12);
  v4 = *(unsigned __int16 *)(a2 + 12);
  *(_DWORD *)(a3 + 20) = v4;
  if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
    LOWORD(v4) = RtlpHpExtrasReportBusyBlock(a1, a3);
  return v4;
}
