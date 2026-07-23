/*
 * XREFs of BgpRasGetGlyphTextCellDimensions @ 0x14039C90C
 * Callers:
 *     BgpFoGetTextMetrics @ 0x14039C8DC (BgpFoGetTextMetrics.c)
 * Callees:
 *     BgpFmRoundUp @ 0x14039C9B8 (BgpFmRoundUp.c)
 */

__int64 __fastcall BgpRasGetGlyphTextCellDimensions(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v6; // rbx
  int v7; // r8d
  unsigned int v8; // ecx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 16);
  v6 = 72LL * *(unsigned __int16 *)(v3 + 120);
  *a2 = BgpFmRoundUp(
          ((*(unsigned int *)(v3 + 96) * v4 * (*(__int16 *)(v3 + 82) - *(__int16 *)(v3 + 84))) << 6) / v6,
          ((*(unsigned int *)(v3 + 96) * v4 * (*(__int16 *)(v3 + 82) - *(__int16 *)(v3 + 84))) << 6) % v6,
          ((*(unsigned int *)(v3 + 96) * v4 * *(__int16 *)(v3 + 80)) << 6) / v6)
      + 2;
  v8 = (v7 >> 6) | 0xFC000000;
  if ( v7 >= 0 )
    v8 = v7 >> 6;
  result = v8 + 1;
  if ( (v7 & 0x20) == 0 )
    result = v8;
  *a3 = result;
  return result;
}
