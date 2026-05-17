/*
 * XREFs of _RtlpFcQueryAllFeatureConfigurationsFromBufferSet@16 @ 0x4B3A1246
 * Callers:
 *     _RtlQueryAllFeatureConfigurations@16 @ 0x4B369640 (_RtlQueryAllFeatureConfigurations@16.c)
 * Callees:
 *     _RtlpFcValidateFeatureConfigurationType@4 @ 0x4B2E5376 (_RtlpFcValidateFeatureConfigurationType@4.c)
 *     _RtlpFcQueryAllFeatureConfigurationsFromBuffers@12 @ 0x4B3A127F (_RtlpFcQueryAllFeatureConfigurationsFromBuffers@12.c)
 */

int __fastcall RtlpFcQueryAllFeatureConfigurationsFromBufferSet(int a1, unsigned int a2, int a3, int a4)
{
  int result; // eax
  int v6; // edx
  _DWORD v7[2]; // [esp+4h] [ebp-8h]

  result = RtlpFcValidateFeatureConfigurationType(a2);
  if ( result >= 0 )
  {
    v7[0] = 0;
    v7[1] = 1;
    return RtlpFcQueryAllFeatureConfigurationsFromBuffers(a1 + 16 * v7[v6], a3, a4);
  }
  return result;
}
