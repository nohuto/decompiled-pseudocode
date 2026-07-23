/*
 * XREFs of ZwCreateSection @ 0x1403F8AB0
 * Callers:
 *     CmSiCreateSectionForFile @ 0x140204428 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x14037FE8C (LdrpMapResourceFile.c)
 *     RtlFileMapMapView @ 0x1403BCDB4 (RtlFileMapMapView.c)
 *     ExpGetGlobalLocaleSection @ 0x1406AE0CC (ExpGetGlobalLocaleSection.c)
 *     NtGetNlsSectionPtr @ 0x1406D1CC0 (NtGetNlsSectionPtr.c)
 *     KsepSdbMapToMemory @ 0x14074EBF4 (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x14077AB80 (PiInitializeDDB.c)
 *     ExInitializeLeapSecondData @ 0x14079EDEC (ExInitializeLeapSecondData.c)
 *     SepRmLsaConnectRequest @ 0x1407A4600 (SepRmLsaConnectRequest.c)
 *     CmFcpManagerCreateSection @ 0x140880BD0 (CmFcpManagerCreateSection.c)
 *     IopIsNotNativeDriverImage @ 0x14089435C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094CECC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x14094D108 (ExpQueryElamCertInfo.c)
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x14095B670 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x14095BB50 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140961544 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x14096ECEC (AslpFileLargeMapCreate.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
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
