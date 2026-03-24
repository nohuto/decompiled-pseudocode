/*
 * XREFs of ObQueryNameString @ 0x140718930
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14027C980 (SeSetLearningModeObjectInformation.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1402832F4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopGetFileVolumeNameInformation @ 0x140360418 (IopGetFileVolumeNameInformation.c)
 *     IoDeleteDevice @ 0x140360D90 (IoDeleteDevice.c)
 *     SmKmEtwAppendObjectName @ 0x14059DC48 (SmKmEtwAppendObjectName.c)
 *     PiControlGetDeviceStack @ 0x14072FB64 (PiControlGetDeviceStack.c)
 *     EtwpObjectHandleEnumCallback @ 0x14093DEF0 (EtwpObjectHandleEnumCallback.c)
 *     IopCaptureObjectName @ 0x140997948 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140997FA0 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x1409E3AE8 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x140718E10 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
