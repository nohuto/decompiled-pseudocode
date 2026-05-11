/*
 * XREFs of USBParseGetNextAudioInterface @ 0x1C002EE00
 * Callers:
 *     USBParseGetAudioSpecificInterface @ 0x1C002EF28 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C002EFA8 (USBParseGetEndpointDescriptor.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C002F5FC (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0031808 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C00318FC (USBParseConvertInterfaceToDataRange.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0031E14 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     <none>
 */

PUSB_INTERFACE_DESCRIPTOR __fastcall USBParseGetNextAudioInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2)
{
  if ( a2 )
    return USBD_ParseConfigurationDescriptorEx(a1, &a2[*a2], a2[2], -1, 1, a2[6], -1);
  return (PUSB_INTERFACE_DESCRIPTOR)a2;
}
