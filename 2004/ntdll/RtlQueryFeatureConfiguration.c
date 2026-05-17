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

__int64 __fastcall RtlQueryFeatureConfiguration(__int64 a1, unsigned int a2, _QWORD *a3, __int64 a4)
{
  unsigned int v7; // r14d
  int FeatureConfigurationFromBufferSet; // eax
  unsigned int FeatureConfigurationFromKernel; // ebx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h] BYREF

  v11 = 0LL;
  v7 = a1;
  if ( (int)RtlpFcReferenceFeatureConfigurationBuffers(a1, 0LL, &v12, &v11) < 0 )
  {
    FeatureConfigurationFromKernel = RtlpFcQueryFeatureConfigurationFromKernel(v7, a2, a3, a4);
  }
  else
  {
    FeatureConfigurationFromBufferSet = RtlpFcQueryFeatureConfigurationFromBufferSet(v11, v7, a2, a4);
    FeatureConfigurationFromKernel = FeatureConfigurationFromBufferSet;
    if ( FeatureConfigurationFromBufferSet >= 0 )
    {
      FeatureConfigurationFromKernel = 0;
LABEL_5:
      *a3 = v12;
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
