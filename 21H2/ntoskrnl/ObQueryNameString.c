/*
 * XREFs of ObQueryNameString @ 0x14070F640
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x14024FC04 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopGetFileVolumeNameInformation @ 0x1402A0DA4 (IopGetFileVolumeNameInformation.c)
 *     IoDeleteDevice @ 0x1402D3820 (IoDeleteDevice.c)
 *     SeSetLearningModeObjectInformation @ 0x1405F43E0 (SeSetLearningModeObjectInformation.c)
 *     SmKmEtwAppendObjectName @ 0x1405FB648 (SmKmEtwAppendObjectName.c)
 *     IopErrorLogThread @ 0x14080FDC0 (IopErrorLogThread.c)
 *     EtwpObjectHandleEnumCallback @ 0x1409EA760 (EtwpObjectHandleEnumCallback.c)
 *     IopCaptureObjectName @ 0x140A513D4 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140A51F50 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x140A9BAD4 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x1407103B0 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
