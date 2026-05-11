/*
 * XREFs of USBParseGetTerminalLinkFromPinId @ 0x1C002ED44
 * Callers:
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C002EE10 (USBParseGetPinIndexForStreamingTerminal.c)
 * Callees:
 *     USBParseGetFirstStreamingAudioInterface @ 0x1C002E424 (USBParseGetFirstStreamingAudioInterface.c)
 *     USBParseGetNextAudioInterface @ 0x1C002E45C (USBParseGetNextAudioInterface.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C002E584 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C002E604 (USBParseGetEndpointDescriptor.c)
 *     USBParseGetInterfaceIdforPin @ 0x1C002EBC4 (USBParseGetInterfaceIdforPin.c)
 */

__int64 __fastcall USBParseGetTerminalLinkFromPinId(__int64 a1, int a2)
{
  char v2; // bp
  unsigned int bDescriptorType; // esi
  LONG InterfaceIdforPin; // eax
  PUSB_INTERFACE_DESCRIPTOR FirstStreamingAudioInterface; // rbx
  __int64 v7; // r8
  UCHAR bNumEndpoints; // al
  PUSB_COMMON_DESCRIPTOR EndpointDescriptor; // rax
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // rax

  v2 = 0;
  bDescriptorType = -1;
  InterfaceIdforPin = USBParseGetInterfaceIdforPin(a1, a2, 0LL);
  if ( InterfaceIdforPin != -1 )
  {
    FirstStreamingAudioInterface = USBParseGetFirstStreamingAudioInterface(
                                     *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 40),
                                     InterfaceIdforPin,
                                     2);
    while ( FirstStreamingAudioInterface )
    {
      if ( v2 )
        break;
      bNumEndpoints = FirstStreamingAudioInterface->bNumEndpoints;
      if ( bNumEndpoints
        && (bNumEndpoints != 1
         || (EndpointDescriptor = USBParseGetEndpointDescriptor(
                                    *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 40),
                                    &FirstStreamingAudioInterface->bLength,
                                    0)) != 0LL
         && *(_WORD *)&EndpointDescriptor[2]) )
      {
        v2 = 1;
        AudioSpecificInterface = USBParseGetAudioSpecificInterface(
                                   *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 40),
                                   &FirstStreamingAudioInterface->bLength,
                                   v7,
                                   7uLL);
        if ( AudioSpecificInterface )
          bDescriptorType = AudioSpecificInterface[1].bDescriptorType;
      }
      else
      {
        FirstStreamingAudioInterface = USBParseGetNextAudioInterface(
                                         *(struct _USB_CONFIGURATION_DESCRIPTOR **)(a1 + 40),
                                         &FirstStreamingAudioInterface->bLength);
      }
    }
  }
  return bDescriptorType;
}
