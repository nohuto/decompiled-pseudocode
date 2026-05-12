/*
 * XREFs of RtlULongAdd @ 0x1C0044D7C
 * Callers:
 *     RaUnitStreamsIoctl @ 0x1C001B0D0 (RaUnitStreamsIoctl.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1C0042E20 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     RaBuildQueryTemperaturePropertyBufferForMiniport @ 0x1C0042FA4 (RaBuildQueryTemperaturePropertyBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x1C00431A0 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     PortPassThroughExBasicValidation @ 0x1C0058B40 (PortPassThroughExBasicValidation.c)
 *     PortPassThroughExGetBasicStructureSize @ 0x1C0058C58 (PortPassThroughExGetBasicStructureSize.c)
 *     PortPassThroughExBuildSrbEx @ 0x1C007C004 (PortPassThroughExBuildSrbEx.c)
 *     PortPassThroughExValidateNormalizedRequest @ 0x1C007C6D8 (PortPassThroughExValidateNormalizedRequest.c)
 *     PortPassThroughValidateNormalizedRequest @ 0x1C007CEDC (PortPassThroughValidateNormalizedRequest.c)
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
