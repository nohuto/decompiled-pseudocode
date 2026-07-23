/*
 * XREFs of ZwCreateSection @ 0x1403F2C70
 * Callers:
 *     CmSiCreateSectionForFile @ 0x1402E0B5C (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x14037D69C (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x1403B95C4 (RtlFileMapMapView.c)
 *     NtGetNlsSectionPtr @ 0x1406DC0D0 (NtGetNlsSectionPtr.c)
 *     ExpGetGlobalLocaleSection @ 0x1406FAA4C (ExpGetGlobalLocaleSection.c)
 *     KsepSdbMapToMemory @ 0x14073E494 (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x1407699E0 (PiInitializeDDB.c)
 *     SepRmLsaConnectRequest @ 0x140795520 (SepRmLsaConnectRequest.c)
 *     CmFcpManagerCreateSection @ 0x140879D70 (CmFcpManagerCreateSection.c)
 *     IopIsNotNativeDriverImage @ 0x14088D57C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140945E6C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409460A8 (ExpQueryElamCertInfo.c)
 *     SLUpdateLicenseDataInternal @ 0x140949960 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x1409541E0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409546C0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095A3E4 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140967B7C (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 *     ExInitializeLeapSecondData @ 0x140A535D4 (ExInitializeLeapSecondData.c)
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
