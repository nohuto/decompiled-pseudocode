/*
 * XREFs of sub_180033C98 @ 0x180033C98
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_180035534 @ 0x180035534 (sub_180035534.c)
 * Callees:
 *     sub_180033D1C @ 0x180033D1C (sub_180033D1C.c)
 */

__int64 __fastcall sub_180033C98(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v4; // eax
  int v5; // r11d
  unsigned int v6; // r11d
  int v7; // eax
  unsigned int v8; // r11d

  v2 = 0;
  if ( (*(_BYTE *)(a2 + 1160) & 8) != 0 || (v4 = 1, (*(_BYTE *)(a2 + 1162) & 8) != 0) )
    v4 = 0;
  v5 = 0;
  if ( (*(_WORD *)(a2 + 1464) & 0x200) == 0 )
    v5 = v4;
  v6 = ~(*(_DWORD *)(a2 + 1240) >> 2) & v5;
  if ( v6 )
  {
    v7 = sub_180033D1C(a1, a2, 2LL);
    if ( ((unsigned __int8)v7 & (unsigned __int8)*(_DWORD *)(a2 + 1244) & 0x27) == v7 )
      return v8;
    return v2;
  }
  return v6;
}
