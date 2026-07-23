/*
 * XREFs of RtlQueryFeatureConfiguration @ 0x140764540
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x140322B30 (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_OnFeatureConfigurationChange @ 0x1405C67D0 (wil_details_OnFeatureConfigurationChange.c)
 *     CmQuerySingleFeatureConfiguration @ 0x140866818 (CmQuerySingleFeatureConfiguration.c)
 * Callees:
 *     RtlpFcValidateFeatureConfigurationType @ 0x140388E9C (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A3578 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A3900 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x140915C60 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 */

NTSTATUS __cdecl RtlQueryFeatureConfiguration(
        RTL_FEATURE_ID FeatureId,
        RTL_FEATURE_CONFIGURATION_TYPE ConfigurationType,
        PRTL_FEATURE_CHANGE_STAMP ChangeStamp,
        PRTL_FEATURE_CONFIGURATION FeatureConfiguration)
{
  __int64 v5; // rbp
  int v8; // eax
  __int64 v9; // rdi
  NTSTATUS FeatureConfigurationFromBuffers; // ebx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  ULONGLONG v14; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v15[4]; // [rsp+28h] [rbp-20h] BYREF

  v14 = 0LL;
  v15[0] = 0LL;
  v5 = ConfigurationType;
  RtlpFcBufferManagerReferenceBuffers((__int64)&unk_140C48130, (__int64)&v14, v15);
  v8 = RtlpFcValidateFeatureConfigurationType(v5);
  v9 = v15[0];
  FeatureConfigurationFromBuffers = v8;
  if ( v8 >= 0 )
  {
    v11 = 0LL;
    v12 = (_QWORD *)(v15[0] + 8LL);
    while ( !*v12 )
    {
      ++v11;
      v12 += 3;
      if ( v11 >= 3 )
      {
        FeatureConfigurationFromBuffers = -2147483614;
        goto LABEL_6;
      }
    }
    v15[0] = 0x100000000LL;
    FeatureConfigurationFromBuffers = RtlpFcQueryFeatureConfigurationFromBuffers(
                                        FeatureId,
                                        v9 + 24LL * *((int *)v15 + v5),
                                        v9 + 48,
                                        FeatureConfiguration);
  }
  if ( FeatureConfigurationFromBuffers >= 0 )
  {
    FeatureConfigurationFromBuffers = 0;
LABEL_6:
    *ChangeStamp = v14;
    goto LABEL_7;
  }
  if ( FeatureConfigurationFromBuffers == -1073741275 || FeatureConfigurationFromBuffers == -2147483614 )
    goto LABEL_6;
LABEL_7:
  RtlpFcBufferManagerDereferenceBuffers((__int64)&unk_140C48130, v9);
  return FeatureConfigurationFromBuffers;
}
