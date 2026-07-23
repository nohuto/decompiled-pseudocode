/*
 * XREFs of HalpAcpiGetAllTables @ 0x1403BB62C
 * Callers:
 *     HalpAcpiPopulateTableCacheWork @ 0x1403BB2E0 (HalpAcpiPopulateTableCacheWork.c)
 *     HalAcpiGetAllTablesDispatch @ 0x1403BB410 (HalAcpiGetAllTablesDispatch.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403BB664 (HalpAcpiGetAllTablesWork.c)
 */

__int64 HalpAcpiGetAllTables()
{
  __int64 AllTablesWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  AllTablesWork = HalpAcpiGetAllTablesWork();
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return AllTablesWork;
}
