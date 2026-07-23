/*
 * XREFs of ZwMapViewOfSection @ 0x1403F3AC0
 * Callers:
 *     CmSiMapViewOfSection @ 0x1402713FC (CmSiMapViewOfSection.c)
 *     RtlFileMapMapView @ 0x1403BA934 (RtlFileMapMapView.c)
 *     PiInitializeDDB @ 0x14076BDC0 (PiInitializeDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14088E89C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094710C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140947348 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1409558B0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140955D90 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095B784 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140968F1C (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x140A425EC (EmpMapPhysicalAddress.c)
 *     CmpSetVideoBiosInformation @ 0x140A5762C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A577FC (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
