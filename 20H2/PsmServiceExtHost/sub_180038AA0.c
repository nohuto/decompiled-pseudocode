/*
 * XREFs of sub_180038AA0 @ 0x180038AA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038EBC @ 0x180038EBC (sub_180038EBC.c)
 */

__int64 __fastcall sub_180038AA0(int a1, unsigned int a2, __int64 a3)
{
  char v3; // al
  unsigned int v4; // ecx
  unsigned int v5; // edx
  __int64 result; // rax
  __int64 v7; // [rsp+20h] [rbp-38h]
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v7 = a3;
  v8 = 0LL;
  LOBYTE(a3) = (a2 & 0xFFFFFF7F) - 2 <= 1;
  v9 = 0LL;
  v3 = sub_180038EBC((unsigned int)&v8, a1, a3, (a2 >> 7) & 1, v7);
  v4 = 0;
  if ( v3 )
    v4 = v8;
  v5 = v4 | 0x80;
  if ( !(_DWORD)v9 )
    v5 = v4;
  result = v5 | 0x40;
  if ( !HIDWORD(v9) )
    return v5;
  return result;
}
