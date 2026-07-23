/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromKernel @ 0x180101AC0
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x18005CB70 (RtlQueryFeatureConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtQuerySystemInformationEx @ 0x18009FA20 (NtQuerySystemInformationEx.c)
 */

NTSTATUS __fastcall RtlpFcQueryFeatureConfigurationFromKernel(int a1, int a2, _QWORD *a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 v7; // xmm0_8
  int v8; // eax
  _DWORD v9[2]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+38h] [rbp-40h] BYREF
  __int64 v11; // [rsp+48h] [rbp-30h]

  v9[0] = a2;
  v9[1] = a1;
  v10 = 0LL;
  v11 = 0LL;
  result = NtQuerySystemInformationEx(SystemFeatureConfigurationInformation, v9, 8u, &v10, 0x18u, 0LL);
  if ( result >= 0 )
  {
    v7 = *((_QWORD *)&v10 + 1);
    *a3 = v10;
    v8 = v11;
    *(_QWORD *)a4 = v7;
    *(_DWORD *)(a4 + 8) = v8;
    return 0;
  }
  else if ( result == -1073741275 || result == -2147483614 )
  {
    *a3 = v10;
  }
  return result;
}
