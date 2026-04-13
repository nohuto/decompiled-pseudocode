/*
 * XREFs of TelpReadRegistryString @ 0x10002247
 * Callers:
 *     ?TelpGetTelemetryClientRegPath@@YGPAGXZ @ 0x100023F5 (-TelpGetTelemetryClientRegPath@@YGPAGXZ.c)
 *     _TelGetRegionalSettingsValue@12 @ 0x10003210 (_TelGetRegionalSettingsValue@12.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z @ 0x10003E71 (-Return_Hr@in1diag3@details@wil@@YGXPAXIPBDJ@Z.c)
 */

LSTATUS __fastcall TelpReadRegistryString(
        wil::details::in1diag3 *a1,
        LPCWSTR lpSubKey,
        LPCWSTR lpValue,
        PVOID pvData,
        DWORD *a5)
{
  LSTATUS result; // eax
  unsigned int v6; // [esp+0h] [ebp-8h]
  DWORD pcbData; // [esp+4h] [ebp-4h] BYREF
  int savedregs; // [esp+8h] [ebp+0h]

  if ( a5 )
  {
    pcbData = 2 * *a5;
    result = RegGetValueW(HKEY_LOCAL_MACHINE, lpSubKey, lpValue, 2u, 0, pvData, &pcbData);
    *a5 = pcbData >> 1;
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(a1, (void *)0x80070057, v6, (const char *)pcbData, savedregs);
    return -2147024809;
  }
  return result;
}
