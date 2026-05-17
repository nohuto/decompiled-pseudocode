/*
 * XREFs of _RtlpFcQueryFeatureConfigurationFromKernel@16 @ 0x4B2E542D
 * Callers:
 *     _RtlQueryFeatureConfiguration@16 @ 0x4B2E51D0 (_RtlQueryFeatureConfiguration@16.c)
 * Callees:
 *     _ZwQuerySystemInformationEx@24 @ 0x4B2F3F90 (_ZwQuerySystemInformationEx@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpFcQueryFeatureConfigurationFromKernel(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int SystemInformation; // eax
  int v5; // ecx
  _DWORD *v7; // edi
  _DWORD v8[2]; // [esp+Ch] [ebp-2Ch] BYREF
  _DWORD *v9; // [esp+14h] [ebp-24h]
  _DWORD v10[7]; // [esp+18h] [ebp-20h] BYREF

  v9 = a4;
  v8[0] = a2;
  v8[1] = a1;
  memset(v10, 0, 0x18u);
  SystemInformation = ZwQuerySystemInformationEx(210, v8, 8, v10, 24, 0);
  v5 = SystemInformation;
  if ( SystemInformation >= 0 )
  {
    v7 = v9;
    v5 = 0;
    *a3 = v10[0];
    a3[1] = v10[1];
    *v7++ = v10[2];
    *v7 = v10[3];
    v7[1] = v10[4];
  }
  else if ( SystemInformation == -2147483614 || SystemInformation == -1073741275 )
  {
    *a3 = v10[0];
    a3[1] = v10[1];
  }
  return v5;
}
