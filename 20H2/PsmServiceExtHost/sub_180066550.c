/*
 * XREFs of sub_180066550 @ 0x180066550
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038EBC @ 0x180038EBC (sub_180038EBC.c)
 */

int __fastcall sub_180066550(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4, __int64 a5)
{
  bool v7; // al
  bool v8; // zf
  int v9; // ecx
  int v10; // edx
  int v11; // edx
  int result; // eax
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  v7 = sub_180038EBC((int)&v13, a1, (a2 & 0xFFFFFF7F) - 2 <= 1, (a2 >> 7) & 1, a5);
  *a4 = v14;
  if ( v7 )
  {
    v8 = DWORD2(v13) == 0;
    v9 = BYTE4(v13);
    v10 = BYTE4(v13);
    *a3 = HIDWORD(v13);
    v11 = v10 | 0x100;
    if ( v8 )
      v11 = v9;
    result = v11 | 0x80;
    if ( !HIDWORD(v14) )
      return v11;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
  return result;
}
