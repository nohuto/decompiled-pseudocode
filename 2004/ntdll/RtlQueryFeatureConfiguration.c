/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x18005CB70
 * Callers:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x18011A008 (wil_RtlStagingConfig_QueryFeatureState.c)
 * Callees:
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005CAF4 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x18005CC2C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromKernel @ 0x180101AC0 (RtlpFcQueryFeatureConfigurationFromKernel.c)
 *     RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x18011A1A4 (RtlpFcQueryFeatureConfigurationFromBufferSet.c)
 */

NTSTATUS __cdecl RtlQueryFeatureConfiguration(
        RTL_FEATURE_ID FeatureId,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION FeatureConfiguration)
{
  int FeatureConfigurationFromBufferSet; // eax
  NTSTATUS FeatureConfigurationFromKernel; // ebx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  ULONGLONG v12[2]; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  if ( (int)RtlpFcReferenceFeatureConfigurationBuffers(FeatureId, 0LL, v12, &v11) < 0 )
  {
    FeatureConfigurationFromKernel = RtlpFcQueryFeatureConfigurationFromKernel(
                                       FeatureId,
                                       (unsigned int)ConfigurationType,
                                       ChangeStamp,
                                       FeatureConfiguration);
  }
  else
  {
    FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(
                                          v11,
                                          FeatureId,
                                          (unsigned int)ConfigurationType,
                                          FeatureConfiguration);
    FeatureConfigurationFromKernel = FeatureConfigurationFromBufferSet;
    if ( FeatureConfigurationFromBufferSet >= 0 )
    {
      FeatureConfigurationFromKernel = 0;
LABEL_5:
      *ChangeStamp = v12[0];
      goto LABEL_6;
    }
    if ( FeatureConfigurationFromBufferSet == -1073741275 || FeatureConfigurationFromBufferSet == -2147483614 )
      goto LABEL_5;
  }
LABEL_6:
  if ( v11 )
    RtlpFcBufferManagerDereferenceBuffers(qword_180168B48, v11);
  return FeatureConfigurationFromKernel;
}
