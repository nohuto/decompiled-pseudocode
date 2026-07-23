/*
 * XREFs of _RtlpFcQueryFeatureConfigurationFromKernel@16 @ 0x4B2E542D
 * Callers:
 *     _RtlQueryFeatureConfiguration@16 @ 0x4B2E51D0 (_RtlQueryFeatureConfiguration@16.c)
 * Callees:
 *     _ZwQuerySystemInformationEx@24 @ 0x4B2F3F90 (_ZwQuerySystemInformationEx@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall RtlpFcQueryFeatureConfigurationFromKernel(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  NTSTATUS v4; // eax
  NTSTATUS v5; // ecx
  _DWORD *v7; // edi
  _DWORD InputBuffer[2]; // [esp+Ch] [ebp-2Ch] BYREF
  _DWORD *v9; // [esp+14h] [ebp-24h]
  _DWORD SystemInformation[7]; // [esp+18h] [ebp-20h] BYREF

  v9 = a4;
  InputBuffer[0] = a2;
  InputBuffer[1] = a1;
  memset(SystemInformation, 0, 0x18u);
  v4 = ZwQuerySystemInformationEx(SystemFeatureConfigurationInformation, InputBuffer, 8u, SystemInformation, 0x18u, 0);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = v9;
    v5 = 0;
    *a3 = SystemInformation[0];
    a3[1] = SystemInformation[1];
    *v7++ = SystemInformation[2];
    *v7 = SystemInformation[3];
    v7[1] = SystemInformation[4];
  }
  else if ( v4 == -2147483614 || v4 == -1073741275 )
  {
    *a3 = SystemInformation[0];
    a3[1] = SystemInformation[1];
  }
  return v5;
}
