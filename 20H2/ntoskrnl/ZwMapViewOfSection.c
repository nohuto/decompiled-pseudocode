/*
 * XREFs of ZwMapViewOfSection @ 0x1403F8670
 * Callers:
 *     CmSiMapViewOfSection @ 0x140204350 (CmSiMapViewOfSection.c)
 *     RtlFileMapMapView @ 0x1403BCDB4 (RtlFileMapMapView.c)
 *     PiInitializeDDB @ 0x14077AB80 (PiInitializeDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14089435C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094CECC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x14094D108 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x14095B670 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x14095BB50 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x140961544 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x14096ECEC (AslpFileLargeMapCreate.c)
 *     EmpMapPhysicalAddress @ 0x140A4888C (EmpMapPhysicalAddress.c)
 *     CmpSetVideoBiosInformation @ 0x140A57CAC (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A57E7C (CmpSetSystemBiosInformation.c)
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
