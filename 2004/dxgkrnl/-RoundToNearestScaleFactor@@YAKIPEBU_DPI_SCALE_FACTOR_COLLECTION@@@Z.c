/*
 * XREFs of ?RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C004AC34
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C000BD68 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoundToNearestScaleFactor(__int64 a1, const struct _DPI_SCALE_FACTOR_COLLECTION *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r10

  v2 = 0;
  v4 = a1;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    *(_QWORD *)(v5 + 24) = 817LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_QWORD *)a2 + 2);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v7 + 24) = 818LL;
    WdLogEvent5_WdAssertion(v7);
    v6 = *((_QWORD *)a2 + 2);
    if ( !v6 )
      return 0LL;
  }
  if ( *((_DWORD *)a2 + 2) != 1 )
  {
    do
    {
      v8 = v2 + 1;
      if ( v4 <= (unsigned int)(*(_DWORD *)(v6 + 4LL * v2) + *(_DWORD *)(v6 + 4 * v8)) >> 1 )
        break;
      ++v2;
    }
    while ( (unsigned int)v8 < *((_DWORD *)a2 + 2) - 1 );
  }
  return *(unsigned int *)(v6 + 4LL * v2);
}
