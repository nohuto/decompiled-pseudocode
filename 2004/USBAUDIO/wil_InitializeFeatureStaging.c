/*
 * XREFs of wil_InitializeFeatureStaging @ 0x1C0035008
 * Callers:
 *     DriverEntry @ 0x1C002320C (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00125A0 (__security_check_cookie.c)
 *     wil_details_EvaluateFeatureDependencies @ 0x1C0022398 (wil_details_EvaluateFeatureDependencies.c)
 */

__int64 wil_InitializeFeatureStaging()
{
  int **v0; // rdi
  unsigned int v1; // esi
  int **v2; // rbx
  int v3; // eax
  int v4; // edx
  int *v5; // rcx
  int *v6; // rcx
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+28h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+38h] [rbp-18h]

  v0 = &wil_details_featureDescriptors_a;
  v10 = RtlQueryFeatureConfigurationChangeStamp();
  v1 = 0;
  v2 = &wil_details_featureDescriptors_a;
  if ( &wil_details_featureDescriptors_a >= (int **)&wil_details_featureDescriptors_z )
    goto LABEL_33;
  while ( !*v2 )
  {
    if ( ++v2 >= (int **)&wil_details_featureDescriptors_z )
      goto LABEL_33;
  }
  if ( !v2 )
    goto LABEL_33;
  while ( 1 )
  {
    v9 = 0LL;
    v11 = 0LL;
    v12 = 0;
    if ( *((_BYTE *)v2 + 13) || *((_BYTE *)v2 + 14) )
      v3 = -1073741275;
    else
      v3 = RtlQueryFeatureConfiguration(
             *((unsigned int *)v2 + 2),
             (unsigned __int8)(*((_BYTE *)v2 + 12) - 2) > 1u,
             &v9,
             &v11);
    v9 = 0LL;
    if ( v3 == -2147483614 )
      break;
    v4 = 0;
    if ( v3 == -1073741275 )
      goto LABEL_15;
    if ( v3 )
    {
      if ( v3 != 279 )
      {
        v4 = v3;
LABEL_15:
        LODWORD(v9) = 131;
        goto LABEL_16;
      }
      LODWORD(v9) = (2 * (BYTE4(v11) & 0x80)) | 0x83;
    }
    else
    {
      LODWORD(v9) = (2 * (BYTE4(v11) & 0xB0 | (4 * (BYTE4(v11) & 0x40)))) | 0x83;
    }
LABEL_16:
    v5 = *v2;
    if ( !v4 )
      v4 = v1;
    v2 += 3;
    v1 = v4;
    *(_QWORD *)v5 = v9;
    while ( v2 < (int **)&wil_details_featureDescriptors_z )
    {
      if ( *v2 )
        goto LABEL_25;
      ++v2;
    }
    v2 = 0LL;
LABEL_25:
    if ( !v2 )
      goto LABEL_33;
  }
  v6 = *v2;
  LODWORD(v9) = 131;
  v7 = v9;
LABEL_28:
  *(_QWORD *)v6 = v7;
  for ( v2 += 3; v2 < (int **)&wil_details_featureDescriptors_z; ++v2 )
  {
    v6 = *v2;
    if ( *v2 )
    {
      if ( v2 )
        goto LABEL_28;
      break;
    }
  }
LABEL_33:
  wil_details_EvaluateFeatureDependencies();
  if ( !v1 )
  {
    while ( 1 )
    {
      if ( v0 >= (int **)&wil_details_featureDescriptors_z )
        return 0;
      if ( *v0 )
        break;
      ++v0;
    }
LABEL_40:
    if ( !v0 )
      return 0;
    if ( *((_BYTE *)v0 + 13) || *((_BYTE *)v0 + 14) || *((_BYTE *)v0 + 12) )
    {
      for ( v0 += 3; v0 < (int **)&wil_details_featureDescriptors_z; ++v0 )
      {
        if ( *v0 )
          goto LABEL_40;
      }
      return 0;
    }
    v1 = RtlRegisterFeatureConfigurationChangeNotification(
           wil_details_OnFeatureConfigurationChange,
           0LL,
           &v10,
           &wil_details_featureChangeNotification);
    if ( v1 )
      wil_details_featureChangeNotification = 0LL;
  }
  return v1;
}
