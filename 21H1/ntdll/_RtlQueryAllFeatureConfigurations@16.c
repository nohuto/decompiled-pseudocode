/*
 * XREFs of _RtlQueryAllFeatureConfigurations@16 @ 0x4B369640
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFcBufferManagerDereferenceBuffers@8 @ 0x4B2E5160 (_RtlpFcBufferManagerDereferenceBuffers@8.c)
 *     _RtlpFcReferenceFeatureConfigurationBuffers@16 @ 0x4B2E5255 (_RtlpFcReferenceFeatureConfigurationBuffers@16.c)
 *     _RtlpFcQueryAllFeatureConfigurationsFromBufferSet@16 @ 0x4B3A1246 (_RtlpFcQueryAllFeatureConfigurationsFromBufferSet@16.c)
 */

NTSTATUS __cdecl RtlQueryAllFeatureConfigurations(
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION Configurations,
        PSIZE_T ConfigurationCount)
{
  int v4; // ecx
  int AllFeatureConfigurationsFromBufferSet; // esi
  int v7; // [esp+0h] [ebp-10h]
  ULONGLONG v8; // [esp+4h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v9 = 0;
  AllFeatureConfigurationsFromBufferSet = RtlpFcReferenceFeatureConfigurationBuffers(v4, 1, &v8, &v9);
  if ( AllFeatureConfigurationsFromBufferSet >= 0 )
  {
    AllFeatureConfigurationsFromBufferSet = RtlpFcQueryAllFeatureConfigurationsFromBufferSet(
                                              Configurations,
                                              ConfigurationCount);
    if ( AllFeatureConfigurationsFromBufferSet >= 0 )
    {
      if ( ChangeStamp )
        *ChangeStamp = v8;
      AllFeatureConfigurationsFromBufferSet = 0;
    }
  }
  if ( v9 )
    RtlpFcBufferManagerDereferenceBuffers(v7, v8);
  return AllFeatureConfigurationsFromBufferSet;
}
