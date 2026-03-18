/*
 * XREFs of imp_WdfDeviceResumeIdleActual @ 0x1C0011740
 * Callers:
 *     <none>
 * Callees:
 *     ResumeIdleWorker @ 0x1C0011760 (ResumeIdleWorker.c)
 */

void __fastcall imp_WdfDeviceResumeIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        void *Tag,
        int Line,
        char *File)
{
  ResumeIdleWorker(DriverGlobals, Device, Tag, Line, File);
}
