/*
 * XREFs of VidSchQueryNodeStatistics @ 0x1C00F4840
 * Callers:
 *     <none>
 * Callees:
 *     CopyNodeStatistics @ 0x1C00F3F60 (CopyNodeStatistics.c)
 */

__int64 __fastcall VidSchQueryNodeStatistics(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  _QWORD *v6; // rdx
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 *v9; // rdx

  v4 = a2;
  if ( a2 >= *(_DWORD *)(a1 + 80) )
    return 3221225485LL;
  v6 = *(_QWORD **)(a1 + 632);
  if ( (unsigned int)v4 < *(_DWORD *)(a1 + 704) )
    v6 += v4;
  CopyNodeStatistics(a3, *v6 + 2648LL);
  v8 = *(_QWORD *)(*(_QWORD *)(g_pVidSchSystemProcess + 32) + 8LL * *(unsigned int *)(v7 + 4));
  v9 = (__int64 *)(*(_QWORD *)(v8 + 8) + 8 * v4);
  if ( (unsigned int)v4 >= *(_DWORD *)(v8 + 80) )
    v9 = *(__int64 **)(v8 + 8);
  CopyNodeStatistics(a3 + 272, *v9);
  return 0LL;
}
