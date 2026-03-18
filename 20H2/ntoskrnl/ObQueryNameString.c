/*
 * XREFs of ObQueryNameString @ 0x140634AC0
 * Callers:
 *     IoDeleteDevice @ 0x140203350 (IoDeleteDevice.c)
 *     SeSetLearningModeObjectInformation @ 0x1402111B0 (SeSetLearningModeObjectInformation.c)
 *     IopGetFileVolumeNameInformation @ 0x140323CEC (IopGetFileVolumeNameInformation.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140361624 (IopAttachDeviceToDeviceStackSafe.c)
 *     SmKmEtwAppendObjectName @ 0x14059C218 (SmKmEtwAppendObjectName.c)
 *     PiControlGetDeviceStack @ 0x14072BB4C (PiControlGetDeviceStack.c)
 *     EtwpObjectHandleEnumCallback @ 0x140940720 (EtwpObjectHandleEnumCallback.c)
 *     IopCaptureObjectName @ 0x14099A758 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x14099ADB0 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x1409E6AF8 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x1406350A0 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
