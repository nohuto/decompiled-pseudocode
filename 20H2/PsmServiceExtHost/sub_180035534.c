/*
 * XREFs of sub_180035534 @ 0x180035534
 * Callers:
 *     sub_180035480 @ 0x180035480 (sub_180035480.c)
 * Callees:
 *     sub_18000FFE4 @ 0x18000FFE4 (sub_18000FFE4.c)
 *     sub_1800223BC @ 0x1800223BC (sub_1800223BC.c)
 *     sub_180033C98 @ 0x180033C98 (sub_180033C98.c)
 *     sub_180033D1C @ 0x180033D1C (sub_180033D1C.c)
 *     sub_18007D71C @ 0x18007D71C (sub_18007D71C.c)
 */

__int64 __fastcall sub_180035534(__int64 a1)
{
  unsigned int v2; // ebx
  bool v3; // zf
  int v4; // eax
  unsigned int v6; // eax
  __int64 v7; // rsi
  int v8; // ebx

  if ( (*(_BYTE *)(a1 + 836) & 1) != 0 )
  {
    v6 = sub_18007D71C(a1 + 64);
    v3 = *(_QWORD *)(a1 + 656) == 0LL;
    v2 = v6;
  }
  else
  {
    v2 = 0;
    v3 = (unsigned int)sub_1800223BC(a1, 3) == 0;
  }
  if ( !v3 )
  {
    v4 = *(_DWORD *)(a1 + 624);
    if ( v4 != 2 )
    {
      if ( v4 == 4 )
      {
        if ( (*(_BYTE *)(a1 + 1240) & 1) != 0 )
          v2 |= 0x40u;
      }
      else if ( v4 != 8 )
      {
        return v2;
      }
    }
    if ( (v2 & 8) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 48) + 400LL;
      v8 = sub_180033D1C(v7, a1, 0) | v2;
      v2 = sub_18000FFE4(v7, a1) | v8;
      if ( (unsigned int)sub_180033C98(v7, a1) )
        v2 ^= ((unsigned __int8)v2 ^ (unsigned __int8)(8 * *(_DWORD *)(v7 + 108))) & 0x10;
    }
  }
  return v2;
}
