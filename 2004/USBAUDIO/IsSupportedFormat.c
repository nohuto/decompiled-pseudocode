/*
 * XREFs of IsSupportedFormat @ 0x1C002E6F8
 * Callers:
 *     USBParseCountFormatsForAudioStreamingInterface @ 0x1C0030688 (USBParseCountFormatsForAudioStreamingInterface.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0030B10 (USBParseGetAudioStreamingDataranges.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C002E52C (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C002E604 (USBParseGetAudioSpecificInterface.c)
 */

bool __fastcall IsSupportedFormat(struct _USB_CONFIGURATION_DESCRIPTOR *a1, unsigned __int8 *a2, __int64 a3)
{
  char v3; // bl
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // rax
  unsigned __int8 *p_bLength; // r8
  unsigned __int16 v7; // ax
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rax

  v3 = 0;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(a1, a2, a3, 7uLL);
  p_bLength = &AudioSpecificInterface->bLength;
  if ( AudioSpecificInterface )
  {
    v7 = *(_WORD *)&AudioSpecificInterface[2].bDescriptorType;
    if ( v7 == 1 )
    {
      DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                    (unsigned __int16 *)&a1->bLength,
                                    (char *)&p_bLength[*p_bLength],
                                    36,
                                    8uLL);
      if ( DescriptorInConfiguration )
        return DescriptorInConfiguration[3].bLength != 8;
    }
    else if ( v7 > 1u && (v7 <= 5u || v7 > 0x1000u && (v7 <= 0x1002u || v7 == 8193 || v7 == 8195 || v7 == 8447)) )
    {
      return 1;
    }
  }
  return v3;
}
