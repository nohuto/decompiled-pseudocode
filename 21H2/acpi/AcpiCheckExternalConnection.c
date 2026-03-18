/*
 * XREFs of AcpiCheckExternalConnection @ 0x1C00918BC
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C0091924 (ACPIRootIrpQueryBusRelations.c)
 *     AcpiExternalQueryTranslatedDescriptorForGsiv @ 0x1C00ADD88 (AcpiExternalQueryTranslatedDescriptorForGsiv.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x1C00ADE20 (AcpiExternalTranslateBiosToNtResources.c)
 * Callees:
 *     QueryExternalTranslatorInterface @ 0x1C009EFFC (QueryExternalTranslatorInterface.c)
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
