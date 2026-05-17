/*
 * XREFs of _LZNT1FindMatchStandard@8 @ 0x4B3727F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall LZNT1FindMatchStandard(unsigned __int8 *a1, _DWORD *a2)
{
  _DWORD *v2; // ebx
  unsigned __int8 *v3; // edi
  unsigned __int8 *v4; // esi
  _BYTE *v5; // edx
  unsigned int v6; // ecx
  _BYTE *v7; // ebx
  _BYTE *v8; // ecx
  unsigned int result; // eax
  int v10; // [esp+Ch] [ebp-1Ch]
  unsigned int v11; // [esp+14h] [ebp-14h]
  unsigned int v12; // [esp+18h] [ebp-10h]
  unsigned int v13; // [esp+1Ch] [ebp-Ch]
  unsigned int v14; // [esp+20h] [ebp-8h]
  unsigned __int8 v15; // [esp+25h] [ebp-3h]
  unsigned __int8 v16; // [esp+26h] [ebp-2h]
  unsigned __int8 v17; // [esp+27h] [ebp-1h]

  v2 = a2;
  v3 = a1;
  v11 = a2[1];
  v13 = a2[2];
  v17 = *a1;
  v16 = a1[1];
  v15 = a1[2];
  v14 = 0;
  v10 = ((-24993 * (v15 ^ (16 * (v16 ^ (16 * *a1))))) >> 4) & 0xFFF;
  v4 = (unsigned __int8 *)a2[2 * v10 + 4];
  v5 = (_BYTE *)a2[2 * v10 + 5];
  v6 = 0;
  if ( (unsigned int)v4 >= *a2 && v4 < a1 && *v4 == v17 && v4[1] == v16 && v4[2] == v15 )
  {
    v14 = 3;
    if ( a2[2] > 3u )
    {
      v7 = a1 + 3;
      do
      {
        if ( (unsigned int)v7 >= v11 )
          break;
        if ( *v7 != v7[a2[2 * v10 + 4] - (_DWORD)a1] )
          break;
        ++v7;
        ++v14;
      }
      while ( v14 < v13 );
      v3 = a1;
      v2 = a2;
    }
  }
  if ( (unsigned int)v5 >= *v2 && v5 < v3 )
  {
    v2 = a2;
    if ( *v5 == v17 && v5[1] == v16 )
    {
      v2 = a2;
      if ( v5[2] == v15 )
      {
        v6 = 3;
        v12 = 3;
        if ( a2[2] > 3u )
        {
          v8 = v3 + 3;
          do
          {
            if ( (unsigned int)v8 >= v11 )
              break;
            if ( *v8 != v8[v5 - v3] )
              break;
            ++v8;
            ++v12;
          }
          while ( v12 < v13 );
          v3 = a1;
          v2 = a2;
          v6 = v12;
        }
      }
    }
  }
  v2[2 * v10 + 5] = v4;
  v2[2 * v10 + 4] = v3;
  result = v14;
  if ( v14 < v6 )
  {
    v2[3] = v5;
    return v6;
  }
  else
  {
    v2[3] = v4;
  }
  return result;
}
