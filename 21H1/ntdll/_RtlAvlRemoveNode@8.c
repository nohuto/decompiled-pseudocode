/*
 * XREFs of _RtlAvlRemoveNode@8 @ 0x4B34FE40
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTreeDoubleRotateNodes@20 @ 0x4B35015A (_RtlpTreeDoubleRotateNodes@20.c)
 */

char __stdcall RtlAvlRemoveNode(unsigned int *a1, int *a2)
{
  int *v2; // ecx
  int v3; // edi
  unsigned int *v4; // esi
  int v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // esi
  _DWORD *v8; // eax
  unsigned int v9; // edx
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // edi
  char v13; // bl
  unsigned int v14; // eax
  int v15; // eax
  _BYTE *v16; // edi
  char v17; // al
  int v18; // ecx
  unsigned int v19; // esi
  unsigned int v20; // eax
  char v21; // ch
  unsigned __int8 v22; // bl
  _DWORD *v23; // eax
  int v24; // edi
  unsigned int v25; // ecx
  bool v26; // zf
  int v28; // [esp+Ch] [ebp-18h]
  BOOL v29; // [esp+10h] [ebp-14h]
  int v30; // [esp+14h] [ebp-10h]
  BOOL v31; // [esp+18h] [ebp-Ch]
  int *v32; // [esp+18h] [ebp-Ch]
  int v33; // [esp+1Ch] [ebp-8h]
  char v34; // [esp+22h] [ebp-2h]
  unsigned __int8 v35; // [esp+23h] [ebp-1h]

  v2 = a2;
  v3 = *a2;
  v4 = (unsigned int *)(a2 + 1);
  v5 = a2[1];
  if ( *a2 )
    v4 = (unsigned int *)a2;
  v6 = *v4;
  if ( (v3 != 0 ? v5 : 0) != 0 )
  {
    if ( (a2[2] & 3) == 3 )
    {
      v33 = 0;
      v7 = *a2;
      v8 = *(_DWORD **)(v3 + 4);
      v9 = *a2;
      if ( v8 )
      {
        v33 = 1;
        do
        {
          v9 = v7;
          v7 = (unsigned int)v8;
          v8 = (_DWORD *)v8[1];
        }
        while ( v8 );
      }
      v10 = *(_DWORD *)v7;
    }
    else
    {
      v7 = a2[1];
      v9 = v7;
      v33 = 1;
      if ( *(_DWORD *)v5 )
      {
        v33 = 0;
        v11 = *(_DWORD **)v5;
        do
        {
          v9 = v7;
          v7 = (unsigned int)v11;
          v11 = (_DWORD *)*v11;
        }
        while ( v11 );
        v2 = a2;
      }
      v10 = *(_DWORD *)(v7 + 4);
    }
    *(_DWORD *)v7 = v3;
    *(_DWORD *)(v7 + 4) = v5;
    if ( (int *)(*(_DWORD *)(v3 + 8) & 0xFFFFFFFC) == v2 )
    {
      *(_DWORD *)(v3 + 8) = v7 | *(_DWORD *)(v3 + 8) & 3;
      v12 = *(_DWORD *)(v5 + 8);
      if ( (int *)(v12 & 0xFFFFFFFC) == v2 )
      {
        *(_DWORD *)(v5 + 8) = v7 | v12 & 3;
        if ( (*(_DWORD *)(v7 + 8) & 0xFFFFFFFC) == v9 )
        {
          *(_DWORD *)(v9 + 4 * v33) = v10;
          if ( v10 )
          {
            if ( *(_DWORD *)(v10 + 8) != v7 )
              goto LABEL_64;
            *(_DWORD *)(v10 + 8) = v9;
          }
          *(_DWORD *)(v7 + 8) = v2[2];
          v13 = 2 * (v33 != 0) + 1;
          v14 = v2[2] & 0xFFFFFFFC;
          if ( v14 )
          {
            v31 = *(_DWORD *)(v14 + 4) == (_DWORD)v2;
            if ( *(int **)(v14 + 4 * v31) == v2 )
            {
              *(_DWORD *)(v14 + 4 * v31) = v7;
              goto LABEL_36;
            }
          }
          else if ( (int *)*a1 == v2 )
          {
            *a1 = v7;
            goto LABEL_36;
          }
        }
      }
    }
LABEL_64:
    __fastfail(0x1Du);
  }
  v9 = a2[2] & 0xFFFFFFFC;
  if ( v6 )
  {
    if ( *(int **)(v6 + 8) != a2 )
      goto LABEL_64;
    *(_DWORD *)(v6 + 8) = v9;
  }
  if ( !v9 )
  {
    LOBYTE(v15) = (_BYTE)a1;
    if ( (int *)*a1 == a2 )
    {
      *a1 = v6;
      return v15;
    }
    goto LABEL_64;
  }
  if ( *(int **)(v9 + 4) == a2 )
  {
    v13 = 3;
    *(_DWORD *)(v9 + 4) = v6;
    goto LABEL_36;
  }
  if ( *(int **)v9 != a2 )
    goto LABEL_64;
  v13 = 1;
  *(_DWORD *)v9 = v6;
  while ( 1 )
  {
LABEL_36:
    v16 = (_BYTE *)(v9 + 8);
    v17 = *(_BYTE *)(v9 + 8);
    v32 = (int *)(v9 + 8);
    v35 = v17 & 3;
    if ( (v17 & 3) == ((unsigned __int8)v13 ^ 2) )
    {
      LOBYTE(v15) = v17 & 0xFC;
      *v16 = v15;
      v18 = *(_DWORD *)v16;
      goto LABEL_58;
    }
    if ( (v17 & 3) == 0 )
      break;
    v18 = *(_DWORD *)v16;
    v19 = *(_DWORD *)v9;
    v30 = *(_DWORD *)v16;
    if ( v13 == 1 )
      v19 = *(_DWORD *)(v9 + 4);
    v34 = *(_BYTE *)(v19 + 8) & 3;
    if ( v34 == ((unsigned __int8)v13 ^ 2) )
    {
      v20 = RtlpTreeDoubleRotateNodes(v19, v13 == 1, v18);
      *v16 &= 0xFCu;
      v9 = v20;
      v21 = *(_BYTE *)(v19 + 8) & 0xFC;
      *(_BYTE *)(v19 + 8) = v21;
      v22 = *(_BYTE *)(v20 + 8);
      v15 = v22 & 3;
      if ( v35 == v15 )
      {
        LOBYTE(v15) = (v35 ^ *v16 ^ 0xFE) & 3;
        *v16 ^= v15;
      }
      else if ( v35 == ((v22 ^ 0xFE) & 3) )
      {
        *(_BYTE *)(v19 + 8) = v35 | v21;
      }
      *(_BYTE *)(v9 + 8) &= 0xFCu;
      v18 = v30;
      goto LABEL_58;
    }
    if ( (*(_DWORD *)(v19 + 8) & 0xFFFFFFFC) != v9 )
      goto LABEL_64;
    v29 = v13 == 1;
    if ( *(_DWORD *)(v9 + 4 * v29) != v19 )
      goto LABEL_64;
    v23 = (_DWORD *)(v18 & 0xFFFFFFFC);
    if ( (v18 & 0xFFFFFFFC) == 0 )
    {
      v23 = a1;
LABEL_51:
      if ( *v23 != v9 )
        goto LABEL_64;
      *v23 = v19;
      goto LABEL_53;
    }
    if ( v23[1] != v9 )
      goto LABEL_51;
    v23[1] = v19;
LABEL_53:
    *(_DWORD *)(v19 + 8) = v18 & 0xFFFFFFFC | *(_DWORD *)(v19 + 8) & 3;
    v28 = (unsigned __int8)(v13 - 1) != 0 ? 4 : 0;
    v24 = *(_DWORD *)(v28 + v19);
    if ( v24 )
    {
      if ( (*(_DWORD *)(v24 + 8) & 0xFFFFFFFC) != v19 )
        goto LABEL_64;
      *(_DWORD *)(v24 + 8) = v9 | *(_DWORD *)(v24 + 8) & 3;
    }
    *(_DWORD *)(v9 + 4 * v29) = v24;
    *(_DWORD *)(v28 + v19) = v9;
    *v32 = v19 | *v32 & 3;
    LOBYTE(v15) = *(_BYTE *)(v19 + 8) & 0xFC;
    if ( !v34 )
    {
      *(_BYTE *)(v19 + 8) = v15 | (v13 ^ 0xFE) & 3;
      return v15;
    }
    *(_BYTE *)(v19 + 8) = v15;
    v9 = v19;
    *(_BYTE *)v32 &= 0xFCu;
LABEL_58:
    v25 = v18 & 0xFFFFFFFC;
    if ( !v25 )
      return v15;
    v26 = *(_DWORD *)(v25 + 4) == v9;
    v9 = v25;
    v13 = 2 * v26 + 1;
  }
  LOBYTE(v15) = v13 | v17 & 0xFC;
  *(_BYTE *)(v9 + 8) = v15;
  return v15;
}
