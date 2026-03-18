/*
 * XREFs of HalpAcpiCacheTable @ 0x1403BEF40
 * Callers:
 *     HalpAcpiGetTableWork @ 0x140213AC0 (HalpAcpiGetTableWork.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403BED70 (HalpAcpiGetAllTablesWork.c)
 *     HalpAcpiTableCacheInit @ 0x140AF9A94 (HalpAcpiTableCacheInit.c)
 *     HalpAcpiCacheOverrideTables @ 0x140B4BD48 (HalpAcpiCacheOverrideTables.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x1403B1B5C (HalpMmAllocCtxFree.c)
 */

void __fastcall HalpAcpiCacheTable(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  __int64 *i; // rax
  _QWORD *v5; // rax

  v2 = *(_QWORD *)(a2 - 8);
  v3 = (_QWORD *)(a2 - 24);
  if ( v2 )
  {
    for ( i = (__int64 *)HalpAcpiTableCacheList; i != &HalpAcpiTableCacheList; i = (__int64 *)*i )
    {
      if ( v2 == i[2] )
      {
        if ( a1 )
          HalpMmAllocCtxFree(a1, (__int64)v3);
        return;
      }
    }
  }
  v5 = (_QWORD *)qword_140CE2218;
  if ( *(__int64 **)qword_140CE2218 != &HalpAcpiTableCacheList )
    __fastfail(3u);
  *v3 = &HalpAcpiTableCacheList;
  v3[1] = v5;
  *v5 = v3;
  qword_140CE2218 = (__int64)v3;
}
