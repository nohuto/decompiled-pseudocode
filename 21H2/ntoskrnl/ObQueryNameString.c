/*
 * XREFs of ObQueryNameString @ 0x1406C6F80
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14026A920 (SeSetLearningModeObjectInformation.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140271504 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopGetFileVolumeNameInformation @ 0x1402A5348 (IopGetFileVolumeNameInformation.c)
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     SmKmEtwAppendObjectName @ 0x14059DE78 (SmKmEtwAppendObjectName.c)
 *     PiControlGetDeviceStack @ 0x14072FD30 (PiControlGetDeviceStack.c)
 *     EtwpObjectHandleEnumCallback @ 0x14093E0C0 (EtwpObjectHandleEnumCallback.c)
 *     IopCaptureObjectName @ 0x140998948 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140998FA0 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x1409E4AE8 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x1406C7460 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
