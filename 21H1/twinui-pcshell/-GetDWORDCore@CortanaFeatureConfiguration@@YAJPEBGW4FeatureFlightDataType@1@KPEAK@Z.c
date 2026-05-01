/*
 * XREFs of ?GetDWORDCore@CortanaFeatureConfiguration@@YAJPEBGW4FeatureFlightDataType@1@KPEAK@Z @ 0x18001BFB8
 * Callers:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x18001BDA4 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     ?IsWideAtStartupEnabled@@YAEH@Z @ 0x18001BDF4 (-IsWideAtStartupEnabled@@YAEH@Z.c)
 * Callees:
 *     ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x18001C084 (-GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetDWORDCore(WCHAR *a1, int a2, int a3, _DWORD *a4)
{
  char v7; // bl
  unsigned __int8 *v8; // r9
  int FlightedValue; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-40h]
  int v13; // [rsp+20h] [rbp-40h]
  _BYTE v14[4]; // [rsp+40h] [rbp-20h] BYREF
  int pvData; // [rsp+44h] [rbp-1Ch] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int16 v17[8]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  *a4 = 0;
  if ( a2 != 1 )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B5,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\CortanaFeatureConfiguration.h",
      (const char *)0x80070057LL,
      v12);
    return v10;
  }
  pvData = 0;
  pcbData = 4;
  *(_OWORD *)v17 = 0LL;
  *(_DWORD *)v17 = 1;
  v7 = 0;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting\\Override",
          a1,
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
  {
    v7 = 1;
    *(_DWORD *)&v17[2] = pvData;
  }
  if ( v7 )
  {
    v10 = 0;
    goto LABEL_9;
  }
  v14[0] = 0;
  FlightedValue = CortanaFeatureConfiguration::GetFlightedValue(
                    (CortanaFeatureConfiguration *)a1,
                    v17,
                    (struct CortanaFeatureConfiguration::FeatureValue *)v14,
                    v8);
  v10 = FlightedValue;
  if ( FlightedValue < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x179,
      (unsigned int)"onecoreuap\\internal\\shell\\inc\\CortanaFeatureConfiguration.h",
      (const char *)(unsigned int)FlightedValue,
      v13);
  }
  else
  {
    v10 = 0;
    if ( v14[0] )
    {
LABEL_9:
      *a4 = *(_DWORD *)&v17[2];
      return v10;
    }
    *(_DWORD *)&v17[2] = a3;
  }
  if ( (v10 & 0x80000000) == 0 )
    goto LABEL_9;
  return v10;
}
