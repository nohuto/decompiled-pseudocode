/*
 * XREFs of VidSchQueryProcessNodeStatistics @ 0x1C00D3150
 * Callers:
 *     <none>
 * Callees:
 *     CopyNodeStatistics @ 0x1C00D2284 (CopyNodeStatistics.c)
 */

__int64 __fastcall VidSchQueryProcessNodeStatistics(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned int v6; // r8d
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  __int64 *v9; // rdx

  v4 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 72) )
    return 3221225485LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8LL * *(unsigned int *)(a1 + 4));
  if ( !v5 )
    return 3221225485LL;
  v6 = *(_DWORD *)(v5 + 80);
  v7 = *(_QWORD **)(v5 + 8);
  v8 = &v7[a2];
  if ( (unsigned int)v4 >= v6 )
    v8 = v7;
  if ( !*v8 )
    return 3221225485LL;
  v9 = &v7[v4];
  if ( (unsigned int)v4 >= v6 )
    v9 = v7;
  CopyNodeStatistics(a4, *v9);
  return 0LL;
}
