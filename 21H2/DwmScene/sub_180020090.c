/*
 * XREFs of sub_180020090 @ 0x180020090
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001BA94 @ 0x18001BA94 (sub_18001BA94.c)
 */

int __fastcall sub_180020090(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4, __int64 a5)
{
  bool v7; // al
  int result; // eax
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]

  v9 = 0LL;
  v10 = 0LL;
  v7 = sub_18001BA94((int)&v9, a1, (a2 & 0xFFFFFF7F) - 2 <= 1, (a2 >> 7) & 1, a5);
  *a4 = v10;
  if ( v7 )
  {
    *a3 = HIDWORD(v9);
    result = BYTE4(v9);
    if ( DWORD2(v9) )
      result = BYTE4(v9) | 0x100;
    if ( HIDWORD(v10) )
      return result | 0x80;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
  return result;
}
