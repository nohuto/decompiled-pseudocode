/*
 * XREFs of ReadStringDelimited_1 @ 0x4B302B96
 * Callers:
 *     __winput_s @ 0x4B302E38 (__winput_s.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __chkstk @ 0x4B2F64D0 (__chkstk.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     ReadString_1 @ 0x4B3029D2 (ReadString_1.c)
 */

int __cdecl ReadStringDelimited_1(
        char a1,
        unsigned __int16 **a2,
        __int16 *a3,
        _DWORD *a4,
        void **a5,
        int a6,
        FILE *a7,
        unsigned int a8,
        _DWORD *a9)
{
  unsigned __int16 **v9; // ebx
  unsigned __int16 v10; // di
  unsigned __int16 *v11; // esi
  unsigned __int16 v12; // cx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // bx
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  size_t v20; // [esp-4h] [ebp-2030h]
  int v21; // [esp-4h] [ebp-2030h]
  char v22; // [esp+20h] [ebp-200Ch]
  unsigned __int16 *v23; // [esp+24h] [ebp-2008h]
  char v24[11]; // [esp+28h] [ebp-2004h] BYREF
  char v25; // [esp+33h] [ebp-1FF9h]

  v9 = a2;
  v10 = 0;
  LODWORD(v20) = 0x2000;
  memset(v24, 0, v20);
  v11 = ++*a2;
  v23 = *a2;
  v12 = **a2;
  if ( v12 == 94 )
  {
    v23 = ++v11;
    v22 = a1 | 8;
    v12 = *v11;
  }
  else
  {
    v22 = a1;
  }
  if ( v12 == 93 )
  {
    ++v11;
    v25 = 32;
    v10 = 93;
    v23 = v11;
    v12 = *v11;
  }
  v13 = v12;
  if ( v12 != 93 )
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
        if ( v10 <= v15 )
        {
          v16 = v10;
          do
          {
            v17 = (unsigned __int16)v16 >> 3;
            v18 = v24[v17] | (1 << (v16++ & 7));
            v24[v17] = v18;
          }
          while ( (unsigned __int16)v16 <= v15 );
          v11 = v23;
        }
        v10 = 0;
        v21 = 4;
      }
      else
      {
        v10 = v12;
        v21 = 2;
        v24[v12 >> 3] |= 1 << (v12 & 7);
      }
      v11 = (unsigned __int16 *)((char *)v11 + v21);
      v23 = v11;
      v13 = *v11;
      v12 = *v11;
    }
    while ( *v11 != 93 );
    v9 = a2;
  }
  if ( !v13 )
    return -1;
  *v9 = v11;
  return ReadString_1(v22, (int)v24, a3, a4, a5, a6, a7, a8, a9);
}
