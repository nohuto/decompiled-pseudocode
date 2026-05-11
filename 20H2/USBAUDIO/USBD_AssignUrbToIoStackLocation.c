/*
 * XREFs of USBD_AssignUrbToIoStackLocation @ 0x1C0010B64
 * Callers:
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C002C9E0 (USBHwSubmitUrbToUsbdSynch.c)
 * Callees:
 *     <none>
 */

void __stdcall USBD_AssignUrbToIoStackLocation(USBD_HANDLE USBDHandle, PIO_STACK_LOCATION IoStackLocation, PURB Urb)
{
  if ( (unsigned int)(*((_DWORD *)USBDHandle + 54) - 1538) <= 0xFFFFF9FC )
    IoStackLocation->FileObject = (PFILE_OBJECT)Urb;
  IoStackLocation->Parameters.WMI.ProviderId = (ULONG_PTR)Urb;
}
