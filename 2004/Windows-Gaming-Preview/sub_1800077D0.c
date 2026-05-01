/*
 * XREFs of sub_1800077D0 @ 0x1800077D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007308 @ 0x180007308 (sub_180007308.c)
 */

int __fastcall sub_1800077D0(unsigned int a1, unsigned int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  bool v7; // al
  int result; // eax
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  v7 = sub_180007308((__int64)&v9, a1, (a2 & 0xFFFFFF7F) - 2 <= 1, (a2 >> 7) & 1, a5);
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
