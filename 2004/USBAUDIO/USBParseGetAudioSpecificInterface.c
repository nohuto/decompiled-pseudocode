/*
 * XREFs of USBParseGetAudioSpecificInterface @ 0x1C002E604
 * Callers:
 *     USBDeviceStart @ 0x1C002B9B0 (USBDeviceStart.c)
 *     IsSupportedFormat @ 0x1C002E6F8 (IsSupportedFormat.c)
 *     USBParseCreateInterfaceList @ 0x1C002E890 (USBParseCreateInterfaceList.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C002EDC4 (USBParseGetTerminalLinkFromPinId.c)
 *     USBParseConvertControlUnits @ 0x1C003045C (USBParseConvertControlUnits.c)
 *     USBParseConvertInterfaceToDataRange @ 0x1C003077C (USBParseConvertInterfaceToDataRange.c)
 * Callees:
 *     USBParseGetNextAudioInterface @ 0x1C002E4DC (USBParseGetNextAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C002E52C (USBParseFindDescriptorInConfiguration.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetAudioSpecificInterface(
        struct _USB_CONFIGURATION_DESCRIPTOR *a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // rdi
  char *i; // rdx
  __int64 bLength; // rcx
  PUSB_COMMON_DESCRIPTOR result; // rax

  NextAudioInterface = USBParseGetNextAudioInterface(a1, a2);
  for ( i = (char *)&a2[*a2]; ; i = (char *)(&result->bLength + bLength) )
  {
    result = USBParseFindDescriptorInConfiguration((unsigned __int16 *)&a1->bLength, i, 36, a4);
    if ( !result || NextAudioInterface && result > (PUSB_COMMON_DESCRIPTOR)NextAudioInterface )
      break;
    bLength = result->bLength;
    if ( (unsigned __int8)bLength < 3u )
      break;
    if ( result[1].bLength == 1 )
      return result;
  }
  return 0LL;
}
