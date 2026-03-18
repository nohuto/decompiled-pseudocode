/*
 * XREFs of VidSchQueryVidPnSourceStatistics @ 0x1C0035300
 * Callers:
 *     <none>
 * Callees:
 *     CopyVidPnSourceStatistics @ 0x1C00D2308 (CopyVidPnSourceStatistics.c)
 */

__int64 __fastcall VidSchQueryVidPnSourceStatistics(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  unsigned __int8 v7; // al

  if ( a2 >= *(_DWORD *)(a1 + 40) )
    return 3221225485LL;
  CopyVidPnSourceStatistics(a3, *(_QWORD *)(a1 + 8LL * a2 + 6352));
  if ( *(_BYTE *)(v5 + 2132) )
    v7 = *(_BYTE *)(v4 + v5 + 1792);
  else
    v7 = *(_BYTE *)(v5 + 1792);
  *(_QWORD *)(v6 + 16) = v7;
  CopyVidPnSourceStatistics(
    v6 + 80,
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(g_pVidSchSystemProcess + 24) + 8LL * *(unsigned int *)(v5 + 4)) + 8 * v4 + 88));
  return 0LL;
}
