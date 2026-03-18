/*
 * XREFs of imp_VfWdfDeviceResumeIdleActual @ 0x1C00BC060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceResumeIdleActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        void *Tag,
        __int64 Line,
        const char *File)
{
  WdfVersion.Functions.pfnWdfDeviceResumeIdleActual(DriverGlobals, Device, Tag, Line, File);
}
