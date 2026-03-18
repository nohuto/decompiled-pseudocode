/*
 * XREFs of HalpAcpiGetAllTables @ 0x1403BED38
 * Callers:
 *     HalpAcpiPopulateTableCacheWork @ 0x1403BEAD0 (HalpAcpiPopulateTableCacheWork.c)
 *     HalAcpiGetAllTablesDispatch @ 0x1403BED20 (HalAcpiGetAllTablesDispatch.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     HalpAcpiGetAllTablesWork @ 0x1403BED70 (HalpAcpiGetAllTablesWork.c)
 */

__int64 HalpAcpiGetAllTables()
{
  __int64 AllTablesWork; // rbx

  ExAcquireFastMutex(&HalpAcpiTableCacheLock);
  AllTablesWork = HalpAcpiGetAllTablesWork();
  KeReleaseGuardedMutex(&HalpAcpiTableCacheLock);
  return AllTablesWork;
}
