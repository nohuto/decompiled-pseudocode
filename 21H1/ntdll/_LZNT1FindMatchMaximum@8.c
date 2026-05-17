/*
 * XREFs of _LZNT1FindMatchMaximum@8 @ 0x4B372770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __stdcall LZNT1FindMatchMaximum(_BYTE *a1, _DWORD *a2)
{
  _DWORD *v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // edi
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  unsigned int v7; // esi
  _BYTE *v8; // edi
  unsigned int v10; // [esp+4h] [ebp-Ch]
  unsigned int v11; // [esp+8h] [ebp-8h]
  unsigned int v12; // [esp+Ch] [ebp-4h]

  v2 = a2;
  v3 = 0;
  v11 = 0;
  v4 = a2[2];
  v10 = a2[1];
  v5 = *a2;
  v12 = v4;
  if ( *a2 >= (unsigned int)a1 )
    return 0;
  v6 = v5 - (_DWORD)a1;
  do
  {
    v7 = 0;
    if ( v4 )
    {
      v8 = a1;
      do
      {
        if ( (unsigned int)v8 >= v10 )
          break;
        if ( *v8 != v8[v6] )
          break;
        ++v7;
        ++v8;
      }
      while ( v7 < v12 );
      v3 = v11;
      v2 = a2;
      v4 = v12;
    }
    if ( v7 >= v3 )
    {
      v3 = v7;
      v2[3] = v5;
      v11 = v7;
    }
    ++v5;
    ++v6;
  }
  while ( v5 < (unsigned int)a1 );
  if ( v3 < 3 )
    return 0;
  else
    return v3;
}
