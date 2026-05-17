/*
 * XREFs of _RtlpTreeDoubleRotateNodes@20 @ 0x4B35015A
 * Callers:
 *     _RtlAvlInsertNodeEx@16 @ 0x4B34FCD0 (_RtlAvlInsertNodeEx@16.c)
 *     _RtlAvlRemoveNode@8 @ 0x4B34FE40 (_RtlAvlRemoveNode@8.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpTreeDoubleRotateNodes(_DWORD *a1, int a2, unsigned int a3, int a4, int a5)
{
  int v5; // ecx
  int v6; // esi
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // edi
  int v11; // ecx
  int result; // eax

  v5 = a4;
  v6 = *(_DWORD *)a3;
  if ( !a4 )
    v6 = *(_DWORD *)(a3 + 4);
  if ( (*(_DWORD *)(v6 + 8) & 0xFFFFFFFC) != a3 )
    goto LABEL_23;
  v7 = a4 ^ 1;
  if ( *(_DWORD *)(a3 + 4 * (a4 ^ 1)) != v6
    || *(_DWORD *)(a2 + 4 * a4) != a3
    || (*(_DWORD *)(a3 + 8) & 0xFFFFFFFC) != a2 )
  {
    goto LABEL_23;
  }
  *(_DWORD *)(a2 + 4 * a4) = v6;
  *(_DWORD *)(v6 + 8) = a2 | *(_DWORD *)(v6 + 8) & 3;
  v8 = *(_DWORD *)(v6 + 4 * a4);
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 8) & 0xFFFFFFFC) != v6 )
      goto LABEL_23;
    *(_DWORD *)(v8 + 8) = a3 | *(_DWORD *)(v8 + 8) & 3;
    v5 = a4;
  }
  *(_DWORD *)(a3 + 4 * v7) = v8;
  *(_DWORD *)(v6 + 4 * v5) = a3;
  *(_DWORD *)(a3 + 8) = v6 | *(_DWORD *)(a3 + 8) & 3;
  if ( (*(_DWORD *)(v6 + 8) & 0xFFFFFFFC) != a2 || *(_DWORD *)(a2 + 4 * a4) != v6 )
LABEL_23:
    __fastfail(0x1Du);
  v9 = *(_DWORD *)(a2 + 8) & 0xFFFFFFFC;
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 4) == a2 )
    {
      *(_DWORD *)(v9 + 4) = v6;
    }
    else
    {
      if ( *(_DWORD *)v9 != a2 )
        goto LABEL_23;
      *(_DWORD *)v9 = v6;
    }
  }
  else
  {
    if ( *a1 != a2 )
      goto LABEL_23;
    *a1 = v6;
  }
  *(_DWORD *)(v6 + 8) = v9 | *(_DWORD *)(v6 + 8) & 3;
  v10 = *(_DWORD *)(v6 + 4 * v7);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 8);
    if ( (v11 & 0xFFFFFFFC) == v6 )
    {
      *(_DWORD *)(v10 + 8) = a2 | v11 & 3;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
LABEL_22:
  *(_DWORD *)(a2 + 4 * a4) = v10;
  result = v6;
  *(_DWORD *)(v6 + 4 * v7) = a2;
  *(_DWORD *)(a2 + 8) = v6 | *(_DWORD *)(a2 + 8) & 3;
  return result;
}
