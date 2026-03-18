/*
 * XREFs of Usbh_PnpRemove @ 0x1C00446D4
 * Callers:
 *     Usbh_FDO_WaitPnpAdd @ 0x1C0043F70 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C0043FF0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C0044090 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C0044230 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0044420 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0044590 (Usbh_FDO_WaitPnpStop_CB.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C0002AF0 (UsbhDispatch_BusEvent.c)
 *     UsbhReleaseFdoPnpLock @ 0x1C00317D8 (UsbhReleaseFdoPnpLock.c)
 *     GET_FDO_PNPSTATE @ 0x1C003B9C4 (GET_FDO_PNPSTATE.c)
 *     UsbhReferenceListClose @ 0x1C00412E4 (UsbhReferenceListClose.c)
 *     UsbhModuleDispatch @ 0x1C00438A0 (UsbhModuleDispatch.c)
 *     UsbhSetFdoPnpState @ 0x1C0043DE0 (UsbhSetFdoPnpState.c)
 */

__int64 __fastcall Usbh_PnpRemove(__int64 a1, int a2)
{
  __int64 v4; // rdx

  GET_FDO_PNPSTATE(a1);
  UsbhSetFdoPnpState(*(_QWORD *)(a1 + 8), 3, a2);
  UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
  UsbhDispatch_BusEvent(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 12);
  UsbhReferenceListClose(*(_QWORD *)(a1 + 8));
  UsbhModuleDispatch(0LL, v4, *(_LIST_ENTRY **)(a1 + 8), 2, 0LL, a1);
  return 0LL;
}
