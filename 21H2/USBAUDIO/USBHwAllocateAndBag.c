/*
 * XREFs of USBHwAllocateAndBag @ 0x1C002CC2C
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C002D390 (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002E330 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002F314 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C002FD24 (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C00301E0 (USBParseMixerUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C0030FC0 (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0032094 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C0033348 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C0033910 (USBType1Create1MsecBuffers.c)
 *     USBMidiInPipePrimer @ 0x1C003480C (USBMidiInPipePrimer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBHwAllocateAndBag(PVOID *a1, void *a2)
{
  NTSTATUS v3; // ebx

  v3 = KsAddItemToObjectBag(a2, *a1, ExFreePool);
  if ( v3 < 0 )
    ExFreePool(*a1);
  return (unsigned int)v3;
}
