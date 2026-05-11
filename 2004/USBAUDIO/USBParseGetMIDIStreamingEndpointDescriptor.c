/*
 * XREFs of USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C002F07C
 * Callers:
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0030D90 (USBParseGetMIDIStreamingDatarange.c)
 *     USBMidiInPipePrimer @ 0x1C00333DC (USBMidiInPipePrimer.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C002E52C (USBParseFindDescriptorInConfiguration.c)
 */

PUSB_COMMON_DESCRIPTOR __fastcall USBParseGetMIDIStreamingEndpointDescriptor(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned __int8 *v4; // rdi
  unsigned __int8 *v7; // r10
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rbx
  __int64 v9; // rax
  PUSB_COMMON_DESCRIPTOR v11; // rax

  v4 = *(unsigned __int8 **)(a2 + 24);
  v7 = *(unsigned __int8 **)(*(_QWORD *)(a2 + 48) + 8LL * a3);
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(a1, (char *)&v7[*v7], 37, 4uLL);
  if ( !DescriptorInConfiguration )
    return 0LL;
  v9 = a3 + 1;
  if ( (unsigned int)v9 >= v4[4] )
  {
    v11 = USBParseFindDescriptorInConfiguration(a1, (char *)&v4[*v4], 4, 9uLL);
    if ( v11 && DescriptorInConfiguration >= v11 )
      return 0LL;
  }
  else if ( (unsigned __int64)DescriptorInConfiguration >= *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v9) )
  {
    return 0LL;
  }
  return DescriptorInConfiguration;
}
