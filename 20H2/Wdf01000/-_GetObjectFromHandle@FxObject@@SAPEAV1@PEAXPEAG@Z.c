/*
 * XREFs of ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C002DD68
 * Callers:
 *     ?PerfEvtDeviceD0EntryStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0043314 (-PerfEvtDeviceD0EntryStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C00433AC (-PerfEvtDeviceD0ExitStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C0043444 (-PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtDeviceReleaseHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C00434DC (-PerfEvtDeviceReleaseHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C0043574 (-PerfEvtIoStopStart@@YAEPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C0043628 (-PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z.c)
 *     imp_WdfObjectAllocateContext @ 0x1C0056130 (imp_WdfObjectAllocateContext.c)
 *     imp_VfWdfIoQueueRetrieveFoundRequest @ 0x1C00BD1E0 (imp_VfWdfIoQueueRetrieveFoundRequest.c)
 *     imp_VfWdfIoQueueRetrieveNextRequest @ 0x1C00BD330 (imp_VfWdfIoQueueRetrieveNextRequest.c)
 *     imp_VfWdfIoQueueRetrieveRequestByFileObject @ 0x1C00BD480 (imp_VfWdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_VfWdfRequestComplete @ 0x1C00BE750 (imp_VfWdfRequestComplete.c)
 *     imp_VfWdfRequestCompleteWithInformation @ 0x1C00BE8B0 (imp_VfWdfRequestCompleteWithInformation.c)
 *     imp_VfWdfRequestCompleteWithPriorityBoost @ 0x1C00BEA10 (imp_VfWdfRequestCompleteWithPriorityBoost.c)
 *     VfAddContextToHandle @ 0x1C00C02D4 (VfAddContextToHandle.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C0514 (VfWdfObjectGetTypedContext.c)
 *     VfEvtDeviceD0Entry @ 0x1C00C05E0 (VfEvtDeviceD0Entry.c)
 *     VfEvtDeviceD0Exit @ 0x1C00C07A0 (VfEvtDeviceD0Exit.c)
 *     VfEvtDevicePrepareHardware @ 0x1C00C0960 (VfEvtDevicePrepareHardware.c)
 *     VfEvtDeviceReleaseHardware @ 0x1C00C0C30 (VfEvtDeviceReleaseHardware.c)
 *     VfEvtIoDefault @ 0x1C00C1280 (VfEvtIoDefault.c)
 *     VfEvtIoDeviceControl @ 0x1C00C1430 (VfEvtIoDeviceControl.c)
 *     VfEvtIoInternalDeviceControl @ 0x1C00C15F0 (VfEvtIoInternalDeviceControl.c)
 *     VfEvtIoRead @ 0x1C00C17B0 (VfEvtIoRead.c)
 *     VfEvtIoWrite @ 0x1C00C1AD0 (VfEvtIoWrite.c)
 * Callees:
 *     <none>
 */

FxObject *__fastcall FxObject::_GetObjectFromHandle(unsigned __int64 Handle, wchar_t *ObjectOffset)
{
  unsigned __int16 *v2; // r8
  __int64 v3; // rax

  v2 = (unsigned __int16 *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
  {
    v3 = *v2;
    *ObjectOffset = v3;
    return (FxObject *)((char *)v2 - v3);
  }
  return (FxObject *)v2;
}
