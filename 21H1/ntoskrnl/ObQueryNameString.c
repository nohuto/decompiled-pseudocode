/*
 * XREFs of ObQueryNameString @ 0x1405D9580
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1402068B0 (SeSetLearningModeObjectInformation.c)
 *     IopGetFileVolumeNameInformation @ 0x14031548C (IopGetFileVolumeNameInformation.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14033DC04 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoDeleteDevice @ 0x14033F890 (IoDeleteDevice.c)
 *     SmKmEtwAppendObjectName @ 0x140598088 (SmKmEtwAppendObjectName.c)
 *     PiControlGetDeviceStack @ 0x14071BD30 (PiControlGetDeviceStack.c)
 *     EtwpObjectHandleEnumCallback @ 0x140939650 (EtwpObjectHandleEnumCallback.c)
 *     IopCaptureObjectName @ 0x140992FB8 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140993610 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x1409E0A78 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x1405D9AA0 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
