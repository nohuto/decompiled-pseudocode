/*
 * XREFs of _EtwEventSetInformation@20 @ 0x4B2B0A60
 * Callers:
 *     _TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12 @ 0x4B2AE0E1 (_TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12.c)
 * Callees:
 *     _EtwpSetProviderTraits@16 @ 0x4B2B0AAD (_EtwpSetProviderTraits@16.c)
 *     _EtwpTrackProviderBinary@8 @ 0x4B3808C0 (_EtwpTrackProviderBinary@8.c)
 *     _EtwpUseDescriptorType@16 @ 0x4B380958 (_EtwpUseDescriptorType@16.c)
 */

int __stdcall EtwEventSetInformation(int a1, __int16 a2, int a3, int a4, unsigned int a5)
{
  if ( a3 )
  {
    if ( a3 == 2 )
    {
      if ( a4 && a5 >= 3 && a5 <= 0xFFFF )
        return EtwpSetProviderTraits(a1, a2);
      return 87;
    }
    if ( a3 != 3 )
      return 50;
    if ( a4 && a5 == 1 )
      return EtwpUseDescriptorType(a1, a2);
    return 87;
  }
  if ( a5 )
    return 87;
  return EtwpTrackProviderBinary(a1, a2);
}
