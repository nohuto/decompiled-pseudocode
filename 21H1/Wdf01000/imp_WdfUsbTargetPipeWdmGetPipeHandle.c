/*
 * XREFs of imp_WdfUsbTargetPipeWdmGetPipeHandle @ 0x1C0069760
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

void *__fastcall imp_WdfUsbTargetPipeWdmGetPipeHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFUSBPIPE__ *UsbPipe)
{
  FxUsbPipe *pUsbPipe; // [rsp+30h] [rbp+8h] BYREF

  pUsbPipe = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)UsbPipe,
    0x1203u,
    (void **)&pUsbPipe);
  return pUsbPipe->m_PipeInformation.PipeHandle;
}
