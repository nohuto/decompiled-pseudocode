/*
 * XREFs of ?GetOverrideValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x1801D39FC
 * Callers:
 *     ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z @ 0x1801D393C (-GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetOverrideValue(
        LPCWSTR lpValue,
        const unsigned __int16 *a2,
        struct CortanaFeatureConfiguration::FeatureValue *a3,
        unsigned __int8 *a4)
{
  __int64 v7; // rdx
  HRESULT String; // ebx
  __int64 v9; // rdx
  DWORD pcbData; // [rsp+40h] [rbp-248h] BYREF
  DWORD v12[3]; // [rsp+44h] [rbp-244h] BYREF
  WCHAR sourceString[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  *(_BYTE *)a3 = 0;
  if ( *(int *)a2 < 0 )
    goto LABEL_13;
  if ( *(int *)a2 <= 1 )
  {
    pcbData = 0;
    v12[0] = 4;
    if ( !RegGetValueW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override",
            lpValue,
            0x10u,
            0LL,
            &pcbData,
            v12) )
    {
      *((_DWORD *)a2 + 1) = pcbData;
LABEL_11:
      *(_BYTE *)a3 = 1;
    }
    return 0LL;
  }
  if ( *(_DWORD *)a2 != 2 )
  {
LABEL_13:
    String = -2147024809;
    v9 = 298LL;
    goto LABEL_14;
  }
  memset_0(sourceString, 0, 0x208uLL);
  pcbData = 520;
  if ( RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override",
         lpValue,
         2u,
         0LL,
         sourceString,
         &pcbData) )
  {
    return 0LL;
  }
  v7 = -1LL;
  do
    ++v7;
  while ( sourceString[v7] );
  String = WindowsCreateString(sourceString, v7, (HSTRING *)a2 + 1);
  if ( String >= 0 )
    goto LABEL_11;
  v9 = 291LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\internal\\shell\\inc\\CortanaFeatureConfiguration.h",
    (const char *)(unsigned int)String);
  return (unsigned int)String;
}
