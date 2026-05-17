/*
 * XREFs of _RtlpHpVaMgrRangeSplit@12 @ 0x4B37B2CB
 * Callers:
 *     _RtlpHpVaMgrAlloc@12 @ 0x4B37A845 (_RtlpHpVaMgrAlloc@12.c)
 *     _RtlpHpVaMgrCtxFree@12 @ 0x4B37AC12 (_RtlpHpVaMgrCtxFree@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpVaMgrRangeSplit(int a1, int a2, int a3)
{
  int v3; // ebx
  __int16 v4; // ax
  int v5; // esi
  unsigned int v6; // eax

  v3 = a2 + 16 * a3;
  v4 = *(_WORD *)(a2 + 12) - a3;
  *(_WORD *)(v3 + 14) = a3;
  *(_WORD *)(v3 + 12) = v4;
  *(_WORD *)(a2 + 12) = a3;
  v5 = *(unsigned __int16 *)(v3 + 12);
  *(_BYTE *)v3 = *(_BYTE *)v3 & 0xFC | 1;
  *(_DWORD *)(v3 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(v3 + 8) = *(_DWORD *)(a2 + 8);
  v6 = v3 + 16 * v5;
  if ( v6 < 16 * *(unsigned __int16 *)(a1 + 20) + (a2 & (-16 * (unsigned int)*(unsigned __int16 *)(a1 + 20))) )
    *(_WORD *)(v6 + 14) = v5;
  return a2 + 16 * a3;
}
