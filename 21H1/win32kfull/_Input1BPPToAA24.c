/*
 * XREFs of _Input1BPPToAA24 @ 0x1C5311
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__cdecl Input1BPPToAA24(char *a1, _BYTE *a2)
{
  char *v2; // ebx
  _BYTE *v3; // esi
  bool v4; // zf
  unsigned __int8 *v5; // ecx
  unsigned int v6; // edi
  __int16 *v7; // edx
  unsigned __int16 v8; // ax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  unsigned __int8 *v11; // ebx
  unsigned int v12; // edi
  unsigned int v13; // ecx
  int v14; // edi
  unsigned __int16 v15; // ax
  char v16; // al
  int v17; // edx
  unsigned __int16 v18; // ax
  unsigned int v19; // ecx
  _BYTE *v20; // ebx
  int v21; // edx
  unsigned __int8 *v22; // ebx
  unsigned int v23; // edi
  unsigned int v24; // edx
  _BYTE *v25; // ebx
  int v26; // eax
  int v27; // ecx
  _BYTE *v28; // edx
  int v29; // edi
  unsigned __int16 v30; // ax
  int v31; // edx
  char v32; // cl
  int v33; // eax
  int v34; // eax
  __int16 v36; // [esp+Ch] [ebp-18h]
  char v37; // [esp+Eh] [ebp-16h]
  __int16 v38; // [esp+Fh] [ebp-15h]
  char v39; // [esp+11h] [ebp-13h]
  _BYTE *v40; // [esp+14h] [ebp-10h]
  unsigned int v41; // [esp+18h] [ebp-Ch]
  unsigned int v42; // [esp+1Ch] [ebp-8h]
  unsigned __int8 *v43; // [esp+20h] [ebp-4h]

  v2 = a1;
  v3 = a2;
  v4 = (*a1 & 4) == 0;
  v5 = (unsigned __int8 *)*((_DWORD *)a1 + 5);
  v6 = *((_DWORD *)a1 + 6);
  v7 = (__int16 *)*((_DWORD *)a1 + 13);
  v43 = v5;
  v42 = v6;
  v40 = a2;
  if ( v4 )
  {
    v36 = *v7;
    v37 = *((_BYTE *)v7 + 2);
    v38 = v7[2];
    v16 = *((_BYTE *)v7 + 6);
    v17 = (unsigned __int8)a1[1];
    v39 = v16;
    if ( v17 )
    {
      v18 = *v5 << v17;
      ++v43;
      v19 = 8 - v17;
      a2 = (_BYTE *)(8 - v17);
      if ( 8 - v17 > v6 )
      {
        v19 = v6;
        a2 = (_BYTE *)v6;
      }
      v6 -= v19;
      v42 = v6;
      if ( v19 )
      {
        v20 = a2;
        do
        {
          v18 *= 2;
          v21 = 3 * (HIBYTE(v18) & 1);
          *(_WORD *)v3 = *(__int16 *)((char *)&v36 + v21);
          v3[2] = *(&v37 + v21);
          v3 += 3;
          --v20;
        }
        while ( v20 );
        v2 = a1;
      }
    }
    v41 = v6 >> 3;
    if ( v6 >> 3 )
    {
      v22 = v43;
      v23 = v41;
      a2 = v3 + 6;
      do
      {
        v24 = *v22;
        v43 = v22 + 1;
        v25 = a2;
        *(_WORD *)v3 = *(__int16 *)((char *)&v36 + 3 * (v24 >> 7));
        v3[2] = *(&v37 + 3 * (v24 >> 7));
        v3 += 24;
        *(_WORD *)(v25 - 3) = *(__int16 *)((char *)&v36 + 3 * ((v24 >> 6) & 1));
        *(v25 - 1) = *(&v37 + 3 * ((v24 >> 6) & 1));
        *(_WORD *)v25 = *(__int16 *)((char *)&v36 + 3 * ((v24 >> 5) & 1));
        v25[2] = *(&v37 + 3 * ((v24 >> 5) & 1));
        *(_WORD *)(v25 + 3) = *(__int16 *)((char *)&v36 + 3 * ((v24 >> 4) & 1));
        v25[5] = *(&v37 + 3 * ((v24 >> 4) & 1));
        *((_WORD *)v25 + 3) = *(__int16 *)((char *)&v36 + 3 * ((v24 >> 3) & 1));
        v25[8] = *(&v37 + 3 * ((v24 >> 3) & 1));
        *(_WORD *)(v25 + 9) = *(__int16 *)((char *)&v36 + 3 * ((v24 >> 2) & 1));
        v25[11] = *(&v37 + 3 * ((v24 >> 2) & 1));
        v26 = (v24 >> 1) & 1;
        *((_WORD *)v25 + 6) = *(__int16 *)((char *)&v36 + 3 * v26);
        v25[14] = *(&v37 + 3 * v26);
        v27 = 3 * (v24 & 1);
        v28 = v25;
        v22 = v43;
        *(_WORD *)(v28 + 15) = *(__int16 *)((char *)&v36 + v27);
        v28[17] = *(&v37 + v27);
        a2 = v28 + 24;
        --v23;
      }
      while ( v23 );
      LOBYTE(v6) = v42;
      v2 = a1;
    }
    v29 = v6 & 7;
    if ( v29 )
    {
      v30 = *v43;
      do
      {
        v30 *= 2;
        v31 = 3 * (HIBYTE(v30) & 1);
        *(_WORD *)v3 = *(__int16 *)((char *)&v36 + v31);
        v3 += 3;
        *(v3 - 1) = *(&v37 + v31);
        --v29;
      }
      while ( v29 );
    }
  }
  else
  {
    LOBYTE(a2) = *((_BYTE *)v7 + 3);
    BYTE1(a2) = *((_BYTE *)v7 + 7);
    v41 = (unsigned __int8)a1[1];
    if ( v41 )
    {
      v8 = *v5 << v41;
      ++v43;
      v9 = 8 - v41;
      v41 = v9;
      if ( v9 > v6 )
      {
        v9 = v6;
        v41 = v6;
      }
      v6 -= v9;
      v42 = v6;
      if ( v9 )
      {
        v10 = v41;
        do
        {
          v8 *= 2;
          *v3++ = *((_BYTE *)&a2 + (HIBYTE(v8) & 1));
          --v10;
        }
        while ( v10 );
        v2 = a1;
      }
    }
    v41 = v6 >> 3;
    if ( v6 >> 3 )
    {
      v11 = v43;
      v12 = v6 >> 3;
      do
      {
        v13 = *v11++;
        *v3 = *((_BYTE *)&a2 + (v13 >> 7));
        v3[1] = *((_BYTE *)&a2 + ((v13 >> 6) & 1));
        v3[2] = *((_BYTE *)&a2 + ((v13 >> 5) & 1));
        v3[3] = *((_BYTE *)&a2 + ((v13 >> 4) & 1));
        v3[4] = *((_BYTE *)&a2 + ((v13 >> 3) & 1));
        v3[5] = *((_BYTE *)&a2 + ((v13 >> 2) & 1));
        v3[6] = *((_BYTE *)&a2 + ((v13 >> 1) & 1));
        v3[7] = *((_BYTE *)&a2 + (v13 & 1));
        v3 += 8;
        --v12;
      }
      while ( v12 );
      LOBYTE(v6) = v42;
      v43 = v11;
      v2 = a1;
    }
    v14 = v6 & 7;
    if ( v14 )
    {
      v15 = *v43;
      do
      {
        v15 *= 2;
        *v3++ = *((_BYTE *)&a2 + (HIBYTE(v15) & 1));
        --v14;
      }
      while ( v14 );
    }
  }
  v32 = *v2;
  if ( (*v2 & 2) != 0 )
  {
    v33 = *((_DWORD *)v2 + 7);
    if ( v33 && (v34 = v33 - 1, (*((_DWORD *)v2 + 7) = v34) != 0) )
    {
      *((_DWORD *)v2 + 5) += *((_DWORD *)v2 + 9);
    }
    else if ( (v32 & 1) != 0 )
    {
      *((_DWORD *)v2 + 5) = *((_DWORD *)v2 + 3);
      *((_DWORD *)v2 + 7) = *((_DWORD *)v2 + 4);
    }
    else
    {
      *v2 = v32 & 0xFD;
    }
  }
  return v40;
}
