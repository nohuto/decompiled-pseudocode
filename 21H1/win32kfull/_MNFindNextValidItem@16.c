/*
 * XREFs of _MNFindNextValidItem@16 @ 0x1ACCB8
 * Callers:
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 *     _MNFindItemInColumn@16 @ 0x1ACBF1 (_MNFindItemInColumn@16.c)
 *     _xxxMNFindChar@16 @ 0x1ACD4F (_xxxMNFindChar@16.c)
 * Callees:
 *     <none>
 */

int __fastcall MNFindNextValidItem(int a1, int a2, int a3, char a4)
{
  int v4; // edi
  int v5; // esi
  int v6; // ebx
  _DWORD *v7; // eax

  v4 = a3;
  v5 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 24);
  if ( a2 >= 0 || a3 <= 0 )
  {
    if ( a2 < v5 || a3 >= 0 )
    {
      v6 = a2;
    }
    else
    {
      v6 = -1;
      a2 = -1;
    }
  }
  else
  {
    v6 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 24);
    a2 = v6;
  }
  if ( !v5 )
    return -1;
  if ( a2 || v5 != 1 || a3 <= 0 )
  {
LABEL_15:
    while ( 1 )
    {
      a2 += v4;
      if ( a2 == v6 || !v4 )
        return -1;
      if ( a2 < v5 )
      {
        if ( a2 >= 0 )
          goto LABEL_13;
        a2 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 24);
      }
      else
      {
        a2 = -1;
      }
    }
  }
  v4 = 0;
LABEL_13:
  v7 = *(_DWORD **)(80 * a2 + *(_DWORD *)(a1 + 56));
  if ( (*v7 & 0x800) != 0 )
  {
    if ( (a4 & 1) == 0 )
      goto LABEL_15;
  }
  else if ( (unsigned int)(v7[16] - 2) <= 5 )
  {
    goto LABEL_15;
  }
  return a2;
}
