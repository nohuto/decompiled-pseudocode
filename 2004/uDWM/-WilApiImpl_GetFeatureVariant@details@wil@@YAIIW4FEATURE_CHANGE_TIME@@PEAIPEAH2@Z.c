/*
 * XREFs of ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18007F770
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18004DE5C (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 */

int __fastcall wil::details::WilApiImpl_GetFeatureVariant(
        wil::details *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned int *a4)
{
  bool IsFeatureConfigured; // al
  bool v7; // zf
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  int result; // eax
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(
                          (__int64)&v12,
                          (unsigned int)this,
                          (a2 & 0xFFFFFF7F) - 2 <= 1,
                          (a2 >> 7) & 1);
  *a4 = v13;
  if ( IsFeatureConfigured )
  {
    v7 = DWORD2(v12) == 0;
    v8 = BYTE4(v12);
    v9 = BYTE4(v12);
    *a3 = HIDWORD(v12);
    v10 = v9 | 0x100;
    if ( v7 )
      v10 = v8;
    result = v10 | 0x80;
    if ( !HIDWORD(v13) )
      return v10;
  }
  else
  {
    *a3 = 0;
    return 0;
  }
  return result;
}
