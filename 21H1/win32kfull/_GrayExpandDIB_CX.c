/*
 * XREFs of _GrayExpandDIB_CX @ 0x1C9344
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

unsigned int __cdecl GrayExpandDIB_CX(const void *a1, char *a2, _BYTE *a3, int a4, unsigned int a5)
{
  unsigned int result; // eax
  int v6; // ecx
  char v7; // si
  int v8; // edx
  char v9; // al
  char v10; // cl
  char *v11; // edi
  unsigned __int8 *v12; // ebx
  int v13; // esi
  int v14; // edi
  __int16 v15; // cx
  unsigned __int8 v16; // al
  int v17; // ecx
  char v18; // cl
  char *v19; // eax
  int *v20; // edi
  int v21; // eax
  unsigned int v22; // edx
  unsigned __int8 v23; // al
  int v24; // ecx
  unsigned __int16 v25; // si
  int v26; // edx
  _BYTE *v27; // ecx
  _DWORD v28[45]; // [esp+Ch] [ebp-D4h] BYREF
  _BYTE *v29; // [esp+C0h] [ebp-20h]
  unsigned int v30; // [esp+C4h] [ebp-1Ch]
  int v31; // [esp+C8h] [ebp-18h]
  int v32; // [esp+CCh] [ebp-14h]
  unsigned __int8 v33; // [esp+D3h] [ebp-Dh] BYREF
  __int64 v34; // [esp+D4h] [ebp-Ch]
  _BYTE *v35; // [esp+F4h] [ebp+14h]

  v34 = 0LL;
  v29 = a3;
  result = a5;
  v30 = a5;
  qmemcpy(v28, a1, sizeof(v28));
  if ( a2 )
  {
    v6 = v28[0];
    v7 = v28[3];
    v8 = LOWORD(v28[3]) >> 4;
    v9 = a2[v28[0] - 1];
    a2[v28[0]] = v9;
    a2[v6 + 1] = v9;
    a2[v6 + 2] = v9;
    v10 = *a2;
    BYTE5(v34) = *a2;
    v11 = &a2[v28[2] & 1];
    v12 = (unsigned __int8 *)(v11 + 1);
    BYTE6(v34) = *v11;
    v13 = v7 & 0xF;
    if ( !v13 && v8 )
    {
      v13 = 1;
      BYTE6(v34) = v10;
      --v8;
      v12 = (unsigned __int8 *)&a2[v28[2] & 1];
    }
    v14 = 4 - v13;
    if ( v13 )
    {
      v15 = v28[2] & 4;
      v32 = v28[2] & 4;
      do
      {
        --v13;
        LODWORD(v34) = *(_DWORD *)((char *)&v34 + 1);
        WORD2(v34) = *(_WORD *)((char *)&v34 + 5);
        v16 = *v12++;
        v33 = v16;
        BYTE6(v34) = v16;
        if ( v15 )
        {
          BYTE3(v34) = BYTE5(v34);
        }
        else
        {
          v17 = (6 * BYTE5(v34) - v33 - BYTE4(v34)) >> 2;
          if ( (v17 & 0xFF00) != 0 )
            LOBYTE(v17) = ~HIBYTE(v17);
          BYTE3(v34) = v17;
          v15 = v32;
        }
      }
      while ( v13 );
    }
    v18 = *((_BYTE *)&v34 + v14);
    HIBYTE(v34) = v18;
    if ( v8 )
    {
      v19 = (char *)(&v33 + v14);
      while ( 1 )
      {
        *v19-- = v18;
        if ( !--v8 )
          break;
        v18 = HIBYTE(v34);
      }
    }
    v20 = (int *)v28[8];
    v35 = (_BYTE *)(v30 + a4);
    do
    {
      v21 = *v20;
      v20 += 2;
      v22 = *(v20 - 1);
      v31 = v21;
      v32 = v22;
      if ( (v21 & 0x8000) != 0 )
      {
        LODWORD(v34) = *(_DWORD *)((char *)&v34 + 1);
        WORD2(v34) = *(_WORD *)((char *)&v34 + 5);
        v23 = *v12++;
        v33 = v23;
        BYTE6(v34) = v23;
        if ( (v28[2] & 4) != 0 )
        {
          BYTE3(v34) = BYTE5(v34);
        }
        else
        {
          v24 = (6 * BYTE5(v34) - v33 - BYTE4(v34)) >> 2;
          if ( (v24 & 0xFF00) != 0 )
            LOBYTE(v24) = ~HIBYTE(v24);
          BYTE3(v34) = v24;
        }
        v25 = v31 & 0x3FFF;
      }
      else
      {
        v25 = v31;
      }
      v26 = BYTE3(v34) * HIWORD(v22);
      if ( (_WORD)v32 )
      {
        v26 += (unsigned __int16)v32 * BYTE2(v34);
        if ( HIWORD(v31) )
        {
          v26 += HIWORD(v31) * BYTE1(v34);
          if ( v25 )
            v26 += v25 * (unsigned __int8)v34;
        }
      }
      v27 = v29;
      result = (unsigned int)(v26 + 4096) >> 13;
      *v29 = result;
      v29 = &v27[v30];
    }
    while ( &v27[v30] != v35 );
  }
  return result;
}
