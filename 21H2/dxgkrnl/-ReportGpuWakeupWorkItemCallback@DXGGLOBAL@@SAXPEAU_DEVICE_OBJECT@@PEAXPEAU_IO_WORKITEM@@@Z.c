/*
 * XREFs of ?ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02E35B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z @ 0x1C02E30BC (-AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@@Z.c)
 */

void __fastcall DXGGLOBAL::ReportGpuWakeupWorkItemCallback(
        struct _DEVICE_OBJECT *IoObject,
        PVOID Context,
        PIO_WORKITEM IoWorkItem)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbx
  DXGGLOBAL *Global; // rax

  if ( Context )
  {
    WdLogSingleEntry1(1LL, 454LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Context == NULL", 454LL, 0LL, 0LL, 0LL, 0LL);
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(IoObject);
  Global = DXGGLOBAL_GetGlobal();
  DXGGLOBAL::AddWakeUpCoreDripsBlockerTracking(Global, (__int64)DeviceAttachmentBaseRef, 0LL);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
