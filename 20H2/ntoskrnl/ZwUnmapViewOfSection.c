/*
 * XREFs of ZwUnmapViewOfSection @ 0x1403F86B0
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x14032AB78 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x140370DFC (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1403BCDB4 (RtlFileMapMapView.c)
 *     PiInitializeDDB @ 0x14077AB80 (PiInitializeDDB.c)
 *     PiReleaseDDB @ 0x14077AD54 (PiReleaseDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14089435C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x14094CECC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x14094D108 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x14095B670 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x14095BB50 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x140961034 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x14096EFC4 (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x140A4873C (EmpCacheBiosDate.c)
 *     CmpSetVideoBiosInformation @ 0x140A57CAC (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A57E7C (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
