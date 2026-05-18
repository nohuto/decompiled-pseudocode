/*
 * XREFs of sub_180020020 @ 0x180020020
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001BA94 @ 0x18001BA94 (sub_18001BA94.c)
 */

__int64 __fastcall sub_180020020(int a1, unsigned int a2, __int64 a3)
{
  bool v3; // al
  unsigned int v4; // ecx
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  v3 = sub_18001BA94((int)&v6, a1, (a2 & 0xFFFFFF7F) - 2 <= 1, (a2 >> 7) & 1, a3);
  v4 = 0;
  if ( v3 )
    v4 = v6;
  if ( (_DWORD)v7 )
    v4 |= 0x80u;
  if ( HIDWORD(v7) )
    v4 |= 0x40u;
  return v4;
}
