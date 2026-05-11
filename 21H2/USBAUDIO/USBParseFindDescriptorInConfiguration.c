/*
 * XREFs of USBParseFindDescriptorInConfiguration @ 0x1C002EE50
 * Callers:
 *     USBParseGetAudioSpecificInterface @ 0x1C002EF28 (USBParseGetAudioSpecificInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C002EFA8 (USBParseGetEndpointDescriptor.c)
 *     IsSupportedFormat @ 0x1C002F01C (IsSupportedFormat.c)
 *     USBParseGetInterfaceIdforPin @ 0x1C002F47C (USBParseGetInterfaceIdforPin.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1C002F6C8 (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnit @ 0x1C002F824 (USBParseGetUnit.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C002F8B4 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBParseConvertMIDIJacksAndElements @ 0x1C00316B4 (USBParseConvertMIDIJacksAndElements.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C00318FC (USBParseConvertInterfaceToDataRange.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0032094 (USBParseGetMIDIStreamingDatarange.c)
 * Callees:
 *     <none>
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseFindDescriptorInConfiguration(
        unsigned __int16 *a1,
        char *a2,
        LONG a3,
        unsigned __int64 a4)
{
  PUSB_COMMON_DESCRIPTOR v6; // r11
  __int64 v8; // rdx
  PUSB_COMMON_DESCRIPTOR v9; // rax

  v6 = 0LL;
  v8 = a1[1];
  if ( a2 + 2 < (char *)a1 + v8 )
  {
    v9 = USBD_ParseDescriptors(a1, v8, a2, a3);
    v6 = v9;
    if ( v9 )
    {
      if ( v9->bLength < a4 )
        return 0LL;
    }
  }
  return v6;
}
