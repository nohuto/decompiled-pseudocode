/*
 * XREFs of PipDependencyGraphDepthFirstSearch @ 0x14055FA74
 * Callers:
 *     PipDependencyGraphDepthFirstSearch @ 0x14055FA74 (PipDependencyGraphDepthFirstSearch.c)
 *     PipFindDependencyNodePath @ 0x14055FAFC (PipFindDependencyNodePath.c)
 * Callees:
 *     PipDependencyGraphDepthFirstSearch @ 0x14055FA74 (PipDependencyGraphDepthFirstSearch.c)
 */

char __fastcall PipDependencyGraphDepthFirstSearch(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  _QWORD *v10; // rbp
  __int64 v11; // rcx
  int v12; // eax

  *a3 = 0;
  *a4 = 0;
  if ( a1 != a2 )
  {
    v8 = (_QWORD *)(a1 + 16);
    v9 = *(_QWORD **)(a1 + 16);
    do
    {
      if ( v9 == v8 )
        return 0;
      v10 = v9;
      v11 = v9[4];
      v9 = (_QWORD *)*v9;
    }
    while ( !(unsigned __int8)PipDependencyGraphDepthFirstSearch(v11, a2, a3, a4) );
    v12 = *((_DWORD *)v10 + 12);
    ++*a3;
    *a4 = v12;
  }
  return 1;
}
