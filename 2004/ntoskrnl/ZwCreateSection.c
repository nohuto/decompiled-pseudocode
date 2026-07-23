/*
 * XREFs of ZwCreateSection @ 0x1403F3F00
 * Callers:
 *     CmSiCreateSectionForFile @ 0x1402714D4 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x14037E15C (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x1403BA934 (RtlFileMapMapView.c)
 *     ExpGetGlobalLocaleSection @ 0x14065CC30 (ExpGetGlobalLocaleSection.c)
 *     NtGetNlsSectionPtr @ 0x1406FF070 (NtGetNlsSectionPtr.c)
 *     KsepSdbMapToMemory @ 0x140740014 (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x14076BDC0 (PiInitializeDDB.c)
 *     ExInitializeLeapSecondData @ 0x14079254C (ExInitializeLeapSecondData.c)
 *     SepRmLsaConnectRequest @ 0x1407952D0 (SepRmLsaConnectRequest.c)
 *     CmFcpManagerCreateSection @ 0x14087B060 (CmFcpManagerCreateSection.c)
 *     IopIsNotNativeDriverImage @ 0x14088E89C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094710C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140947348 (ExpQueryElamCertInfo.c)
 *     SLUpdateLicenseDataInternal @ 0x14094AD00 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x1409558B0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140955D90 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095B784 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140968F1C (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
