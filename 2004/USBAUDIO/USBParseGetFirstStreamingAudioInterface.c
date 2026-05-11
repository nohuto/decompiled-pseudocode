/*
 * XREFs of USBParseGetFirstStreamingAudioInterface @ 0x1C002E4A4
 * Callers:
 *     USBParseGetTerminalLinkFromPinId @ 0x1C002EDC4 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0030688 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0030B10 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0030D90 (USBParseGetMIDIStreamingDatarange.c)
 * Callees:
 *     <none>
 */

PUSB_INTERFACE_DESCRIPTOR __fastcall USBParseGetFirstStreamingAudioInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        LONG InterfaceNumber,
        LONG InterfaceSubClass)
{
  return USBD_ParseConfigurationDescriptorEx(
           StartPosition,
           StartPosition,
           InterfaceNumber,
           -1,
           1,
           InterfaceSubClass,
           -1);
}
