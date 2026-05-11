/*
 * XREFs of USBParseGetFirstStreamingAudioInterface @ 0x1C002E954
 * Callers:
 *     USBParseGetTerminalLinkFromPinId @ 0x1C002F274 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0030B38 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0030FC0 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0031240 (USBParseGetMIDIStreamingDatarange.c)
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
