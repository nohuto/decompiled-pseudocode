/*
 * XREFs of USBParseGetEndpointDescriptor @ 0x1C002E604
 * Callers:
 *     USBHwSelectStreamingAudioInterface @ 0x1C002D74C (USBHwSelectStreamingAudioInterface.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C002ED44 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0030608 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C00306FC (USBParseConvertInterfaceToDataRange.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0030A90 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C002E45C (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C002E4AC (USBParseFindDescriptorInConfiguration.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetEndpointDescriptor(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        char a3)
{
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rbp
  PUSB_COMMON_DESCRIPTOR result; // rax

  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  result = USBParseFindDescriptorInConfiguration((unsigned __int16 *)&a1->bLength, (char *)a2, a3 != 0 ? 37 : 5, 7uLL);
  if ( result && NextAudioInterface && result > (PUSB_COMMON_DESCRIPTOR)NextAudioInterface )
    return 0LL;
  return result;
}
