/*
 * XREFs of RtlULongAdd @ 0x1C0045C80
 * Callers:
 *     RaUnitStreamsIoctl @ 0x1C001BD70 (RaUnitStreamsIoctl.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0043D2C (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0043EAC (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C00440A8 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     PortPassThroughExBasicValidation @ 0x1C0059A00 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C0059B18 (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C007D504 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExValidateNormalizedRequest @ 0x1C007DBD8 (PortPassThroughExValidateNormalizedRequest.c)
 *     PortPassThroughValidateNormalizedRequest @ 0x1C007E3DC (PortPassThroughValidateNormalizedRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongAdd(ULONG ulAugend, ULONG ulAddend, ULONG *pulResult)
{
  ULONG v3; // eax
  ULONG v4; // edx
  NTSTATUS result; // eax

  v3 = ulAugend + ulAddend;
  v4 = -1;
  if ( v3 >= ulAugend )
    v4 = v3;
  result = v3 < ulAugend ? 0xC0000095 : 0;
  *pulResult = v4;
  return result;
}
