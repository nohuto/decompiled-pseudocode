/*
 * XREFs of AcpiOSCNotifyWorker @ 0x1C00058A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 */

void __fastcall AcpiOSCNotifyWorker(PDEVICE_OBJECT DeviceObject, struct _IO_WORKITEM *Context)
{
  if ( Context )
    IoFreeWorkItem(Context);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x4Eu,
      (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
}
