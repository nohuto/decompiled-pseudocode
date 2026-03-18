/*
 * XREFs of _Input4BPPToAA24 @ 0x1C5656
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__cdecl Input4BPPToAA24(char *a1, _BYTE *a2)
{
  char *v2; // esi
  _BYTE *v3; // edi
  unsigned int v4; // ecx
  int v5; // edx
  _BYTE *v6; // ebx
  char v7; // al
  int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ecx
  int v11; // ecx
  char v12; // al
  unsigned int v13; // eax
  int v14; // esi
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  char v18; // cl
  int v19; // eax
  int v20; // eax
  unsigned int v23; // [esp+14h] [ebp-4h]
  int v24; // [esp+24h] [ebp+Ch]

  v2 = a1;
  v3 = a2;
  v4 = *((_DWORD *)a1 + 6);
  v5 = *((_DWORD *)a1 + 13);
  v6 = (_BYTE *)*((_DWORD *)a1 + 5);
  v7 = a1[1];
  LOBYTE(v23) = v4;
  v24 = v5;
  if ( (*a1 & 4) != 0 )
  {
    if ( v7 )
    {
      --v4;
      v8 = *v6 & 0xF;
      LOBYTE(v23) = v4;
      ++v6;
      *v3++ = *(_BYTE *)(v5 + 4 * v8 + 3);
    }
    if ( v4 >> 1 )
    {
      v9 = v4 >> 1;
      do
      {
        v10 = (unsigned __int8)*v6++;
        *v3 = *(_BYTE *)(v5 + 4 * (v10 >> 4) + 3);
        v3[1] = *(_BYTE *)(v5 + 4 * (v10 & 0xF) + 3);
        v3 += 2;
        --v9;
      }
      while ( v9 );
      v2 = a1;
      LOBYTE(v4) = v23;
    }
    if ( (v4 & 1) != 0 )
      *v3 = *(_BYTE *)(v5 + 4 * ((unsigned __int8)*v6 >> 4) + 3);
  }
  else
  {
    if ( v7 )
    {
      v23 = v4 - 1;
      v11 = *v6++ & 0xF;
      *(_WORD *)v3 = *(_WORD *)(v5 + 4 * v11);
      v12 = *(_BYTE *)(v5 + 4 * v11 + 2);
      v4 = v23;
      v3[2] = v12;
      v3 += 3;
    }
    v13 = v4 >> 1;
    if ( v4 >> 1 )
    {
      v14 = v5;
      do
      {
        v15 = (unsigned __int8)*v6 >> 4;
        v16 = *v6++ & 0xF;
        *(_WORD *)v3 = *(_WORD *)(v14 + 4 * v15);
        v3[2] = *(_BYTE *)(v14 + 4 * v15 + 2);
        *(_WORD *)(v3 + 3) = *(_WORD *)(v14 + 4 * v16);
        v3[5] = *(_BYTE *)(v14 + 4 * v16 + 2);
        v3 += 6;
        --v13;
      }
      while ( v13 );
      v2 = a1;
      v5 = v24;
      LOBYTE(v4) = v23;
    }
    if ( (v4 & 1) != 0 )
    {
      v17 = (unsigned __int8)*v6 >> 4;
      *(_WORD *)v3 = *(_WORD *)(v5 + 4 * v17);
      v3[2] = *(_BYTE *)(v5 + 4 * v17 + 2);
    }
  }
  v18 = *v2;
  if ( (*v2 & 2) != 0 )
  {
    v19 = *((_DWORD *)v2 + 7);
    if ( v19 && (v20 = v19 - 1, (*((_DWORD *)v2 + 7) = v20) != 0) )
    {
      *((_DWORD *)v2 + 5) += *((_DWORD *)v2 + 9);
    }
    else if ( (v18 & 1) != 0 )
    {
      *((_DWORD *)v2 + 5) = *((_DWORD *)v2 + 3);
      *((_DWORD *)v2 + 7) = *((_DWORD *)v2 + 4);
    }
    else
    {
      *v2 = v18 & 0xFD;
    }
  }
  return a2;
}
