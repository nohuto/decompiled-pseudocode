/*
 * XREFs of ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@PEAH@Z @ 0x18004CB30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18004CBAC (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 */

__int64 __fastcall wil::details::WilApiImpl_GetFeatureEnabledState(
        wil::details *this,
        unsigned int a2,
        __int64 a3,
        int *a4)
{
  char IsFeatureConfigured; // al
  unsigned int v5; // ecx
  unsigned int v6; // edx
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v8 = a3;
  v9 = 0LL;
  LOBYTE(a3) = (a2 & 0xFFFFFF7F) - 2 <= 1;
  v10 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(&v9, (unsigned int)this, a3, (a2 >> 7) & 1, v8);
  v5 = 0;
  if ( IsFeatureConfigured )
    v5 = v9;
  v6 = v5 | 0x80;
  if ( !(_DWORD)v10 )
    v6 = v5;
  result = v6 | 0x40;
  if ( !HIDWORD(v10) )
    return v6;
  return result;
}
