/*
 * XREFs of ReadStringDelimited_0 @ 0x4B301548
 * Callers:
 *     __input_s @ 0x4B30166C (__input_s.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     ReadString_0 @ 0x4B3013DC (ReadString_0.c)
 */

int __cdecl ReadStringDelimited_0(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _WORD **a5,
        int a6,
        FILE *a7,
        int a8,
        _DWORD *a9)
{
  unsigned __int8 **v9; // edx
  unsigned __int8 v10; // bl
  unsigned __int8 *v11; // esi
  unsigned __int8 v12; // al
  char v13; // di
  unsigned __int8 v14; // cl
  unsigned __int8 v15; // bh
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v20[8]; // [esp+1Ch] [ebp-24h] BYREF

  v9 = a2;
  v10 = 0;
  v11 = ++*a2;
  memset(v20, 0, sizeof(v20));
  v12 = *v11;
  v13 = a1;
  if ( *v11 == 94 )
  {
    ++v11;
    v13 = a1 | 8;
    v12 = *v11;
  }
  if ( v12 != 93 || (++v11, HIBYTE(v20[2]) = 32, v10 = 93, v12 = *v11, *v11 != 93) )
  {
    do
    {
      if ( v12 == 45 && v10 && (v14 = v11[1], v14 != 93) )
      {
        if ( v10 >= v14 )
        {
          v15 = v10;
          v10 = v11[1];
        }
        else
        {
          v15 = v11[1];
        }
        while ( v10 <= v15 )
        {
          v16 = v10 >> 3;
          v17 = *((char *)v20 + v16) | (1 << (v10++ & 7));
          *((_BYTE *)v20 + v16) = v17;
        }
        v10 = 0;
        v18 = 2;
      }
      else
      {
        v10 = v12;
        *((_BYTE *)v20 + (v12 >> 3)) |= 1 << (v12 & 7);
        v18 = 1;
      }
      v11 += v18;
      v12 = *v11;
    }
    while ( *v11 != 93 );
    v9 = a2;
  }
  if ( !v12 )
    return -1;
  *v9 = v11;
  return ReadString_0(v13, (int)v20, a3, a4, a5, a6, a7, a8, a9);
}
