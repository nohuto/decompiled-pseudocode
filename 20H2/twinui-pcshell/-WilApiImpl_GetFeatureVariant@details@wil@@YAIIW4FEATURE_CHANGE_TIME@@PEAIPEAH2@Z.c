/*
 * XREFs of ?WilApiImpl_GetFeatureVariant@details@wil@@YAIIW4FEATURE_CHANGE_TIME@@PEAIPEAH2@Z @ 0x18006D1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z @ 0x18006D460 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@PEAH@Z.c)
 */

int __fastcall wil::details::WilApiImpl_GetFeatureVariant(
        wil::details *this,
        unsigned int a2,
        _DWORD *a3,
        unsigned int *a4,
        int *a5)
{
  _DWORD *v6; // rdi
  char IsFeatureConfigured; // al
  int result; // eax
  bool v9; // zf
  int v10; // ecx
  int v11; // edx
  int v12; // edx
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+40h] [rbp-18h]

  v6 = a3;
  v13 = 0LL;
  LOBYTE(a3) = (a2 & 0xFFFFFF7F) - 2 <= 1;
  v14 = 0LL;
  IsFeatureConfigured = wil::details::IsFeatureConfigured(&v13, (unsigned int)this, a3, (a2 >> 7) & 1, a5);
  *a4 = v14;
  if ( IsFeatureConfigured )
  {
    v9 = DWORD2(v13) == 0;
    v10 = BYTE4(v13);
    v11 = BYTE4(v13);
    *v6 = HIDWORD(v13);
    v12 = v11 | 0x100;
    if ( v9 )
      v12 = v10;
    result = v12 | 0x80;
    if ( !HIDWORD(v14) )
      return v12;
  }
  else
  {
    *v6 = 0;
    return 0;
  }
  return result;
}
