/*
 * XREFs of ?RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C014F780
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00CADFC (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RoundToNearestScaleFactor(
        __int64 a1,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r10

  v4 = 0;
  v6 = a1;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a2 + 2);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v9);
    v8 = *((_QWORD *)a2 + 2);
    if ( !v8 )
      return 0LL;
  }
  if ( *((_DWORD *)a2 + 2) != 1 )
  {
    do
    {
      v10 = v4 + 1;
      if ( v6 <= (unsigned int)(*(_DWORD *)(v8 + 4LL * v4) + *(_DWORD *)(v8 + 4 * v10)) >> 1 )
        break;
      ++v4;
    }
    while ( (unsigned int)v10 < *((_DWORD *)a2 + 2) - 1 );
  }
  return *(unsigned int *)(v8 + 4LL * v4);
}
