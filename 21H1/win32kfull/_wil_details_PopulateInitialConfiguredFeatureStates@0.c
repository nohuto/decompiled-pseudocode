/*
 * XREFs of _wil_details_PopulateInitialConfiguredFeatureStates@0 @ 0x292070
 * Callers:
 *     _wil_InitializeFeatureStaging@0 @ 0x292034 (_wil_InitializeFeatureStaging@0.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _wil_details_FeatureDescriptors_SkipPadding@4 @ 0xF01D8 (_wil_details_FeatureDescriptors_SkipPadding@4.c)
 *     _wil_details_BuildFeatureStateCacheFromQueryResults@12 @ 0x27A018 (_wil_details_BuildFeatureStateCacheFromQueryResults@12.c)
 */

int __stdcall wil_details_PopulateInitialConfiguredFeatureStates()
{
  int v0; // ebx
  int **i; // ecx
  bool v2; // zf
  char v3; // al
  BOOL v4; // eax
  int FeatureConfiguration; // eax
  int v6; // eax
  _DWORD *v7; // ecx
  _DWORD *v8; // esi
  _DWORD *v9; // eax
  _DWORD v11[2]; // [esp+10h] [ebp-20h] BYREF
  int v12; // [esp+18h] [ebp-18h] BYREF
  int v13; // [esp+1Ch] [ebp-14h]
  _BYTE v14[12]; // [esp+20h] [ebp-10h] BYREF

  v0 = 0;
  for ( i = &wil_details_featureDescriptors_a; ; i = (int **)(v8 + 4) )
  {
    v8 = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !v8 )
      break;
    v11[0] = 0;
    v11[1] = 0;
    v12 = 0;
    v13 = 0;
    v2 = *((_BYTE *)v8 + 9) == 0;
    memset(v14, 0, sizeof(v14));
    if ( !v2 || *((_BYTE *)v8 + 10) )
    {
      FeatureConfiguration = -1073741275;
    }
    else
    {
      v3 = *((_BYTE *)v8 + 8);
      v4 = v3 != 3 && v3 != 2;
      FeatureConfiguration = RtlQueryFeatureConfiguration(v8[1], v4, v11, v14);
    }
    if ( FeatureConfiguration == -2147483614 )
    {
      do
      {
        v9 = (_DWORD *)*v8;
        *v9 = 131;
        v9[1] = 0;
        v8 = wil_details_FeatureDescriptors_SkipPadding(v8 + 4);
      }
      while ( v8 );
      return v0;
    }
    v6 = wil_details_BuildFeatureStateCacheFromQueryResults(FeatureConfiguration, (int)v14, &v12);
    if ( v6 )
      v0 = v6;
    v7 = (_DWORD *)*v8;
    *v7 = v12;
    v7[1] = v13;
  }
  return v0;
}
