/*
 * XREFs of ZwMapViewOfSection @ 0x1403F2830
 * Callers:
 *     CmSiMapViewOfSection @ 0x1402E0A84 (CmSiMapViewOfSection.c)
 *     RtlFileMapMapView @ 0x1403B95C4 (RtlFileMapMapView.c)
 *     PiInitializeDDB @ 0x1407699E0 (PiInitializeDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14088D57C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140945E6C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409460A8 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1409541E0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409546C0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x14095A3E4 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140967B7C (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x140A4965C (EmpMapPhysicalAddress.c)
 *     CmpSetVideoBiosInformation @ 0x140A5192C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A51AFC (CmpSetSystemBiosInformation.c)
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
