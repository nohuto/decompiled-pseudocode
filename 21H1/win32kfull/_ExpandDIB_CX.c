/*
 * XREFs of _ExpandDIB_CX @ 0x1C71E7
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

unsigned int __cdecl ExpandDIB_CX(const void *a1, __int16 *a2, _BYTE *a3, int a4, int a5)
{
  unsigned int result; // eax
  int v6; // ecx
  __int16 v7; // cx
  int v8; // esi
  __int16 *v9; // edx
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // ebx
  __int16 v15; // cx
  __int16 v16; // ax
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  char *v20; // ecx
  __int16 v21; // si
  char *v22; // ecx
  int *v23; // ebx
  unsigned int v24; // ecx
  __int16 v25; // ax
  unsigned __int8 v26; // bl
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  unsigned __int16 v30; // ax
  unsigned int v31; // ecx
  int v32; // esi
  int v33; // edi
  int v34; // ebx
  _BYTE *v35; // ecx
  unsigned int v36; // eax
  _DWORD v37[45]; // [esp+8h] [ebp-F0h] BYREF
  _BYTE *v38; // [esp+BCh] [ebp-3Ch]
  int v39; // [esp+C0h] [ebp-38h]
  int v40; // [esp+C4h] [ebp-34h]
  int v41; // [esp+C8h] [ebp-30h]
  int v42; // [esp+CCh] [ebp-2Ch]
  int *v43; // [esp+D0h] [ebp-28h]
  int v44; // [esp+D4h] [ebp-24h]
  unsigned __int16 v45; // [esp+DAh] [ebp-1Eh]
  _DWORD v46[6]; // [esp+DCh] [ebp-1Ch] BYREF
  _BYTE *v47; // [esp+10Ch] [ebp+14h]

  v38 = a3;
  qmemcpy(v37, a1, sizeof(v37));
  result = 0;
  memset(v46, 0, sizeof(v46));
  if ( a2 )
  {
    v6 = (int)a2 + 3 * v37[0] + 6;
    *(_WORD *)(v6 - 6) = *(_WORD *)(v6 - 9);
    *(_BYTE *)(v6 - 4) = *(_BYTE *)(v6 - 7);
    *(_WORD *)(v6 - 3) = *(_WORD *)(v6 - 6);
    *(_BYTE *)(v6 - 1) = *(_BYTE *)(v6 - 4);
    *(_WORD *)v6 = *(_WORD *)(v6 - 3);
    *(_BYTE *)(v6 + 2) = *(_BYTE *)(v6 - 1);
    v7 = *a2;
    HIBYTE(v45) = *((_BYTE *)a2 + 2);
    BYTE1(v46[4]) = HIBYTE(v45);
    *(_WORD *)((char *)&v46[3] + 3) = v7;
    v8 = (int)a2 + 3 * (v37[2] & 1);
    HIWORD(v46[4]) = *(_WORD *)v8;
    v9 = (__int16 *)(v8 + 3);
    LOBYTE(v46[5]) = *(_BYTE *)(v8 + 2);
    v10 = LOWORD(v37[3]) >> 4;
    v11 = v37[3] & 0xF;
    v43 = (int *)v10;
    v42 = v11;
    if ( !v11 && v10 )
    {
      v9 = (__int16 *)((char *)a2 + 3 * (v37[2] & 1));
      LOBYTE(v46[5]) = HIBYTE(v45);
      v11 = 1;
      HIWORD(v46[4]) = v7;
      --v10;
      v42 = 1;
      v43 = (int *)v10;
    }
    v12 = v11;
    v13 = v11;
    v44 = v11;
    v39 = v11;
    if ( v11 )
    {
      v14 = v42;
      v15 = v37[2] & 4;
      v40 = v37[2] & 4;
      do
      {
        v16 = *v9;
        --v14;
        v46[0] = *(_DWORD *)((char *)v46 + 3);
        v46[1] = *(_DWORD *)((char *)&v46[1] + 3);
        v46[2] = *(_DWORD *)((char *)&v46[2] + 3);
        v46[3] = *(_DWORD *)((char *)&v46[3] + 3);
        LOWORD(v46[4]) = *(_WORD *)((char *)&v46[4] + 3);
        HIWORD(v46[4]) = v16;
        LOBYTE(v16) = *((_BYTE *)v9 + 2);
        v9 = (__int16 *)((char *)v9 + 3);
        HIBYTE(v45) = v16;
        LOBYTE(v46[5]) = v16;
        if ( v15 )
        {
          *(_WORD *)((char *)&v46[2] + 1) = *(_WORD *)((char *)&v46[3] + 3);
          HIBYTE(v46[2]) = BYTE1(v46[4]);
        }
        else
        {
          v17 = (6 * HIBYTE(v46[3]) - BYTE2(v46[4]) - LOBYTE(v46[3])) >> 2;
          if ( (v17 & 0xFF00) != 0 )
            LOBYTE(v17) = ~HIBYTE(v17);
          BYTE1(v46[2]) = v17;
          v18 = (6 * LOBYTE(v46[4]) - HIBYTE(v46[4]) - BYTE1(v46[3])) >> 2;
          if ( (v18 & 0xFF00) != 0 )
            LOBYTE(v18) = ~HIBYTE(v18);
          BYTE2(v46[2]) = v18;
          v19 = (6 * BYTE1(v46[4]) - HIBYTE(v45) - BYTE2(v46[3])) >> 2;
          if ( (v19 & 0xFF00) != 0 )
            LOBYTE(v19) = ~HIBYTE(v19);
          HIBYTE(v46[2]) = v19;
          v15 = v40;
        }
      }
      while ( v14 );
      v10 = (int)v43;
      v13 = v39;
      v12 = v44;
    }
    v20 = (char *)&v46[3] - 3 * v12;
    v21 = *(_WORD *)v20;
    *(_WORD *)((char *)&v46[5] + 1) = *(_WORD *)v20;
    HIBYTE(v46[5]) = v20[2];
    if ( v10 )
    {
      v22 = (char *)&v46[2] - 3 * v13 + 1;
      while ( 1 )
      {
        *(_WORD *)v22 = v21;
        v22 -= 3;
        v22[5] = HIBYTE(v46[5]);
        if ( !--v10 )
          break;
        v21 = *(_WORD *)((char *)&v46[5] + 1);
      }
    }
    v23 = (int *)v37[8];
    v47 = (_BYTE *)(a5 + a4);
    do
    {
      v24 = v23[1];
      v41 = *v23;
      v44 = v24;
      v42 = v24;
      v43 = v23 + 2;
      if ( (v41 & 0x8000) != 0 )
      {
        v25 = *v9;
        v26 = *((_BYTE *)v9 + 2);
        v46[0] = *(_DWORD *)((char *)v46 + 3);
        v9 = (__int16 *)((char *)v9 + 3);
        v46[1] = *(_DWORD *)((char *)&v46[1] + 3);
        v46[2] = *(_DWORD *)((char *)&v46[2] + 3);
        v46[3] = *(_DWORD *)((char *)&v46[3] + 3);
        LOWORD(v46[4]) = *(_WORD *)((char *)&v46[4] + 3);
        HIWORD(v46[4]) = v25;
        LOBYTE(v46[5]) = v26;
        if ( (v37[2] & 4) != 0 )
        {
          *(_WORD *)((char *)&v46[2] + 1) = *(_WORD *)((char *)&v46[3] + 3);
          HIBYTE(v46[2]) = BYTE1(v46[4]);
        }
        else
        {
          v27 = (6 * HIBYTE(v46[3]) - BYTE2(v46[4]) - LOBYTE(v46[3])) >> 2;
          if ( (v27 & 0xFF00) != 0 )
            LOBYTE(v27) = ~HIBYTE(v27);
          BYTE1(v46[2]) = v27;
          v28 = (6 * LOBYTE(v46[4]) - HIBYTE(v46[4]) - BYTE1(v46[3])) >> 2;
          if ( (v28 & 0xFF00) != 0 )
            LOBYTE(v28) = ~HIBYTE(v28);
          BYTE2(v46[2]) = v28;
          v29 = (6 * BYTE1(v46[4]) - v26 - BYTE2(v46[3])) >> 2;
          if ( (v29 & 0xFF00) != 0 )
            LOBYTE(v29) = ~HIBYTE(v29);
          HIBYTE(v46[2]) = v29;
          v24 = v44;
        }
        v30 = v41 & 0x3FFF;
      }
      else
      {
        v30 = v41;
      }
      v31 = HIWORD(v24);
      v45 = v30;
      v32 = v31 * HIBYTE(v46[2]);
      v33 = v31 * BYTE2(v46[2]);
      v34 = v31 * BYTE1(v46[2]);
      if ( (_WORD)v42 )
      {
        v44 = v32 + (unsigned __int16)v42 * LOBYTE(v46[2]);
        v32 = v44;
        v39 = v33 + (unsigned __int16)v42 * HIBYTE(v46[1]);
        v33 = v39;
        v40 = v34 + (unsigned __int16)v42 * BYTE2(v46[1]);
        v34 = v40;
        if ( HIWORD(v41) )
        {
          v32 = HIWORD(v41) * BYTE1(v46[1]) + v44;
          v34 = v40 + HIWORD(v41) * HIBYTE(v46[0]);
          v33 = HIWORD(v41) * LOBYTE(v46[1]) + v39;
          if ( v45 )
          {
            v32 += v45 * BYTE2(v46[0]);
            v33 += v45 * BYTE1(v46[0]);
            v34 += v45 * LOBYTE(v46[0]);
          }
        }
      }
      v35 = v38;
      v38[2] = (unsigned int)(v32 + 4096) >> 13;
      v35[1] = (unsigned int)(v33 + 4096) >> 13;
      v36 = v34 + 4096;
      v23 = v43;
      result = v36 >> 13;
      *v35 = result;
      v38 = &v35[a5];
    }
    while ( &v35[a5] != v47 );
  }
  return result;
}
