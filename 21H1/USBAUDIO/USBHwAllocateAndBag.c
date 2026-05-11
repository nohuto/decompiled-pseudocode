/*
 * XREFs of USBHwAllocateAndBag @ 0x1C002C45C
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C002CBC0 (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002DB60 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002E944 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C002F1F4 (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C002F510 (USBParseMixerUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C002FEC4 (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0030D10 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C0031E98 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C0032460 (USBType1Create1MsecBuffers.c)
 *     USBMidiInPipePrimer @ 0x1C003335C (USBMidiInPipePrimer.c)
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
