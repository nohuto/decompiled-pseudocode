/*
 * XREFs of ObQueryNameString @ 0x14065F880
 * Callers:
 *     IoDeleteDevice @ 0x14026F700 (IoDeleteDevice.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140277254 (IopAttachDeviceToDeviceStackSafe.c)
 *     SeSetLearningModeObjectInformation @ 0x1402993C0 (SeSetLearningModeObjectInformation.c)
 *     IopGetFileVolumeNameInformation @ 0x140353308 (IopGetFileVolumeNameInformation.c)
 *     SmKmEtwAppendObjectName @ 0x140598778 (SmKmEtwAppendObjectName.c)
 *     PiControlGetDeviceStack @ 0x14071DCB0 (PiControlGetDeviceStack.c)
 *     EtwpObjectHandleEnumCallback @ 0x14093A8F0 (EtwpObjectHandleEnumCallback.c)
 *     IopCaptureObjectName @ 0x1409945F8 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140994C50 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x1409E0AD8 (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x14065FDA0 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
