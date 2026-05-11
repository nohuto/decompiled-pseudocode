/*
 * XREFs of wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00360B8
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1C0036008 (wil_InitializeFeatureStaging.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00121B0 (__security_check_cookie.c)
 */

void wil_details_PopulateInitialConfiguredFeatureStates()
{
  _UNKNOWN **i; // rbx
  int v1; // eax
  __int64 *v2; // rcx
  _QWORD *v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-20h] BYREF
  __int64 v5; // [rsp+28h] [rbp-18h] BYREF
  int v6; // [rsp+30h] [rbp-10h]

  for ( i = &wil_details_featureDescriptors_a; ; ++i )
  {
    if ( i >= (_UNKNOWN **)&wil_details_featureDescriptors_z )
      return;
    if ( *i )
      break;
  }
LABEL_6:
  if ( !i )
    return;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( *((_BYTE *)i + 29) || *((_BYTE *)i + 30) )
    v1 = -1073741275;
  else
    v1 = RtlQueryFeatureConfiguration(
           *((unsigned int *)i + 6),
           (unsigned __int8)(*((_BYTE *)i + 28) - 2) > 1u,
           &v4,
           &v5);
  if ( v1 != -2147483614 )
  {
    if ( v1 != -1073741275 )
    {
      if ( !v1 )
      {
        v4 = (8 * (BYTE4(v5) & 0xB0 | (4 * (BYTE4(v5) & 0x40u)))) | 0x206LL;
        goto LABEL_18;
      }
      if ( v1 == 279 )
      {
        v4 = (8 * (BYTE4(v5) & 0x80u)) | 0x206LL;
        goto LABEL_18;
      }
    }
    v4 = 518LL;
LABEL_18:
    v2 = (__int64 *)*i;
    i += 5;
    *v2 = v4;
    while ( i < (_UNKNOWN **)&wil_details_featureDescriptors_z )
    {
      if ( *i )
        goto LABEL_6;
      ++i;
    }
    return;
  }
  v4 = 0LL;
  v3 = *i;
  LODWORD(v4) = 518;
LABEL_23:
  *v3 = 518LL;
  for ( i += 5; i < (_UNKNOWN **)&wil_details_featureDescriptors_z; ++i )
  {
    v3 = *i;
    if ( *i )
    {
      if ( i )
        goto LABEL_23;
      return;
    }
  }
}
