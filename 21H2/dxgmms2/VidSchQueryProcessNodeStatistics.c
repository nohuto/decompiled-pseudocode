/*
 * XREFs of VidSchQueryProcessNodeStatistics @ 0x1C00F49B0
 * Callers:
 *     <none>
 * Callees:
 *     CopyNodeStatistics @ 0x1C00F3F60 (CopyNodeStatistics.c)
 */

__int64 __fastcall VidSchQueryProcessNodeStatistics(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v6; // r8d
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  __int64 *v9; // rdx

  if ( a2 >= *(_DWORD *)(a1 + 80) )
    return 3221225485LL;
  v5 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 8LL * *(unsigned int *)(a1 + 4));
  if ( !v5 )
    return 3221225485LL;
  v6 = *(_DWORD *)(v5 + 80);
  v7 = *(_QWORD **)(v5 + 8);
  v8 = &v7[a2];
  if ( a2 >= v6 )
    v8 = v7;
  if ( !*v8 )
    return 3221225485LL;
  v9 = &v7[a2];
  if ( a2 >= v6 )
    v9 = v7;
  CopyNodeStatistics(a4, *v9);
  return 0LL;
}
