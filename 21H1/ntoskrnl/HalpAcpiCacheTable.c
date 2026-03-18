/*
 * XREFs of HalpAcpiCacheTable @ 0x1403B73F0
 * Callers:
 *     HalpAcpiGetTableWork @ 0x1402F87C0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403B7224 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiTableCacheInit @ 0x140A5CC70 (HalpAcpiTableCacheInit.c)
 *     HalpAcpiCacheOverrideTables @ 0x140A8A700 (HalpAcpiCacheOverrideTables.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403764C0 (HalpMmAllocCtxFree.c)
 */

__int64 *__fastcall HalpAcpiCacheTable(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  __int64 *result; // rax

  v2 = *(_QWORD *)(a2 - 8);
  v3 = (_QWORD *)(a2 - 24);
  if ( v2 )
  {
    for ( result = (__int64 *)HalpAcpiTableCacheList; result != &HalpAcpiTableCacheList; result = (__int64 *)*result )
    {
      if ( v2 == result[2] )
      {
        if ( a1 )
          return (__int64 *)HalpMmAllocCtxFree(a1, (__int64)v3);
        return result;
      }
    }
  }
  result = (__int64 *)qword_140CDB488;
  if ( *(__int64 **)qword_140CDB488 != &HalpAcpiTableCacheList )
    __fastfail(3u);
  *v3 = &HalpAcpiTableCacheList;
  v3[1] = result;
  *result = (__int64)v3;
  qword_140CDB488 = (__int64)v3;
  return result;
}
