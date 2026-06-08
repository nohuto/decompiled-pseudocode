/*
 * XREFs of PopulateEnergyEstimationModel @ 0x1C00372A0
 * Callers:
 *     ProcLibGlobalInit @ 0x1C0036650 (ProcLibGlobalInit.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     RtlStringCchPrintfW @ 0x1C000D21C (RtlStringCchPrintfW.c)
 *     memset @ 0x1C000ED80 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C001EFE4 (GetRegistryDwordValueNoDefault.c)
 *     ProcLibTraceInvalidPowerCurve @ 0x1C0036268 (ProcLibTraceInvalidPowerCurve.c)
 *     ReadEnergyEquation @ 0x1C0037404 (ReadEnergyEquation.c)
 *     ReadPowerCurve @ 0x1C0037614 (ReadPowerCurve.c)
 */

int __fastcall PopulateEnergyEstimationModel(unsigned __int8 a1, int *a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // r9d
  char v7; // r8
  unsigned int v8; // edx
  unsigned int i; // r8d
  unsigned int v10; // r11d
  unsigned int v11; // r10d
  unsigned int v12; // r10d
  int result; // eax
  int v14; // ecx
  int v15[4]; // [rsp+30h] [rbp-1A8h] BYREF
  wchar_t pszDest[192]; // [rsp+40h] [rbp-198h] BYREF

  v15[0] = 0;
  v3 = a1;
  memset(a2, 0, 0x100uLL);
  LOBYTE(v4) = v3;
  ReadEnergyEquation(v4, a2);
  LOBYTE(v5) = v3;
  if ( (int)ReadPowerCurve(v5, a2) >= 0 )
  {
    v6 = a2[1];
    v7 = 0;
    v8 = (unsigned __int8)v6 >> 1;
    if ( v8 >= 2 && (unsigned __int8)a2[v8 + 1] <= 0x64u && (a2[2] & 0xFFFFFF00) <= 0x3E8000 )
    {
      for ( i = 1; i < v8; ++i )
      {
        v10 = a2[i + 1];
        v11 = a2[i + 2];
        if ( (unsigned __int8)v11 <= (unsigned __int8)v10 )
          goto LABEL_14;
        v12 = v11 >> 8;
        if ( v12 < v10 >> 8 || v12 > 0x3E80 )
          goto LABEL_14;
      }
      v7 = 1;
    }
    if ( v7 )
      a2[1] = v6 | 1;
    else
LABEL_14:
      ProcLibTraceInvalidPowerCurve(v3, (unsigned __int8)v6 >> 1, a2 + 2);
  }
  result = RtlStringCchPrintfW(
             pszDest,
             0xC0uLL,
             L"%s\\EfficiencyClass\\%d",
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Power\\EnergyEstimation\\CPU",
             v3);
  if ( result < 0
    || (result = GetRegistryDwordValueNoDefault((__int64)pszDest, (__int64)L"PowerEnvelope", (__int64)v15), result < 0)
    || (v14 = v15[0], result = v15[0] - 1, (unsigned int)(v15[0] - 1) > 0x3E7F) )
  {
    v14 = 750;
  }
  *a2 = v14;
  return result;
}
