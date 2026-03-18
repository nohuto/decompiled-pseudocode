/*
 * XREFs of HalpAcpiGetAllTables @ 0x1403B801C
 * Callers:
 *     HalpAcpiPopulateTableCacheWork @ 0x1403B7CD0 (HalpAcpiPopulateTableCacheWork.c)
 *     HalAcpiGetAllTablesDispatch @ 0x1403B7E00 (HalAcpiGetAllTablesDispatch.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403B8054 (HalpAcpiGetAllTablesWork.c)
 */

__int64 HalpAcpiGetAllTables()
{
  __int64 AllTablesWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  AllTablesWork = HalpAcpiGetAllTablesWork();
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return AllTablesWork;
}
