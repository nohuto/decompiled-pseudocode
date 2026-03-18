/*
 * XREFs of _GreGetCannonicalName@16 @ 0x1F526B
 * Callers:
 *     ?vCheckMMInstance@@YGXPAGPAUtagDESIGNVECTOR@@@Z @ 0xD7352 (-vCheckMMInstance@@YGXPAGPAUtagDESIGNVECTOR@@@Z.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

_DWORD *__fastcall GreGetCannonicalName(_WORD *Src, char *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // ebx
  _BYTE *v5; // edx
  _WORD *v6; // edi
  __int16 v7; // cx
  unsigned __int16 v8; // ax
  size_t v9; // esi
  unsigned __int16 *v10; // edx
  unsigned __int16 v11; // ax
  int *v12; // edi
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // si
  unsigned __int16 v15; // si
  int v16; // ecx
  unsigned __int16 v17; // si
  _DWORD *result; // eax
  int v20; // [esp+10h] [ebp-8h]
  int *v22; // [esp+14h] [ebp-4h]

  v4 = 0;
  v5 = Src;
  v20 = 0;
  v6 = Src;
  if ( *Src )
  {
    v7 = *Src;
    do
    {
      if ( v7 == 95 )
      {
        v8 = v6[1];
        if ( v8 >= 0x30u && v8 <= 0x39u )
          break;
      }
      v7 = *++v6;
    }
    while ( *v6 );
    v5 = Src;
    v4 = 0;
  }
  v9 = 2 * (((char *)v6 - v5) >> 1);
  memcpy(a2, v5, v9);
  *(_WORD *)&a2[v9] = 0;
  if ( *v6 == 95 )
  {
    v10 = v6 + 1;
    v11 = v6[1];
    if ( v11 >= 0x30u && v11 <= 0x39u )
    {
      v12 = a4 + 2;
      v22 = a4 + 2;
      do
      {
        v13 = v11;
        if ( v11 )
        {
          v14 = v11;
          do
          {
            if ( v14 >= 0x30u )
            {
              v13 = v14;
              if ( v14 <= 0x39u )
                break;
            }
            v14 = *++v10;
            v13 = *v10;
          }
          while ( *v10 );
          v4 = v20;
          v12 = v22;
        }
        v15 = v13;
        if ( v13 )
        {
          ++v10;
          v16 = v13 - 48;
          if ( *v10 )
          {
            v17 = *v10;
            do
            {
              if ( (unsigned __int16)(v17 - 48) > 9u )
                break;
              ++v10;
              v16 = v17 - 48 + 10 * v16;
              v17 = *v10;
            }
            while ( *v10 );
          }
          *v12 = v16;
          ++v4;
          v15 = *v10;
          ++v12;
          v20 = v4;
          v22 = v12;
        }
        v11 = v15;
      }
      while ( v15 );
    }
  }
  *a3 = v4;
  result = a4;
  a4[1] = v4;
  *a4 = 134248036;
  return result;
}
