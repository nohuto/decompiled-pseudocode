/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18003E3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18003DEF8 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(
        wil::details *this,
        unsigned int a2,
        __int64 a3,
        int *a4)
{
  bool IsFeatureConfigured; // al
  unsigned int v5; // ecx
  unsigned int v6; // edx
  __int64 result; // rax
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v8 = 0LL;
  v9 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(
                          (wil::details *)&v8,
                          (unsigned int)this,
                          (a2 & 0xFFFFFF7F) - 2 <= 1,
                          (a2 >> 7) & 1,
                          a3);
  v5 = 0;
  if ( IsFeatureConfigured )
    v5 = v8;
  v6 = v5 | 0x80;
  if ( !(_DWORD)v9 )
    v6 = v5;
  result = v6 | 0x40;
  if ( !HIDWORD(v9) )
    return v6;
  return result;
}
