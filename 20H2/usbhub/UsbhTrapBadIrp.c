/*
 * XREFs of UsbhTrapBadIrp @ 0x1C002DBF0
 * Callers:
 *     UsbhGenDispatch @ 0x1C001A1A0 (UsbhGenDispatch.c)
 * Callees:
 *     USBHUB_TriggerCallBacks @ 0x1C00417F0 (USBHUB_TriggerCallBacks.c)
 */

void __fastcall __noreturn UsbhTrapBadIrp(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  if ( BugCheckParameter3 )
    USBHUB_TriggerCallBacks(BugCheckParameter3);
  KeBugCheckEx(0xFEu, 8uLL, 2uLL, BugCheckParameter3, BugCheckParameter4);
}
