/*
 * XREFs of UsbhSignalSuspendEvent @ 0x1C0034E5C
 * Callers:
 *     Usbh_CheckPortHwPendingStatus @ 0x1C0001C3C (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0008BD0 (UsbhHubDispatchPortEvent.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000F4B0 (Usbh_PCE_Suspend_Action.c)
 *     UsbhRequestPortSuspend @ 0x1C0016130 (UsbhRequestPortSuspend.c)
 *     UsbhHubIsr @ 0x1C0019BF0 (UsbhHubIsr.c)
 *     UsbhEnumerate1 @ 0x1C001C7A8 (UsbhEnumerate1.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x1C0035E78 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhEnumerate2 @ 0x1C004C428 (UsbhEnumerate2.c)
 *     UsbhPortDisconnect @ 0x1C004D340 (UsbhPortDisconnect.c)
 * Callees:
 *     UsbhLogSignalSuspendEvent @ 0x1C0033D58 (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x1C0034DE4 (UsbhSetPcqEventStatus.c)
 */

void __fastcall UsbhSignalSuspendEvent(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  KIRQL v5; // bl

  if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    *(_DWORD *)(a2 + 448) = 1;
    v5 = v4;
    UsbhSetPcqEventStatus(a1, a2, 0LL, 30);
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v5);
  }
}
