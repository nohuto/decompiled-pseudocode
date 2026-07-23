/*
 * XREFs of _RtlQueryFeatureConfiguration@16 @ 0x4B2E51D0
 * Callers:
 *     _wil_RtlStagingConfig_QueryFeatureState@16 @ 0x4B3A1000 (_wil_RtlStagingConfig_QueryFeatureState@16.c)
 * Callees:
 *     _RtlpFcBufferManagerDereferenceBuffers@8 @ 0x4B2E5160 (_RtlpFcBufferManagerDereferenceBuffers@8.c)
 *     _RtlpFcReferenceFeatureConfigurationBuffers@16 @ 0x4B2E5255 (_RtlpFcReferenceFeatureConfigurationBuffers@16.c)
 *     _RtlpFcQueryFeatureConfigurationFromKernel@16 @ 0x4B2E542D (_RtlpFcQueryFeatureConfigurationFromKernel@16.c)
 *     _RtlpFcQueryFeatureConfigurationFromBufferSet@16 @ 0x4B3A1121 (_RtlpFcQueryFeatureConfigurationFromBufferSet@16.c)
 */

NTSTATUS __cdecl RtlQueryFeatureConfiguration(
        RTL_FEATURE_ID FeatureId,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION FeatureConfiguration)
{
  int FeatureConfigurationFromBufferSet; // eax
  NTSTATUS FeatureConfigurationFromKernel; // esi
  int v7; // [esp+0h] [ebp-18h]
  int v8; // [esp+4h] [ebp-14h]
  ULONGLONG v9; // [esp+8h] [ebp-10h] BYREF
  int v10; // [esp+14h] [ebp-4h] BYREF

  v10 = 0;
  if ( (int)RtlpFcReferenceFeatureConfigurationBuffers(&v9, &v10) < 0 )
  {
    FeatureConfigurationFromKernel = RtlpFcQueryFeatureConfigurationFromKernel(ChangeStamp, FeatureConfiguration);
  }
  else
  {
    FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(
                                          ConfigurationType,
                                          FeatureConfiguration);
    FeatureConfigurationFromKernel = FeatureConfigurationFromBufferSet;
    if ( FeatureConfigurationFromBufferSet >= 0 )
    {
      FeatureConfigurationFromKernel = 0;
LABEL_5:
      *ChangeStamp = v9;
      goto LABEL_6;
    }
    if ( FeatureConfigurationFromBufferSet == -1073741275 || FeatureConfigurationFromBufferSet == -2147483614 )
      goto LABEL_5;
  }
LABEL_6:
  if ( v10 )
    RtlpFcBufferManagerDereferenceBuffers(v7, v8);
  return FeatureConfigurationFromKernel;
}
