/*
 * XREFs of ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x18001C4F8
 * Callers:
 *     ?GetDWORDCore@CortanaFeatureConfiguration@@YAJPEBGW4FeatureFlightDataType@1@KPEAK@Z @ 0x18001C42C (-GetDWORDCore@CortanaFeatureConfiguration@@YAJPEBGW4FeatureFlightDataType@1@KPEAK@Z.c)
 *     ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z @ 0x1801D393C (-GetFeatureValue@CortanaFeatureConfiguration@@YAJPEBGP6A_NXZKAEAUFeatureValue@1@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180033408 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _alloca_probe @ 0x1800EEE40 (_alloca_probe.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetFlightedValue(
        CortanaFeatureConfiguration *this,
        const unsigned __int16 *a2,
        struct CortanaFeatureConfiguration::FeatureValue *a3,
        unsigned __int8 *a4)
{
  HRESULT String; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  int pdwType; // [rsp+20h] [rbp-E0h]
  int pvData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-BCh] BYREF
  DWORD v13; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR sourceString[264]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR SubKey[2048]; // [rsp+260h] [rbp+160h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1298h] [rbp+1198h]

  pcbData = 4;
  *(_BYTE *)a3 = 0;
  pvData = 0;
  if ( RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting",
         L"Current",
         0x10u,
         0LL,
         &pvData,
         &pcbData) )
  {
    return 0LL;
  }
  pdwType = pvData;
  String = StringCchPrintfW(
             SubKey,
             0x800uLL,
             L"%s\\%d\\%s",
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting");
  if ( String >= 0 )
  {
    if ( *(int *)a2 >= 0 )
    {
      if ( *(int *)a2 <= 1 )
      {
        pvData = 0;
        pcbData = 4;
        if ( !RegGetValueW(HKEY_CURRENT_USER, SubKey, L"Value", 0x10u, 0LL, &pvData, &pcbData) )
        {
          *((_DWORD *)a2 + 1) = pvData;
LABEL_17:
          *(_BYTE *)a3 = 1;
        }
        return 0LL;
      }
      if ( *(_DWORD *)a2 == 2 )
      {
        memset_0(sourceString, 0, 0x208uLL);
        v13 = 520;
        if ( !RegGetValueW(HKEY_CURRENT_USER, SubKey, L"Value", 2u, 0LL, sourceString, &v13) )
        {
          v9 = -1LL;
          do
            ++v9;
          while ( sourceString[v9] );
          String = WindowsCreateString(sourceString, v9, (HSTRING *)a2 + 1);
          if ( String < 0 )
          {
            v8 = 348LL;
            goto LABEL_6;
          }
          goto LABEL_17;
        }
        return 0LL;
      }
    }
    String = -2147024809;
    v8 = 355LL;
    goto LABEL_6;
  }
  v8 = 317LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"onecoreuap\\internal\\shell\\inc\\CortanaFeatureConfiguration.h",
    (const char *)(unsigned int)String,
    pdwType);
  return (unsigned int)String;
}
