/*
 * XREFs of sub_18003418C @ 0x18003418C
 * Callers:
 *     sub_18006EB44 @ 0x18006EB44 (sub_18006EB44.c)
 * Callees:
 *     sub_180034380 @ 0x180034380 (sub_180034380.c)
 *     sub_1800344D8 @ 0x1800344D8 (sub_1800344D8.c)
 *     sub_180063F00 @ 0x180063F00 (sub_180063F00.c)
 */

signed __int32 *__fastcall sub_18003418C(volatile signed __int32 *a1, signed __int32 *a2)
{
  volatile signed __int32 v2; // eax
  unsigned int v6; // edi
  signed __int32 v7; // eax
  int v8; // r8d
  signed __int32 v9; // r9d
  signed __int32 v10; // edx
  __int64 v11; // r8
  int i; // [rsp+30h] [rbp+8h] BYREF
  int v13; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a1;
  *a2 = *a1;
  if ( (v2 & 6) != 6 )
  {
    v6 = dword_18019E57C;
    if ( !dword_18019E57C )
      v6 = sub_180063F00(&byte_18019E560);
    sub_1800344D8(a1, &v13, &i);
    v7 = *a2;
    v8 = v6 != 0 ? i : 0;
    for ( i = v8; ; v8 = i )
    {
      *a2 = v7;
      v9 = v7;
      v10 = v7;
      if ( v8 && (v7 & 2) == 0 )
      {
        v10 = v7 ^ ((unsigned __int16)v13 ^ (unsigned __int16)v7) & 0x9C1 | 2;
        *a2 = v10;
      }
      v11 = v7 & 4;
      if ( (v7 & 4) == 0 )
      {
        v10 = ((unsigned __int16)v13 ^ (unsigned __int16)v10) & 0x400 ^ v10 | 4;
        *a2 = v10;
      }
      v7 = _InterlockedCompareExchange(a1, v10, v7);
      if ( v9 == v7 )
        break;
    }
    if ( !(_DWORD)v11 )
      sub_180034380(&byte_18019E560, a1, v11, v6);
    if ( (*(_BYTE *)a2 & 2) == 0 )
      *a2 ^= ((unsigned __int16)v13 ^ (unsigned __int16)*a2) & 0x9C1;
  }
  return a2;
}
