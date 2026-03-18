/*
 * XREFs of HalpAcpiGetAllTables @ 0x1403B71EC
 * Callers:
 *     HalpAcpiPopulateTableCacheWork @ 0x1403B6EA0 (HalpAcpiPopulateTableCacheWork.c)
 *     HalAcpiGetAllTablesDispatch @ 0x1403B6FD0 (HalAcpiGetAllTablesDispatch.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403B7224 (HalpAcpiGetAllTablesWork.c)
 */

__int64 HalpAcpiGetAllTables()
{
  __int64 AllTablesWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  AllTablesWork = HalpAcpiGetAllTablesWork();
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return AllTablesWork;
}
