/*
 * XREFs of ReadStringDelimited @ 0x4B2FE2D6
 * Callers:
 *     __input_l @ 0x4B2FE430 (__input_l.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     ReadString @ 0x4B2FE156 (ReadString.c)
 */

int __cdecl ReadStringDelimited(
        char a1,
        unsigned __int8 **a2,
        int *a3,
        _DWORD *a4,
        _DWORD *a5,
        int a6,
        FILE *a7,
        _DWORD *a8)
{
  unsigned __int8 **v8; // edx
  unsigned __int8 v9; // bl
  unsigned __int8 *v10; // esi
  unsigned __int8 v11; // al
  char v12; // di
  unsigned __int8 v13; // cl
  unsigned __int8 v14; // bh
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v19[8]; // [esp+1Ch] [ebp-24h] BYREF

  v8 = a2;
  v9 = 0;
  v10 = ++*a2;
  memset(v19, 0, sizeof(v19));
  v11 = *v10;
  v12 = a1;
  if ( *v10 == 94 )
  {
    ++v10;
    v12 = a1 | 8;
    v11 = *v10;
  }
  if ( v11 != 93 || (++v10, HIBYTE(v19[2]) = 32, v9 = 93, v11 = *v10, *v10 != 93) )
  {
    do
    {
      if ( v11 == 45 && v9 && (v13 = v10[1], v13 != 93) )
      {
        if ( v9 >= v13 )
        {
          v14 = v9;
          v9 = v10[1];
        }
        else
        {
          v14 = v10[1];
        }
        while ( v9 <= v14 )
        {
          v15 = v9 >> 3;
          v16 = *((char *)v19 + v15) | (1 << (v9++ & 7));
          *((_BYTE *)v19 + v15) = v16;
        }
        v9 = 0;
        v17 = 2;
      }
      else
      {
        v9 = v11;
        *((_BYTE *)v19 + (v11 >> 3)) |= 1 << (v11 & 7);
        v17 = 1;
      }
      v10 += v17;
      v11 = *v10;
    }
    while ( *v10 != 93 );
    v8 = a2;
  }
  if ( !v11 )
    return -1;
  *v8 = v10;
  return ReadString(v12, (int)v19, a3, a4, a5, a6, a7, a8);
}
