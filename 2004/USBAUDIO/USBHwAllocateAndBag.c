/*
 * XREFs of USBHwAllocateAndBag @ 0x1C002C4DC
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x1C002CC40 (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002DBE0 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMicArrayDescriptor @ 0x1C002E9C4 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1C002F274 (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x1C002F590 (USBParseMixerUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x1C002FF44 (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0030D90 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C0031F18 (USBType1AsyncEndpointInitialize.c)
 *     USBType1Create1MsecBuffers @ 0x1C00324E0 (USBType1Create1MsecBuffers.c)
 *     USBMidiInPipePrimer @ 0x1C00333DC (USBMidiInPipePrimer.c)
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
