/*
 * XREFs of _DeleteNodeFromTree@8 @ 0x4B2A6E48
 * Callers:
 *     _RtlDeleteElementGenericTableAvlEx@8 @ 0x4B2A6E00 (_RtlDeleteElementGenericTableAvlEx@8.c)
 * Callees:
 *     _RebalanceNode@4 @ 0x4B2A70E5 (_RebalanceNode@4.c)
 */

_DWORD *__fastcall DeleteNodeFromTree(int a1, int a2)
{
  _DWORD *i; // ebx
  int v5; // ecx
  char v6; // dl
  _BYTE *v7; // eax
  int v8; // ecx
  _DWORD *v9; // ecx
  _BYTE *v10; // esi
  char v11; // al
  _DWORD *result; // eax
  bool v13; // zf
  _BYTE *v14; // edx
  _DWORD *v15; // eax

  if ( *(_DWORD *)(a2 + 4) && (i = *(_DWORD **)(a2 + 8)) != 0 )
  {
    if ( *(char *)(a2 + 12) >= 0 )
    {
      while ( i[1] )
        i = (_DWORD *)i[1];
    }
    else
    {
      for ( i = *(_DWORD **)(a2 + 4); i[2]; i = (_DWORD *)i[2] )
        ;
    }
  }
  else
  {
    i = (_DWORD *)a2;
  }
  v5 = i[1];
  v6 = -1;
  v7 = (_BYTE *)*i;
  if ( v5 )
  {
    if ( *((_DWORD **)v7 + 1) == i )
    {
      *((_DWORD *)v7 + 1) = v5;
    }
    else
    {
      *((_DWORD *)v7 + 2) = v5;
      v6 = 1;
    }
    v9 = (_DWORD *)i[1];
  }
  else
  {
    v8 = i[2];
    if ( *((_DWORD **)v7 + 1) == i )
    {
      *((_DWORD *)v7 + 1) = v8;
    }
    else
    {
      *((_DWORD *)v7 + 2) = v8;
      v6 = 1;
    }
    v9 = (_DWORD *)i[2];
    if ( !v9 )
      goto LABEL_7;
  }
  *v9 = *i;
LABEL_7:
  *(_BYTE *)(a1 + 12) = 0;
  v10 = (_BYTE *)*i;
  while ( 1 )
  {
    v11 = v10[12];
    if ( v11 == v6 )
    {
      v10[12] = 0;
      goto LABEL_32;
    }
    if ( !v11 )
      break;
    result = (_DWORD *)RebalanceNode(v10);
    if ( result )
      goto LABEL_12;
    v10 = *(_BYTE **)v10;
LABEL_32:
    v13 = *(_DWORD *)(*(_DWORD *)v10 + 8) == (_DWORD)v10;
    v10 = *(_BYTE **)v10;
    v6 = 2 * v13 - 1;
  }
  result = (_DWORD *)a1;
  v10[12] = -v6;
  if ( *(_BYTE *)(a1 + 12) )
    --*(_DWORD *)(a1 + 28);
LABEL_12:
  if ( (_DWORD *)a2 != i )
  {
    *i = *(_DWORD *)a2;
    i[1] = *(_DWORD *)(a2 + 4);
    i[2] = *(_DWORD *)(a2 + 8);
    i[3] = *(_DWORD *)(a2 + 12);
    v14 = (_BYTE *)*i;
    if ( *(_DWORD *)(*(_DWORD *)a2 + 4) == a2 )
      *((_DWORD *)v14 + 1) = i;
    else
      *((_DWORD *)v14 + 2) = i;
    v15 = (_DWORD *)i[1];
    if ( v15 )
      *v15 = i;
    result = (_DWORD *)i[2];
    if ( result )
      *result = i;
  }
  return result;
}
