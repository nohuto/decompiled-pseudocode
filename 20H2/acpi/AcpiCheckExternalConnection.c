/*
 * XREFs of AcpiCheckExternalConnection @ 0x1C009D7F4
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C009D85C (ACPIRootIrpQueryBusRelations.c)
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C00AEE18 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00AEEB0 (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     QueryExternalTranslatorInterface @ 0x1C009F5C4 (QueryExternalTranslatorInterface.c)
 */

__int64 AcpiCheckExternalConnection()
{
  PVOID v0; // rbx
  __int64 result; // rax

  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
  v0 = ExternalTranslationInterface;
  ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
  KeLeaveCriticalRegion();
  result = 0LL;
  if ( !v0 )
    return QueryExternalTranslatorInterface();
  return result;
}
