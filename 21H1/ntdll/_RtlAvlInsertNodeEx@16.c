/*
 * XREFs of _RtlAvlInsertNodeEx@16 @ 0x4B34FCD0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTreeDoubleRotateNodes@20 @ 0x4B35015A (_RtlpTreeDoubleRotateNodes@20.c)
 */

char __stdcall RtlAvlInsertNodeEx(unsigned int *a1, int a2, unsigned __int8 a3, _DWORD *a4)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  unsigned __int8 v6; // bh
  _BYTE *v7; // edi
  char v8; // cl
  unsigned __int8 v9; // bl
  int v10; // edi
  unsigned int v11; // ecx
  int v12; // ebx
  int v13; // ecx
  char v14; // bh

  HIDWORD(v4) = a2;
  v5 = (unsigned int)a4;
  *a4 = 0;
  a4[1] = 0;
  a4[2] = a2;
  if ( !a2 )
  {
    LOBYTE(v4) = (_BYTE)a1;
    *a1 = (unsigned int)a4;
    return v4;
  }
  v6 = a3;
  *(_DWORD *)(a2 + 4 * a3) = a4;
  while ( 1 )
  {
    v7 = (_BYTE *)(HIDWORD(v4) + 8);
    LOBYTE(v4) = 2 * v6;
    v8 = (-1 - 2 * v6) & 3;
    v9 = *(_BYTE *)(HIDWORD(v4) + 8) & 3;
    if ( v9 )
      break;
    v5 = HIDWORD(v4);
    *v7 = v8 | *(_BYTE *)(HIDWORD(v4) + 8) & 0xFC;
    HIDWORD(v4) = *(_DWORD *)v7 & 0xFFFFFFFC;
    if ( !HIDWORD(v4) )
      return v4;
    v6 = *(_DWORD *)HIDWORD(v4) != v5;
  }
  if ( v9 != v8 )
  {
LABEL_22:
    *(_BYTE *)(HIDWORD(v4) + 8) &= 0xFCu;
    return v4;
  }
  if ( (*(_BYTE *)(v5 + 8) & 3) == v9 )
  {
    v10 = v6 ^ 1;
    if ( (*(_DWORD *)(v5 + 8) & 0xFFFFFFFC) == HIDWORD(v4) && *(_DWORD *)(HIDWORD(v4) + 4 * v6) == v5 )
    {
      v11 = *(_DWORD *)(HIDWORD(v4) + 8) & 0xFFFFFFFC;
      if ( v11 )
      {
        if ( *(_DWORD *)(v11 + 4) == HIDWORD(v4) )
        {
          *(_DWORD *)(v11 + 4) = v5;
        }
        else
        {
          if ( *(_DWORD *)v11 != HIDWORD(v4) )
            goto LABEL_23;
          *(_DWORD *)v11 = v5;
        }
      }
      else
      {
        if ( *a1 != HIDWORD(v4) )
          goto LABEL_23;
        *a1 = v5;
      }
      *(_DWORD *)(v5 + 8) = v11 | *(_DWORD *)(v5 + 8) & 3;
      v12 = *(_DWORD *)(v5 + 4 * v10);
      if ( !v12 )
      {
LABEL_21:
        *(_DWORD *)(HIDWORD(v4) + 4 * (v10 ^ 1)) = v12;
        *(_DWORD *)(v5 + 4 * v10) = HIDWORD(v4);
        LODWORD(v4) = v5 | *(_DWORD *)(HIDWORD(v4) + 8) & 3;
        *(_DWORD *)(HIDWORD(v4) + 8) = v4;
        *(_BYTE *)(v5 + 8) &= 0xFCu;
        goto LABEL_22;
      }
      v13 = *(_DWORD *)(v12 + 8);
      if ( (v13 & 0xFFFFFFFC) == v5 )
      {
        *(_DWORD *)(v12 + 8) = HIDWORD(v4) | v13 & 3;
        goto LABEL_21;
      }
    }
LABEL_23:
    __fastfail(0x1Du);
  }
  v4 = RtlpTreeDoubleRotateNodes(v5, v6, v9);
  *(_BYTE *)(HIDWORD(v4) + 8) &= 0xFCu;
  v14 = *(_BYTE *)(v5 + 8) & 0xFC;
  *(_BYTE *)(v5 + 8) = v14;
  if ( v9 == (*(_BYTE *)(v4 + 8) & 3) )
  {
    *(_BYTE *)(HIDWORD(v4) + 8) ^= (v9 ^ *(_BYTE *)(HIDWORD(v4) + 8) ^ 0xFE) & 3;
  }
  else if ( v9 == ((*(_BYTE *)(v4 + 8) ^ 0xFE) & 3) )
  {
    *(_BYTE *)(v5 + 8) = v9 | v14;
  }
  *(_BYTE *)(v4 + 8) &= 0xFCu;
  return v4;
}
