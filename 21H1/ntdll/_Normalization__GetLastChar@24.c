/*
 * XREFs of _Normalization__GetLastChar@24 @ 0x4B367495
 * Callers:
 *     _Normalization__IsNormalized@16 @ 0x4B3676FC (_Normalization__IsNormalized@16.c)
 * Callees:
 *     <none>
 */

int __fastcall Normalization__GetLastChar(int a1, int a2, _DWORD *a3, int a4, _BYTE *a5, _BYTE *a6)
{
  _WORD *v6; // edx
  int v7; // esi
  unsigned __int8 v8; // al
  char v9; // bl
  char v10; // cl
  char v11; // cl

  v6 = (_WORD *)(a2 - 2);
  if ( (_WORD *)*a3 == v6 )
    return *(_DWORD *)a4;
  if ( (unsigned __int16)(*v6 + 10240) <= 0x7FFu && (_WORD *)*a3 == --v6 )
    return *(_DWORD *)a4;
  v7 = (unsigned __int16)*v6;
  if ( (unsigned int)v7 >= 0xD800 && (unsigned int)v7 <= 0xDFFF )
    v7 += ((unsigned __int16)*(v6 - 1) - 55287) << 10;
  v8 = *(_BYTE *)((v7 >> 7) + *(_DWORD *)(a1 + 20));
  if ( v8 )
  {
    v11 = *(_BYTE *)((v7 & 0x7F) + (v8 << 7) + *(_DWORD *)(a1 + 24) - 128);
    v9 = v11 & 0x3F;
    v10 = v11 & 0xC0;
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  *a6 = v10;
  *a5 = v9;
  *a3 = v6;
  *(_DWORD *)a4 = v7;
  return v7;
}
