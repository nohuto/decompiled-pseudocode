/*
 * XREFs of UsbhiSignalResumeEvent @ 0x1C0036048
 * Callers:
 *     UsbhFreePortChangeQueueObject @ 0x1C0002648 (UsbhFreePortChangeQueueObject.c)
 *     Usbh_PCE_Resume_Action @ 0x1C0004220 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1C0034F64 (Usbh_PCE_BusDisconnect_Action.c)
 *     Usbh_PCE_HW_Stop_Action @ 0x1C00354A8 (Usbh_PCE_HW_Stop_Action.c)
 *     Usbh_PCE_ResumeTimeout_Action @ 0x1C0035848 (Usbh_PCE_ResumeTimeout_Action.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1C0001648 (UsbhLogSignalResumeEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0034DE4 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhiSignalResumeEvent(__int64 a1, __int64 a2)
{
  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
    UsbhSetPcqEventStatus(a1, a2, 1LL, 30);
}
