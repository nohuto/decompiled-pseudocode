/*
 * XREFs of _EtwEventSetInformation@20 @ 0x4B2B0A60
 * Callers:
 *     _TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12 @ 0x4B2AE0E1 (_TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12.c)
 * Callees:
 *     _EtwpSetProviderTraits@16 @ 0x4B2B0AAD (_EtwpSetProviderTraits@16.c)
 *     _EtwpTrackProviderBinary@8 @ 0x4B3808C0 (_EtwpTrackProviderBinary@8.c)
 *     _EtwpUseDescriptorType@16 @ 0x4B380958 (_EtwpUseDescriptorType@16.c)
 */

ULONG __cdecl EtwEventSetInformation(
        REGHANDLE RegHandle,
        EVENT_INFO_CLASS InformationClass,
        PVOID EventInformation,
        ULONG InformationLength)
{
  if ( InformationClass )
  {
    if ( InformationClass == 2 )
    {
      if ( EventInformation && InformationLength >= 3 && InformationLength <= 0xFFFF )
        return EtwpSetProviderTraits(RegHandle, SWORD2(RegHandle));
      return 87;
    }
    if ( InformationClass != 3 )
      return 50;
    if ( EventInformation && InformationLength == 1 )
      return EtwpUseDescriptorType(RegHandle, SWORD2(RegHandle));
    return 87;
  }
  if ( InformationLength )
    return 87;
  return EtwpTrackProviderBinary(RegHandle, SWORD2(RegHandle));
}
