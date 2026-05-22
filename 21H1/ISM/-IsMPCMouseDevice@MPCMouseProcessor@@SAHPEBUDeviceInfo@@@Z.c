/*
 * XREFs of ?IsMPCMouseDevice@MPCMouseProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x18001F860
 * Callers:
 *     ?ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x18001F7E0 (-ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     IsGetMPCInputPostProcessorPresent @ 0x18003D04C (IsGetMPCInputPostProcessorPresent.c)
 */

__int64 __fastcall MPCMouseProcessor::IsMPCMouseDevice(const struct DeviceInfo *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( (*((_BYTE *)a1 + 4) & 2) != 0 )
    return (unsigned __int8)IsGetMPCInputPostProcessorPresent() != 0;
  return v1;
}
