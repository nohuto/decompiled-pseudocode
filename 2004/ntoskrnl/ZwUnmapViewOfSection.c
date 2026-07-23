/*
 * XREFs of ZwUnmapViewOfSection @ 0x1403F3B00
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x14035A278 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x14036EEAC (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1403BA934 (RtlFileMapMapView.c)
 *     PiInitializeDDB @ 0x14076BDC0 (PiInitializeDDB.c)
 *     PiReleaseDDB @ 0x14076BF94 (PiReleaseDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14088E89C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094710C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x140947348 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1409558B0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x140955D90 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x14095B274 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x1409691F4 (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x140A4249C (EmpCacheBiosDate.c)
 *     CmpSetVideoBiosInformation @ 0x140A5762C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A577FC (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
