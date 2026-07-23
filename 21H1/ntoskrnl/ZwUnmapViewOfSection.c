/*
 * XREFs of ZwUnmapViewOfSection @ 0x1403F2870
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x14031C6A8 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x14036E27C (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1403B95C4 (RtlFileMapMapView.c)
 *     PiInitializeDDB @ 0x1407699E0 (PiInitializeDDB.c)
 *     PiReleaseDDB @ 0x140769BB4 (PiReleaseDDB.c)
 *     IopIsNotNativeDriverImage @ 0x14088D57C (IopIsNotNativeDriverImage.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140945E6C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409460A8 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1409541E0 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1409546C0 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x140959ED4 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x140967E54 (AslpFilePartialViewFree.c)
 *     EmpCacheBiosDate @ 0x140A4950C (EmpCacheBiosDate.c)
 *     CmpSetVideoBiosInformation @ 0x140A5192C (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x140A51AFC (CmpSetSystemBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
