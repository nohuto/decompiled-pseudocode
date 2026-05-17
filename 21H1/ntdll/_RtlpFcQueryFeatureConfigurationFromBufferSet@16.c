/*
 * XREFs of _RtlpFcQueryFeatureConfigurationFromBufferSet@16 @ 0x4B3A1121
 * Callers:
 *     _RtlQueryFeatureConfiguration@16 @ 0x4B2E51D0 (_RtlQueryFeatureConfiguration@16.c)
 * Callees:
 *     _RtlpFcValidateFeatureConfigurationType@4 @ 0x4B2E5376 (_RtlpFcValidateFeatureConfigurationType@4.c)
 *     _RtlpFcQueryFeatureConfigurationFromBuffers@16 @ 0x4B3A1319 (_RtlpFcQueryFeatureConfigurationFromBuffers@16.c)
 */

int __thiscall RtlpFcQueryFeatureConfigurationFromBufferSet(_DWORD *this, unsigned int a2, int a3)
{
  int result; // eax
  int v5; // ecx
  _DWORD *i; // eax

  result = RtlpFcValidateFeatureConfigurationType(a2);
  if ( result >= 0 )
  {
    v5 = 0;
    for ( i = this + 2; !*i; i += 4 )
    {
      if ( ++v5 >= 3 )
        return -2147483614;
    }
    return RtlpFcQueryFeatureConfigurationFromBuffers(this + 8, a3);
  }
  return result;
}
