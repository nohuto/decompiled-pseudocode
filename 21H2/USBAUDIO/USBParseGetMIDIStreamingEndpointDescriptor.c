/*
 * XREFs of USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C002F8B4
 * Callers:
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0032094 (USBParseGetMIDIStreamingDatarange.c)
 *     USBMidiInPipePrimer @ 0x1C003480C (USBMidiInPipePrimer.c)
 * Callees:
 *     Feature_1212525881__private_IsEnabledDeviceUsage @ 0x1C0004568 (Feature_1212525881__private_IsEnabledDeviceUsage.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C002EE50 (USBParseFindDescriptorInConfiguration.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetMIDIStreamingEndpointDescriptor(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned __int8 *v4; // rsi
  unsigned __int8 *v7; // r10
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rbx
  __int64 bDescriptorType; // rax
  __int64 v10; // rcx
  PUSB_COMMON_DESCRIPTOR v12; // rax

  v4 = *(unsigned __int8 **)(a2 + 24);
  v7 = *(unsigned __int8 **)(*(_QWORD *)(a2 + 48) + 8LL * a3);
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(a1, (char *)&v7[*v7], 37, 4uLL);
  if ( !DescriptorInConfiguration )
    return 0LL;
  if ( (unsigned int)Feature_1212525881__private_IsEnabledDeviceUsage() )
  {
    bDescriptorType = DescriptorInConfiguration[1].bDescriptorType;
    if ( DescriptorInConfiguration->bLength < (unsigned __int64)(bDescriptorType + 4)
      || !(_BYTE)bDescriptorType
      || (char *)&DescriptorInConfiguration[2] + bDescriptorType > (char *)a1 + a1[1] )
    {
      return 0LL;
    }
  }
  v10 = a3 + 1;
  if ( (unsigned int)v10 >= v4[4] )
  {
    v12 = USBParseFindDescriptorInConfiguration(a1, (char *)&v4[*v4], 4, 9uLL);
    if ( v12 && DescriptorInConfiguration >= v12 )
      return 0LL;
  }
  else if ( (unsigned __int64)DescriptorInConfiguration >= *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v10) )
  {
    return 0LL;
  }
  return DescriptorInConfiguration;
}
