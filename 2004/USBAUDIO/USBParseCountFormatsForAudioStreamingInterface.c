/*
 * XREFs of USBParseCountFormatsForAudioStreamingInterface @ 0x1C0030688
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C0031090 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     USBParseGetFirstStreamingAudioInterface @ 0x1C002E4A4 (USBParseGetFirstStreamingAudioInterface.c)
 *     USBParseGetNextAudioInterface @ 0x1C002E4DC (USBParseGetNextAudioInterface.c)
 *     USBParseGetEndpointDescriptor @ 0x1C002E684 (USBParseGetEndpointDescriptor.c)
 *     IsSupportedFormat @ 0x1C002E6F8 (IsSupportedFormat.c)
 */

__int64 __fastcall USBParseCountFormatsForAudioStreamingInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *StartPosition,
        LONG InterfaceNumber,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  unsigned int v9; // esi
  PUSB_INTERFACE_DESCRIPTOR FirstStreamingAudioInterface; // rdi
  __int64 v11; // r8
  UCHAR bNumEndpoints; // al
  PUSB_COMMON_DESCRIPTOR EndpointDescriptor; // rax

  *a3 = 0;
  *a4 = 0;
  v9 = -1073741438;
  FirstStreamingAudioInterface = USBParseGetFirstStreamingAudioInterface(StartPosition, InterfaceNumber, 2);
  if ( FirstStreamingAudioInterface )
  {
    do
    {
      bNumEndpoints = FirstStreamingAudioInterface->bNumEndpoints;
      if ( bNumEndpoints )
      {
        if ( (bNumEndpoints != 1
           || (EndpointDescriptor = USBParseGetEndpointDescriptor(
                                      StartPosition,
                                      &FirstStreamingAudioInterface->bLength,
                                      0)) != 0LL
           && *(_WORD *)&EndpointDescriptor[2])
          && IsSupportedFormat(StartPosition, &FirstStreamingAudioInterface->bLength, v11) )
        {
          ++*a3;
          v9 = 0;
          ++*a4;
          *a5 = 2;
        }
      }
      FirstStreamingAudioInterface = USBParseGetNextAudioInterface(
                                       StartPosition,
                                       &FirstStreamingAudioInterface->bLength);
    }
    while ( FirstStreamingAudioInterface );
  }
  else if ( USBParseGetFirstStreamingAudioInterface(StartPosition, InterfaceNumber, 3) )
  {
    v9 = 0;
    ++*a3;
    *a5 = 3;
  }
  return v9;
}
