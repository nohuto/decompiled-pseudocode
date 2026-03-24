/*
 * XREFs of imp_WdfIoTargetFormatRequestForRead @ 0x1C0063530
 * Callers:
 *     <none>
 * Callees:
 *     FxIoTargetFormatIo @ 0x1C0062624 (FxIoTargetFormatIo.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets,
        __int64 *DeviceOffset)
{
  return FxIoTargetFormatIo(
           (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
           IoTarget,
           Request,
           3u,
           OutputBuffer,
           OutputBufferOffsets,
           DeviceOffset);
}
