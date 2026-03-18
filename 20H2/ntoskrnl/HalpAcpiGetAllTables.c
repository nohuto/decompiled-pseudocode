/*
 * XREFs of HalpAcpiGetAllTables @ 0x1403BAABC
 * Callers:
 *     HalpAcpiPopulateTableCacheWork @ 0x1403BA770 (HalpAcpiPopulateTableCacheWork.c)
 *     HalAcpiGetAllTablesDispatch @ 0x1403BA8A0 (HalAcpiGetAllTablesDispatch.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403BAAF4 (HalpAcpiGetAllTablesWork.c)
 */

__int64 HalpAcpiGetAllTables()
{
  __int64 AllTablesWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  AllTablesWork = HalpAcpiGetAllTablesWork();
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return AllTablesWork;
}
