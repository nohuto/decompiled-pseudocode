/*
 * XREFs of _Input8BPPToAA24 @ 0x1C57A5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__cdecl Input8BPPToAA24(char *a1, _BYTE *a2)
{
  char *v2; // edx
  _BYTE *v3; // esi
  int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int8 *v6; // edi
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  char v10; // cl
  int v11; // eax
  int v12; // eax

  v2 = a1;
  v3 = a2;
  v4 = *((_DWORD *)a1 + 13);
  v5 = (unsigned int)&a2[*((_DWORD *)a1 + 8)];
  v6 = (unsigned __int8 *)*((_DWORD *)a1 + 5);
  if ( (*a1 & 4) != 0 )
  {
    do
    {
      v7 = *v6++;
      *v3++ = *(_BYTE *)(v4 + 4 * v7 + 3);
    }
    while ( (unsigned int)v3 < v5 );
  }
  else
  {
    v8 = *((_DWORD *)a1 + 13);
    do
    {
      v9 = *v6++;
      *(_WORD *)v3 = *(_WORD *)(v8 + 4 * v9);
      v3[2] = *(_BYTE *)(v8 + 4 * v9 + 2);
      v3 += 3;
    }
    while ( (unsigned int)v3 < v5 );
    v2 = a1;
  }
  v10 = *v2;
  if ( (*v2 & 2) != 0 )
  {
    v11 = *((_DWORD *)v2 + 7);
    if ( v11 && (v12 = v11 - 1, (*((_DWORD *)v2 + 7) = v12) != 0) )
    {
      *((_DWORD *)v2 + 5) += *((_DWORD *)v2 + 9);
    }
    else if ( (v10 & 1) != 0 )
    {
      *((_DWORD *)v2 + 5) = *((_DWORD *)v2 + 3);
      *((_DWORD *)v2 + 7) = *((_DWORD *)v2 + 4);
    }
    else
    {
      *v2 = v10 & 0xFD;
    }
  }
  return a2;
}
