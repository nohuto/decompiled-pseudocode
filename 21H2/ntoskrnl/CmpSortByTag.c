/*
 * XREFs of CmpSortByTag @ 0x140A61710
 * Callers:
 *     CmpDoSort @ 0x140A615D8 (CmpDoSort.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpSortByTag(__int64 a1)
{
  _QWORD *v1; // r8
  _QWORD *v3; // r9
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *i; // rax
  _QWORD *v9; // rcx

  v1 = *(_QWORD **)a1;
  v3 = *(_QWORD **)(a1 + 8);
  v4 = **(_QWORD ***)a1;
  if ( *(_QWORD **)a1 != v3 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v1 + 34) > *((_DWORD *)v4 + 34) )
      {
        v5 = *v4;
        v6 = v1;
        if ( v4 != v3 )
          v6 = v3;
        v3 = v6;
        if ( *(_QWORD **)(v5 + 8) != v4 )
          goto LABEL_16;
        v7 = (_QWORD *)v4[1];
        if ( (_QWORD *)*v7 != v4 )
          goto LABEL_16;
        *v7 = v5;
        *(_QWORD *)(v5 + 8) = v7;
        for ( i = *(_QWORD **)a1; i != v1; i = (_QWORD *)*i )
        {
          if ( *((_DWORD *)i + 34) >= *((_DWORD *)v4 + 34) )
            break;
        }
        v9 = (_QWORD *)i[1];
        if ( (_QWORD *)*v9 != i )
LABEL_16:
          __fastfail(3u);
        *v4 = i;
        v4[1] = v9;
        *v9 = v4;
        i[1] = v4;
        v4 = v1;
      }
      else
      {
        v1 = v4;
      }
      if ( v1 == v3 )
        break;
      v4 = (_QWORD *)*v4;
    }
  }
  return 1;
}
